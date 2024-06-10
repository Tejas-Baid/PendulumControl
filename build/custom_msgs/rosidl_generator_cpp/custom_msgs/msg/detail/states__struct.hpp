// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/States.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__STATES__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__STATES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__States __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__States __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct States_
{
  using Type = States_<ContainerAllocator>;

  explicit States_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta = 0.0;
      this->theta_dot = 0.0;
    }
  }

  explicit States_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->theta = 0.0;
      this->theta_dot = 0.0;
    }
  }

  // field types and members
  using _theta_type =
    double;
  _theta_type theta;
  using _theta_dot_type =
    double;
  _theta_dot_type theta_dot;

  // setters for named parameter idiom
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__theta_dot(
    const double & _arg)
  {
    this->theta_dot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::States_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::States_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::States_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::States_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::States_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::States_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::States_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::States_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::States_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::States_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__States
    std::shared_ptr<custom_msgs::msg::States_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__States
    std::shared_ptr<custom_msgs::msg::States_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const States_ & other) const
  {
    if (this->theta != other.theta) {
      return false;
    }
    if (this->theta_dot != other.theta_dot) {
      return false;
    }
    return true;
  }
  bool operator!=(const States_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct States_

// alias to use template instance with default allocator
using States =
  custom_msgs::msg::States_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__STATES__STRUCT_HPP_
