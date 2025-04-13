using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using Unity.Robotics.ROSTCPConnector;
using RosMessageTypes.Geometry;
using RosMessageTypes.Custom;
using System;

public class RobotCommunicationManager : MonoBehaviour
{
    public bool allRobotsInBaseCamp = false;
    private List<GameObject> robots = new List<GameObject>();
    private List<GameObject> remainingTargets = new List<GameObject>();
    private bool hasCheckedForRemainingTargets = false;

    // ROS connection
    private ROSConnection ros;
    private string communicationTopic = "robot_communication";

    void Start()
    {
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<RobotCommunicationMsgMsg>(communicationTopic);
        ros.Subscribe<RobotCommunicationMsgMsg>(communicationTopic, ReceiveRobotCommunication);

        // Find all robots
        AutoMovement[] robotMovements = GameObject.FindObjectsByType<AutoMovement>(FindObjectsSortMode.None);
        foreach (AutoMovement movement in robotMovements)
        {
            robots.Add(movement.gameObject);
        }
    }

    void Update()
    {
        CheckAllRobotsInBaseCamp();

        if (allRobotsInBaseCamp && !hasCheckedForRemainingTargets)
        {
            // Find remaining targets only once when all robots reach base camp
            remainingTargets = FindRemainingTargets();
            hasCheckedForRemainingTargets = true;

            if (remainingTargets.Count > 0)
            {
                // Start communication to decide which robot collects remaining targets
                InitiateRobotCommunication();
            }
        }
    }

    private void CheckAllRobotsInBaseCamp()
    {
        bool allArrived = true;

        foreach (GameObject robot in robots)
        {
            PickUpTarget pickUp = robot.GetComponentInChildren<PickUpTarget>();
            if (pickUp == null || !pickUp.basecamp_arrived)
            {
                allArrived = false;
                break;
            }
        }

        // Se lo stato è cambiato da true a false, resettiamo il flag per il check
        if (allRobotsInBaseCamp && !allArrived)
        {
            hasCheckedForRemainingTargets = false;
        }

        allRobotsInBaseCamp = allArrived;
    }

    private List<GameObject> FindRemainingTargets()
    {
        List<GameObject> targets = new List<GameObject>();
        GameObject[] allTargets = GameObject.FindGameObjectsWithTag("TargetObj1");

        foreach (GameObject target in allTargets)
        {

            if (target.transform.parent == null && !IsTargetAtBaseCamp(target))
            {
                targets.Add(target);
            }
        }

        Debug.Log($"Found {targets.Count} remaining targets to be collected");
        return targets;
    }

    private bool IsTargetAtBaseCamp(GameObject target)
    {
        GameObject[] baseCamps = GameObject.FindGameObjectsWithTag("BaseCamp");
        foreach (GameObject camp in baseCamps)
        {
            float distance = Vector3.Distance(target.transform.position, camp.transform.position);
            if (distance < 5.0f)
            {
                return true;
            }
        }
        return false;
    }

    private void InitiateRobotCommunication()
    {
        if (remainingTargets.Count == 0) return;

        Dictionary<GameObject, Dictionary<GameObject, float>> robotTargetDistances = new Dictionary<GameObject, Dictionary<GameObject, float>>();

        // Calculate distance from each robot to each remaining target
        foreach (GameObject robot in robots)
        {
            robotTargetDistances[robot] = new Dictionary<GameObject, float>();

            foreach (GameObject target in remainingTargets)
            {
                NavMeshPath path = new NavMeshPath();
                NavMeshAgent agent = robot.GetComponent<NavMeshAgent>();

                if (agent.CalculatePath(target.transform.position, path))
                {
                    float distance = CalculatePathLength(path);
                    robotTargetDistances[robot][target] = distance;
                }
            }
        }

        // Assign targets to robots based on shortest distance
        while (remainingTargets.Count > 0)
        {
            GameObject closestRobot = null;
            GameObject closestTarget = null;
            float shortestDistance = float.MaxValue;

            foreach (var robotEntry in robotTargetDistances)
            {
                foreach (var targetEntry in robotEntry.Value)
                {
                    if (remainingTargets.Contains(targetEntry.Key) && targetEntry.Value < shortestDistance)
                    {
                        shortestDistance = targetEntry.Value;
                        closestRobot = robotEntry.Key;
                        closestTarget = targetEntry.Key;
                    }
                }
            }

            if (closestRobot != null && closestTarget != null)
            {
                SendRobotCommunication(closestRobot, closestTarget);
                remainingTargets.Remove(closestTarget);
            }
            else
            {
                break;
            }
        }
    }

    private float CalculatePathLength(NavMeshPath path)
    {
        float length = 0.0f;
        if (path.status == NavMeshPathStatus.PathComplete)
        {
            for (int i = 1; i < path.corners.Length; i++)
            {
                length += Vector3.Distance(path.corners[i - 1], path.corners[i]);
            }
        }
        return length;
    }

    private void SendRobotCommunication(GameObject assignedRobot, GameObject targetToCollect)
    {
        Debug.Log($"Attempting to send robot communication for robot {robots.IndexOf(assignedRobot)}");

        RobotCommunicationMsgMsg msg = new RobotCommunicationMsgMsg();
        msg.robot_id = robots.IndexOf(assignedRobot);
        msg.target_position = new PointMsg(
            (float)targetToCollect.transform.position.x,
            (float)targetToCollect.transform.position.y,
            (float)targetToCollect.transform.position.z
        );

        Debug.Log($"Publishing message - Robot ID: {msg.robot_id}, Target Position: {msg.target_position}");

        try
        {
            ros.Publish(communicationTopic, msg);
            Debug.Log("Message published successfully");
        }
        catch (Exception e)
        {
            Debug.LogError($"Failed to publish message: {e.Message}");
        }
    }

    private void ReceiveRobotCommunication(RobotCommunicationMsgMsg msg)
    {
        if (msg.robot_id >= 0 && msg.robot_id < robots.Count)
        {
            GameObject assignedRobot = robots[msg.robot_id];
            Vector3 targetPosition = new Vector3(
                (float)msg.target_position.x,
                (float)msg.target_position.y,
                (float)msg.target_position.z
            );

            // Set the robot's destination to the target
            NavMeshAgent agent = assignedRobot.GetComponent<NavMeshAgent>();
            if (agent != null)
            {
                // Reset robot state for the new task
                PickUpTarget pickUp = assignedRobot.GetComponentInChildren<PickUpTarget>();
                if (pickUp != null)
                {
                    pickUp.ResetForNewTarget();
                }

                AutoMovement movement = assignedRobot.GetComponent<AutoMovement>();
                if (movement != null)
                {
                    movement.arrived = false;
                    movement.ResetTargetSearch();
                    movement.navmeshagent.isStopped = false;
                    movement.navmeshagent.velocity = Vector3.zero;
                }

                // Set new destination
                agent.SetDestination(targetPosition);
                Debug.Log($"Robot {msg.robot_id} is now heading to collect remaining target");

                // Reset for new targets
                hasCheckedForRemainingTargets = false;
            }
        }
    }

    
    public void ResetCommunicationSystem()
    {
        hasCheckedForRemainingTargets = false;
        remainingTargets.Clear();
    }
}