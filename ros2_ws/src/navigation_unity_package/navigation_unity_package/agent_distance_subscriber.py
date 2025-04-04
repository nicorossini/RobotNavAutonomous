import rclpy
from rclpy.node import Node
from custom_msgs.msg import AgentTargetPositions, AgentTargetDestinations
from geometry_msgs.msg import Pose, Point

class AgentDistanceSubscriber(Node):
    def __init__(self):
        super().__init__('agent_distance_subscriber')
        self.subscription = self.create_subscription(
            AgentTargetPositions,
            'agent_distances',
            self.listener_callback,
            10
        )
        self.subscription
        self.publisher = self.create_publisher(AgentTargetDestinations, 'target_destinations', 10)

    def listener_callback(self, msg):
        new_msg = AgentTargetDestinations()
        new_msg.agents = []
        new_msg.targets = []

        num_target = len(msg.target_positions) // len(msg.agents)
        self.get_logger().info(f"target per agent: {num_target}")

        available_targets = set(range(num_target))
        assignments = []  # Lista delle assegnazioni (distanza, agente, target)
        self.get_logger().info(f"distance lenght: {msg.target_distances}")
        self.get_logger().info(f"available targets: {available_targets}")
        #Costruisci tutte le possibili assegnazioni con le loro distanze
        for agent_idx, agent in enumerate(msg.agents):
            self.get_logger().info(f"agent_idx: {agent_idx}")
            for target_idx in available_targets:
                 distance_idx = (agent_idx * num_target) + target_idx
                 self.get_logger().info(f"distance idx: {distance_idx}")
                 distance = msg.target_distances[distance_idx]  #Distanza agente-target
                 assignments.append((distance, agent_idx, target_idx))

        # Ordina le assegnazioni per distanza crescente
        assignments.sort()
        self.get_logger().info(f"Assignments: {assignments}")

        assigned_agents = set()
        assigned_targets = set()

        # Assegna i target agli agenti nel modo più ottimale
        for distance, agent_idx, target_idx in assignments:
            if agent_idx not in assigned_agents and target_idx not in assigned_targets:
                assigned_agents.add(agent_idx)
                assigned_targets.add(target_idx)

                agent = msg.agents[agent_idx]
                target = msg.target_positions[target_idx]

                self.get_logger().info(f"👾 Agente {agent_idx}: {agent.position.x}, {agent.position.y}, {agent.position.z}")
                self.get_logger().info(f"🎯 Target assegnato {target_idx}: {target.x}, {target.y}, {target.z} (distanza: {distance})")

                target_position = Point(x=target.x, y=target.y, z=target.z)
                agent_position = Pose(position=agent.position)

                new_msg.agents.append(agent_position)
                new_msg.targets.append(target_position)

                if len(assigned_agents) == len(msg.agents):
                   break

        self.publisher.publish(new_msg)
        self.get_logger().info("Messaggio inviato a Unity")


def main(args=None):
    rclpy.init(args=args)
    node = AgentDistanceSubscriber()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
