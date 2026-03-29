// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:srv/SetColors.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_COLORS__BUILDER_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_COLORS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_interfaces/srv/detail/set_colors__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetColors_Request_pen_rgb
{
public:
  explicit Init_SetColors_Request_pen_rgb(::turtle_interfaces::srv::SetColors_Request & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::srv::SetColors_Request pen_rgb(::turtle_interfaces::srv::SetColors_Request::_pen_rgb_type arg)
  {
    msg_.pen_rgb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::SetColors_Request msg_;
};

class Init_SetColors_Request_turtle_rgb
{
public:
  Init_SetColors_Request_turtle_rgb()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetColors_Request_pen_rgb turtle_rgb(::turtle_interfaces::srv::SetColors_Request::_turtle_rgb_type arg)
  {
    msg_.turtle_rgb = std::move(arg);
    return Init_SetColors_Request_pen_rgb(msg_);
  }

private:
  ::turtle_interfaces::srv::SetColors_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::SetColors_Request>()
{
  return turtle_interfaces::srv::builder::Init_SetColors_Request_turtle_rgb();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::SetColors_Response>()
{
  return ::turtle_interfaces::srv::SetColors_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_COLORS__BUILDER_HPP_
