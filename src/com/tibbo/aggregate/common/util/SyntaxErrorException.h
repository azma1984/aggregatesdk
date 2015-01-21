#pragma once

#include "AggreGateException.h"

class SyntaxErrorException : public AggreGateException
{
public:
	//TODO: Throwable
    SyntaxErrorException(const std::string& message) : AggreGateException(message) {}
    //SyntaxErrorException(Throwable* cause) : AggreGateException(cause) {}
    SyntaxErrorException(const std::string& message, const std::string& details) : AggreGateException(message, details) {}
};
