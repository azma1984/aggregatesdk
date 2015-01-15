// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/RemoteDeviceErrorException.java
#include <com/tibbo/aggregate/common/device/RemoteDeviceErrorException.h"

com::tibbo::aggregate::common::device::RemoteDeviceErrorException::RemoteDeviceErrorException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::device::RemoteDeviceErrorException::RemoteDeviceErrorException(const std::string & message) 
    : RemoteDeviceErrorException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

com::tibbo::aggregate::common::device::RemoteDeviceErrorException::RemoteDeviceErrorException(::java::lang::Throwable* cause) 
    : RemoteDeviceErrorException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

com::tibbo::aggregate::common::device::RemoteDeviceErrorException::RemoteDeviceErrorException(const std::string & message, ::java::lang::Throwable* cause) 
    : RemoteDeviceErrorException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

com::tibbo::aggregate::common::device::RemoteDeviceErrorException::RemoteDeviceErrorException(const std::string & message, const std::string & details) 
    : RemoteDeviceErrorException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,details);
}

void com::tibbo::aggregate::common::device::RemoteDeviceErrorException::ctor(const std::string & message)
{
    super::ctor(message);
}

void com::tibbo::aggregate::common::device::RemoteDeviceErrorException::ctor(::java::lang::Throwable* cause)
{
    super::ctor(cause);
}

void com::tibbo::aggregate::common::device::RemoteDeviceErrorException::ctor(const std::string & message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}

void com::tibbo::aggregate::common::device::RemoteDeviceErrorException::ctor(const std::string & message, const std::string & details)
{
    super::ctor(message, details);
}



java::lang::Class* com::tibbo::aggregate::common::device::RemoteDeviceErrorException::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.device.RemoteDeviceErrorException", 60);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::device::RemoteDeviceErrorException::getClass0()
{
    return class_();
}

