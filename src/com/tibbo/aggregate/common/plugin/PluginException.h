#ifndef _PluginDirector_H_
#define _PluginDirector_H_

#include "common/AggreGateException.h"



class PluginException : public AggreGateException
{
public:
    PluginException(const std::string & message);
    PluginException(::java::lang::Throwable* cause);
	PluginException(const std::string & message, ::java::lang::Throwable* cause);
};
#endif