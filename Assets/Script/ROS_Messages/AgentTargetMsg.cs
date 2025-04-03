using System;
using RosMessageTypes.Geometry;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;

namespace CustomMsgs
{
    public class AgentTargetMsg: Message
    {
        public new const string RosMessageName = "custom_msgs/AgentTargetMsg";

        public PoseMsg agent_pose;
        public PoseMsg target_pose;

        public AgentTargetMsg()
        {
            agent_pose = new PoseMsg();
            target_pose = new PoseMsg();
        }

        public AgentTargetMsg(PoseMsg agent, PoseMsg target)
        {
            agent_pose = agent;
            target_pose = target;
        }
    }
}