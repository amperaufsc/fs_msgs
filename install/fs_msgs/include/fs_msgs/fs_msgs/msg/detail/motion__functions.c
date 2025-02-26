// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fs_msgs:msg/Motion.idl
// generated code does not contain a copyright notice
#include "fs_msgs/msg/detail/motion__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `odom`
#include "nav_msgs/msg/detail/odometry__functions.h"

bool
fs_msgs__msg__Motion__init(fs_msgs__msg__Motion * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fs_msgs__msg__Motion__fini(msg);
    return false;
  }
  // odom
  if (!nav_msgs__msg__Odometry__Sequence__init(&msg->odom, 0)) {
    fs_msgs__msg__Motion__fini(msg);
    return false;
  }
  return true;
}

void
fs_msgs__msg__Motion__fini(fs_msgs__msg__Motion * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // odom
  nav_msgs__msg__Odometry__Sequence__fini(&msg->odom);
}

bool
fs_msgs__msg__Motion__are_equal(const fs_msgs__msg__Motion * lhs, const fs_msgs__msg__Motion * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // odom
  if (!nav_msgs__msg__Odometry__Sequence__are_equal(
      &(lhs->odom), &(rhs->odom)))
  {
    return false;
  }
  return true;
}

bool
fs_msgs__msg__Motion__copy(
  const fs_msgs__msg__Motion * input,
  fs_msgs__msg__Motion * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // odom
  if (!nav_msgs__msg__Odometry__Sequence__copy(
      &(input->odom), &(output->odom)))
  {
    return false;
  }
  return true;
}

fs_msgs__msg__Motion *
fs_msgs__msg__Motion__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fs_msgs__msg__Motion * msg = (fs_msgs__msg__Motion *)allocator.allocate(sizeof(fs_msgs__msg__Motion), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fs_msgs__msg__Motion));
  bool success = fs_msgs__msg__Motion__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fs_msgs__msg__Motion__destroy(fs_msgs__msg__Motion * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fs_msgs__msg__Motion__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fs_msgs__msg__Motion__Sequence__init(fs_msgs__msg__Motion__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fs_msgs__msg__Motion * data = NULL;

  if (size) {
    data = (fs_msgs__msg__Motion *)allocator.zero_allocate(size, sizeof(fs_msgs__msg__Motion), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fs_msgs__msg__Motion__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fs_msgs__msg__Motion__fini(&data[i - 1]);
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
fs_msgs__msg__Motion__Sequence__fini(fs_msgs__msg__Motion__Sequence * array)
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
      fs_msgs__msg__Motion__fini(&array->data[i]);
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

fs_msgs__msg__Motion__Sequence *
fs_msgs__msg__Motion__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fs_msgs__msg__Motion__Sequence * array = (fs_msgs__msg__Motion__Sequence *)allocator.allocate(sizeof(fs_msgs__msg__Motion__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fs_msgs__msg__Motion__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fs_msgs__msg__Motion__Sequence__destroy(fs_msgs__msg__Motion__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fs_msgs__msg__Motion__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fs_msgs__msg__Motion__Sequence__are_equal(const fs_msgs__msg__Motion__Sequence * lhs, const fs_msgs__msg__Motion__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fs_msgs__msg__Motion__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fs_msgs__msg__Motion__Sequence__copy(
  const fs_msgs__msg__Motion__Sequence * input,
  fs_msgs__msg__Motion__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fs_msgs__msg__Motion);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fs_msgs__msg__Motion * data =
      (fs_msgs__msg__Motion *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fs_msgs__msg__Motion__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fs_msgs__msg__Motion__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fs_msgs__msg__Motion__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
