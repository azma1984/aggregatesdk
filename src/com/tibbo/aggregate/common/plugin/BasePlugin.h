// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/BasePlugin.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"

//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <org/java/plugin/Plugin.h"
#include <com/tibbo/aggregate/common/plugin/AggreGatePlugin.h"
//#include <java/lang/Comparable.h"

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



class com::tibbo::aggregate::common::plugin::BasePlugin
    : public ::org::java::plugin::Plugin
    , public AggreGatePlugin
    , public ::java::lang::Comparable
{

public:
    typedef ::org::java::plugin::Plugin super;
    static const int INDEX_HIGHEST = 400) };
    static const int INDEX_VERY_HIGH = 300) };
    static const int INDEX_HIGH = 200) };
    static const int INDEX_HIGHER = 100) };
    static const int INDEX_NORMAL) };
    static const int INDEX_LOWER = -100) };
    static const int INDEX_LOW = -200) };
    static const int INDEX_VERY_LOW = -300) };
    static const int INDEX_LOWEST = -400) };

private:
    PluginDirector* pluginDirector;
    std::string* id;
    std::string* description;
    int index;
protected:
    void ctor();
    void ctor(std::string* description);

public:
    std::string* getId();
    void setId(std::string* id);
    std::string* getShortId();
    std::string* getDescription();
    void setDescription(std::string* description);
    PluginDirector* getPluginDirector();
    void setPluginDirector(PluginDirector* pluginDirector);
    ::com::tibbo::aggregate::common::context::Context* createGlobalConfigContext(::com::tibbo::aggregate::common::context::Context* rootContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray*/*...*/ properties);
    ::com::tibbo::aggregate::common::context::Context* createUserConfigContext(::com::tibbo::aggregate::common::context::Context* userContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray*/*...*/ properties);
    ::com::tibbo::aggregate::common::context::Context* getGlobalConfigContext();
    ::com::tibbo::aggregate::common::context::Context* getUserConfigContext(std::string* username);
    int getSortIndex();

public: /* protected */
    void setIndex(int index);

public:
    int compareTo(AggreGatePlugin* other);

public: /* protected */
    void doStart() /* throws(Exception) */;
    void doStop() /* throws(Exception) */;

public:
    void globalInit(::com::tibbo::aggregate::common::context::Context* rootContext) /* throws(PluginException) */;
    void globalDeinit(::com::tibbo::aggregate::common::context::Context* rootContext) /* throws(PluginException) */;
    void userInit(::com::tibbo::aggregate::common::context::Context* userContext) /* throws(PluginException) */;
    void userDeinit(::com::tibbo::aggregate::common::context::Context* userContext) /* throws(PluginException) */;
    void globalStart() /* throws(PluginException) */;
    void globalStop() /* throws(PluginException) */;

    // Generated
    BasePlugin();
    BasePlugin(std::string* description);
protected:
    BasePlugin(const ::default_init_tag&);


public:
    

private:
    void init();

public:
    int compareTo(void* arg0);

private:
    ::java::lang::Class* getClass0();
};
