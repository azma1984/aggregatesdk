// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/PluginDirector.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"

//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/io/FileFilter.h"



class com::tibbo::aggregate::common::plugin::PluginDirector_loadPlugins_2
    
    , public ::java::io::FileFilter
{

public:
    typedef void super;
    bool accept(::java::io::File* file);

    // Generated
    PluginDirector_loadPlugins_2(PluginDirector *PluginDirector_this);
    
    PluginDirector *PluginDirector_this;

private:
    ::java::lang::Class* getClass0();
    friend class PluginDirector;
    friend class PluginDirector_PluginDirector_1;
    friend class PluginDirector_PluginLocationImpl;
};
