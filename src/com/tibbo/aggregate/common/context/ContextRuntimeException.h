// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ContextRuntimeException.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/RuntimeException.h"



class com::tibbo::aggregate::common::context::ContextRuntimeException
    : public ::java::lang::RuntimeException
{

public:
    typedef ::java::lang::RuntimeException super;
protected:
    void ctor(std::string* message);
    void ctor(::java::lang::Throwable* cause);
    void ctor(std::string* message, ::java::lang::Throwable* cause);

    // Generated

public:
    ContextRuntimeException(std::string* message);
    ContextRuntimeException(::java::lang::Throwable* cause);
    ContextRuntimeException(std::string* message, ::java::lang::Throwable* cause);
protected:
    ContextRuntimeException(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
