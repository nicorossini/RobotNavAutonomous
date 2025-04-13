# RobotNavAutonomous
Development of an autonomous navigation robot system using Unity and ROS2. 
## How to run ROS2 
In the first shell write the command to run the Ros_TCP_Endpoint:
```
ros2 run ros_tcp_endpoint default_server_endpoint --ros-args -p ROS_IP:=ros_ip
```
In two additional terminals, run the following commands to start the ROS nodes:
```
ros2 run navigation_unity_package agent_distance_subscriber
```
```
ros2 run navigation_unity_package robot_communication_node
```
