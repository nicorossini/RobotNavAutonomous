// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/AgentStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__AGENT_STATUS__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__AGENT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/agent_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_AgentStatus_target_distances
{
public:
  explicit Init_AgentStatus_target_distances(::custom_msgs::msg::AgentStatus & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::AgentStatus target_distances(::custom_msgs::msg::AgentStatus::_target_distances_type arg)
  {
    msg_.target_distances = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::AgentStatus msg_;
};

class Init_AgentStatus_target_ids
{
public:
  explicit Init_AgentStatus_target_ids(::custom_msgs::msg::AgentStatus & msg)
  : msg_(msg)
  {}
  Init_AgentStatus_target_distances target_ids(::custom_msgs::msg::AgentStatus::_target_ids_type arg)
  {
    msg_.target_ids = std::move(arg);
    return Init_AgentStatus_target_distances(msg_);
  }

private:
  ::custom_msgs::msg::AgentStatus msg_;
};

class Init_AgentStatus_agent_id
{
public:
  Init_AgentStatus_agent_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgentStatus_target_ids agent_id(::custom_msgs::msg::AgentStatus::_agent_id_type arg)
  {
    msg_.agent_id = std::move(arg);
    return Init_AgentStatus_target_ids(msg_);
  }

private:
  ::custom_msgs::msg::AgentStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::AgentStatus>()
{
  return custom_msgs::msg::builder::Init_AgentStatus_agent_id();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__AGENT_STATUS__BUILDER_HPP_
