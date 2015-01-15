// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/PluginDirector.java
#include <com/tibbo/aggregate/common/plugin/PluginDirector.h"

#include <com/tibbo/aggregate/common/AggreGateException.h"
#include <com/tibbo/aggregate/common/Constants.h"
#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/plugin/BasePlugin.h"
#include <com/tibbo/aggregate/common/plugin/ExtensionsPlugin.h"
#include <com/tibbo/aggregate/common/plugin/PluginDirector_PluginDirector_1.h"
#include <com/tibbo/aggregate/common/plugin/PluginDirector_loadPlugins_2.h"
#include <com/tibbo/aggregate/common/plugin/PluginDirector_PluginLocationImpl.h"
//#include <java/io/File.h"
//#include <java/io/FileFilter.h"
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/ClassLoader.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/Exception.h"
//#include <java/lang/IllegalArgumentException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuffer.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/System.h"
//#include <java/lang/Throwable.h"
//#include <java/net/URL.h"
//#include <java/text/MessageFormat.h"
//#include <java/util/Collection.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedHashMap.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/Map.h"
//#include <java/util/ResourceBundle.h"
//#include <java/util/StringTokenizer.h"
//#include <org/apache/log4j/Logger.h"
#include <org/java/plugin/ObjectFactory.h"
#include <org/java/plugin/Plugin.h"
#include <org/java/plugin/PluginClassLoader.h"
#include <org/java/plugin/PluginManager_PluginLocation.h"
#include <org/java/plugin/PluginManager.h"
#include <org/java/plugin/registry/Identity.h"
#include <org/java/plugin/registry/IntegrityCheckReport_Error.h"
#include <org/java/plugin/registry/IntegrityCheckReport_ReportItem.h"
#include <org/java/plugin/registry/IntegrityCheckReport_Severity.h"
#include <org/java/plugin/registry/IntegrityCheckReport.h"
#include <org/java/plugin/registry/PluginDescriptor.h"
#include <org/java/plugin/registry/PluginRegistry.h"
#include <org/java/plugin/util/ExtendedProperties.h"
#include <SubArray.h"
#include <ObjectArray.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace org
{
    namespace java
    {
        namespace plugin
        {
typedef ::SubArray< ::org::java::plugin::PluginManager_PluginLocation, voidArray > PluginManager_PluginLocationArray;
        } // plugin
    } // java
} // org

namespace com
{
    namespace tibbo
    {
        namespace aggregate
        {
            namespace common
            {
                namespace plugin
                {
typedef ::SubArray< ::com::tibbo::aggregate::common::plugin::PluginDirector_PluginLocationImpl, voidArray, ::org::java::plugin::PluginManager_PluginLocationArray > PluginDirector_PluginLocationImplArray;
                } // plugin
            } // common
        } // aggregate
    } // tibbo
} // com

namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, voidArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang

    namespace io
    {
typedef ::SubArray< ::java::io::File, voidArray, SerializableArray, ::java::lang::ComparableArray > FileArray;
    } // io
} // java

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::plugin::PluginDirector::PluginDirector(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::plugin::PluginDirector::PluginDirector(const std::string & homeDir, const std::string & additionalPluginDirs, ::java::util::Collection* allowedPlugins)  /* throws(AggreGateException) */
    : PluginDirector(*static_cast< ::default_init_tag* >(0))
{
    ctor(homeDir,additionalPluginDirs,allowedPlugins);
}

void com::tibbo::aggregate::common::plugin::PluginDirector::init()
{
    pluginIdMap = new ::java::util::LinkedHashMap();
}

std::string& com::tibbo::aggregate::common::plugin::PluginDirector::PLUGIN_DIRS_SEPARATOR()
{
    
    return PLUGIN_DIRS_SEPARATOR_;
}
std::string com::tibbo::aggregate::common::plugin::PluginDirector::PLUGIN_DIRS_SEPARATOR_;

std::string& com::tibbo::aggregate::common::plugin::PluginDirector::PLUGIN_FILE_EXTENSION()
{
    
    return PLUGIN_FILE_EXTENSION_;
}
std::string com::tibbo::aggregate::common::plugin::PluginDirector::PLUGIN_FILE_EXTENSION_;

std::string& com::tibbo::aggregate::common::plugin::PluginDirector::EXTENSIONS_PLUGIN_ID()
{
    
    return EXTENSIONS_PLUGIN_ID_;
}
std::string com::tibbo::aggregate::common::plugin::PluginDirector::EXTENSIONS_PLUGIN_ID_;

void com::tibbo::aggregate::common::plugin::PluginDirector::ctor(const std::string & homeDir, const std::string & additionalPluginDirs, ::java::util::Collection* allowedPlugins) /* throws(AggreGateException) */
{
    super::ctor();
    init();
    try {
        Log::CORE())->debug(u"Starting plugins subsystem"_j);
        auto mainPluginsDir = std::stringBuilder().append(homeDir)->append(::com::tibbo::aggregate::common::Constants::PLUGINS_SUBDIR())->toString();
        Log::PLUGINS())->debug(std::stringBuilder().append(u"Main plugins directory: "_j)->append(mainPluginsDir)->toString());
        auto pluginDirs = (new ::java::io::File(mainPluginsDir))->listFiles(static_cast< ::java::io::FileFilter* >(new PluginDirector_PluginDirector_1(this)));
        auto pluginDirList = u""_j;
        auto num = int(0);
        if(pluginDirs != 0) {
            for(auto dir : *pluginDirs)) {
                pluginDirList = std::stringBuilder(pluginDirList).append(std::stringBuilder().append((num > 0 ? PluginDirector::PLUGIN_DIRS_SEPARATOR_ : u""_j))->append(dir)->getCanonicalPath())->toString())->toString();
                num++;
            }
        }
        if(additionalPluginDirs != 0) {
            pluginDirList = std::stringBuilder(pluginDirList).append(std::stringBuilder().append(PluginDirector::PLUGIN_DIRS_SEPARATOR_)->append(additionalPluginDirs)->toString())->toString();
        }
        loadPlugins(pluginDirList);
        auto integrityCheckReport = pluginManager)->getRegistry())->checkIntegrity(pluginManager)->getPathResolver());
        Log::PLUGINS())->debug(std::stringBuilder().append(u"Plugin integrity check complete: errors - "_j)->append(integrityCheckReport)->countErrors())
            ->append(u", warnings - "_j)
            ->append(integrityCheckReport)->countWarnings())->toString());
        if(integrityCheckReport)->countErrors() != 0) {
            Log::PLUGINS())->warn(integrityCheckReportToString(integrityCheckReport));
            throw new ::com::tibbo::aggregate::common::AggreGateException(Cres::get())->getString(u"pluginsIntegrityCheckFailed"_j));
        }
        auto extentionsPlugin = pluginManager)->getPlugin(PluginDirector::EXTENSIONS_PLUGIN_ID_);
        if(extentionsPlugin == 0) {
            throw new ::com::tibbo::aggregate::common::AggreGateException(std::stringBuilder().append(u"Error loading extensions plugin (ID: '"_j)->append(PluginDirector::EXTENSIONS_PLUGIN_ID_)
                ->append(u"')"_j)->toString());
        }
        extensionsPlugin = java_cast< ExtensionsPlugin* >(extentionsPlugin);
    } catch (::java::lang::Exception* ex) {
        throw new ::com::tibbo::aggregate::common::AggreGateException(std::stringBuilder().append(Cres::get())->getString(u"pluginsErrStartingSubsystem"_j))->append(ex)->getMessage())->toString(), static_cast< ::java::lang::Throwable* >(ex));
    }
}

void com::tibbo::aggregate::common::plugin::PluginDirector::loadPlugins(const std::string & dirList) /* throws(AggreGateException) */
{
    try {
        Log::PLUGINS())->debug(std::stringBuilder().append(u"Loading all plugins from the following directories: "_j)->append(dirList)->toString());
        auto st = new ::java::util::StringTokenizer(dirList, PluginDirector::PLUGIN_DIRS_SEPARATOR_, false);
        std::list  pluginLocations = new ::java::util::LinkedList();
        while (st)->hasMoreTokens()) {
            auto sourceDir = st)->nextToken())->trim();
            Log::PLUGINS())->debug(std::stringBuilder().append(u"Loading all plugins from directory: "_j)->append(sourceDir)->toString());
            auto folder = (new ::java::io::File(sourceDir))->getCanonicalFile();
            if(!folder)->isDirectory()) {
                Log::PLUGINS())->warn(std::stringBuilder().append(u"Plugins folder "_j)->append(folder))
                    ->append(u" doesn't exist"_j)->toString());
                continue;
            }
            auto pluginFiles = folder)->listFiles(static_cast< ::java::io::FileFilter* >(new PluginDirector_loadPlugins_2(this)));
            for (auto i = int(0); i < pluginFiles)->length; i++) {
                auto manifest = new ::java::net::URL(std::stringBuilder().append(u"jar:file:"_j)->append((*pluginFiles)[i])->getAbsolutePath())
                    ->append(u"!/plugin.xml"_j)->toString());
                Log::PLUGINS())->debug(std::stringBuilder().append(u"Located plugin "_j)->append((*pluginFiles)[i])->getName())
                    ->append(u", manifest file "_j)
                    ->append(manifest))->toString());
                pluginLocations)->add(new PluginDirector_PluginLocationImpl(this, manifest, new ::java::net::URL(std::stringBuilder().append(u"file:"_j)->append((*pluginFiles)[i]))->toString()))));
            }
        }
        auto config = new ::org::java::plugin::util::ExtendedProperties();
        pluginManager = ::org::java::plugin::ObjectFactory::newInstance(config))->createManager();
        pluginManager)->publishPlugins(java_cast< PluginDirector_PluginLocationImplArray* >(pluginLocations)->toArray_(static_cast< voidArray* >(new PluginDirector_PluginLocationImplArray(pluginLocations)->size())))));
    } catch (::java::lang::Exception* ex) {
        throw new ::com::tibbo::aggregate::common::AggreGateException(std::stringBuilder().append(Cres::get())->getString(u"pluginsErrLoading"_j))->append(ex)->getMessage())->toString(), static_cast< ::java::lang::Throwable* >(ex));
    }
}

