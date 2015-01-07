// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/EvaluationException.java

#pragma once

//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/AggreGateException.h"



class com::tibbo::aggregate::common::expression::EvaluationException
    : public ::com::tibbo::aggregate::common::AggreGateException
{

public:
    typedef ::com::tibbo::aggregate::common::AggreGateException super;
protected:
    void ctor(std::string* message);
    void ctor(::java::lang::Throwable* cause);
    void ctor(std::string* message, ::java::lang::Throwable* cause);

    // Generated

public:
    EvaluationException(std::string* message);
    EvaluationException(::java::lang::Throwable* cause);
    EvaluationException(std::string* message, ::java::lang::Throwable* cause);
protected:
    EvaluationException(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
