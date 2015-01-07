// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/AggreGatePlugin.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"

//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

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

struct com::tibbo::aggregate::common::plugin::AggreGatePlugin
    
{
    std::string* getId();
    std::string* getShortId();
    std::string* getDescription();
    int getSortIndex();
    void globalInit(::com::tibbo::aggregate::common::context::Context* rootContext) /* throws(PluginException) */;
    void userInit(::com::tibbo::aggregate::common::context::Context* userContext) /* throws(PluginException) */;
    void globalDeinit(::com::tibbo::aggregate::common::context::Context* rootContext) /* throws(PluginException) */;
    void userDeinit(::com::tibbo::aggregate::common::context::Context* userContext) /* throws(PluginException) */;
    void globalStart() /* throws(PluginException) */;
    void globalStop() /* throws(PluginException) */;
    ::com::tibbo::aggregate::common::context::Context* createGlobalConfigContext(::com::tibbo::aggregate::common::context::Context* rootContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray*/*...*/ properties);
    ::com::tibbo::aggregate::common::context::Context* createUserConfigContext(::com::tibbo::aggregate::common::context::Context* userContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray*/*...*/ properties);
    ::com::tibbo::aggregate::common::context::Context* getGlobalConfigContext();
    ::com::tibbo::aggregate::common::context::Context* getUserConfigContext(std::string* username);

    // Generated
    
};
