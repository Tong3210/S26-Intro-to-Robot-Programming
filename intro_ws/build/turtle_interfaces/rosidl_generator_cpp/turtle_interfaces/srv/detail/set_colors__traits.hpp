// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:srv/SetColors.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_COLORS__TRAITS_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_COLORS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_interfaces/srv/detail/set_colors__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetColors_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: turtle_rgb
  {
    if (msg.turtle_rgb.size() == 0) {
      out << "turtle_rgb: []";
    } else {
      out << "turtle_rgb: [";
      size_t pending_items = msg.turtle_rgb.size();
      for (auto item : msg.turtle_rgb) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pen_rgb
  {
    if (msg.pen_rgb.size() == 0) {
      out << "pen_rgb: []";
    } else {
      out << "pen_rgb: [";
      size_t pending_items = msg.pen_rgb.size();
      for (auto item : msg.pen_rgb) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SetColors_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turtle_rgb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.turtle_rgb.size() == 0) {
      out << "turtle_rgb: []\n";
    } else {
      out << "turtle_rgb:\n";
      for (auto item : msg.turtle_rgb) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: pen_rgb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pen_rgb.size() == 0) {
      out << "pen_rgb: []\n";
    } else {
      out << "pen_rgb:\n";
      for (auto item : msg.pen_rgb) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetColors_Request & msg, bool use_flow_style = false)
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
  const turtle_interfaces::srv::SetColors_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::srv::SetColors_Request & msg)
{
  return turtle_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::srv::SetColors_Request>()
{
  return "turtle_interfaces::srv::SetColors_Request";
}

template<>
inline const char * name<turtle_interfaces::srv::SetColors_Request>()
{
  return "turtle_interfaces/srv/SetColors_Request";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::SetColors_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::SetColors_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_interfaces::srv::SetColors_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtle_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetColors_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetColors_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetColors_Response & msg, bool use_flow_style = false)
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
  const turtle_interfaces::srv::SetColors_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::srv::SetColors_Response & msg)
{
  return turtle_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::srv::SetColors_Response>()
{
  return "turtle_interfaces::srv::SetColors_Response";
}

template<>
inline const char * name<turtle_interfaces::srv::SetColors_Response>()
{
  return "turtle_interfaces/srv/SetColors_Response";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::SetColors_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::SetColors_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_interfaces::srv::SetColors_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::SetColors>()
{
  return "turtle_interfaces::srv::SetColors";
}

template<>
inline const char * name<turtle_interfaces::srv::SetColors>()
{
  return "turtle_interfaces/srv/SetColors";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::SetColors>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_interfaces::srv::SetColors_Request>::value &&
    has_fixed_size<turtle_interfaces::srv::SetColors_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_interfaces::srv::SetColors>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_interfaces::srv::SetColors_Request>::value &&
    has_bounded_size<turtle_interfaces::srv::SetColors_Response>::value
  >
{
};

template<>
struct is_service<turtle_interfaces::srv::SetColors>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_interfaces::srv::SetColors_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_interfaces::srv::SetColors_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_COLORS__TRAITS_HPP_
