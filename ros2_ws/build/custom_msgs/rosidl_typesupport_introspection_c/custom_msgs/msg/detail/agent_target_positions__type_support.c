// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/AgentTargetPositions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/agent_target_positions__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/agent_target_positions__functions.h"
#include "custom_msgs/msg/detail/agent_target_positions__struct.h"


// Include directives for member types
// Member `agents`
#include "geometry_msgs/msg/pose.h"
// Member `agents`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `target_distances`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `target_positions`
#include "geometry_msgs/msg/point.h"
// Member `target_positions`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__AgentTargetPositions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__AgentTargetPositions__init(message_memory);
}

void custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__AgentTargetPositions_fini_function(void * message_memory)
{
  custom_msgs__msg__AgentTargetPositions__fini(message_memory);
}

size_t custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__size_function__AgentTargetPositions__agents(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_const_function__AgentTargetPositions__agents(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_function__AgentTargetPositions__agents(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__fetch_function__AgentTargetPositions__agents(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_const_function__AgentTargetPositions__agents(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__assign_function__AgentTargetPositions__agents(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_function__AgentTargetPositions__agents(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__resize_function__AgentTargetPositions__agents(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__size_function__AgentTargetPositions__target_distances(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_const_function__AgentTargetPositions__target_distances(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_function__AgentTargetPositions__target_distances(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__fetch_function__AgentTargetPositions__target_distances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_const_function__AgentTargetPositions__target_distances(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__assign_function__AgentTargetPositions__target_distances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_function__AgentTargetPositions__target_distances(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__resize_function__AgentTargetPositions__target_distances(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__size_function__AgentTargetPositions__target_positions(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_const_function__AgentTargetPositions__target_positions(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_function__AgentTargetPositions__target_positions(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__fetch_function__AgentTargetPositions__target_positions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_const_function__AgentTargetPositions__target_positions(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__assign_function__AgentTargetPositions__target_positions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_function__AgentTargetPositions__target_positions(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__resize_function__AgentTargetPositions__target_positions(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__AgentTargetPositions_message_member_array[3] = {
  {
    "agents",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__AgentTargetPositions, agents),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__size_function__AgentTargetPositions__agents,  // size() function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_const_function__AgentTargetPositions__agents,  // get_const(index) function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_function__AgentTargetPositions__agents,  // get(index) function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__fetch_function__AgentTargetPositions__agents,  // fetch(index, &value) function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__assign_function__AgentTargetPositions__agents,  // assign(index, value) function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__resize_function__AgentTargetPositions__agents  // resize(index) function pointer
  },
  {
    "target_distances",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__AgentTargetPositions, target_distances),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__size_function__AgentTargetPositions__target_distances,  // size() function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_const_function__AgentTargetPositions__target_distances,  // get_const(index) function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_function__AgentTargetPositions__target_distances,  // get(index) function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__fetch_function__AgentTargetPositions__target_distances,  // fetch(index, &value) function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__assign_function__AgentTargetPositions__target_distances,  // assign(index, value) function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__resize_function__AgentTargetPositions__target_distances  // resize(index) function pointer
  },
  {
    "target_positions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__AgentTargetPositions, target_positions),  // bytes offset in struct
    NULL,  // default value
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__size_function__AgentTargetPositions__target_positions,  // size() function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_const_function__AgentTargetPositions__target_positions,  // get_const(index) function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__get_function__AgentTargetPositions__target_positions,  // get(index) function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__fetch_function__AgentTargetPositions__target_positions,  // fetch(index, &value) function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__assign_function__AgentTargetPositions__target_positions,  // assign(index, value) function pointer
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__resize_function__AgentTargetPositions__target_positions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__AgentTargetPositions_message_members = {
  "custom_msgs__msg",  // message namespace
  "AgentTargetPositions",  // message name
  3,  // number of fields
  sizeof(custom_msgs__msg__AgentTargetPositions),
  custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__AgentTargetPositions_message_member_array,  // message members
  custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__AgentTargetPositions_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__AgentTargetPositions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__AgentTargetPositions_message_type_support_handle = {
  0,
  &custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__AgentTargetPositions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, AgentTargetPositions)() {
  custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__AgentTargetPositions_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__AgentTargetPositions_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__AgentTargetPositions_message_type_support_handle.typesupport_identifier) {
    custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__AgentTargetPositions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_msgs__msg__AgentTargetPositions__rosidl_typesupport_introspection_c__AgentTargetPositions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
