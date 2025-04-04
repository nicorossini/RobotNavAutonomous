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
        
    }

    private void ReceiveTargetDestination(AgentTargetDestinationsMsg msg)
    {
        agents = FindObjectsByType<NavMeshAgent>(FindObjectsSortMode.None);
        for (int i = 0; i < msg.agents.Length; i++)  
        {
            agent_position = new Vector3(
                    (float)msg.agents[i].position.x, 
                    (float)msg.agents[i].position.y - 1.3f, 
                    (float)msg.agents[i].position.z
            );
            //Debug.Log("AGENTS POSITION: " + agent_position);

            NavMeshAgent closestAgent = null;
            float minDist = float.MaxValue;

            foreach (var a in agents)
            {
                float dist = Vector3.Distance(a.transform.position, agent_position);
                //Debug.Log($"Confronto con: {a.name} || {a.transform.position}, distanza: {dist}");

                if (dist < minDist)
                {
                    minDist = dist;
                    closestAgent = a;
                }
            }

            if (closestAgent != null && minDist < 10f)
            {
                //Debug.Log($"Agente assegnato trovato: {closestAgent.name}");

                Vector3 destination = new Vector3(
                    (float)msg.targets[i].x,
                    (float)msg.targets[i].y,
                    (float)msg.targets[i].z
                );

                closestAgent.SetDestination(destination);
                destination_arrived = true;
                Debug.Log("Nuova destinazione per agente " + closestAgent.name + ": " + destination);
            }
        }
    }
    void Update()
    {
        
    }
}
