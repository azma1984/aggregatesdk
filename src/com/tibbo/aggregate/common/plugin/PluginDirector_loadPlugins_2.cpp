// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/PluginDirector.java
//#include <com/tibbo/aggregate/common/plugin/PluginDirector_loadPlugins_2.h"

#include <com/tibbo/aggregate/common/plugin/PluginDirector.h"
/*
//#include <java/io/File.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
*/
template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::plugin::PluginDirector_loadPlugins_2::PluginDirector_loadPlugins_2(PluginDirector *PluginDirector_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , PluginDirector_this(PluginDirector_this)
{
    
    ctor();
}

bool com::tibbo::aggregate::common::plugin::PluginDirector_loadPlugins_2::accept(::java::io::File* file)
{
    return (file)->isFile() && file)->getName())->endsWith(PluginDirector::PLUGIN_FILE_EXTENSION()));
}



java::lang::Class* com::tibbo::aggregate::common::plugin::PluginDirector_loadPlugins_2::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::plugin::PluginDirector_loadPlugins_2::getClass0()
{
    return class_();
}

