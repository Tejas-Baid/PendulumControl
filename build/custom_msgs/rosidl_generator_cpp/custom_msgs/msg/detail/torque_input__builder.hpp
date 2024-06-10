// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/TorqueInput.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__TORQUE_INPUT__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__TORQUE_INPUT__BUILDER_HPP_

#include "custom_msgs/msg/detail/torque_input__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_TorqueInput_torque_value
{
public:
  Init_TorqueInput_torque_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::msg::TorqueInput torque_value(::custom_msgs::msg::TorqueInput::_torque_value_type arg)
  {
    msg_.torque_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::TorqueInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::TorqueInput>()
{
  return custom_msgs::msg::builder::Init_TorqueInput_torque_value();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__TORQUE_INPUT__BUILDER_HPP_
