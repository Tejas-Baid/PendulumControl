// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/TorqueInput.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/torque_input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_msgs__msg__TorqueInput__init(custom_msgs__msg__TorqueInput * msg)
{
  if (!msg) {
    return false;
  }
  // torque_value
  return true;
}

void
custom_msgs__msg__TorqueInput__fini(custom_msgs__msg__TorqueInput * msg)
{
  if (!msg) {
    return;
  }
  // torque_value
}

bool
custom_msgs__msg__TorqueInput__are_equal(const custom_msgs__msg__TorqueInput * lhs, const custom_msgs__msg__TorqueInput * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // torque_value
  if (lhs->torque_value != rhs->torque_value) {
    return false;
  }
  return true;
}

bool
custom_msgs__msg__TorqueInput__copy(
  const custom_msgs__msg__TorqueInput * input,
  custom_msgs__msg__TorqueInput * output)
{
  if (!input || !output) {
    return false;
  }
  // torque_value
  output->torque_value = input->torque_value;
  return true;
}

custom_msgs__msg__TorqueInput *
custom_msgs__msg__TorqueInput__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__TorqueInput * msg = (custom_msgs__msg__TorqueInput *)allocator.allocate(sizeof(custom_msgs__msg__TorqueInput), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__TorqueInput));
  bool success = custom_msgs__msg__TorqueInput__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__TorqueInput__destroy(custom_msgs__msg__TorqueInput * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_msgs__msg__TorqueInput__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_msgs__msg__TorqueInput__Sequence__init(custom_msgs__msg__TorqueInput__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__TorqueInput * data = NULL;

  if (size) {
    data = (custom_msgs__msg__TorqueInput *)allocator.zero_allocate(size, sizeof(custom_msgs__msg__TorqueInput), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__TorqueInput__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__TorqueInput__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_msgs__msg__TorqueInput__Sequence__fini(custom_msgs__msg__TorqueInput__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__msg__TorqueInput__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_msgs__msg__TorqueInput__Sequence *
custom_msgs__msg__TorqueInput__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_msgs__msg__TorqueInput__Sequence * array = (custom_msgs__msg__TorqueInput__Sequence *)allocator.allocate(sizeof(custom_msgs__msg__TorqueInput__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__TorqueInput__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__TorqueInput__Sequence__destroy(custom_msgs__msg__TorqueInput__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_msgs__msg__TorqueInput__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_msgs__msg__TorqueInput__Sequence__are_equal(const custom_msgs__msg__TorqueInput__Sequence * lhs, const custom_msgs__msg__TorqueInput__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs__msg__TorqueInput__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs__msg__TorqueInput__Sequence__copy(
  const custom_msgs__msg__TorqueInput__Sequence * input,
  custom_msgs__msg__TorqueInput__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs__msg__TorqueInput);
    custom_msgs__msg__TorqueInput * data =
      (custom_msgs__msg__TorqueInput *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs__msg__TorqueInput__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msgs__msg__TorqueInput__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs__msg__TorqueInput__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
