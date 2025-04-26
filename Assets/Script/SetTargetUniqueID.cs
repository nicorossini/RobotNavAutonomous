using UnityEngine;
using System;
public class SetTargetUniqueID : MonoBehaviour
{
    [SerializeField]
    private string uniqueID;

    [SerializeField]
    private bool released_at_base = false;

    [SerializeField]
    private bool is_taken = false;

    public string ID => uniqueID;

    public bool released => released_at_base;

    public bool taken => is_taken;

    private void Awake()
    {
        if (string.IsNullOrEmpty(uniqueID))
        {
            uniqueID = Guid.NewGuid().ToString(); 
        }
    }

    public void markAsReleased()
    {
        released_at_base = true;
    }

    public void markIsTaken()
    {
        is_taken = true;
    }
}
