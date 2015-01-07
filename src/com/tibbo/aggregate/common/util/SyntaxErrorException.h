#ifndef _SyntaxErrorException_H_
#define _SyntaxErrorException_H_

#include <AggreGateException.h"

class SyntaxErrorException : public AggreGateException
{
public:
    SyntaxErrorException(const std::string& message) : AggreGateException(message) {}
    SyntaxErrorException(Throwable* cause) : AggreGateException(cause) {}
    SyntaxErrorException(const std::string& message, Throwable* cause) : AggreGateException(message, cause) {}	
};
#endif //_SyntaxErrorException_H_