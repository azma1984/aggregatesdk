#pragma once

#include "AggreGateException.h"
#include <string>

class DisconnectionException : public AggreGateException
{
public:
    DisconnectionException(const std::string& message) : AggreGateException(message) {}
    //DisconnectionException(::java::lang::Throwable* cause);
    DisconnectionException(const std::string& message, const std::string& details) : AggreGateException(message, details) {}
};
