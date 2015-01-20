#ifndef _RemoteDeviceErrorException_H_
#define _RemoteDeviceErrorException_H_

#include "AggreGateException.h"
#include <string>

class RemoteDeviceErrorException : public AggreGateException
{
public:
    RemoteDeviceErrorException(const std::string& message) : AggreGateException(message) {}
//    RemoteDeviceErrorException(::java::lang::Throwable* cause);
//    RemoteDeviceErrorException(std::string* message, ::java::lang::Throwable* cause);
    RemoteDeviceErrorException(const std::string& message, const std::string& details) : AggreGateException(message, details) {}
};

#endif 