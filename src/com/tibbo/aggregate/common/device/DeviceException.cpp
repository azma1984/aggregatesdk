// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/DeviceException.java
#include <com/tibbo/aggregate/common/device/DeviceException.h"

com::tibbo::aggregate::common::device::DeviceException::DeviceException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::device::DeviceException::DeviceException(const std::string & message) 
    : DeviceException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

com::tibbo::aggregate::common::device::DeviceException::DeviceException(::java::lang::Throwable* cause) 
    : DeviceException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

com::tibbo::aggregate::common::device::DeviceException::DeviceException(const std::string & message, ::java::lang::Throwable* cause) 
    : DeviceException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

void com::tibbo::aggregate::common::device::DeviceException::ctor(const std::string & message)
{
    super::ctor(message);
}

void com::tibbo::aggregate::common::device::DeviceException::ctor(::java::lang::Throwable* cause)
{
    super::ctor(cause);
}

void com::tibbo::aggregate::common::device::DeviceException::ctor(const std::string & message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}



java::lang::Class* com::tibbo::aggregate::common::device::DeviceException::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.device.DeviceException", 49);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::device::DeviceException::getClass0()
{
    return class_();
}

