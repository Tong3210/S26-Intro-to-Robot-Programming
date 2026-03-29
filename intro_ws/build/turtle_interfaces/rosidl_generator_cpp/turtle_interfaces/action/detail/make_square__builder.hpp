// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:action/MakeSquare.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__ACTION__DETAIL__MAKE_SQUARE__BUILDER_HPP_
#define TURTLE_INTERFACES__ACTION__DETAIL__MAKE_SQUARE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtle_interfaces/action/detail/make_square__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_Goal_square_size
{
public:
  Init_MakeSquare_Goal_square_size()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::action::MakeSquare_Goal square_size(::turtle_interfaces::action::MakeSquare_Goal::_square_size_type arg)
  {
    msg_.square_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::MakeSquare_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::MakeSquare_Goal>()
{
  return turtle_interfaces::action::builder::Init_MakeSquare_Goal_square_size();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_Result_final_pose
{
public:
  Init_MakeSquare_Result_final_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::action::MakeSquare_Result final_pose(::turtle_interfaces::action::MakeSquare_Result::_final_pose_type arg)
  {
    msg_.final_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::MakeSquare_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::MakeSquare_Result>()
{
  return turtle_interfaces::action::builder::Init_MakeSquare_Result_final_pose();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_Feedback_current_pose
{
public:
  Init_MakeSquare_Feedback_current_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::action::MakeSquare_Feedback current_pose(::turtle_interfaces::action::MakeSquare_Feedback::_current_pose_type arg)
  {
    msg_.current_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::MakeSquare_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::MakeSquare_Feedback>()
{
  return turtle_interfaces::action::builder::Init_MakeSquare_Feedback_current_pose();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_SendGoal_Request_goal
{
public:
  explicit Init_MakeSquare_SendGoal_Request_goal(::turtle_interfaces::action::MakeSquare_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::action::MakeSquare_SendGoal_Request goal(::turtle_interfaces::action::MakeSquare_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::MakeSquare_SendGoal_Request msg_;
};

class Init_MakeSquare_SendGoal_Request_goal_id
{
public:
  Init_MakeSquare_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_SendGoal_Request_goal goal_id(::turtle_interfaces::action::MakeSquare_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MakeSquare_SendGoal_Request_goal(msg_);
  }

private:
  ::turtle_interfaces::action::MakeSquare_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::MakeSquare_SendGoal_Request>()
{
  return turtle_interfaces::action::builder::Init_MakeSquare_SendGoal_Request_goal_id();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_SendGoal_Response_stamp
{
public:
  explicit Init_MakeSquare_SendGoal_Response_stamp(::turtle_interfaces::action::MakeSquare_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::action::MakeSquare_SendGoal_Response stamp(::turtle_interfaces::action::MakeSquare_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::MakeSquare_SendGoal_Response msg_;
};

class Init_MakeSquare_SendGoal_Response_accepted
{
public:
  Init_MakeSquare_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_SendGoal_Response_stamp accepted(::turtle_interfaces::action::MakeSquare_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MakeSquare_SendGoal_Response_stamp(msg_);
  }

private:
  ::turtle_interfaces::action::MakeSquare_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::MakeSquare_SendGoal_Response>()
{
  return turtle_interfaces::action::builder::Init_MakeSquare_SendGoal_Response_accepted();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_GetResult_Request_goal_id
{
public:
  Init_MakeSquare_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::action::MakeSquare_GetResult_Request goal_id(::turtle_interfaces::action::MakeSquare_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::MakeSquare_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::MakeSquare_GetResult_Request>()
{
  return turtle_interfaces::action::builder::Init_MakeSquare_GetResult_Request_goal_id();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_GetResult_Response_result
{
public:
  explicit Init_MakeSquare_GetResult_Response_result(::turtle_interfaces::action::MakeSquare_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::action::MakeSquare_GetResult_Response result(::turtle_interfaces::action::MakeSquare_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::MakeSquare_GetResult_Response msg_;
};

class Init_MakeSquare_GetResult_Response_status
{
public:
  Init_MakeSquare_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_GetResult_Response_result status(::turtle_interfaces::action::MakeSquare_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MakeSquare_GetResult_Response_result(msg_);
  }

private:
  ::turtle_interfaces::action::MakeSquare_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::MakeSquare_GetResult_Response>()
{
  return turtle_interfaces::action::builder::Init_MakeSquare_GetResult_Response_status();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace action
{

namespace builder
{

class Init_MakeSquare_FeedbackMessage_feedback
{
public:
  explicit Init_MakeSquare_FeedbackMessage_feedback(::turtle_interfaces::action::MakeSquare_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::turtle_interfaces::action::MakeSquare_FeedbackMessage feedback(::turtle_interfaces::action::MakeSquare_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::action::MakeSquare_FeedbackMessage msg_;
};

class Init_MakeSquare_FeedbackMessage_goal_id
{
public:
  Init_MakeSquare_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakeSquare_FeedbackMessage_feedback goal_id(::turtle_interfaces::action::MakeSquare_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MakeSquare_FeedbackMessage_feedback(msg_);
  }

private:
  ::turtle_interfaces::action::MakeSquare_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::action::MakeSquare_FeedbackMessage>()
{
  return turtle_interfaces::action::builder::Init_MakeSquare_FeedbackMessage_goal_id();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__ACTION__DETAIL__MAKE_SQUARE__BUILDER_HPP_
