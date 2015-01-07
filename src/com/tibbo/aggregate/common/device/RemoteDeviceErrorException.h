// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/RemoteDeviceErrorException.java

#pragma once

#include <com/tibbo/aggregate/common/device/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/AggreGateException.h"



class com::tibbo::aggregate::common::device::RemoteDeviceErrorException
    : public ::com::tibbo::aggregate::common::AggreGateException
{

public:
    typedef ::com::tibbo::aggregate::common::AggreGateException super;
protected:
    void ctor(std::string* message);
    void ctor(::java::lang::Throwable* cause);
    void ctor(std::string* message, ::java::lang::Throwable* cause);
    void ctor(std::string* message, std::string* details);

    // Generated

public:
    RemoteDeviceErrorException(std::string* message);
    RemoteDeviceErrorException(::java::lang::Throwable* cause);
    RemoteDeviceErrorException(std::string* message, ::java::lang::Throwable* cause);
    RemoteDeviceErrorException(std::string* message, std::string* details);
protected:
    RemoteDeviceErrorException(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
