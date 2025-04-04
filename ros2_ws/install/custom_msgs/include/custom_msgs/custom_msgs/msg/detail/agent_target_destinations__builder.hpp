// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/AgentTargetDestinations.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_DESTINATIONS__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_DESTINATIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/agent_target_destinations__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_AgentTargetDestinations_targets
{
public:
  explicit Init_AgentTargetDestinations_targets(::custom_msgs::msg::AgentTargetDestinations & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::AgentTargetDestinations targets(::custom_msgs::msg::AgentTargetDestinations::_targets_type arg)
  {
    msg_.targets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::AgentTargetDestinations msg_;
};

class Init_AgentTargetDestinations_agents
{
public:
  Init_AgentTargetDestinations_agents()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AgentTargetDestinations_targets agents(::custom_msgs::msg::AgentTargetDestinations::_agents_type arg)
  {
    msg_.agents = std::move(arg);
    return Init_AgentTargetDestinations_targets(msg_);
  }

private:
  ::custom_msgs::msg::AgentTargetDestinations msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::AgentTargetDestinations>()
{
  return custom_msgs::msg::builder::Init_AgentTargetDestinations_agents();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_DESTINATIONS__BUILDER_HPP_
