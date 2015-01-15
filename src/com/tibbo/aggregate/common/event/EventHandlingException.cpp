// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/EventHandlingException.java
#include <com/tibbo/aggregate/common/event/EventHandlingException.h"

com::tibbo::aggregate::common::event::EventHandlingException::EventHandlingException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::event::EventHandlingException::EventHandlingException(const std::string & message) 
    : EventHandlingException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

com::tibbo::aggregate::common::event::EventHandlingException::EventHandlingException(::java::lang::Throwable* cause) 
    : EventHandlingException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

com::tibbo::aggregate::common::event::EventHandlingException::EventHandlingException(const std::string & message, ::java::lang::Throwable* cause) 
    : EventHandlingException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

void com::tibbo::aggregate::common::event::EventHandlingException::ctor(const std::string & message)
{
    super::ctor(message);
}

void com::tibbo::aggregate::common::event::EventHandlingException::ctor(::java::lang::Throwable* cause)
{
    super::ctor(cause);
}

void com::tibbo::aggregate::common::event::EventHandlingException::ctor(const std::string & message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}



java::lang::Class* com::tibbo::aggregate::common::event::EventHandlingException::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.event.EventHandlingException", 55);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::event::EventHandlingException::getClass0()
{
    return class_();
}

