// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from harvest_interfaces:srv/UpdateTrellisPosition.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__UPDATE_TRELLIS_POSITION__STRUCT_H_
#define HARVEST_INTERFACES__SRV__DETAIL__UPDATE_TRELLIS_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/UpdateTrellisPosition in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__UpdateTrellisPosition_Request
{
  double x;
  double y;
  double z;
} harvest_interfaces__srv__UpdateTrellisPosition_Request;

// Struct for a sequence of harvest_interfaces__srv__UpdateTrellisPosition_Request.
typedef struct harvest_interfaces__srv__UpdateTrellisPosition_Request__Sequence
{
  harvest_interfaces__srv__UpdateTrellisPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__UpdateTrellisPosition_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/UpdateTrellisPosition in the package harvest_interfaces.
typedef struct harvest_interfaces__srv__UpdateTrellisPosition_Response
{
  bool success;
} harvest_interfaces__srv__UpdateTrellisPosition_Response;

// Struct for a sequence of harvest_interfaces__srv__UpdateTrellisPosition_Response.
typedef struct harvest_interfaces__srv__UpdateTrellisPosition_Response__Sequence
{
  harvest_interfaces__srv__UpdateTrellisPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} harvest_interfaces__srv__UpdateTrellisPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // HARVEST_INTERFACES__SRV__DETAIL__UPDATE_TRELLIS_POSITION__STRUCT_H_
