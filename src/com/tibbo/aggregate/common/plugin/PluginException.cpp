// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/PluginException.java
#include <com/tibbo/aggregate/common/plugin/PluginException.h"

com::tibbo::aggregate::common::plugin::PluginException::PluginException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::plugin::PluginException::PluginException(const std::string & message) 
    : PluginException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

com::tibbo::aggregate::common::plugin::PluginException::PluginException(::java::lang::Throwable* cause) 
    : PluginException(*static_cast< ::default_init_tag* >(0))
{
    ctor(cause);
}

com::tibbo::aggregate::common::plugin::PluginException::PluginException(const std::string & message, ::java::lang::Throwable* cause) 
    : PluginException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,cause);
}

void com::tibbo::aggregate::common::plugin::PluginException::ctor(const std::string & message)
{
    super::ctor(message);
}

void com::tibbo::aggregate::common::plugin::PluginException::ctor(::java::lang::Throwable* cause)
{
    super::ctor(cause);
}

void com::tibbo::aggregate::common::plugin::PluginException::ctor(const std::string & message, ::java::lang::Throwable* cause)
{
    super::ctor(message, cause);
}



java::lang::Class* com::tibbo::aggregate::common::plugin::PluginException::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.plugin.PluginException", 49);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::plugin::PluginException::getClass0()
{
    return class_();
}

