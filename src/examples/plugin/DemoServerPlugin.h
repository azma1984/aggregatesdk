// Generated from /aggregate_sdk_5.11.00/src/examples/plugin/DemoServerPlugin.java

#ifndef H
#define H

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"

#include <examples/plugin/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/plugin/AbstractContextPlugin.h"



class examples::plugin::DemoServerPlugin
    : public ::com::tibbo::aggregate::common::plugin::AbstractContextPlugin
{

public:
    typedef ::com::tibbo::aggregate::common::plugin::AbstractContextPlugin super;

private:
    static const std::string CONTEXT_TYPE_TRACKERS_;
    static const std::string TRACKER_NAME_;
    static const std::string VARIABLE_CONFIG_;
    static const std::string FIELD_CREATE_TRACKERS_;
    static TableFormatPtr FORMAT_CONFIG_;

public:
    void globalInit(ContextPtr rootContext) /* throws(PluginException) */;
    void install(::com::tibbo::aggregate::common::server::ServerContextPtr context) /* throws(ContextException, PluginException) */;

    // Generated
    DemoServerPlugin();
protected:
    DemoServerPlugin(const ::default_init_tag&);


public:
    
    static void 
    void install(ContextManagerPtr cm);

private:
    static const std::string& CONTEXT_TYPE_TRACKERS();
    static const std::string& TRACKER_NAME();
    static const std::string& VARIABLE_CONFIG();
    static const std::string& FIELD_CREATE_TRACKERS();
    static TableFormatPtr& FORMAT_CONFIG();
    AgClassPtr getClass0();
};
