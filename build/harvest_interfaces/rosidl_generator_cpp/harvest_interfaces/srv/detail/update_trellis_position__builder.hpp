// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from harvest_interfaces:srv/UpdateTrellisPosition.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__UPDATE_TRELLIS_POSITION__BUILDER_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__UPDATE_TRELLIS_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "harvest_interfaces/srv/detail/update_trellis_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_UpdateTrellisPosition_Request_z
{
public:
  explicit Init_UpdateTrellisPosition_Request_z(::harvest_interfaces::srv::UpdateTrellisPosition_Request & msg)
  : msg_(msg)
  {}
  ::harvest_interfaces::srv::UpdateTrellisPosition_Request z(::harvest_interfaces::srv::UpdateTrellisPosition_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::UpdateTrellisPosition_Request msg_;
};

class Init_UpdateTrellisPosition_Request_y
{
public:
  explicit Init_UpdateTrellisPosition_Request_y(::harvest_interfaces::srv::UpdateTrellisPosition_Request & msg)
  : msg_(msg)
  {}
  Init_UpdateTrellisPosition_Request_z y(::harvest_interfaces::srv::UpdateTrellisPosition_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_UpdateTrellisPosition_Request_z(msg_);
  }

private:
  ::harvest_interfaces::srv::UpdateTrellisPosition_Request msg_;
};

class Init_UpdateTrellisPosition_Request_x
{
public:
  Init_UpdateTrellisPosition_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UpdateTrellisPosition_Request_y x(::harvest_interfaces::srv::UpdateTrellisPosition_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_UpdateTrellisPosition_Request_y(msg_);
  }

private:
  ::harvest_interfaces::srv::UpdateTrellisPosition_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::UpdateTrellisPosition_Request>()
{
  return harvest_interfaces::srv::builder::Init_UpdateTrellisPosition_Request_x();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_UpdateTrellisPosition_Response_success
{
public:
  Init_UpdateTrellisPosition_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::UpdateTrellisPosition_Response success(::harvest_interfaces::srv::UpdateTrellisPosition_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::UpdateTrellisPosition_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::UpdateTrellisPosition_Response>()
{
  return harvest_interfaces::srv::builder::Init_UpdateTrellisPosition_Response_success();
}

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__UPDATE_TRELLIS_POSITION__BUILDER_HPP_
