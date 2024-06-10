// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/States.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__STATES__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__STATES__BUILDER_HPP_

#include "custom_msgs/msg/detail/states__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_States_theta_dot
{
public:
  explicit Init_States_theta_dot(::custom_msgs::msg::States & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::States theta_dot(::custom_msgs::msg::States::_theta_dot_type arg)
  {
    msg_.theta_dot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::States msg_;
};

class Init_States_theta
{
public:
  Init_States_theta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_States_theta_dot theta(::custom_msgs::msg::States::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_States_theta_dot(msg_);
  }

private:
  ::custom_msgs::msg::States msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::States>()
{
  return custom_msgs::msg::builder::Init_States_theta();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__STATES__BUILDER_HPP_
