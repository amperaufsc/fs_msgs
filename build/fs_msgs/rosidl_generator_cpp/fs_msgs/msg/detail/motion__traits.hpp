// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fs_msgs:msg/Motion.idl
// generated code does not contain a copyright notice

#ifndef FS_MSGS__MSG__DETAIL__MOTION__TRAITS_HPP_
#define FS_MSGS__MSG__DETAIL__MOTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fs_msgs/msg/detail/motion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'odom'
#include "nav_msgs/msg/detail/odometry__traits.hpp"

namespace fs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Motion & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: odom
  {
    if (msg.odom.size() == 0) {
      out << "odom: []";
    } else {
      out << "odom: [";
      size_t pending_items = msg.odom.size();
      for (auto item : msg.odom) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Motion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: odom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.odom.size() == 0) {
      out << "odom: []\n";
    } else {
      out << "odom:\n";
      for (auto item : msg.odom) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Motion & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace fs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use fs_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fs_msgs::msg::Motion & msg,
  std::ostream & out, size_t indentation = 0)
{
  fs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const fs_msgs::msg::Motion & msg)
{
  return fs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fs_msgs::msg::Motion>()
{
  return "fs_msgs::msg::Motion";
}

template<>
inline const char * name<fs_msgs::msg::Motion>()
{
  return "fs_msgs/msg/Motion";
}

template<>
struct has_fixed_size<fs_msgs::msg::Motion>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fs_msgs::msg::Motion>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fs_msgs::msg::Motion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FS_MSGS__MSG__DETAIL__MOTION__TRAITS_HPP_
