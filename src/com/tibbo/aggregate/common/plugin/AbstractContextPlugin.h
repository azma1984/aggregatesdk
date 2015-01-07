// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/AbstractContextPlugin.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"


//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/plugin/BasePlugin.h"
#include <com/tibbo/aggregate/common/plugin/ContextPlugin.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace com
{
    namespace tibbo
    {
        namespace aggregate
        {
            namespace common
            {
                namespace context
                {
typedef ::SubArray< ::com::tibbo::aggregate::common::context::EntityDefinition, voidArray > EntityDefinitionArray;
typedef ::SubArray< ::com::tibbo::aggregate::common::context::AbstractEntityDefinition, voidArray, EntityDefinitionArray > AbstractEntityDefinitionArray;
                } // context
            } // common
        } // aggregate
    } // tibbo
} // com

namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang
} // java

namespace com
{
    namespace tibbo
    {
        namespace aggregate
        {
            namespace common
            {
                namespace context
                {
typedef ::SubArray< ::com::tibbo::aggregate::common::context::VariableDefinition, AbstractEntityDefinitionArray, ::java::lang::CloneableArray, ::java::lang::ComparableArray > VariableDefinitionArray;
                } // context
            } // common
        } // aggregate
    } // tibbo
} // com



class com::tibbo::aggregate::common::plugin::AbstractContextPlugin
    : public BasePlugin
    , public ContextPlugin
{

public:
    typedef BasePlugin super;
protected:
    void ctor();
    void ctor(std::string* name);

public:
    void initialize() /* throws(PluginException) */;
    void deinitialize() /* throws(PluginException) */;
    void install(::com::tibbo::aggregate::common::context::ContextManager* cm) /* throws(ContextException, PluginException) */;
    void deinstall(::com::tibbo::aggregate::common::context::ContextManager* cm) /* throws(ContextException, PluginException) */;
    void install(::com::tibbo::aggregate::common::server::ServerContext* context) /* throws(ContextException, PluginException) */;
    void deinstall(::com::tibbo::aggregate::common::server::ServerContext* context) /* throws(ContextException, PluginException) */;
    void launch() /* throws(PluginException) */;
    void shutdown() /* throws(PluginException) */;

    // Generated
    AbstractContextPlugin();
    AbstractContextPlugin(std::string* name);
protected:
    AbstractContextPlugin(const ::default_init_tag&);


public:
    
    ::com::tibbo::aggregate::common::context::Context* createGlobalConfigContext(::com::tibbo::aggregate::common::context::Context* rootContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray* properties);
    ::com::tibbo::aggregate::common::context::Context* createUserConfigContext(::com::tibbo::aggregate::common::context::Context* userContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray* properties);
    std::string* getDescription();
    ::com::tibbo::aggregate::common::context::Context* getGlobalConfigContext();
    std::string* getId();
    std::string* getShortId();
    int getSortIndex();
    ::com::tibbo::aggregate::common::context::Context* getUserConfigContext(std::string* username);
    void globalDeinit(::com::tibbo::aggregate::common::context::Context* rootContext);
    void globalInit(::com::tibbo::aggregate::common::context::Context* rootContext);
    void globalStart();
    void globalStop();
    void userDeinit(::com::tibbo::aggregate::common::context::Context* userContext);
    void userInit(::com::tibbo::aggregate::common::context::Context* userContext);

private:
    ::java::lang::Class* getClass0();
};
