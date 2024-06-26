// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/TorqueInput.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__TORQUE_INPUT__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__TORQUE_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TorqueInput in the package custom_msgs.
typedef struct custom_msgs__msg__TorqueInput
{
  double torque_value;
} custom_msgs__msg__TorqueInput;

// Struct for a sequence of custom_msgs__msg__TorqueInput.
typedef struct custom_msgs__msg__TorqueInput__Sequence
{
  custom_msgs__msg__TorqueInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__TorqueInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__TORQUE_INPUT__STRUCT_H_
