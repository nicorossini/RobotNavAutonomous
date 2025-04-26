// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/AgentStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__AGENT_STATUS__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__AGENT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__AgentStatus __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__AgentStatus __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AgentStatus_
{
  using Type = AgentStatus_<ContainerAllocator>;

  explicit AgentStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agent_id = "";
    }
  }

  explicit AgentStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : agent_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->agent_id = "";
    }
  }

  // field types and members
  using _agent_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _agent_id_type agent_id;
  using _target_ids_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _target_ids_type target_ids;
  using _target_distances_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _target_distances_type target_distances;

  // setters for named parameter idiom
  Type & set__agent_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->agent_id = _arg;
    return *this;
  }
  Type & set__target_ids(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->target_ids = _arg;
    return *this;
  }
  Type & set__target_distances(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->target_distances = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::AgentStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::AgentStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::AgentStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::AgentStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::AgentStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::AgentStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::AgentStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::AgentStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::AgentStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::AgentStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__AgentStatus
    std::shared_ptr<custom_msgs::msg::AgentStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__AgentStatus
    std::shared_ptr<custom_msgs::msg::AgentStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AgentStatus_ & other) const
  {
    if (this->agent_id != other.agent_id) {
      return false;
    }
    if (this->target_ids != other.target_ids) {
      return false;
    }
    if (this->target_distances != other.target_distances) {
      return false;
    }
    return true;
  }
  bool operator!=(const AgentStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AgentStatus_

// alias to use template instance with default allocator
using AgentStatus =
  custom_msgs::msg::AgentStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__AGENT_STATUS__STRUCT_HPP_
