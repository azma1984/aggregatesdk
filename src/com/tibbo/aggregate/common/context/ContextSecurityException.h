#pragma once

#include "context/ContextException.h"


class ContextSecurityException : public ContextException
{
public:
    ContextSecurityException(const std::string & message) : ContextException(message) {}
    //ContextSecurityException(const std::string & message, ::java::lang::Throwable* cause);
};
