#pragma once
#include "AggreGateException.h"


class PluginException : public AggreGateException
{
public:
//    PluginException(const std::string & message);
//    PluginException(::java::lang::Throwable* cause);
//	PluginException(const std::string & message, ::java::lang::Throwable* cause);

    PluginException(const std::string& message) : AggreGateException(message) {}
    PluginException(const std::string& message, const std::string &details) : AggreGateException(message, details) {}
};
