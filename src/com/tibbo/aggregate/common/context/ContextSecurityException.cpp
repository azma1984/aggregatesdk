// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ContextSecurityException.java
#include <com/tibbo/aggregate/common/context/ContextSecurityException.h"

com::tibbo::aggregate::common::context::ContextSecurityException::ContextSecurityException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::ContextSecurityException::ContextSecurityException(const std::string & message) 
    : ContextSecurityException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

com::tibbo::aggregate::common::context::ContextSecurityException::ContextSecurityException(const std::string & message, ::java::lang::Throwable* cause) 
    : ContextSecurityException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

void com::tibbo::aggregate::common::context::ContextSecurityException::ctor(const std::string & message)
{
    super::ctor(message);
}

void com::tibbo::aggregate::common::context::ContextSecurityException::ctor(const std::string & message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}



java::lang::Class* com::tibbo::aggregate::common::context::ContextSecurityException::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.ContextSecurityException", 59);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::ContextSecurityException::getClass0()
{
    return class_();
}

