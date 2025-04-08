# RobotNavAutonomous
Development of an autonomous navigation robot system using Unity and ROS2. 
## How to run ROS2 
In the first shell write the command to run the Ros_TCP_Endpoint:
```
ros2 run ros_tcp_endpoint default_server_endpoint --ros-args -p ROS_IP:=ros_ip
```
In another shell put the command to run the ROS Node:
```
ros2 run navigation_unity_package agent_distance_subscriber
```
