// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fs_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

#ifndef FS_MSGS__MSG__DETAIL__MOTION__STRUCT_HPP_
#define FS_MSGS__MSG__DETAIL__MOTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'odom'
#include "nav_msgs/msg/detail/odometry__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fs_msgs__msg__Motion __attribute__((deprecated))
#else
# define DEPRECATED__fs_msgs__msg__Motion __declspec(deprecated)
#endif

namespace fs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Motion_
{
  using Type = Motion_<ContainerAllocator>;

  explicit Motion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit Motion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _odom_type =
    std::vector<nav_msgs::msg::Odometry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav_msgs::msg::Odometry_<ContainerAllocator>>>;
  _odom_type odom;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__odom(
    const std::vector<nav_msgs::msg::Odometry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<nav_msgs::msg::Odometry_<ContainerAllocator>>> & _arg)
  {
    this->odom = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fs_msgs::msg::Motion_<ContainerAllocator> *;
  using ConstRawPtr =
    const fs_msgs::msg::Motion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fs_msgs::msg::Motion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fs_msgs::msg::Motion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fs_msgs::msg::Motion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fs_msgs::msg::Motion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fs_msgs::msg::Motion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fs_msgs::msg::Motion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fs_msgs::msg::Motion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fs_msgs::msg::Motion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fs_msgs__msg__Motion
    std::shared_ptr<fs_msgs::msg::Motion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fs_msgs__msg__Motion
    std::shared_ptr<fs_msgs::msg::Motion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Motion_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->odom != other.odom) {
      return false;
    }
    return true;
  }
  bool operator!=(const Motion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Motion_

// alias to use template instance with default allocator
using Motion =
  fs_msgs::msg::Motion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fs_msgs

#endif  // FS_MSGS__MSG__DETAIL__MOTION__STRUCT_HPP_
