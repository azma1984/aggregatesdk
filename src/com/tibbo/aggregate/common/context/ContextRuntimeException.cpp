// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ContextRuntimeException.java
#include <com/tibbo/aggregate/common/context/ContextRuntimeException.h"

com::tibbo::aggregate::common::context::ContextRuntimeException::ContextRuntimeException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::ContextRuntimeException::ContextRuntimeException(const std::string & message) 
    : ContextRuntimeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

com::tibbo::aggregate::common::context::ContextRuntimeException::ContextRuntimeException(::java::lang::Throwable* cause) 
    : ContextRuntimeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

com::tibbo::aggregate::common::context::ContextRuntimeException::ContextRuntimeException(const std::string & message, ::java::lang::Throwable* cause) 
    : ContextRuntimeException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

void com::tibbo::aggregate::common::context::ContextRuntimeException::ctor(const std::string & message)
{
    super::ctor(message);
}

void com::tibbo::aggregate::common::context::ContextRuntimeException::ctor(::java::lang::Throwable* cause)
{
    super::ctor(cause);
}

void com::tibbo::aggregate::common::context::ContextRuntimeException::ctor(const std::string & message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}



java::lang::Class* com::tibbo::aggregate::common::context::ContextRuntimeException::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.ContextRuntimeException", 58);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::ContextRuntimeException::getClass0()
{
    return class_();
}

