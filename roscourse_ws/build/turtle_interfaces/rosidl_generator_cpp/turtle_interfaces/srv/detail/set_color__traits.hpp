// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:srv/SetColor.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_COLOR__TRAITS_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_COLOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_interfaces/srv/detail/set_color__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetColor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetColor_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::srv::SetColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::srv::SetColor_Request & msg)
{
  return turtle_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::srv::SetColor_Request>()
{
  return "turtle_interfaces::srv::SetColor_Request";
}

template<>
inline const char * name<turtle_interfaces::srv::SetColor_Request>()
{
  return "turtle_interfaces/srv/SetColor_Request";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::SetColor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::SetColor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_interfaces::srv::SetColor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtle_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetColor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: ret
  {
    out << "ret: ";
    rosidl_generator_traits::value_to_yaml(msg.ret, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ret
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ret: ";
    rosidl_generator_traits::value_to_yaml(msg.ret, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetColor_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::srv::SetColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::srv::SetColor_Response & msg)
{
  return turtle_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::srv::SetColor_Response>()
{
  return "turtle_interfaces::srv::SetColor_Response";
}

template<>
inline const char * name<turtle_interfaces::srv::SetColor_Response>()
{
  return "turtle_interfaces/srv/SetColor_Response";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::SetColor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::SetColor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_interfaces::srv::SetColor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::SetColor>()
{
  return "turtle_interfaces::srv::SetColor";
}

template<>
inline const char * name<turtle_interfaces::srv::SetColor>()
{
  return "turtle_interfaces/srv/SetColor";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::SetColor>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_interfaces::srv::SetColor_Request>::value &&
    has_fixed_size<turtle_interfaces::srv::SetColor_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_interfaces::srv::SetColor>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_interfaces::srv::SetColor_Request>::value &&
    has_bounded_size<turtle_interfaces::srv::SetColor_Response>::value
  >
{
};

template<>
struct is_service<turtle_interfaces::srv::SetColor>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_interfaces::srv::SetColor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_interfaces::srv::SetColor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_COLOR__TRAITS_HPP_
