using UnityEngine;

public class FoundRemainTargets : MonoBehaviour
{
    PickUpTarget pickUptarget;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(pickUptarget.basecamp_arrived == true)
        {
            //da qui parte la comunicazione con messaggi ros
        }
    }
}
