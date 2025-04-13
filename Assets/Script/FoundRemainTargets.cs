using UnityEngine;

public class FoundRemainTargets : MonoBehaviour
{
    private PickUpTarget pickUpTarget;
    private RobotCommunicationManager communicationManager;

    void Start()
    {
        pickUpTarget = GetComponent<PickUpTarget>();
        communicationManager = GameObject.FindFirstObjectByType<RobotCommunicationManager>();

        if (communicationManager == null)
        {
            GameObject managerObj = new GameObject("RobotCommunicationManager");
            communicationManager = managerObj.AddComponent<RobotCommunicationManager>();
        }
    }

    void Update()
    {
        if (pickUpTarget != null && pickUpTarget.basecamp_arrived)
        {
            // The robot has arrived at a base camp with a target
            // The communication manager will handle the rest
            Debug.Log("Robot has arrived at base camp with a target");
        }
    }
}