// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/RobotCommunicationMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ROBOT_COMMUNICATION_MSG__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__ROBOT_COMMUNICATION_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_msgs/msg/detail/robot_communication_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotCommunicationMsg_target_position
{
public:
  explicit Init_RobotCommunicationMsg_target_position(::custom_msgs::msg::RobotCommunicationMsg & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::RobotCommunicationMsg target_position(::custom_msgs::msg::RobotCommunicationMsg::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::RobotCommunicationMsg msg_;
};

class Init_RobotCommunicationMsg_robot_id
{
public:
  Init_RobotCommunicationMsg_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommunicationMsg_target_position robot_id(::custom_msgs::msg::RobotCommunicationMsg::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_RobotCommunicationMsg_target_position(msg_);
  }

private:
  ::custom_msgs::msg::RobotCommunicationMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::RobotCommunicationMsg>()
{
  return custom_msgs::msg::builder::Init_RobotCommunicationMsg_robot_id();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__ROBOT_COMMUNICATION_MSG__BUILDER_HPP_
