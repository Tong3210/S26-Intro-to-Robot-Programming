// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from turtle_interfaces:srv/SetColors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "turtle_interfaces/srv/detail/set_colors__rosidl_typesupport_introspection_c.h"
#include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "turtle_interfaces/srv/detail/set_colors__functions.h"
#include "turtle_interfaces/srv/detail/set_colors__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__SetColors_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__srv__SetColors_Request__init(message_memory);
}

void turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__SetColors_Request_fini_function(void * message_memory)
{
  turtle_interfaces__srv__SetColors_Request__fini(message_memory);
}

size_t turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__size_function__SetColors_Request__turtle_rgb(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__get_const_function__SetColors_Request__turtle_rgb(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__get_function__SetColors_Request__turtle_rgb(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__fetch_function__SetColors_Request__turtle_rgb(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__get_const_function__SetColors_Request__turtle_rgb(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__assign_function__SetColors_Request__turtle_rgb(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__get_function__SetColors_Request__turtle_rgb(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__size_function__SetColors_Request__pen_rgb(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__get_const_function__SetColors_Request__pen_rgb(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__get_function__SetColors_Request__pen_rgb(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__fetch_function__SetColors_Request__pen_rgb(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__get_const_function__SetColors_Request__pen_rgb(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__assign_function__SetColors_Request__pen_rgb(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__get_function__SetColors_Request__pen_rgb(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__SetColors_Request_message_member_array[2] = {
  {
    "turtle_rgb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__srv__SetColors_Request, turtle_rgb),  // bytes offset in struct
    NULL,  // default value
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__size_function__SetColors_Request__turtle_rgb,  // size() function pointer
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__get_const_function__SetColors_Request__turtle_rgb,  // get_const(index) function pointer
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__get_function__SetColors_Request__turtle_rgb,  // get(index) function pointer
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__fetch_function__SetColors_Request__turtle_rgb,  // fetch(index, &value) function pointer
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__assign_function__SetColors_Request__turtle_rgb,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pen_rgb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__srv__SetColors_Request, pen_rgb),  // bytes offset in struct
    NULL,  // default value
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__size_function__SetColors_Request__pen_rgb,  // size() function pointer
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__get_const_function__SetColors_Request__pen_rgb,  // get_const(index) function pointer
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__get_function__SetColors_Request__pen_rgb,  // get(index) function pointer
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__fetch_function__SetColors_Request__pen_rgb,  // fetch(index, &value) function pointer
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__assign_function__SetColors_Request__pen_rgb,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__SetColors_Request_message_members = {
  "turtle_interfaces__srv",  // message namespace
  "SetColors_Request",  // message name
  2,  // number of fields
  sizeof(turtle_interfaces__srv__SetColors_Request),
  turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__SetColors_Request_message_member_array,  // message members
  turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__SetColors_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__SetColors_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__SetColors_Request_message_type_support_handle = {
  0,
  &turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__SetColors_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, SetColors_Request)() {
  if (!turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__SetColors_Request_message_type_support_handle.typesupport_identifier) {
    turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__SetColors_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtle_interfaces__srv__SetColors_Request__rosidl_typesupport_introspection_c__SetColors_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "turtle_interfaces/srv/detail/set_colors__rosidl_typesupport_introspection_c.h"
// already included above
// #include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "turtle_interfaces/srv/detail/set_colors__functions.h"
// already included above
// #include "turtle_interfaces/srv/detail/set_colors__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void turtle_interfaces__srv__SetColors_Response__rosidl_typesupport_introspection_c__SetColors_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  turtle_interfaces__srv__SetColors_Response__init(message_memory);
}

void turtle_interfaces__srv__SetColors_Response__rosidl_typesupport_introspection_c__SetColors_Response_fini_function(void * message_memory)
{
  turtle_interfaces__srv__SetColors_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember turtle_interfaces__srv__SetColors_Response__rosidl_typesupport_introspection_c__SetColors_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces__srv__SetColors_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers turtle_interfaces__srv__SetColors_Response__rosidl_typesupport_introspection_c__SetColors_Response_message_members = {
  "turtle_interfaces__srv",  // message namespace
  "SetColors_Response",  // message name
  1,  // number of fields
  sizeof(turtle_interfaces__srv__SetColors_Response),
  turtle_interfaces__srv__SetColors_Response__rosidl_typesupport_introspection_c__SetColors_Response_message_member_array,  // message members
  turtle_interfaces__srv__SetColors_Response__rosidl_typesupport_introspection_c__SetColors_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  turtle_interfaces__srv__SetColors_Response__rosidl_typesupport_introspection_c__SetColors_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t turtle_interfaces__srv__SetColors_Response__rosidl_typesupport_introspection_c__SetColors_Response_message_type_support_handle = {
  0,
  &turtle_interfaces__srv__SetColors_Response__rosidl_typesupport_introspection_c__SetColors_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, SetColors_Response)() {
  if (!turtle_interfaces__srv__SetColors_Response__rosidl_typesupport_introspection_c__SetColors_Response_message_type_support_handle.typesupport_identifier) {
    turtle_interfaces__srv__SetColors_Response__rosidl_typesupport_introspection_c__SetColors_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &turtle_interfaces__srv__SetColors_Response__rosidl_typesupport_introspection_c__SetColors_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "turtle_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "turtle_interfaces/srv/detail/set_colors__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers turtle_interfaces__srv__detail__set_colors__rosidl_typesupport_introspection_c__SetColors_service_members = {
  "turtle_interfaces__srv",  // service namespace
  "SetColors",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // turtle_interfaces__srv__detail__set_colors__rosidl_typesupport_introspection_c__SetColors_Request_message_type_support_handle,
  NULL  // response message
  // turtle_interfaces__srv__detail__set_colors__rosidl_typesupport_introspection_c__SetColors_Response_message_type_support_handle
};

static rosidl_service_type_support_t turtle_interfaces__srv__detail__set_colors__rosidl_typesupport_introspection_c__SetColors_service_type_support_handle = {
  0,
  &turtle_interfaces__srv__detail__set_colors__rosidl_typesupport_introspection_c__SetColors_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, SetColors_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, SetColors_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_turtle_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, SetColors)() {
  if (!turtle_interfaces__srv__detail__set_colors__rosidl_typesupport_introspection_c__SetColors_service_type_support_handle.typesupport_identifier) {
    turtle_interfaces__srv__detail__set_colors__rosidl_typesupport_introspection_c__SetColors_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)turtle_interfaces__srv__detail__set_colors__rosidl_typesupport_introspection_c__SetColors_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, SetColors_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, turtle_interfaces, srv, SetColors_Response)()->data;
  }

  return &turtle_interfaces__srv__detail__set_colors__rosidl_typesupport_introspection_c__SetColors_service_type_support_handle;
}
