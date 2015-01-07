// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ContextException.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/AggreGateException.h"



class com::tibbo::aggregate::common::context::ContextException
    : public ::com::tibbo::aggregate::common::AggreGateException
{

public:
    typedef ::com::tibbo::aggregate::common::AggreGateException super;
protected:
    void ctor(std::string* message);
    void ctor(::java::lang::Throwable* cause);
    void ctor(std::string* message, ::java::lang::Throwable* cause);
    void ctor(std::string* message, ::java::lang::Throwable* cause, std::string* details);

    // Generated

public:
    ContextException(std::string* message);
    ContextException(::java::lang::Throwable* cause);
    ContextException(std::string* message, ::java::lang::Throwable* cause);
    ContextException(std::string* message, ::java::lang::Throwable* cause, std::string* details);
protected:
    ContextException(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
