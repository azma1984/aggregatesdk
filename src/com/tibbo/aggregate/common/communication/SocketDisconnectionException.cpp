// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/communication/SocketDisconnectionException.java
#include <com/tibbo/aggregate/common/communication/SocketDisconnectionException.h"

com::tibbo::aggregate::common::communication::SocketDisconnectionException::SocketDisconnectionException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::communication::SocketDisconnectionException::SocketDisconnectionException() 
    : SocketDisconnectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::communication::SocketDisconnectionException::SocketDisconnectionException(const std::string & message) 
    : SocketDisconnectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

com::tibbo::aggregate::common::communication::SocketDisconnectionException::SocketDisconnectionException(::java::lang::Throwable* cause) 
    : SocketDisconnectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

com::tibbo::aggregate::common::communication::SocketDisconnectionException::SocketDisconnectionException(const std::string & message, ::java::lang::Throwable* cause) 
    : SocketDisconnectionException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

void com::tibbo::aggregate::common::communication::SocketDisconnectionException::ctor()
{
    super::ctor();
}

void com::tibbo::aggregate::common::communication::SocketDisconnectionException::ctor(const std::string & message)
{
    super::ctor(message);
}

void com::tibbo::aggregate::common::communication::SocketDisconnectionException::ctor(::java::lang::Throwable* cause)
{
    super::ctor(cause);
}

void com::tibbo::aggregate::common::communication::SocketDisconnectionException::ctor(const std::string & message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}



java::lang::Class* com::tibbo::aggregate::common::communication::SocketDisconnectionException::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.communication.SocketDisconnectionException", 69);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::communication::SocketDisconnectionException::getClass0()
{
    return class_();
}

