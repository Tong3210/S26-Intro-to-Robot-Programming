// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:action/MakeSquare.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__ACTION__DETAIL__MAKE_SQUARE__TRAITS_HPP_
#define TURTLE_INTERFACES__ACTION__DETAIL__MAKE_SQUARE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_interfaces/action/detail/make_square__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: square_size
  {
    out << "square_size: ";
    rosidl_generator_traits::value_to_yaml(msg.square_size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: square_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "square_size: ";
    rosidl_generator_traits::value_to_yaml(msg.square_size, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::action::MakeSquare_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::action::MakeSquare_Goal & msg)
{
  return turtle_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::action::MakeSquare_Goal>()
{
  return "turtle_interfaces::action::MakeSquare_Goal";
}

template<>
inline const char * name<turtle_interfaces::action::MakeSquare_Goal>()
{
  return "turtle_interfaces/action/MakeSquare_Goal";
}

template<>
struct has_fixed_size<turtle_interfaces::action::MakeSquare_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_interfaces::action::MakeSquare_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_interfaces::action::MakeSquare_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'final_pose'
#include "turtle_interfaces/msg/detail/turtle_pose__traits.hpp"

namespace turtle_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: final_pose
  {
    out << "final_pose: ";
    to_flow_style_yaml(msg.final_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: final_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "final_pose:\n";
    to_block_style_yaml(msg.final_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::action::MakeSquare_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::action::MakeSquare_Result & msg)
{
  return turtle_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::action::MakeSquare_Result>()
{
  return "turtle_interfaces::action::MakeSquare_Result";
}

template<>
inline const char * name<turtle_interfaces::action::MakeSquare_Result>()
{
  return "turtle_interfaces/action/MakeSquare_Result";
}

template<>
struct has_fixed_size<turtle_interfaces::action::MakeSquare_Result>
  : std::integral_constant<bool, has_fixed_size<turtle_interfaces::msg::TurtlePose>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::action::MakeSquare_Result>
  : std::integral_constant<bool, has_bounded_size<turtle_interfaces::msg::TurtlePose>::value> {};

template<>
struct is_message<turtle_interfaces::action::MakeSquare_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'current_pose'
// already included above
// #include "turtle_interfaces/msg/detail/turtle_pose__traits.hpp"

namespace turtle_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_pose
  {
    out << "current_pose: ";
    to_flow_style_yaml(msg.current_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_pose:\n";
    to_block_style_yaml(msg.current_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::action::MakeSquare_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::action::MakeSquare_Feedback & msg)
{
  return turtle_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::action::MakeSquare_Feedback>()
{
  return "turtle_interfaces::action::MakeSquare_Feedback";
}

template<>
inline const char * name<turtle_interfaces::action::MakeSquare_Feedback>()
{
  return "turtle_interfaces/action/MakeSquare_Feedback";
}

template<>
struct has_fixed_size<turtle_interfaces::action::MakeSquare_Feedback>
  : std::integral_constant<bool, has_fixed_size<turtle_interfaces::msg::TurtlePose>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::action::MakeSquare_Feedback>
  : std::integral_constant<bool, has_bounded_size<turtle_interfaces::msg::TurtlePose>::value> {};

template<>
struct is_message<turtle_interfaces::action::MakeSquare_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "turtle_interfaces/action/detail/make_square__traits.hpp"

namespace turtle_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::action::MakeSquare_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::action::MakeSquare_SendGoal_Request & msg)
{
  return turtle_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::action::MakeSquare_SendGoal_Request>()
{
  return "turtle_interfaces::action::MakeSquare_SendGoal_Request";
}

template<>
inline const char * name<turtle_interfaces::action::MakeSquare_SendGoal_Request>()
{
  return "turtle_interfaces/action/MakeSquare_SendGoal_Request";
}

template<>
struct has_fixed_size<turtle_interfaces::action::MakeSquare_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<turtle_interfaces::action::MakeSquare_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::action::MakeSquare_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<turtle_interfaces::action::MakeSquare_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtle_interfaces::action::MakeSquare_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace turtle_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::action::MakeSquare_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::action::MakeSquare_SendGoal_Response & msg)
{
  return turtle_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::action::MakeSquare_SendGoal_Response>()
{
  return "turtle_interfaces::action::MakeSquare_SendGoal_Response";
}

template<>
inline const char * name<turtle_interfaces::action::MakeSquare_SendGoal_Response>()
{
  return "turtle_interfaces/action/MakeSquare_SendGoal_Response";
}

template<>
struct has_fixed_size<turtle_interfaces::action::MakeSquare_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::action::MakeSquare_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<turtle_interfaces::action::MakeSquare_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::action::MakeSquare_SendGoal>()
{
  return "turtle_interfaces::action::MakeSquare_SendGoal";
}

template<>
inline const char * name<turtle_interfaces::action::MakeSquare_SendGoal>()
{
  return "turtle_interfaces/action/MakeSquare_SendGoal";
}

template<>
struct has_fixed_size<turtle_interfaces::action::MakeSquare_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_interfaces::action::MakeSquare_SendGoal_Request>::value &&
    has_fixed_size<turtle_interfaces::action::MakeSquare_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_interfaces::action::MakeSquare_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_interfaces::action::MakeSquare_SendGoal_Request>::value &&
    has_bounded_size<turtle_interfaces::action::MakeSquare_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<turtle_interfaces::action::MakeSquare_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_interfaces::action::MakeSquare_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_interfaces::action::MakeSquare_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace turtle_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::action::MakeSquare_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::action::MakeSquare_GetResult_Request & msg)
{
  return turtle_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::action::MakeSquare_GetResult_Request>()
{
  return "turtle_interfaces::action::MakeSquare_GetResult_Request";
}

template<>
inline const char * name<turtle_interfaces::action::MakeSquare_GetResult_Request>()
{
  return "turtle_interfaces/action/MakeSquare_GetResult_Request";
}

template<>
struct has_fixed_size<turtle_interfaces::action::MakeSquare_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::action::MakeSquare_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtle_interfaces::action::MakeSquare_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "turtle_interfaces/action/detail/make_square__traits.hpp"

namespace turtle_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::action::MakeSquare_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::action::MakeSquare_GetResult_Response & msg)
{
  return turtle_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::action::MakeSquare_GetResult_Response>()
{
  return "turtle_interfaces::action::MakeSquare_GetResult_Response";
}

template<>
inline const char * name<turtle_interfaces::action::MakeSquare_GetResult_Response>()
{
  return "turtle_interfaces/action/MakeSquare_GetResult_Response";
}

template<>
struct has_fixed_size<turtle_interfaces::action::MakeSquare_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<turtle_interfaces::action::MakeSquare_Result>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::action::MakeSquare_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<turtle_interfaces::action::MakeSquare_Result>::value> {};

template<>
struct is_message<turtle_interfaces::action::MakeSquare_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::action::MakeSquare_GetResult>()
{
  return "turtle_interfaces::action::MakeSquare_GetResult";
}

template<>
inline const char * name<turtle_interfaces::action::MakeSquare_GetResult>()
{
  return "turtle_interfaces/action/MakeSquare_GetResult";
}

template<>
struct has_fixed_size<turtle_interfaces::action::MakeSquare_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_interfaces::action::MakeSquare_GetResult_Request>::value &&
    has_fixed_size<turtle_interfaces::action::MakeSquare_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_interfaces::action::MakeSquare_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_interfaces::action::MakeSquare_GetResult_Request>::value &&
    has_bounded_size<turtle_interfaces::action::MakeSquare_GetResult_Response>::value
  >
{
};

template<>
struct is_service<turtle_interfaces::action::MakeSquare_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_interfaces::action::MakeSquare_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_interfaces::action::MakeSquare_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "turtle_interfaces/action/detail/make_square__traits.hpp"

namespace turtle_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MakeSquare_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MakeSquare_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MakeSquare_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::action::MakeSquare_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::action::MakeSquare_FeedbackMessage & msg)
{
  return turtle_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::action::MakeSquare_FeedbackMessage>()
{
  return "turtle_interfaces::action::MakeSquare_FeedbackMessage";
}

template<>
inline const char * name<turtle_interfaces::action::MakeSquare_FeedbackMessage>()
{
  return "turtle_interfaces/action/MakeSquare_FeedbackMessage";
}

template<>
struct has_fixed_size<turtle_interfaces::action::MakeSquare_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<turtle_interfaces::action::MakeSquare_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::action::MakeSquare_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<turtle_interfaces::action::MakeSquare_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtle_interfaces::action::MakeSquare_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<turtle_interfaces::action::MakeSquare>
  : std::true_type
{
};

template<>
struct is_action_goal<turtle_interfaces::action::MakeSquare_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<turtle_interfaces::action::MakeSquare_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<turtle_interfaces::action::MakeSquare_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TURTLE_INTERFACES__ACTION__DETAIL__MAKE_SQUARE__TRAITS_HPP_