std::string com::tibbo::aggregate::common::plugin::PluginDirector::integrityCheckReportToString(::org::java::plugin::registry::IntegrityCheckReport* report)
{
    auto buf = new std::stringBuffer();
    buf)->append(u"Plugin integrity check report\n"_j);
    for (auto *it = report)->getItems())->iterator(); it)->hasNext(); ) {
        auto item = java_cast< ::org::java::plugin::registry::IntegrityCheckReport_ReportItem* >(java_cast< void* >(it)->next()));
        buf)->append(u"\tSeverity="_j))->append(item)->getSeverity())))->append(u", code="_j))->append(item)->getCode())))->append(u", message="_j))->append(item)->getMessage()))->append(u", source="_j))->append(item)->getSource())))->append(u"\n"_j);
    }
    return buf)->toString();
}

void com::tibbo::aggregate::common::plugin::PluginDirector::stop() /* throws(AggreGateException) */
{
    try {
        pluginManager)->shutdown();
        ::java::lang::System::gc();
    } catch (::java::lang::Exception* ex) {
        Log::PLUGINS())->warn(u"Error stopping plugins subsystem"_j, ex);
    }
}

std::string com::tibbo::aggregate::common::plugin::PluginDirector::convertId(const std::string & id)
{
    if(pluginIdMap)->containsKey(id)) {
        return java_cast< const std::string & >(pluginIdMap)->get(id));
    }
    return id;
}

com::tibbo::aggregate::common::plugin::BasePlugin* com::tibbo::aggregate::common::plugin::PluginDirector::getExistingPlugin(const std::string & id)
{
    id = convertId(id);
    if(!isPluginAllowed(id)) {
        throw new ::java::lang::IllegalArgumentException(::java::text::MessageFormat::format(Cres::get())->getString(u"pluginNotAvail"_j), new voidArray({id)})));
    }
    try {
        auto plugin = pluginManager)->getPlugin(id);
        plugin)->getClass())->getClassLoader())->loadClass(plugin)->getDescriptor())->getPluginClassName());
        return java_cast< BasePlugin* >(plugin);
    } catch (::java::lang::Throwable* ex) {
        throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"pluginNotAvail"_j), new voidArray({id)})))->append(ex)->getMessage())->toString(), ex);
    }
}

org::java::plugin::Plugin* com::tibbo::aggregate::common::plugin::PluginDirector::createNewPlugin(const std::string & id)
{
    id = convertId(id);
    if(!isPluginAllowed(id)) {
        throw new ::java::lang::IllegalArgumentException(::java::text::MessageFormat::format(Cres::get())->getString(u"pluginNotAvail"_j), new voidArray({id)})));
    }
    auto plugin = getExistingPlugin(id);
    try {
        Log::PLUGINS())->debug(std::stringBuilder().append(u"Creating new instance of plugin "_j)->append(id)->toString());
        auto instance = java_cast< BasePlugin* >(plugin)->getClass())->newInstance());
        instance)->setId(plugin)->getId());
        instance)->setDescription(plugin)->getDescription());
        instance)->setPluginDirector(this);
        return instance;
    } catch (::java::lang::Exception* ex) {
        throw new ::java::lang::IllegalArgumentException(ex)->getMessage(), ex);
    }
}

bool com::tibbo::aggregate::common::plugin::PluginDirector::isPluginAllowed(const std::string & id)
{
    if(allowedPlugins != 0 && !allowedPlugins)->contains(id)) {
        return false;
    }
    return true;
}

org::java::plugin::PluginManager* com::tibbo::aggregate::common::plugin::PluginDirector::getPluginManager()
{
    return pluginManager;
}

java::lang::ClassLoader* com::tibbo::aggregate::common::plugin::PluginDirector::getPluginClassLoader(const std::string & id) /* throws(PluginLifecycleException) */
{
    auto plugin = pluginManager)->getPlugin(id);
    if(plugin == 0) {
        return 0;
    }
    return pluginManager)->getPluginClassLoader(plugin)->getDescriptor());
}

com::tibbo::aggregate::common::plugin::ExtensionsPlugin* com::tibbo::aggregate::common::plugin::PluginDirector::getExtensionsPlugin()
{
    return extensionsPlugin;
}

java::util::Map* com::tibbo::aggregate::common::plugin::PluginDirector::getPluginIdMap()
{
    return pluginIdMap;
}



java::lang::Class* com::tibbo::aggregate::common::plugin::PluginDirector::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.plugin.PluginDirector", 48);
    return c;
}

void com::tibbo::aggregate::common::plugin::PluginDirector::clinit()
{
struct string_init_ {
    string_init_() {
    PLUGIN_DIRS_SEPARATOR_ = u","_j;
    PLUGIN_FILE_EXTENSION_ = u".jar"_j;
    EXTENSIONS_PLUGIN_ID_ = u"com.tibbo.aggregate.common.plugin.extensions"_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

java::lang::Class* com::tibbo::aggregate::common::plugin::PluginDirector::getClass0()
{
    return class_();
}

