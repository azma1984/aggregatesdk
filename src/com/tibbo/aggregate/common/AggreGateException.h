// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/AggreGateException.java

#pragma once

#include <com/tibbo/aggregate/common/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Exception.h"



class com::tibbo::aggregate::common::AggreGateException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;

private:
    std::string* details;
protected:
    void ctor(std::string* message);
    void ctor(std::string* message, std::string* details);
    void ctor(::java::lang::Throwable* cause);
    void ctor(std::string* message, ::java::lang::Throwable* cause);
    void ctor(std::string* message, ::java::lang::Throwable* cause, std::string* details);

public:
    std::string* getDetails();

    // Generated
    AggreGateException(std::string* message);
    AggreGateException(std::string* message, std::string* details);
    AggreGateException(::java::lang::Throwable* cause);
    AggreGateException(std::string* message, ::java::lang::Throwable* cause);
    AggreGateException(std::string* message, ::java::lang::Throwable* cause, std::string* details);
protected:
    AggreGateException(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
