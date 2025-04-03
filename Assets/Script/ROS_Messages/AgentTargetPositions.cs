using System;
using RosMessageTypes.Geometry;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;
using Unity.Robotics.ROSTCPConnector.ROSGeometry;

namespace CustomMsgs
{
    [Serializable]
    public class AgentTargetPositions: Message
    {
        public new const string RosMessageName = "custom_msgs/AgentTargetPositions";
        
        public PoseMsg agents;
        public float[] target_distances;

        public AgentTargetPositions()
        {
            agents = new PoseMsg();
            target_distances = new float[0];
        }

        public AgentTargetPositions(PoseMsg pose, float[] distances)
        {
            agents = pose;
            target_distances = distances;
        }

    }
}