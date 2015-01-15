// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/PluginDirector.java
//#include <com/tibbo/aggregate/common/plugin/PluginDirector_PluginLocationImpl.h"

#include <com/tibbo/aggregate/common/plugin/PluginDirector.h"
////#include <java/net/URL.h"

com::tibbo::aggregate::common::plugin::PluginDirector_PluginLocationImpl::PluginDirector_PluginLocationImpl(PluginDirector *PluginDirector_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , PluginDirector_this(PluginDirector_this)
{
    
}

com::tibbo::aggregate::common::plugin::PluginDirector_PluginLocationImpl::PluginDirector_PluginLocationImpl(PluginDirector *PluginDirector_this, ::java::net::URL* manifest, ::java::net::URL* plugin) 
    : PluginDirector_PluginLocationImpl(PluginDirector_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(manifest,plugin);
}

void com::tibbo::aggregate::common::plugin::PluginDirector_PluginLocationImpl::ctor(::java::net::URL* manifest, ::java::net::URL* plugin)
{
    super::ctor();
    this->manifest = manifest;
    this->plugin = plugin;
}

java::net::URL* com::tibbo::aggregate::common::plugin::PluginDirector_PluginLocationImpl::getManifestLocation()
{
    return manifest;
}

java::net::URL* com::tibbo::aggregate::common::plugin::PluginDirector_PluginLocationImpl::getContextLocation()
{
    return plugin;
}



java::lang::Class* com::tibbo::aggregate::common::plugin::PluginDirector_PluginLocationImpl::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.plugin.PluginDirector.PluginLocationImpl", 67);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::plugin::PluginDirector_PluginLocationImpl::getClass0()
{
    return class_();
}

