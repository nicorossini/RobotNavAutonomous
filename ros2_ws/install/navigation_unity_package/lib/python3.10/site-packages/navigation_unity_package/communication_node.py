import rclpy
from rclpy.node import Node
from custom_msgs.msg import AgentStatus

class CommunicationNode(Node):
    def __init__(self):
        super().__init__('communication_node')
        self.sub = self.create_subscription(
            AgentStatus,
            'agent_status',
            self.communication_callback,
            10
        )
        self.pub = self.create_publisher(
            AgentStatus,
            'agent_status',
            10
        )

    def communication_callback(self, msg):
        self.get_logger().info(f"Communication message from: {msg.agent_id}")
        self.pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = CommunicationNode()
    rclpy.spin(node)
    rclpy.shutdown()
