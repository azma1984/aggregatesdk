// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/EventHandlingException.java

#pragma once

//#include <com/tibbo/aggregate/common/event/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/AggreGateException.h"



class com::tibbo::aggregate::common::event::EventHandlingException
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
    EventHandlingException(std::string* message);
    EventHandlingException(::java::lang::Throwable* cause);
    EventHandlingException(std::string* message, ::java::lang::Throwable* cause);
protected:
    EventHandlingException(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
