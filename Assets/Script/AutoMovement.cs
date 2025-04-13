using System;
using Unity.AI.Navigation;
using UnityEngine;
using UnityEngine.AI;

public class AutoMovement : MonoBehaviour
{
    public NavMeshAgent navmeshagent;
    //public Transform[] target;
    public GameObject cubeTarget;

    //private int counter;  //ora i robot hanno un solo target ciascuno quindi si può eliminare counter e togliere trasform[]
    public bool arrived = false;
    public float distance;
    private float range = 20.5f;
    private float speedMove = 15.5f;
    private TargetsReceiver targetReceiver;

    public bool target_found = false;
    private bool targetSearchPerformed = false; // Flag per evitare ricerche multiple

    void Start()
    {
        navmeshagent.speed = speedMove;
        targetReceiver = GameObject.Find("TargetReceiverManager").GetComponent<TargetsReceiver>();
    }

    void Update()
    {
        if (!targetReceiver.destination_arrived) return;

        distance = Vector3.Distance(transform.position, navmeshagent.destination);
        //Debug.Log("distanza dall'oggetto" + transform.position + " || " + navmeshagent.destination + " || "+ distance);

        if (distance < range)
        {
            if (!arrived)
            {
                arrived = true;
                navmeshagent.isStopped = true;
                navmeshagent.speed = 0;
                navmeshagent.velocity = Vector3.zero;

                // Cerca il target solo una volta quando arriviamo
                if (cubeTarget == null && !targetSearchPerformed)
                {
                    targetSearchPerformed = true;
                    cubeTarget = findClosestTarget(navmeshagent.destination);
                }
            }
        }
        else if (distance > range)
        {
            arrived = false;
            navmeshagent.isStopped = false;
            navmeshagent.speed = speedMove;
            // Reset del flag quando ci muoviamo per permettere una nuova ricerca al prossimo arrivo
            targetSearchPerformed = false;
        }
    }

    public GameObject findClosestTarget(Vector3 position)
    {
        if (target_found && cubeTarget != null) return cubeTarget; // Evita di cercare se abbiamo già trovato

        GameObject[] targets = GameObject.FindGameObjectsWithTag("TargetObj1");
        if (targets.Length == 0) return null;

        GameObject closestTarget = null;
        float closestDistance = Mathf.Infinity;

        foreach (GameObject target in targets)
        {
            //Debug.Log("Posizione del target xxxxx: " + target.transform.position + " " + "Destinazione NavMeshAgent xxxx: " + position);
            float distance = Vector3.Distance(position, target.transform.position);
            //Debug.Log("Distanza xxxxx: " + distance);
            if (distance < closestDistance)
            {
                closestDistance = distance;
                closestTarget = target;
            }
        }

        if (closestTarget != null && !target_found)
        {
            target_found = true;
            Debug.Log("Target trovato");
        }

        return closestTarget;
    }

    // Metodo per resettare lo stato di ricerca quando viene assegnato un nuovo target
    public void ResetTargetSearch()
    {
        target_found = false;
        targetSearchPerformed = false;
        cubeTarget = null;
    }
}