// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fs_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

#ifndef FS_MSGS__MSG__DETAIL__MOTION__STRUCT_H_
#define FS_MSGS__MSG__DETAIL__MOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'odom'
#include "nav_msgs/msg/detail/odometry__struct.h"

/// Struct defined in msg/Motion in the package fs_msgs.
typedef struct fs_msgs__msg__Motion
{
  std_msgs__msg__Header header;
  nav_msgs__msg__Odometry__Sequence odom;
} fs_msgs__msg__Motion;

// Struct for a sequence of fs_msgs__msg__Motion.
typedef struct fs_msgs__msg__Motion__Sequence
{
  fs_msgs__msg__Motion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fs_msgs__msg__Motion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FS_MSGS__MSG__DETAIL__MOTION__STRUCT_H_
