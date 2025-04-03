using Unity.Robotics.ROSTCPConnector;
using UnityEngine;
using RosMessageTypes.Custom;
using UnityEngine.AI;

public class TargetsReceiver : MonoBehaviour
{
    ROSConnection ros;
    private string rosTopic = "/target_destinations";
    private NavMeshAgent[] agents;
    private Vector3 agent_position;

    public bool destination_arrived = false;

    void Start()
    {
        ros = ROSConnection.GetOrCreateInstance();
        ros.Subscribe<AgentTargetDestinationsMsg>(rosTopic, ReceiveTargetDestination);
        agents = FindObjectsByType<NavMeshAgent>(FindObjectsSortMode.None);
    }

    private void ReceiveTargetDestination(AgentTargetDestinationsMsg msg)
    {
       
        for (int i = 0; i < msg.agents.Length; i++)  
        {
            agent_position = new Vector3(
                    (float)msg.agents[i].position.x, 
                    (float)msg.agents[i].position.y, 
                    (float)msg.agents[i].position.z
            );
            Debug.Log("AGENTS POSITION: " + agent_position);
        }

        float sphereRadius = 10.0f; 
        Collider[] colliders = Physics.OverlapSphere(agent_position, sphereRadius);

        foreach (Collider collider in colliders)
        {
            NavMeshAgent agent = collider.GetComponent<NavMeshAgent>();
            if (agent != null)
            {
                Debug.Log("NavMeshAgent trovato: " + agent.transform.position);

                for (int i = 0; i < msg.targets.Length; i++)  
                {
                    Vector3 destination = new Vector3(
                        (float)msg.targets[i].x, 
                        (float)msg.targets[i].y, 
                        (float)msg.targets[i].z
                    );

                    agent.SetDestination(destination);
                    destination_arrived = true;
                    Debug.Log("Nuova destinazione per agente " + agent.name + ": " + destination);
                }
            }
        }
    }
    void Update()
    {
        
    }
}
