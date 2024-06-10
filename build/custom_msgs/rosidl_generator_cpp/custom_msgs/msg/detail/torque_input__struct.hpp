// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/TorqueInput.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__TORQUE_INPUT__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__TORQUE_INPUT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__TorqueInput __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__TorqueInput __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TorqueInput_
{
  using Type = TorqueInput_<ContainerAllocator>;

  explicit TorqueInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->torque_value = 0.0;
    }
  }

  explicit TorqueInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->torque_value = 0.0;
    }
  }

  // field types and members
  using _torque_value_type =
    double;
  _torque_value_type torque_value;

  // setters for named parameter idiom
  Type & set__torque_value(
    const double & _arg)
  {
    this->torque_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::TorqueInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::TorqueInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::TorqueInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::TorqueInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::TorqueInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::TorqueInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::TorqueInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::TorqueInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::TorqueInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::TorqueInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__TorqueInput
    std::shared_ptr<custom_msgs::msg::TorqueInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__TorqueInput
    std::shared_ptr<custom_msgs::msg::TorqueInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TorqueInput_ & other) const
  {
    if (this->torque_value != other.torque_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const TorqueInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TorqueInput_

// alias to use template instance with default allocator
using TorqueInput =
  custom_msgs::msg::TorqueInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__TORQUE_INPUT__STRUCT_HPP_
