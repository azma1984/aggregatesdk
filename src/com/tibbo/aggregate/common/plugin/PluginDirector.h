// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/PluginDirector.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"

//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <org/java/plugin/fwd-aggregate_sdk_5.11.00.h"
#include <org/java/plugin/registry/fwd-aggregate_sdk_5.11.00.h"
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



class com::tibbo::aggregate::common::plugin::PluginDirector
    
{

public:
    typedef void super;

private:
    static const std::string PLUGIN_DIRS_SEPARATOR_;
    static const std::string PLUGIN_FILE_EXTENSION_;
    static const std::string EXTENSIONS_PLUGIN_ID_;
    ::org::java::plugin::PluginManager* pluginManager;
    ExtensionsPlugin* extensionsPlugin;
    ::java::util::Collection* allowedPlugins;
    std::map pluginIdMap;
protected:
    void ctor(std::string* homeDir, std::string* additionalPluginDirs, ::java::util::Collection* allowedPlugins) /* throws(AggreGateException) */;

public:
    ::com::tibbo::aggregate::common::context::ContextManager* getContextManager();
    ::com::tibbo::aggregate::common::context::CallerController* getCallerController();
    ::com::tibbo::aggregate::common::context::Context* createGlobalConfigContext(BasePlugin* plugin, ::com::tibbo::aggregate::common::context::Context* rootContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray*/*...*/ properties);
    ::com::tibbo::aggregate::common::context::Context* createUserConfigContext(BasePlugin* plugin, ::com::tibbo::aggregate::common::context::Context* userContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray*/*...*/ properties);

private:
    void loadPlugins(std::string* dirList) /* throws(AggreGateException) */;
    std::string* integrityCheckReportToString(::org::java::plugin::registry::IntegrityCheckReport* report);

public:
    void stop() /* throws(AggreGateException) */;

public: /* protected */
    std::string* convertId(std::string* id);

public:
    BasePlugin* getExistingPlugin(std::string* id);
    ::org::java::plugin::Plugin* createNewPlugin(std::string* id);

public: /* protected */
    bool isPluginAllowed(std::string* id);

public:
    ::org::java::plugin::PluginManager* getPluginManager();
    ::java::lang::ClassLoader* getPluginClassLoader(std::string* id) /* throws(PluginLifecycleException) */;

public: /* protected */
    ExtensionsPlugin* getExtensionsPlugin();

public:
    std::map getPluginIdMap();

    // Generated
    PluginDirector(std::string* homeDir, std::string* additionalPluginDirs, ::java::util::Collection* allowedPlugins);
protected:
    PluginDirector(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();

public:
    static const std::string& PLUGIN_DIRS_SEPARATOR();
    static const std::string& PLUGIN_FILE_EXTENSION();
    static const std::string& EXTENSIONS_PLUGIN_ID();

private:
    ::java::lang::Class* getClass0();
    friend class PluginDirector_PluginDirector_1;
    friend class PluginDirector_loadPlugins_2;
    friend class PluginDirector_PluginLocationImpl;
};
