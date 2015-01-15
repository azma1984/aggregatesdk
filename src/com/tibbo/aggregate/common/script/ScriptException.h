// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/script/ScriptException.java

#pragma once

#include <com/tibbo/aggregate/common/script/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/AggreGateException.h"



class com::tibbo::aggregate::common::script::ScriptException
    : public ::com::tibbo::aggregate::common::AggreGateException
{

public:
    typedef ::com::tibbo::aggregate::common::AggreGateException super;
protected:
    void ctor(const std::string & message);
    void ctor(::java::lang::Throwable* cause);
    void ctor(const std::string & message, ::java::lang::Throwable* cause);

    // Generated

public:
    ScriptException(const std::string & message);
    ScriptException(::java::lang::Throwable* cause);
    ScriptException(const std::string & message, ::java::lang::Throwable* cause);
protected:
    ScriptException(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
