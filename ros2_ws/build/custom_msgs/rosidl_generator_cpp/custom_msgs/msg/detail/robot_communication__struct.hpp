// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/RobotCommunication.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ROBOT_COMMUNICATION__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__ROBOT_COMMUNICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'target_position'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__RobotCommunication __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__RobotCommunication __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotCommunication_
{
  using Type = RobotCommunication_<ContainerAllocator>;

  explicit RobotCommunication_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0l;
    }
  }

  explicit RobotCommunication_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = 0l;
    }
  }

  // field types and members
  using _robot_id_type =
    int32_t;
  _robot_id_type robot_id;
  using _target_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _target_position_type target_position;

  // setters for named parameter idiom
  Type & set__robot_id(
    const int32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__target_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->target_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::RobotCommunication_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::RobotCommunication_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::RobotCommunication_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::RobotCommunication_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::RobotCommunication_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::RobotCommunication_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::RobotCommunication_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::RobotCommunication_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::RobotCommunication_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::RobotCommunication_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__RobotCommunication
    std::shared_ptr<custom_msgs::msg::RobotCommunication_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__RobotCommunication
    std::shared_ptr<custom_msgs::msg::RobotCommunication_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommunication_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->target_position != other.target_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommunication_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommunication_

// alias to use template instance with default allocator
using RobotCommunication =
  custom_msgs::msg::RobotCommunication_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__ROBOT_COMMUNICATION__STRUCT_HPP_
