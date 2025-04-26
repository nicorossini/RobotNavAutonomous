// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/AgentStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__AGENT_STATUS__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__AGENT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'agent_id'
// Member 'target_ids'
#include "rosidl_runtime_c/string.h"
// Member 'target_distances'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AgentStatus in the package custom_msgs.
typedef struct custom_msgs__msg__AgentStatus
{
  rosidl_runtime_c__String agent_id;
  rosidl_runtime_c__String__Sequence target_ids;
  rosidl_runtime_c__float__Sequence target_distances;
} custom_msgs__msg__AgentStatus;

// Struct for a sequence of custom_msgs__msg__AgentStatus.
typedef struct custom_msgs__msg__AgentStatus__Sequence
{
  custom_msgs__msg__AgentStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__AgentStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__AGENT_STATUS__STRUCT_H_
