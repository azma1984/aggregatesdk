#ifndef ILLEGALSTATEEXCEPTION_H
#define ILLEGALSTATEEXCEPTION_H

#include "AggreGateException.h"

class IllegalStateException : public AggreGateException
{
public:

    IllegalStateException(const std::string &message) : AggreGateException(message) {}
    IllegalStateException(const std::string &message, const std::string &details) : AggreGateException(message, details) {}
};

#endif // ILLEGALSTATEEXCEPTION_H
