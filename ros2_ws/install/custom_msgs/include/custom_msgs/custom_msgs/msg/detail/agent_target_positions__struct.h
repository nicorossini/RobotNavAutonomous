// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/AgentTargetPositions.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_POSITIONS__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_POSITIONS__STRUCT_H_

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
// Member 'target_distances'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'target_positions'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/AgentTargetPositions in the package custom_msgs.
typedef struct custom_msgs__msg__AgentTargetPositions
{
  /// Lista posizioni agenti
  geometry_msgs__msg__Pose__Sequence agents;
  /// Lista distance tra agente e target
  rosidl_runtime_c__float__Sequence target_distances;
  /// Lista posizioni target
  geometry_msgs__msg__Point__Sequence target_positions;
} custom_msgs__msg__AgentTargetPositions;

// Struct for a sequence of custom_msgs__msg__AgentTargetPositions.
typedef struct custom_msgs__msg__AgentTargetPositions__Sequence
{
  custom_msgs__msg__AgentTargetPositions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__AgentTargetPositions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_POSITIONS__STRUCT_H_
