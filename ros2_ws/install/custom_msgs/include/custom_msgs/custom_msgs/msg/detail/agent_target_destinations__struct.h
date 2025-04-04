// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/AgentTargetDestinations.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_DESTINATIONS__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_DESTINATIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'agents'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'targets'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/AgentTargetDestinations in the package custom_msgs.
typedef struct custom_msgs__msg__AgentTargetDestinations
{
  geometry_msgs__msg__Pose__Sequence agents;
  geometry_msgs__msg__Point__Sequence targets;
} custom_msgs__msg__AgentTargetDestinations;

// Struct for a sequence of custom_msgs__msg__AgentTargetDestinations.
typedef struct custom_msgs__msg__AgentTargetDestinations__Sequence
{
  custom_msgs__msg__AgentTargetDestinations * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__AgentTargetDestinations__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_DESTINATIONS__STRUCT_H_
