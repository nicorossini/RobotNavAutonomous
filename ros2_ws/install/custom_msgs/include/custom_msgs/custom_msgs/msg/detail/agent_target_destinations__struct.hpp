// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/AgentTargetDestinations.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_DESTINATIONS__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_DESTINATIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'agents'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'targets'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__AgentTargetDestinations __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__AgentTargetDestinations __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AgentTargetDestinations_
{
  using Type = AgentTargetDestinations_<ContainerAllocator>;

  explicit AgentTargetDestinations_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AgentTargetDestinations_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _agents_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _agents_type agents;
  using _targets_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _targets_type targets;

  // setters for named parameter idiom
  Type & set__agents(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->agents = _arg;
    return *this;
  }
  Type & set__targets(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->targets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::AgentTargetDestinations_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::AgentTargetDestinations_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::AgentTargetDestinations_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::AgentTargetDestinations_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::AgentTargetDestinations_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::AgentTargetDestinations_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::AgentTargetDestinations_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::AgentTargetDestinations_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::AgentTargetDestinations_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::AgentTargetDestinations_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__AgentTargetDestinations
    std::shared_ptr<custom_msgs::msg::AgentTargetDestinations_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__AgentTargetDestinations
    std::shared_ptr<custom_msgs::msg::AgentTargetDestinations_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AgentTargetDestinations_ & other) const
  {
    if (this->agents != other.agents) {
      return false;
    }
    if (this->targets != other.targets) {
      return false;
    }
    return true;
  }
  bool operator!=(const AgentTargetDestinations_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AgentTargetDestinations_

// alias to use template instance with default allocator
using AgentTargetDestinations =
  custom_msgs::msg::AgentTargetDestinations_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_DESTINATIONS__STRUCT_HPP_
