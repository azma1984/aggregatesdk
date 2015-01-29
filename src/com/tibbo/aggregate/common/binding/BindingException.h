#ifndef BindingExceptionH
#define BindingExceptionH

#include "AggreGateException.h"
#include <string>

class BindingException : public AggreGateException
{
public:
    BindingException(const std::string & message) : AggreGateException(message) {}
    //BindingException(::java::lang::Throwable* cause);
	BindingException(const std::string & message, const std::string & details) : AggreGateException(message, details)
	{

    }
};

#endif
