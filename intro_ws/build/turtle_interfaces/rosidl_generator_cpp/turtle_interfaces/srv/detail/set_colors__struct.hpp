// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from turtle_interfaces:srv/SetColors.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_COLORS__STRUCT_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_COLORS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__srv__SetColors_Request __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__srv__SetColors_Request __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetColors_Request_
{
  using Type = SetColors_Request_<ContainerAllocator>;

  explicit SetColors_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->turtle_rgb.begin(), this->turtle_rgb.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->pen_rgb.begin(), this->pen_rgb.end(), 0.0f);
    }
  }

  explicit SetColors_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : turtle_rgb(_alloc),
    pen_rgb(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 3>::iterator, float>(this->turtle_rgb.begin(), this->turtle_rgb.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->pen_rgb.begin(), this->pen_rgb.end(), 0.0f);
    }
  }

  // field types and members
  using _turtle_rgb_type =
    std::array<float, 3>;
  _turtle_rgb_type turtle_rgb;
  using _pen_rgb_type =
    std::array<float, 3>;
  _pen_rgb_type pen_rgb;

  // setters for named parameter idiom
  Type & set__turtle_rgb(
    const std::array<float, 3> & _arg)
  {
    this->turtle_rgb = _arg;
    return *this;
  }
  Type & set__pen_rgb(
    const std::array<float, 3> & _arg)
  {
    this->pen_rgb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::srv::SetColors_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::srv::SetColors_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::srv::SetColors_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::srv::SetColors_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::srv::SetColors_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::srv::SetColors_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::srv::SetColors_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::srv::SetColors_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::srv::SetColors_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::srv::SetColors_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__srv__SetColors_Request
    std::shared_ptr<turtle_interfaces::srv::SetColors_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__srv__SetColors_Request
    std::shared_ptr<turtle_interfaces::srv::SetColors_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetColors_Request_ & other) const
  {
    if (this->turtle_rgb != other.turtle_rgb) {
      return false;
    }
    if (this->pen_rgb != other.pen_rgb) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetColors_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetColors_Request_

// alias to use template instance with default allocator
using SetColors_Request =
  turtle_interfaces::srv::SetColors_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_interfaces


#ifndef _WIN32
# define DEPRECATED__turtle_interfaces__srv__SetColors_Response __attribute__((deprecated))
#else
# define DEPRECATED__turtle_interfaces__srv__SetColors_Response __declspec(deprecated)
#endif

namespace turtle_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetColors_Response_
{
  using Type = SetColors_Response_<ContainerAllocator>;

  explicit SetColors_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SetColors_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    turtle_interfaces::srv::SetColors_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const turtle_interfaces::srv::SetColors_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<turtle_interfaces::srv::SetColors_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<turtle_interfaces::srv::SetColors_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::srv::SetColors_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::srv::SetColors_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      turtle_interfaces::srv::SetColors_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<turtle_interfaces::srv::SetColors_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<turtle_interfaces::srv::SetColors_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<turtle_interfaces::srv::SetColors_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__turtle_interfaces__srv__SetColors_Response
    std::shared_ptr<turtle_interfaces::srv::SetColors_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__turtle_interfaces__srv__SetColors_Response
    std::shared_ptr<turtle_interfaces::srv::SetColors_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetColors_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetColors_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetColors_Response_

// alias to use template instance with default allocator
using SetColors_Response =
  turtle_interfaces::srv::SetColors_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace turtle_interfaces

namespace turtle_interfaces
{

namespace srv
{

struct SetColors
{
  using Request = turtle_interfaces::srv::SetColors_Request;
  using Response = turtle_interfaces::srv::SetColors_Response;
};

}  // namespace srv

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_COLORS__STRUCT_HPP_
