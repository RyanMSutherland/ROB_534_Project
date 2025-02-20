// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from harvest_interfaces:srv/FinalApproachLinear.idl
// generated code does not contain a copyright notice

#ifndef HARVEST_INTERFACES__SRV__DETAIL__FINAL_APPROACH_LINEAR__BUILDER_HPP_
#define HARVEST_INTERFACES__SRV__DETAIL__FINAL_APPROACH_LINEAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "harvest_interfaces/srv/detail/final_approach_linear__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_FinalApproachLinear_Request_distance
{
public:
  Init_FinalApproachLinear_Request_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::FinalApproachLinear_Request distance(::harvest_interfaces::srv::FinalApproachLinear_Request::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::FinalApproachLinear_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::FinalApproachLinear_Request>()
{
  return harvest_interfaces::srv::builder::Init_FinalApproachLinear_Request_distance();
}

}  // namespace harvest_interfaces


namespace harvest_interfaces
{

namespace srv
{

namespace builder
{

class Init_FinalApproachLinear_Response_success
{
public:
  Init_FinalApproachLinear_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::harvest_interfaces::srv::FinalApproachLinear_Response success(::harvest_interfaces::srv::FinalApproachLinear_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::harvest_interfaces::srv::FinalApproachLinear_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::harvest_interfaces::srv::FinalApproachLinear_Response>()
{
  return harvest_interfaces::srv::builder::Init_FinalApproachLinear_Response_success();
}

}  // namespace harvest_interfaces

#endif  // HARVEST_INTERFACES__SRV__DETAIL__FINAL_APPROACH_LINEAR__BUILDER_HPP_
