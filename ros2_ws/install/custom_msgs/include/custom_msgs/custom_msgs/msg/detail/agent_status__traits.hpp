// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/AgentStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__AGENT_STATUS__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__AGENT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_msgs/msg/detail/agent_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AgentStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: agent_id
  {
    out << "agent_id: ";
    rosidl_generator_traits::value_to_yaml(msg.agent_id, out);
    out << ", ";
  }

  // member: target_ids
  {
    if (msg.target_ids.size() == 0) {
      out << "target_ids: []";
    } else {
      out << "target_ids: [";
      size_t pending_items = msg.target_ids.size();
      for (auto item : msg.target_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_distances
  {
    if (msg.target_distances.size() == 0) {
      out << "target_distances: []";
    } else {
      out << "target_distances: [";
      size_t pending_items = msg.target_distances.size();
      for (auto item : msg.target_distances) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const AgentStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: agent_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "agent_id: ";
    rosidl_generator_traits::value_to_yaml(msg.agent_id, out);
    out << "\n";
  }

  // member: target_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_ids.size() == 0) {
      out << "target_ids: []\n";
    } else {
      out << "target_ids:\n";
      for (auto item : msg.target_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_distances
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_distances.size() == 0) {
      out << "target_distances: []\n";
    } else {
      out << "target_distances:\n";
      for (auto item : msg.target_distances) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AgentStatus & msg, bool use_flow_style = false)
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
  const custom_msgs::msg::AgentStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_msgs::msg::AgentStatus & msg)
{
  return custom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_msgs::msg::AgentStatus>()
{
  return "custom_msgs::msg::AgentStatus";
}

template<>
inline const char * name<custom_msgs::msg::AgentStatus>()
{
  return "custom_msgs/msg/AgentStatus";
}

template<>
struct has_fixed_size<custom_msgs::msg::AgentStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs::msg::AgentStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs::msg::AgentStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__AGENT_STATUS__TRAITS_HPP_
