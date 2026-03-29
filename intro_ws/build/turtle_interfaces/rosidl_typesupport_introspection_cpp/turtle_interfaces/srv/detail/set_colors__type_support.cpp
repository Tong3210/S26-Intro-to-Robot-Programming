// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from turtle_interfaces:srv/SetColors.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "turtle_interfaces/srv/detail/set_colors__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtle_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetColors_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtle_interfaces::srv::SetColors_Request(_init);
}

void SetColors_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtle_interfaces::srv::SetColors_Request *>(message_memory);
  typed_message->~SetColors_Request();
}

size_t size_function__SetColors_Request__turtle_rgb(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SetColors_Request__turtle_rgb(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SetColors_Request__turtle_rgb(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetColors_Request__turtle_rgb(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SetColors_Request__turtle_rgb(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SetColors_Request__turtle_rgb(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SetColors_Request__turtle_rgb(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SetColors_Request__pen_rgb(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SetColors_Request__pen_rgb(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SetColors_Request__pen_rgb(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetColors_Request__pen_rgb(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SetColors_Request__pen_rgb(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SetColors_Request__pen_rgb(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SetColors_Request__pen_rgb(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetColors_Request_message_member_array[2] = {
  {
    "turtle_rgb",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::srv::SetColors_Request, turtle_rgb),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetColors_Request__turtle_rgb,  // size() function pointer
    get_const_function__SetColors_Request__turtle_rgb,  // get_const(index) function pointer
    get_function__SetColors_Request__turtle_rgb,  // get(index) function pointer
    fetch_function__SetColors_Request__turtle_rgb,  // fetch(index, &value) function pointer
    assign_function__SetColors_Request__turtle_rgb,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pen_rgb",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::srv::SetColors_Request, pen_rgb),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetColors_Request__pen_rgb,  // size() function pointer
    get_const_function__SetColors_Request__pen_rgb,  // get_const(index) function pointer
    get_function__SetColors_Request__pen_rgb,  // get(index) function pointer
    fetch_function__SetColors_Request__pen_rgb,  // fetch(index, &value) function pointer
    assign_function__SetColors_Request__pen_rgb,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetColors_Request_message_members = {
  "turtle_interfaces::srv",  // message namespace
  "SetColors_Request",  // message name
  2,  // number of fields
  sizeof(turtle_interfaces::srv::SetColors_Request),
  SetColors_Request_message_member_array,  // message members
  SetColors_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetColors_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetColors_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetColors_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace turtle_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_interfaces::srv::SetColors_Request>()
{
  return &::turtle_interfaces::srv::rosidl_typesupport_introspection_cpp::SetColors_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_interfaces, srv, SetColors_Request)() {
  return &::turtle_interfaces::srv::rosidl_typesupport_introspection_cpp::SetColors_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "turtle_interfaces/srv/detail/set_colors__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace turtle_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void SetColors_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) turtle_interfaces::srv::SetColors_Response(_init);
}

void SetColors_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<turtle_interfaces::srv::SetColors_Response *>(message_memory);
  typed_message->~SetColors_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetColors_Response_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(turtle_interfaces::srv::SetColors_Response, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetColors_Response_message_members = {
  "turtle_interfaces::srv",  // message namespace
  "SetColors_Response",  // message name
  1,  // number of fields
  sizeof(turtle_interfaces::srv::SetColors_Response),
  SetColors_Response_message_member_array,  // message members
  SetColors_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetColors_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetColors_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetColors_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace turtle_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtle_interfaces::srv::SetColors_Response>()
{
  return &::turtle_interfaces::srv::rosidl_typesupport_introspection_cpp::SetColors_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_interfaces, srv, SetColors_Response)() {
  return &::turtle_interfaces::srv::rosidl_typesupport_introspection_cpp::SetColors_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "turtle_interfaces/srv/detail/set_colors__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace turtle_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SetColors_service_members = {
  "turtle_interfaces::srv",  // service namespace
  "SetColors",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<turtle_interfaces::srv::SetColors>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SetColors_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetColors_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace turtle_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<turtle_interfaces::srv::SetColors>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::turtle_interfaces::srv::rosidl_typesupport_introspection_cpp::SetColors_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::turtle_interfaces::srv::SetColors_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::turtle_interfaces::srv::SetColors_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtle_interfaces, srv, SetColors)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<turtle_interfaces::srv::SetColors>();
}

#ifdef __cplusplus
}
#endif
