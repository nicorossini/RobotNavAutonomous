using UnityEngine;
using UnityEngine.AI;
using Unity.Robotics.ROSTCPConnector;
using RosMessageTypes.Geometry;
using RosMessageTypes.Custom;
using System.Linq;
using Unity.VisualScripting;
using System.Collections.Generic;

public class RandomlyPosition : MonoBehaviour
{
    public Terrain surface;
    private int numberOfAgents = 2;
    public NavMeshAgent agentPrefab;
    public GameObject targetPrefab;
    private int numberOfTargets = 2;

    private bool agentsPositionated = false;
    private bool targetsPositionated = false;
    List<float> agentDistances = new List<float>();
    List<Vector3> target_position = new List<Vector3>();
    List<NavMeshAgent> agentArray = new List<NavMeshAgent>();

    //ros
    private string rosTopic = "agent_distances";
    private ROSConnection ros;

    void Start()
    {
        
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<AgentTargetPositionsMsg>(rosTopic);
    

        PlaceAgentsRandomly();
        PlaceTargetsRandomly();

        if(agentsPositionated && targetsPositionated)
        {
            NavMeshAgent[] navAgents = FindObjectsByType<NavMeshAgent>(FindObjectsSortMode.None);
            GameObject[] targets = GameObject.FindGameObjectsWithTag("TargetObj1");
            foreach(NavMeshAgent agent in navAgents)
            {
                agentArray.Add(agent);
                foreach(GameObject target in targets)
                {
                    NavMeshPath path = new NavMeshPath();
                    if(agent.CalculatePath(target.transform.position, path))
                    {
                        float dist = calculatePathLength(path);
                        agentDistances.Add(dist);
                        target_position.Add(target.transform.position);
                    }
                }
                //agentDistances.Clear(); 
                //target_position.Clear();  
            }
            SendAgentData(agentArray.ToArray(), agentDistances.ToArray(), target_position.ToArray());   
        }
    }

    public void SendAgentData(NavMeshAgent[] agent_array, float[] distances,  Vector3[] targetPositions)
    {
        AgentTargetPositionsMsg msg = new AgentTargetPositionsMsg();

        msg.agents = new PoseMsg[agent_array.Length];
        for(int i = 0; i < agent_array.Length; i++)
        {
            msg.agents[i] = new PoseMsg(
                new PointMsg(agent_array[i].transform.position.x,
                            agent_array[i].transform.position.y,
                            agent_array[i].transform.position.z
                ),
                new QuaternionMsg(agent_array[i].transform.rotation.x,
                                agent_array[i].transform.rotation.y,
                                agent_array[i].transform.rotation.z,
                                agent_array[i].transform.rotation.w
                )
            );
        }
        /*
        msg.agents = new PoseMsg[]{
            new PoseMsg(
                new PointMsg(agent.transform.position.x,
                            agent.transform.position.y,
                            agent.transform.position.z
                ),
                new QuaternionMsg(agent.transform.rotation.x,
                                agent.transform.rotation.y,
                                agent.transform.rotation.z,
                                agent.transform.rotation.w
                )
            )
        };
        */
        msg.target_distances = distances;

        msg.target_positions = new PointMsg[targetPositions.Length];
        for(int i = 0; i < targetPositions.Length; i++)
        {
            msg.target_positions[i] = new PointMsg(targetPositions[i].x, targetPositions[i].y, targetPositions[i].z);
        }

        ros.Publish(rosTopic, msg);
        Debug.Log("Messaggio inviato: " + msg);
    }

    private float calculatePathLength(NavMeshPath path)
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

    private void PlaceAgentsRandomly()
    {
       for (int i = 0; i < numberOfAgents; i++)
        {
            Vector3 randomPosition;
            if (GetRandomNavMeshPosition(out randomPosition))
            {
                Instantiate(agentPrefab, randomPosition, Quaternion.identity);
            }
            else
            {
                Debug.LogWarning("Non è stato possibile trovare una posizione valida per l'agente.");
            }
        }
        agentsPositionated = true;
    }

    private void PlaceTargetsRandomly()
    {
       for (int i = 0; i < numberOfTargets; i++)
        {
            Vector3 randomPosition;
            if (GetRandomNavMeshPosition(out randomPosition))
            {
                Instantiate(targetPrefab, randomPosition, Quaternion.identity);
            }
            else
            {
                Debug.LogWarning("Non è stato possibile trovare una posizione valida per l'agente.");
            }
        }
        targetsPositionated = true;
    }

    private bool GetRandomNavMeshPosition(out Vector3 position)
    {
        int maxAttempts = 100; 
        for (int i = 0; i < maxAttempts; i++)
        {
            
            float randomX = Random.Range(0, surface.terrainData.size.x - 20.0f);  // - offset per non generarli nei bordi
            float randomZ = Random.Range(0, surface.terrainData.size.z - 20.0f);
            float y = surface.SampleHeight(new Vector3(randomX, 0, randomZ)) + 1.0f; // Altezza del terreno + offset

            Vector3 randomPoint = new Vector3(randomX, y, randomZ);

            // Verifica se il punto è valido sulla NavMesh
            NavMeshHit hit;
            if (NavMesh.SamplePosition(randomPoint, out hit, 2.0f, NavMesh.AllAreas))
            {
                if (!IsInsideObstacle(hit.position))
                {
                    position = hit.position;
                    return true;
                }
            }
        }

        position = Vector3.zero;
        return false;
    }

    private bool IsInsideObstacle(Vector3 position)
    {
        NavMeshObstacle[] obstacles = FindObjectsByType<NavMeshObstacle>(FindObjectsSortMode.None);
        foreach (NavMeshObstacle obstacle in obstacles)
        {
            Bounds obstacleBounds = new Bounds(obstacle.transform.position, obstacle.size);
            if (obstacleBounds.Contains(position))
            {
                return true; 
            }
        }
        return false;
    }
   
}
