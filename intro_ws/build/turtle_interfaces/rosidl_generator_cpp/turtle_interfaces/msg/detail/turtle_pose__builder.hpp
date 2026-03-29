// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:msg/TurtlePose.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__TURTLE_POSE__BUILDER_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__TURTLE_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_interfaces/msg/detail/turtle_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_interfaces
{

namespace msg
{

namespace builder
{

class Init_TurtlePose_position
{
public:
  explicit Init_TurtlePose_position(::turtle_interfaces::msg::TurtlePose & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::msg::TurtlePose position(::turtle_interfaces::msg::TurtlePose::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::msg::TurtlePose msg_;
};

class Init_TurtlePose_heading
{
public:
  Init_TurtlePose_heading()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TurtlePose_position heading(::turtle_interfaces::msg::TurtlePose::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_TurtlePose_position(msg_);
  }

private:
  ::turtle_interfaces::msg::TurtlePose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::msg::TurtlePose>()
{
  return turtle_interfaces::msg::builder::Init_TurtlePose_heading();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__MSG__DETAIL__TURTLE_POSE__BUILDER_HPP_
