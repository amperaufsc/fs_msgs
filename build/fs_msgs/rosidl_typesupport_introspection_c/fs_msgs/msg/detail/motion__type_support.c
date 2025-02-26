// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fs_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fs_msgs/msg/detail/motion__rosidl_typesupport_introspection_c.h"
#include "fs_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fs_msgs/msg/detail/motion__functions.h"
#include "fs_msgs/msg/detail/motion__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `odom`
#include "nav_msgs/msg/odometry.h"
// Member `odom`
#include "nav_msgs/msg/detail/odometry__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fs_msgs__msg__Motion__init(message_memory);
}

void fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_fini_function(void * message_memory)
{
  fs_msgs__msg__Motion__fini(message_memory);
}

size_t fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__size_function__Motion__odom(
  const void * untyped_member)
{
  const nav_msgs__msg__Odometry__Sequence * member =
    (const nav_msgs__msg__Odometry__Sequence *)(untyped_member);
  return member->size;
}

const void * fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_const_function__Motion__odom(
  const void * untyped_member, size_t index)
{
  const nav_msgs__msg__Odometry__Sequence * member =
    (const nav_msgs__msg__Odometry__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_function__Motion__odom(
  void * untyped_member, size_t index)
{
  nav_msgs__msg__Odometry__Sequence * member =
    (nav_msgs__msg__Odometry__Sequence *)(untyped_member);
  return &member->data[index];
}

void fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__fetch_function__Motion__odom(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const nav_msgs__msg__Odometry * item =
    ((const nav_msgs__msg__Odometry *)
    fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_const_function__Motion__odom(untyped_member, index));
  nav_msgs__msg__Odometry * value =
    (nav_msgs__msg__Odometry *)(untyped_value);
  *value = *item;
}

void fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__assign_function__Motion__odom(
  void * untyped_member, size_t index, const void * untyped_value)
{
  nav_msgs__msg__Odometry * item =
    ((nav_msgs__msg__Odometry *)
    fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_function__Motion__odom(untyped_member, index));
  const nav_msgs__msg__Odometry * value =
    (const nav_msgs__msg__Odometry *)(untyped_value);
  *item = *value;
}

bool fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__resize_function__Motion__odom(
  void * untyped_member, size_t size)
{
  nav_msgs__msg__Odometry__Sequence * member =
    (nav_msgs__msg__Odometry__Sequence *)(untyped_member);
  nav_msgs__msg__Odometry__Sequence__fini(member);
  return nav_msgs__msg__Odometry__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fs_msgs__msg__Motion, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fs_msgs__msg__Motion, odom),  // bytes offset in struct
    NULL,  // default value
    fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__size_function__Motion__odom,  // size() function pointer
    fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_const_function__Motion__odom,  // get_const(index) function pointer
    fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__get_function__Motion__odom,  // get(index) function pointer
    fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__fetch_function__Motion__odom,  // fetch(index, &value) function pointer
    fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__assign_function__Motion__odom,  // assign(index, value) function pointer
    fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__resize_function__Motion__odom  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_members = {
  "fs_msgs__msg",  // message namespace
  "Motion",  // message name
  2,  // number of fields
  sizeof(fs_msgs__msg__Motion),
  fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_member_array,  // message members
  fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_init_function,  // function to initialize message memory (memory has to be allocated)
  fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_type_support_handle = {
  0,
  &fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fs_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fs_msgs, msg, Motion)() {
  fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Odometry)();
  if (!fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_type_support_handle.typesupport_identifier) {
    fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fs_msgs__msg__Motion__rosidl_typesupport_introspection_c__Motion_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
