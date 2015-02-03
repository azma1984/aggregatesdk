#ifndef ILLEGALARGUMENTEXCEPTION_H
#define ILLEGALARGUMENTEXCEPTION_H

#include "AggreGateException.h"

class IllegalArgumentException : public AggreGateException
{
public:

    IllegalArgumentException(const std::string &message) : AggreGateException(message) {}
    IllegalArgumentException(const std::string &message, const std::string &details) : AggreGateException(message, details) {}
};

#endif // ILLEGALARGUMENTEXCEPTION_H
