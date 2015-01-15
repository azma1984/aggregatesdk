// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/DisconnectionException.java
//#include <com/tibbo/aggregate/common/device/DisconnectionException.h"

com::tibbo::aggregate::common::device::DisconnectionException::DisconnectionException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::device::DisconnectionException::DisconnectionException(const std::string & message) 
    : DisconnectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

com::tibbo::aggregate::common::device::DisconnectionException::DisconnectionException(::java::lang::Throwable* cause) 
    : DisconnectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

com::tibbo::aggregate::common::device::DisconnectionException::DisconnectionException(const std::string & message, ::java::lang::Throwable* cause) 
    : DisconnectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

void com::tibbo::aggregate::common::device::DisconnectionException::ctor(const std::string & message)
{
    super::ctor(message);
}

void com::tibbo::aggregate::common::device::DisconnectionException::ctor(::java::lang::Throwable* cause)
{
    super::ctor(cause);
}

void com::tibbo::aggregate::common::device::DisconnectionException::ctor(const std::string & message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}



java::lang::Class* com::tibbo::aggregate::common::device::DisconnectionException::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.device.DisconnectionException", 56);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::device::DisconnectionException::getClass0()
{
    return class_();
}

