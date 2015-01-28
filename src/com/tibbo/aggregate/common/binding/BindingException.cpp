// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/BindingException.java
#include <com/tibbo/aggregate/common/binding/BindingException.h"

com::tibbo::aggregate::common::binding::BindingException::BindingException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::binding::BindingException::BindingException(const std::string & message) 
    : BindingException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

com::tibbo::aggregate::common::binding::BindingException::BindingException(::java::lang::Throwable* cause) 
    : BindingException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

com::tibbo::aggregate::common::binding::BindingException::BindingException(const std::string & message, ::java::lang::Throwable* cause) 
    : BindingException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

void com::tibbo::aggregate::common::binding::BindingException::ctor(const std::string & message)
{
    super::ctor(message);
}

void com::tibbo::aggregate::common::binding::BindingException::ctor(::java::lang::Throwable* cause)
{
    super::ctor(cause);
}

void com::tibbo::aggregate::common::binding::BindingException::ctor(const std::string & message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}



java::lang::Class* com::tibbo::aggregate::common::binding::BindingException::class_()
{
    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.binding.BindingException", 51);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::binding::BindingException::getClass0()
{
    return class_();
}

