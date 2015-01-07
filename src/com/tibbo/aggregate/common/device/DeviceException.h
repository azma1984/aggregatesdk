// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/DeviceException.java

#pragma once

#include <com/tibbo/aggregate/common/device/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/AggreGateException.h"



class com::tibbo::aggregate::common::device::DeviceException
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
    DeviceException(std::string* message);
    DeviceException(::java::lang::Throwable* cause);
    DeviceException(std::string* message, ::java::lang::Throwable* cause);
protected:
    DeviceException(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
