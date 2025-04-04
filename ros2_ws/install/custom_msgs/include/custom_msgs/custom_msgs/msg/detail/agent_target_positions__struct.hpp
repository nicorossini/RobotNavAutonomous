// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/AgentTargetPositions.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_POSITIONS__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_POSITIONS__STRUCT_HPP_

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
// Member 'target_positions'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__AgentTargetPositions __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__AgentTargetPositions __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AgentTargetPositions_
{
  using Type = AgentTargetPositions_<ContainerAllocator>;

  explicit AgentTargetPositions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AgentTargetPositions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _agents_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _agents_type agents;
  using _target_distances_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _target_distances_type target_distances;
  using _target_positions_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _target_positions_type target_positions;

  // setters for named parameter idiom
  Type & set__agents(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->agents = _arg;
    return *this;
  }
  Type & set__target_distances(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->target_distances = _arg;
    return *this;
  }
  Type & set__target_positions(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->target_positions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::AgentTargetPositions_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::AgentTargetPositions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::AgentTargetPositions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::AgentTargetPositions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::AgentTargetPositions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::AgentTargetPositions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::AgentTargetPositions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::AgentTargetPositions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::AgentTargetPositions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::AgentTargetPositions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__AgentTargetPositions
    std::shared_ptr<custom_msgs::msg::AgentTargetPositions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__AgentTargetPositions
    std::shared_ptr<custom_msgs::msg::AgentTargetPositions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AgentTargetPositions_ & other) const
  {
    if (this->agents != other.agents) {
      return false;
    }
    if (this->target_distances != other.target_distances) {
      return false;
    }
    if (this->target_positions != other.target_positions) {
      return false;
    }
    return true;
  }
  bool operator!=(const AgentTargetPositions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AgentTargetPositions_

// alias to use template instance with default allocator
using AgentTargetPositions =
  custom_msgs::msg::AgentTargetPositions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__AGENT_TARGET_POSITIONS__STRUCT_HPP_
