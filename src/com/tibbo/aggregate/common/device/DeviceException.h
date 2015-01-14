#pragma once

#include "AggreGateException.h"


class DeviceException : public AggreGateException
{
public:
    DeviceException(const std::string& message) : AggreGateException(message) {}
//    DeviceException(::java::lang::Throwable* cause);
    DeviceException(const std::string& message, const std::string details) : AggreGateException(message, details) {}
};
