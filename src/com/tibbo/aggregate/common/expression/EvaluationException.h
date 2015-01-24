#pragma once

#include "AggreGateException.h"


class EvaluationException : public AggreGateException
{
public:
    EvaluationException(const std::string & message) : AggreGateException(message) {}
//    EvaluationException(::java::lang::Throwable* cause);
    EvaluationException(const std::string & message, const std::string & details) : AggreGateException(message, details) {}
};
