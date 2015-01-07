// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/PluginDirector.java

#pragma once


//#include <java/net/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <org/java/plugin/PluginManager_PluginLocation.h"



class com::tibbo::aggregate::common::plugin::PluginDirector_PluginLocationImpl
    
    , public ::org::java::plugin::PluginManager_PluginLocation
{

public:
    typedef void super;

private:
    ::java::net::URL* manifest;
    ::java::net::URL* plugin;
protected:
    void ctor(::java::net::URL* manifest, ::java::net::URL* plugin);

public:
    ::java::net::URL* getManifestLocation();
    ::java::net::URL* getContextLocation();

    // Generated
    PluginDirector_PluginLocationImpl(PluginDirector *PluginDirector_this, ::java::net::URL* manifest, ::java::net::URL* plugin);
protected:
    PluginDirector_PluginLocationImpl(PluginDirector *PluginDirector_this, const ::default_init_tag&);


public:
    
    PluginDirector *PluginDirector_this;

private:
    ::java::lang::Class* getClass0();
    friend class PluginDirector;
    friend class PluginDirector_PluginDirector_1;
    friend class PluginDirector_loadPlugins_2;
};
