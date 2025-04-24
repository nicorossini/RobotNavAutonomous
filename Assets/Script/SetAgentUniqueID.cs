using UnityEngine;
using System;

public class SetAgentUniqueID : MonoBehaviour
{
    [SerializeField]
    private string uniqueID;

    [SerializeField]
    private bool basecamp = false;

    [SerializeField]
    private bool has_target = false;

    public string ID => uniqueID;

    public bool basecamp_arrived => basecamp;

    public bool has_target_ => has_target;


    private void Awake()
    {
        if (string.IsNullOrEmpty(uniqueID))
        {
            uniqueID = Guid.NewGuid().ToString(); 
        }
    }

    public void markBasecamp()
    {
        basecamp = true;
    }

    public void markHasTarget()
    {
        has_target = true;
    }
}
