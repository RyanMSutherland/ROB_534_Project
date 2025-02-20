// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from harvest_interfaces:srv/FinalApproachLinear.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__FINAL_APPROACH_LINEAR__STRUCT_H_
#define HARVEST_INTERFACES__SRV__DETAIL__FINAL_APPROACH_LINEAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/FinalApproachLinear in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__FinalApproachLinear_Request
{
  double distance;
} harvest_interfaces__srv__FinalApproachLinear_Request;

// Struct for a sequence of harvest_interfaces__srv__FinalApproachLinear_Request.
typedef struct harvest_interfaces__srv__FinalApproachLinear_Request__Sequence
{
  harvest_interfaces__srv__FinalApproachLinear_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__FinalApproachLinear_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/FinalApproachLinear in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__FinalApproachLinear_Response
{
  bool success;
} harvest_interfaces__srv__FinalApproachLinear_Response;

// Struct for a sequence of harvest_interfaces__srv__FinalApproachLinear_Response.
typedef struct harvest_interfaces__srv__FinalApproachLinear_Response__Sequence
{
  harvest_interfaces__srv__FinalApproachLinear_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__FinalApproachLinear_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARVEST_INTERFACES__SRV__DETAIL__FINAL_APPROACH_LINEAR__STRUCT_H_
