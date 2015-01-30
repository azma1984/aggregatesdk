
#ifndef ScriptExceptionH
#define ScriptExceptionH

#include "AggreGateException.h"



class ScriptException  : public AggreGateException
{

public:
    ScriptException(const std::string & message);
  //  ScriptException(::java::lang::Throwable* cause);
  //  ScriptException(const std::string & message, ::java::lang::Throwable* cause);
};

#endif
