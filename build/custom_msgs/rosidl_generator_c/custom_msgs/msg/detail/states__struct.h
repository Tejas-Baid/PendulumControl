// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/States.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__STATES__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/States in the package custom_msgs.
typedef struct custom_msgs__msg__States
{
  double theta;
  double theta_dot;
} custom_msgs__msg__States;

// Struct for a sequence of custom_msgs__msg__States.
typedef struct custom_msgs__msg__States__Sequence
{
  custom_msgs__msg__States * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__States__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__STATES__STRUCT_H_
