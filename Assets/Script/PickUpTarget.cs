using System.Collections.Generic;
using System.Linq;
using UnityEngine;
public class PickUpTarget : MonoBehaviour
{
    public bool readyForPickUp = false;
    private GameObject target;

    [SerializeField]
    public GameObject robot;
    public AutoMovement auto_movement;

    private float distanceArm;
    public GameObject armPivot;  //only the arm
    private float rangeForPick = 6.5f;
    private float armPivotRotation = 0.2f;
    private GameObject[] basecamps;
    //public bool basecamp_arrived;
    private bool picked;
    private bool waitingForNewTarget = false;


    
    void Start()
    {

    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "TargetObj1")
        {
            
            target = other.gameObject;
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if(other.gameObject.tag == "TargetObj1")
        {
            target = null;
            
        }
    }

    void Update()
    {
        if (waitingForNewTarget) return;

        if(auto_movement.target_found == true && auto_movement.cubeTarget != null)
        {
            target = auto_movement.cubeTarget;
            if(!readyForPickUp)
            {
                rotateArm(target.transform);
            }
            if(picked)
            {
                float dist = Vector3.Distance(auto_movement.navmeshagent.transform.position, auto_movement.navmeshagent.destination);
                //Debug.Log(dist);
                if(dist < 20.5)
                {
                    robot.GetComponent<SetAgentUniqueID>().markBasecamp();
                    //basecamp_arrived = true;
                    releaseTarget();
                }
            }
            
        }
        
    }

    private void rotateArm(Transform target)
    {
        distanceArm = Vector3.Distance(transform.position, target.position); 

        armPivot.transform.Rotate(armPivotRotation, 0, 0);

        if(distanceArm < rangeForPick)
        {
            pickUpTarget();
            foundNearestBaseCamp(auto_movement.navmeshagent.transform.position);
        }   
    } 

    private void pickUpTarget()
    {
        Debug.Log("Cubo raccolto!");
        target.transform.SetParent(transform);
        target.transform.localPosition = Vector3.zero;
        target.GetComponent<Rigidbody>().isKinematic = true;
        readyForPickUp = true;
        armPivot.transform.Rotate(-15, 0, 0);
        picked = true;
        target.GetComponent<SetTargetUniqueID>().markIsTaken(); //meaning that the target is taken from a robot
    }
    private void releaseTarget()
    {
        target.transform.SetParent(null);
        target.GetComponent<Rigidbody>().isKinematic = false;
        target.GetComponent<Rigidbody>().useGravity = true;
        target.transform.position = auto_movement.basecampPosition;
        //Debug.Log("Target released");
        target.GetComponent<SetTargetUniqueID>().markAsReleased(); //set del target a true quando viene rilasciato nel basecamp

        picked = false;
        readyForPickUp = false;
        auto_movement.target_found = false;
        auto_movement.cubeTarget = null;
        target = null;
        waitingForNewTarget = true;
    }

    private void foundNearestBaseCamp(Vector3 navPosition)
    {
        basecamps = GameObject.FindGameObjectsWithTag("BaseCamp");
        if(basecamps == null)
            Debug.Log("No basecamp");
        
        GameObject nearestCamp = null;
        float minDistance = float.MaxValue;

        foreach (var camp in basecamps)
        {
            float dist = Vector3.Distance(navPosition, camp.transform.position);
            if (dist < minDistance)
            {
                minDistance = dist;
                nearestCamp = camp;
            }
        }

        if (nearestCamp != null)
        {
            auto_movement.navmeshagent.SetDestination(nearestCamp.transform.position);
            auto_movement.basecampPosition = nearestCamp.transform.position;
            Debug.Log("Nearest BaseCamp: " + nearestCamp.transform.position + " at distance: " + minDistance);
        }
    }

    public void reactivate()
    {
        waitingForNewTarget = false;
    }

    public void setReadyForPickupTrue()
    {
        readyForPickUp = true;
    }
    public void setReadyForPickupFalse()
    {
        readyForPickUp = false;
    }
}
