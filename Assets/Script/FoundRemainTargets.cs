using System.Collections.Generic;
using UnityEngine;
using RosMessageTypes.Geometry;
using RosMessageTypes.Custom;
using Unity.Robotics.ROSTCPConnector;
using UnityEngine.UI;
using System.Linq;

public class FoundRemainTargets : MonoBehaviour
{
    public GameObject armNose;
    private List<GameObject> target_still_free;
    private GameObject[] all_robots;
    private ROSConnection ros;
    private string topicName = "agent_status";
    private bool publishedOnce = false;
    void Start()
    {
        target_still_free = new List<GameObject>();
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<AgentTargetPositionsMsg>(topicName);
        all_robots = GameObject.FindGameObjectsWithTag("NavMeshRobot");
    }

    void Update()
    {
        if (publishedOnce) return;

        bool allAtBase = true;

        foreach (var robot in all_robots)
        {
            var agentStatus = robot.GetComponent<SetAgentUniqueID>();
            if (agentStatus == null || !agentStatus.basecamp_arrived)
            {
                allAtBase = false;
                break;
            }
        }

        if (!allAtBase) return;

        target_still_free.Clear();
       
        foreach(var target in GameObject.FindGameObjectsWithTag("TargetObj1"))
        {
            if(!target.GetComponent<SetTargetUniqueID>().released && !target.GetComponent<SetTargetUniqueID>().taken)
            {
                if(!target_still_free.Contains(target))
                {
                    target_still_free.Add(target);   
                }
            }
        }

        if (target_still_free.Count == 0)
        {
            //Debug.Log($"Target ancora disponibili: {target_still_free.Count}");
            return;
        }

        List<float> target_distances = new List<float>();
        List<string> target_ids = new List<string>();   
            
        foreach(var target in target_still_free)
        {
            target_ids.Add(target.GetComponent<SetTargetUniqueID>().ID);
            target_distances.Add(Vector3.Distance(transform.position, target.transform.position));
        }

        AgentStatusMsg msg = new AgentStatusMsg
        {
            agent_id = GetComponent<SetAgentUniqueID>().ID,
            target_ids = target_ids.ToArray(),
            target_distances = target_distances.ToArray()
        };

        ros.Publish(topicName, msg);
        publishedOnce = true;

        Debug.Log($"✅ Messaggio pubblicato su {topicName} con {target_ids.Count} target disponibili.");    
    }
}
