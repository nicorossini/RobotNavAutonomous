// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/AgentTargetDestinations.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_DESTINATIONS__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_DESTINATIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/msg/detail/agent_target_destinations__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'agents'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'targets'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AgentTargetDestinations & msg,
  std::ostream & out)
{
  out << "{";
  // member: agents
  {
    if (msg.agents.size() == 0) {
      out << "agents: []";
    } else {
      out << "agents: [";
      size_t pending_items = msg.agents.size();
      for (auto item : msg.agents) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: targets
  {
    if (msg.targets.size() == 0) {
      out << "targets: []";
    } else {
      out << "targets: [";
      size_t pending_items = msg.targets.size();
      for (auto item : msg.targets) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AgentTargetDestinations & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: agents
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.agents.size() == 0) {
      out << "agents: []\n";
    } else {
      out << "agents:\n";
      for (auto item : msg.agents) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: targets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.targets.size() == 0) {
      out << "targets: []\n";
    } else {
      out << "targets:\n";
      for (auto item : msg.targets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AgentTargetDestinations & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace custom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use custom_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_msgs::msg::AgentTargetDestinations & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::msg::AgentTargetDestinations & msg)
{
  return custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::msg::AgentTargetDestinations>()
{
  return "custom_msgs::msg::AgentTargetDestinations";
}

template<>
inline const char * name<custom_msgs::msg::AgentTargetDestinations>()
{
  return "custom_msgs/msg/AgentTargetDestinations";
}

template<>
struct has_fixed_size<custom_msgs::msg::AgentTargetDestinations>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs::msg::AgentTargetDestinations>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs::msg::AgentTargetDestinations>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_DESTINATIONS__TRAITS_HPP_
