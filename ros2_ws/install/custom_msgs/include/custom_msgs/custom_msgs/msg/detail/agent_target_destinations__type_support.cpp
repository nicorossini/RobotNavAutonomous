// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/AgentTargetDestinations.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_msgs/msg/detail/agent_target_destinations__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace custom_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AgentTargetDestinations_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_msgs::msg::AgentTargetDestinations(_init);
}

void AgentTargetDestinations_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_msgs::msg::AgentTargetDestinations *>(message_memory);
  typed_message->~AgentTargetDestinations();
}

size_t size_function__AgentTargetDestinations__agents(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AgentTargetDestinations__agents(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void * get_function__AgentTargetDestinations__agents(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  return &member[index];
}

void fetch_function__AgentTargetDestinations__agents(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Pose *>(
    get_const_function__AgentTargetDestinations__agents(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Pose *>(untyped_value);
  value = item;
}

void assign_function__AgentTargetDestinations__agents(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Pose *>(
    get_function__AgentTargetDestinations__agents(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Pose *>(untyped_value);
  item = value;
}

void resize_function__AgentTargetDestinations__agents(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Pose> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AgentTargetDestinations__targets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AgentTargetDestinations__targets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__AgentTargetDestinations__targets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__AgentTargetDestinations__targets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__AgentTargetDestinations__targets(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__AgentTargetDestinations__targets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__AgentTargetDestinations__targets(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__AgentTargetDestinations__targets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AgentTargetDestinations_message_member_array[2] = {
  {
    "agents",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::AgentTargetDestinations, agents),  // bytes offset in struct
    nullptr,  // default value
    size_function__AgentTargetDestinations__agents,  // size() function pointer
    get_const_function__AgentTargetDestinations__agents,  // get_const(index) function pointer
    get_function__AgentTargetDestinations__agents,  // get(index) function pointer
    fetch_function__AgentTargetDestinations__agents,  // fetch(index, &value) function pointer
    assign_function__AgentTargetDestinations__agents,  // assign(index, value) function pointer
    resize_function__AgentTargetDestinations__agents  // resize(index) function pointer
  },
  {
    "targets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::AgentTargetDestinations, targets),  // bytes offset in struct
    nullptr,  // default value
    size_function__AgentTargetDestinations__targets,  // size() function pointer
    get_const_function__AgentTargetDestinations__targets,  // get_const(index) function pointer
    get_function__AgentTargetDestinations__targets,  // get(index) function pointer
    fetch_function__AgentTargetDestinations__targets,  // fetch(index, &value) function pointer
    assign_function__AgentTargetDestinations__targets,  // assign(index, value) function pointer
    resize_function__AgentTargetDestinations__targets  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AgentTargetDestinations_message_members = {
  "custom_msgs::msg",  // message namespace
  "AgentTargetDestinations",  // message name
  2,  // number of fields
  sizeof(custom_msgs::msg::AgentTargetDestinations),
  AgentTargetDestinations_message_member_array,  // message members
  AgentTargetDestinations_init_function,  // function to initialize message memory (memory has to be allocated)
  AgentTargetDestinations_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AgentTargetDestinations_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AgentTargetDestinations_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace custom_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs::msg::AgentTargetDestinations>()
{
  return &::custom_msgs::msg::rosidl_typesupport_introspection_cpp::AgentTargetDestinations_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs, msg, AgentTargetDestinations)() {
  return &::custom_msgs::msg::rosidl_typesupport_introspection_cpp::AgentTargetDestinations_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
