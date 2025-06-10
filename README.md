# Robot Navigation Autonomous

## Overview

This repository contains the development of an autonomous navigation robot system using Unity and ROS2. The project implements advanced robotics simulation capabilities with seamless integration between Unity's 3D environment and ROS2's communication framework.

The system provides a comprehensive solution for autonomous robot navigation, featuring real-time communication between Unity simulation and ROS2 nodes, enabling sophisticated robot behavior in a virtual environment.

## Architecture

The project extends the Unity Robotics Hub's ROS TCP Endpoint to create a robust autonomous navigation system. The architecture consists of:

- **Unity Simulation Environment**: 3D virtual world with robot models and navigation challenges
- **ROS2 Integration**: Communication layer handling robot control and sensor data
- **Navigation Algorithms**: Autonomous pathfinding and obstacle avoidance systems
- **Custom Communication Nodes**: Specialized ROS2 nodes for distance sensing and agent communication

## Prerequisites

### Unity Installation
Install Unity Hub and download Unity Editor. The project is developed and tested with Unity version **2022.3 LTS** or later. Version compatibility is crucial for proper functionality.

### ROS2 Setup
We used a virtual machine with Ubuntu 22.04 LTS, for our ROS2 environment

### Unity Robotics Hub
This project builds upon the Unity Robotics Hub framework. Clone the [Unity Robotics Hub repository](https://github.com/Unity-Technologies/Unity-Robotics-Hub) and follow their [ROS2 integration tutorial](https://github.com/Unity-Technologies/Unity-Robotics-Hub/blob/main/tutorials/ros_unity_integration/setup.md).

## Usage

### Starting the System

The system requires three separate terminal sessions running in the correct order:

#### Terminal 1: ROS TCP Endpoint
```bash
ros2 run ros_tcp_endpoint default_server_endpoint --ros-args -p ROS_IP:=ros_ip
```

#### Terminal 2: Agent Distance Subscriber
```bash
ros2 run navigation_unity_package agent_distance_subscriber
```

#### Terminal 3: Communication Node
```bash
ros2 run navigation_unity_package communication_node
```

#### How it wors

### Unity Simulation

1. Open the main scene in Unity Editor
2. Ensure all ROS2 nodes are running
3. Press the Play button to start the simulation
4. The autonomous navigation system will begin operating

## Project Structure

```
RobotNavAutonomous/
├── Assets/
│   ├── Scripts/
│   ├── Scenes/
│   ├── Models/
│   └──...
├── ros2_ws/
│   └── src/
│       ├── custom_msgs/
│       ├── navigation_unity_package/
│       └── ROS-TCP-Endpoint-main-ros2/
│   
└── Packages/
```

## Features

- **Autonomous Navigation**: Advanced pathfinding algorithms for obstacle avoidance
- **Real-time Communication**: Seamless Unity-ROS2 data exchange
- **Sensor Integration**: Distance sensors and environmental awareness
- **Modular Architecture**: Extensible system for additional robot capabilities
- **3D Visualization**: Unity-based simulation environment

## Troubleshooting

### Common Issues

**ROS TCP Connection Failed**
- Check ROS_IP parameter matches your network configuration

**Unity Robotics Package Missing**
- Install Unity Robotics through Package Manager
- Verify ROS2 is selected in Robotics settings
- Regenerate message types if communication fails

**Node Startup Errors**
- Source ROS2 setup files before running nodes
- Check package dependencies are properly installed
- Verify colcon build completed successfully