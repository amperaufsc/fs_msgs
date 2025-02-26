// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fs_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

#ifndef FS_MSGS__MSG__DETAIL__MOTION__BUILDER_HPP_
#define FS_MSGS__MSG__DETAIL__MOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fs_msgs/msg/detail/motion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fs_msgs
{

namespace msg
{

namespace builder
{

class Init_Motion_odom
{
public:
  explicit Init_Motion_odom(::fs_msgs::msg::Motion & msg)
  : msg_(msg)
  {}
  ::fs_msgs::msg::Motion odom(::fs_msgs::msg::Motion::_odom_type arg)
  {
    msg_.odom = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fs_msgs::msg::Motion msg_;
};

class Init_Motion_header
{
public:
  Init_Motion_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Motion_odom header(::fs_msgs::msg::Motion::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Motion_odom(msg_);
  }

private:
  ::fs_msgs::msg::Motion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fs_msgs::msg::Motion>()
{
  return fs_msgs::msg::builder::Init_Motion_header();
}

}  // namespace fs_msgs

#endif  // FS_MSGS__MSG__DETAIL__MOTION__BUILDER_HPP_
