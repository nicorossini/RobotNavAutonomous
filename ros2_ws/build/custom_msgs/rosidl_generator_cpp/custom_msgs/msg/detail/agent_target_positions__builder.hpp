// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/AgentTargetPositions.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_POSITIONS__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/agent_target_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_AgentTargetPositions_target_positions
{
public:
  explicit Init_AgentTargetPositions_target_positions(::custom_msgs::msg::AgentTargetPositions & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::AgentTargetPositions target_positions(::custom_msgs::msg::AgentTargetPositions::_target_positions_type arg)
  {
    msg_.target_positions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::AgentTargetPositions msg_;
};

class Init_AgentTargetPositions_target_distances
{
public:
  explicit Init_AgentTargetPositions_target_distances(::custom_msgs::msg::AgentTargetPositions & msg)
  : msg_(msg)
  {}
  Init_AgentTargetPositions_target_positions target_distances(::custom_msgs::msg::AgentTargetPositions::_target_distances_type arg)
  {
    msg_.target_distances = std::move(arg);
    return Init_AgentTargetPositions_target_positions(msg_);
  }

private:
  ::custom_msgs::msg::AgentTargetPositions msg_;
};

class Init_AgentTargetPositions_agents
{
public:
  Init_AgentTargetPositions_agents()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgentTargetPositions_target_distances agents(::custom_msgs::msg::AgentTargetPositions::_agents_type arg)
  {
    msg_.agents = std::move(arg);
    return Init_AgentTargetPositions_target_distances(msg_);
  }

private:
  ::custom_msgs::msg::AgentTargetPositions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::AgentTargetPositions>()
{
  return custom_msgs::msg::builder::Init_AgentTargetPositions_agents();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_POSITIONS__BUILDER_HPP_
