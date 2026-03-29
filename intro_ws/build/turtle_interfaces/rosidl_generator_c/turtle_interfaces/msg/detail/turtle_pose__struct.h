// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtle_interfaces:msg/TurtlePose.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__TURTLE_POSE__STRUCT_H_
#define TURTLE_INTERFACES__MSG__DETAIL__TURTLE_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TurtlePose in the package turtle_interfaces.
typedef struct turtle_interfaces__msg__TurtlePose
{
  float heading;
  float position[2];
} turtle_interfaces__msg__TurtlePose;

// Struct for a sequence of turtle_interfaces__msg__TurtlePose.
typedef struct turtle_interfaces__msg__TurtlePose__Sequence
{
  turtle_interfaces__msg__TurtlePose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtle_interfaces__msg__TurtlePose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLE_INTERFACES__MSG__DETAIL__TURTLE_POSE__STRUCT_H_
