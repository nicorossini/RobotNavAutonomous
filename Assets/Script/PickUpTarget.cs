using UnityEngine;
public class PickUpTarget : MonoBehaviour
{
    public bool readyForPickUp = false;
    private GameObject target;
    public AutoMovement auto_movement;

    private float distanceArm;
    public GameObject armPivot;  //only the arm
    private float rangeForPick = 6.5f;
    private float armPivotRotation = 0.2f;
    
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
        if(auto_movement.target_found == true && auto_movement.cubeTarget != null)
        {
            target = auto_movement.cubeTarget;
            if(!readyForPickUp)
            {
                rotateArm(target.transform);
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
        }   
    } 

    private void pickUpTarget()
    {
        Debug.Log("Cubo raccolto!");
        target.transform.SetParent(transform);
        target.transform.localPosition = Vector3.zero;
        target.GetComponent<Rigidbody>().isKinematic = true;
        readyForPickUp = true;
        armPivot.transform.Rotate(-10, 0, 0);
    }
}
