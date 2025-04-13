import rclpy
from rclpy.node import Node
from custom_msgs.msg import RobotCommunicationMsg
from geometry_msgs.msg import Point

class RobotCommunicationNode(Node):
    def __init__(self):
        super().__init__('robot_communication_node')
        self.get_logger().info("Robot Communication Node started and listening")
        
        self.subscription = self.create_subscription(
            RobotCommunicationMsg,
            'robot_communication', 
            self.listener_callback,
            10
        )
        self.subscription
        
    def listener_callback(self, msg):
        self.get_logger().info(f"Received message - Robot ID: {msg.robot_id}")
        self.get_logger().info(f"Target Position: x={msg.target_position.x}, y={msg.target_position.y}, z={msg.target_position.z}")
        
def main(args=None):
    rclpy.init(args=args)
    node = RobotCommunicationNode()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()