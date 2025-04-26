using System.Collections.Generic;
using UnityEngine;
using RosMessageTypes.Geometry;
using RosMessageTypes.Custom;
using Unity.Robotics.ROSTCPConnector;
using Unity.VisualScripting;
using UnityEngine.AI;
using System.Collections;


public class CommunicationSubscriber : MonoBehaviour
{
    private ROSConnection ros;
    private string myAgentID;
    public GameObject armNose;

    GameObject received_target;
    
    void Start()
    {
        myAgentID = GetComponent<SetAgentUniqueID>().ID;

        ros = ROSConnection.GetOrCreateInstance();
        ros.Subscribe<AgentStatusMsg>("agent_status", messagesReceived);
    }

    private void messagesReceived(AgentStatusMsg msg)
    {
        if (msg.agent_id == myAgentID)
        {
            return;
        }
        
        Debug.Log($"[Subscriber] Ricevuto messaggio da agente: {msg.agent_id}");

        GameObject current_agent = searchAgentByID(msg.agent_id);
        if (current_agent == null)
        {
            Debug.LogWarning($"Agente con ID {msg.agent_id} non trovato!");
            return;
        }

        var agentStatus = current_agent.GetComponent<SetAgentUniqueID>();
        if (agentStatus.has_target_)
        {
            Debug.Log($"Agente {msg.agent_id} ha già un target. Ignoro il messaggio.");
            return;
        }

        for (int i = 0; i < msg.target_ids.Length; i++)
        {
            string targetId = msg.target_ids[i];
            float received_distance = msg.target_distances[i];

            Debug.Log($"Target ID: {targetId}, distanza da {msg.agent_id}: {received_distance}");

            received_target = searchTargetByID(targetId);
            if (received_target == null)
            {
                Debug.LogWarning($"Target con ID {targetId} non trovato!");
                continue;
            }

            float my_distance = Vector3.Distance(transform.position, received_target.transform.position);
                 
            if(received_distance < my_distance)
            {
                // L'altro agente è più vicino -> io non vado
                continue;
            }

            //sono più vicino io
            GetComponent<NavMeshAgent>().destination = received_target.transform.position;
            agentStatus.markHasTarget();
            received_target.GetComponent<SetTargetUniqueID>().markIsTaken();
            Debug.Log($"Destinazione target settata: {received_target.transform.position}");

            var autoMovement = GetComponent<AutoMovement>();
            autoMovement.cubeTarget = received_target;
            autoMovement.target_found = true;
            armNose.GetComponent<PickUpTarget>().reactivate();
            armNose.GetComponent<PickUpTarget>().setReadyForPickupTrue();
            break;
        }

    }

    void Update()
    {
        if(received_target == null)
        {
            return;
        }
        else
        {
            float distance = Vector3.Distance(transform.position, received_target.transform.position);
            if(distance < 20.5f)
            {
                armNose.GetComponent<PickUpTarget>().setReadyForPickupFalse();
            }
        }
    }

    private GameObject searchAgentByID(string id)
    {
        foreach (var agent in GameObject.FindGameObjectsWithTag("NavMeshRobot"))
        {
            var agentScript = agent.GetComponent<SetAgentUniqueID>();
            if (agentScript != null && agentScript.ID == id)
            {
                return agent;
            }
        }
        return null;
    }

     private GameObject searchTargetByID(string id)
    {
        foreach (var target in GameObject.FindGameObjectsWithTag("TargetObj1"))
        {
            var targetScript = target.GetComponent<SetTargetUniqueID>();
            if (targetScript != null && targetScript.ID == id)
            {
                return target;
            }
        }
        return null;
    }

}
