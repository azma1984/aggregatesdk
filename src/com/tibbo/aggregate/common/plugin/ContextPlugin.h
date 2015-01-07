// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/ContextPlugin.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"


#include <com/tibbo/aggregate/common/plugin/AggreGatePlugin.h"

struct com::tibbo::aggregate::common::plugin::ContextPlugin
    : public AggreGatePlugin
{
    void initialize() /* throws(PluginException) */;
    void deinitialize() /* throws(PluginException) */;
    void install(::com::tibbo::aggregate::common::context::ContextManager* contextManager) /* throws(ContextException, PluginException) */;
    void deinstall(::com::tibbo::aggregate::common::context::ContextManager* contextManager) /* throws(ContextException, PluginException) */;
    void install(::com::tibbo::aggregate::common::server::ServerContext* context) /* throws(ContextException, PluginException) */;
    void deinstall(::com::tibbo::aggregate::common::server::ServerContext* context) /* throws(ContextException, PluginException) */;
    void launch() /* throws(PluginException) */;
    void shutdown() /* throws(PluginException) */;

    // Generated
    
};
