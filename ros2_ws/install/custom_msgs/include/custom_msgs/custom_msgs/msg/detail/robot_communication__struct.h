// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/RobotCommunication.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ROBOT_COMMUNICATION__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__ROBOT_COMMUNICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/RobotCommunication in the package custom_msgs.
typedef struct custom_msgs__msg__RobotCommunication
{
  int32_t robot_id;
  geometry_msgs__msg__Point target_position;
} custom_msgs__msg__RobotCommunication;

// Struct for a sequence of custom_msgs__msg__RobotCommunication.
typedef struct custom_msgs__msg__RobotCommunication__Sequence
{
  custom_msgs__msg__RobotCommunication * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__RobotCommunication__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__ROBOT_COMMUNICATION__STRUCT_H_
