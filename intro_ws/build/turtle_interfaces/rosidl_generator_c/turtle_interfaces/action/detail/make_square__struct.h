// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:action/MakeSquare.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__ACTION__DETAIL__MAKE_SQUARE__STRUCT_H_
#define TURTLE_INTERFACES__ACTION__DETAIL__MAKE_SQUARE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MakeSquare in the package turtle_interfaces.
typedef struct turtle_interfaces__action__MakeSquare_Goal
{
  float square_size;
} turtle_interfaces__action__MakeSquare_Goal;

// Struct for a sequence of turtle_interfaces__action__MakeSquare_Goal.
typedef struct turtle_interfaces__action__MakeSquare_Goal__Sequence
{
  turtle_interfaces__action__MakeSquare_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__MakeSquare_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'final_pose'
#include "turtle_interfaces/msg/detail/turtle_pose__struct.h"

/// Struct defined in action/MakeSquare in the package turtle_interfaces.
typedef struct turtle_interfaces__action__MakeSquare_Result
{
  turtle_interfaces__msg__TurtlePose final_pose;
} turtle_interfaces__action__MakeSquare_Result;

// Struct for a sequence of turtle_interfaces__action__MakeSquare_Result.
typedef struct turtle_interfaces__action__MakeSquare_Result__Sequence
{
  turtle_interfaces__action__MakeSquare_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__MakeSquare_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_pose'
// already included above
// #include "turtle_interfaces/msg/detail/turtle_pose__struct.h"

/// Struct defined in action/MakeSquare in the package turtle_interfaces.
typedef struct turtle_interfaces__action__MakeSquare_Feedback
{
  turtle_interfaces__msg__TurtlePose current_pose;
} turtle_interfaces__action__MakeSquare_Feedback;

// Struct for a sequence of turtle_interfaces__action__MakeSquare_Feedback.
typedef struct turtle_interfaces__action__MakeSquare_Feedback__Sequence
{
  turtle_interfaces__action__MakeSquare_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__MakeSquare_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "turtle_interfaces/action/detail/make_square__struct.h"

/// Struct defined in action/MakeSquare in the package turtle_interfaces.
typedef struct turtle_interfaces__action__MakeSquare_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtle_interfaces__action__MakeSquare_Goal goal;
} turtle_interfaces__action__MakeSquare_SendGoal_Request;

// Struct for a sequence of turtle_interfaces__action__MakeSquare_SendGoal_Request.
typedef struct turtle_interfaces__action__MakeSquare_SendGoal_Request__Sequence
{
  turtle_interfaces__action__MakeSquare_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__MakeSquare_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MakeSquare in the package turtle_interfaces.
typedef struct turtle_interfaces__action__MakeSquare_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} turtle_interfaces__action__MakeSquare_SendGoal_Response;

// Struct for a sequence of turtle_interfaces__action__MakeSquare_SendGoal_Response.
typedef struct turtle_interfaces__action__MakeSquare_SendGoal_Response__Sequence
{
  turtle_interfaces__action__MakeSquare_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__MakeSquare_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MakeSquare in the package turtle_interfaces.
typedef struct turtle_interfaces__action__MakeSquare_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} turtle_interfaces__action__MakeSquare_GetResult_Request;

// Struct for a sequence of turtle_interfaces__action__MakeSquare_GetResult_Request.
typedef struct turtle_interfaces__action__MakeSquare_GetResult_Request__Sequence
{
  turtle_interfaces__action__MakeSquare_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__MakeSquare_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "turtle_interfaces/action/detail/make_square__struct.h"

/// Struct defined in action/MakeSquare in the package turtle_interfaces.
typedef struct turtle_interfaces__action__MakeSquare_GetResult_Response
{
  int8_t status;
  turtle_interfaces__action__MakeSquare_Result result;
} turtle_interfaces__action__MakeSquare_GetResult_Response;

// Struct for a sequence of turtle_interfaces__action__MakeSquare_GetResult_Response.
typedef struct turtle_interfaces__action__MakeSquare_GetResult_Response__Sequence
{
  turtle_interfaces__action__MakeSquare_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__MakeSquare_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "turtle_interfaces/action/detail/make_square__struct.h"

/// Struct defined in action/MakeSquare in the package turtle_interfaces.
typedef struct turtle_interfaces__action__MakeSquare_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  turtle_interfaces__action__MakeSquare_Feedback feedback;
} turtle_interfaces__action__MakeSquare_FeedbackMessage;

// Struct for a sequence of turtle_interfaces__action__MakeSquare_FeedbackMessage.
typedef struct turtle_interfaces__action__MakeSquare_FeedbackMessage__Sequence
{
  turtle_interfaces__action__MakeSquare_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__action__MakeSquare_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__ACTION__DETAIL__MAKE_SQUARE__STRUCT_H_
