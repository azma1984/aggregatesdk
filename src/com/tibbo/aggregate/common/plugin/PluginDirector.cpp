
#include "plugin/PluginDirector.h"
//

//
//
//PluginDirector::PluginDirector(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//    
//}
//
//PluginDirector::PluginDirector(const std::string & homeDir, const std::string & additionalPluginDirs, std::list allowedPlugins)  /* throws(AggreGateException) */
//    : PluginDirector(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(homeDir,additionalPluginDirs,allowedPlugins);
//}
//
//void PluginDirector::init()
//{
//    pluginIdMap = new ::java::util::LinkedHashMap();
//}
//
//std::string& PluginDirector::PLUGIN_DIRS_SEPARATOR()
//{
//    
//    return PLUGIN_DIRS_SEPARATOR_;
//}
//std::string PluginDirector::PLUGIN_DIRS_SEPARATOR_;
//
//std::string& PluginDirector::PLUGIN_FILE_EXTENSION()
//{
//    
//    return PLUGIN_FILE_EXTENSION_;
//}
//std::string PluginDirector::PLUGIN_FILE_EXTENSION_;
//
//std::string& PluginDirector::EXTENSIONS_PLUGIN_ID()
//{
//    
//    return EXTENSIONS_PLUGIN_ID_;
//}
//std::string PluginDirector::EXTENSIONS_PLUGIN_ID_;
//
//void PluginDirector::ctor(const std::string & homeDir, const std::string & additionalPluginDirs, std::list allowedPlugins) /* throws(AggreGateException) */
//{
//    super::ctor();
//    init();
//    try {
//        Log::CORE())->debug(u"Starting plugins subsystem"_j);
//        auto mainPluginsDir = std::stringBuilder().append(homeDir)->append(::com::tibbo::aggregate::common::Constants::PLUGINS_SUBDIR())->toString();
//        Log::PLUGINS())->debug(std::stringBuilder().append(u"Main plugins directory: "_j)->append(mainPluginsDir)->toString());
//        auto pluginDirs = (new ::java::io::File(mainPluginsDir))->listFiles(static_cast< ::java::io::FileFilter* >(new PluginDirector_PluginDirector_1(this)));
//        auto pluginDirList = u""_j;
//        auto num = int(0);
//        if(pluginDirs != 0) {
//            for(auto dir : *pluginDirs)) {
//                pluginDirList = std::stringBuilder(pluginDirList).append(std::stringBuilder().append((num > 0 ? PluginDirector::PLUGIN_DIRS_SEPARATOR_ : u""_j))->append(dir)->getCanonicalPath())->toString())->toString();
//                num++;
//            }
//        }
//        if(additionalPluginDirs != 0) {
//            pluginDirList = std::stringBuilder(pluginDirList).append(std::stringBuilder().append(PluginDirector::PLUGIN_DIRS_SEPARATOR_)->append(additionalPluginDirs)->toString())->toString();
//        }
//        loadPlugins(pluginDirList);
//        auto integrityCheckReport = pluginManager)->getRegistry())->checkIntegrity(pluginManager)->getPathResolver());
//        Log::PLUGINS())->debug(std::stringBuilder().append(u"Plugin integrity check complete: errors - "_j)->append(integrityCheckReport)->countErrors())
//            ->append(u", warnings - "_j)
//            ->append(integrityCheckReport)->countWarnings())->toString());
//        if(integrityCheckReport)->countErrors() != 0) {
//            Log::PLUGINS())->warn(integrityCheckReportToString(integrityCheckReport));
//            throw new ::com::tibbo::aggregate::common::AggreGateException(Cres::get())->getString(u"pluginsIntegrityCheckFailed"_j));
//        }
//        auto extentionsPlugin = pluginManager)->getPlugin(PluginDirector::EXTENSIONS_PLUGIN_ID_);
//        if(extentionsPlugin == 0) {
//            throw new ::com::tibbo::aggregate::common::AggreGateException(std::stringBuilder().append(u"Error loading extensions plugin (ID: '"_j)->append(PluginDirector::EXTENSIONS_PLUGIN_ID_)
//                ->append(u"')"_j)->toString());
//        }
//        extensionsPlugin = java_cast< ExtensionsPlugin* >(extentionsPlugin);
//    } catch (::java::lang::Exception* ex) {
//        throw new ::com::tibbo::aggregate::common::AggreGateException(std::stringBuilder().append(Cres::get())->getString(u"pluginsErrStartingSubsystem"_j))->append(ex)->getMessage())->toString(), static_cast< ::java::lang::Throwable* >(ex));
//    }
//}
//
//void PluginDirector::loadPlugins(const std::string & dirList) /* throws(AggreGateException) */
//{
//    try {
//        Log::PLUGINS())->debug(std::stringBuilder().append(u"Loading all plugins from the following directories: "_j)->append(dirList)->toString());
//        auto st = new ::java::util::StringTokenizer(dirList, PluginDirector::PLUGIN_DIRS_SEPARATOR_, false);
//        std::list  pluginLocations = new ::java::util::LinkedList();
//        while (st)->hasMoreTokens()) {
//            auto sourceDir = st)->nextToken())->trim();
//            Log::PLUGINS())->debug(std::stringBuilder().append(u"Loading all plugins from directory: "_j)->append(sourceDir)->toString());
//            auto folder = (new ::java::io::File(sourceDir))->getCanonicalFile();
//            if(!folder)->isDirectory()) {
//                Log::PLUGINS())->warn(std::stringBuilder().append(u"Plugins folder "_j)->append(folder))
//                    ->append(u" doesn't exist"_j)->toString());
//                continue;
//            }
//            auto pluginFiles = folder)->listFiles(static_cast< ::java::io::FileFilter* >(new PluginDirector_loadPlugins_2(this)));
//            for (auto i = int(0); i < pluginFiles)->length; i++) {
//                auto manifest = new ::java::net::URL(std::stringBuilder().append(u"jar:file:"_j)->append((*pluginFiles)[i])->getAbsolutePath())
//                    ->append(u"!/plugin.xml"_j)->toString());
//                Log::PLUGINS())->debug(std::stringBuilder().append(u"Located plugin "_j)->append((*pluginFiles)[i])->getName())
//                    ->append(u", manifest file "_j)
//                    ->append(manifest))->toString());
//                pluginLocations)->add(new PluginDirector_PluginLocationImpl(this, manifest, new ::java::net::URL(std::stringBuilder().append(u"file:"_j)->append((*pluginFiles)[i]))->toString()))));
//            }
//        }
//        auto config = new ::org::java::plugin::util::ExtendedProperties();
//        pluginManager = ::org::java::plugin::ObjectFactory::newInstance(config))->createManager();
//        pluginManager)->publishPlugins(java_cast< PluginDirector_PluginLocationImplArray* >(pluginLocations)->toArray_(static_cast< voidArray* >(new PluginDirector_PluginLocationImplArray(pluginLocations)->size())))));
//    } catch (::java::lang::Exception* ex) {
//        throw new ::com::tibbo::aggregate::common::AggreGateException(std::stringBuilder().append(Cres::get())->getString(u"pluginsErrLoading"_j))->append(ex)->getMessage())->toString(), static_cast< ::java::lang::Throwable* >(ex));
//    }
//}
//
//std::string PluginDirector::integrityCheckReportToString(::org::java::plugin::registry::IntegrityCheckReport* report)
//{
//    auto buf = new std::stringBuffer();
//    buf)->append(u"Plugin integrity check report\n"_j);
//    for (auto *it = report)->getItems())->iterator(); it)->hasNext(); ) {
//        auto item = java_cast< ::org::java::plugin::registry::IntegrityCheckReport_ReportItem* >(java_cast< AgObjectPtr >(it)->next()));
//        buf)->append(u"\tSeverity="_j))->append(item)->getSeverity())))->append(u", code="_j))->append(item)->getCode())))->append(u", message="_j))->append(item)->getMessage()))->append(u", source="_j))->append(item)->getSource())))->append(u"\n"_j);
//    }
//    return buf)->toString();
//}
//
//void PluginDirector::stop() /* throws(AggreGateException) */
//{
//    try {
//        pluginManager)->shutdown();
//        ::java::lang::System::gc();
//    } catch (::java::lang::Exception* ex) {
//        Log::PLUGINS())->warn(u"Error stopping plugins subsystem"_j, ex);
//    }
//}
//
//std::string PluginDirector::convertId(const std::string & id)
//{
//    if(pluginIdMap)->containsKey(id)) {
//        return java_cast< const std::string & >(pluginIdMap)->get(id));
//    }
//    return id;
//}
//
//BasePlugin* PluginDirector::getExistingPlugin(const std::string & id)
//{
//    id = convertId(id);
//    if(!isPluginAllowed(id)) {
//        throw new ::java::lang::IllegalArgumentException(::java::text::MessageFormat::format(Cres::get())->getString(u"pluginNotAvail"_j), new voidArray({id)})));
//    }
//    try {
//        auto plugin = pluginManager)->getPlugin(id);
//        plugin)->getClass())->getClassLoader())->loadClass(plugin)->getDescriptor())->getPluginClassName());
//        return java_cast< BasePlugin* >(plugin);
//    } catch (::java::lang::Throwable* ex) {
//        throw new ::java::lang::IllegalArgumentException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"pluginNotAvail"_j), new voidArray({id)})))->append(ex)->getMessage())->toString(), ex);
//    }
//}
//
//org::java::plugin::Plugin* PluginDirector::createNewPlugin(const std::string & id)
//{
//    id = convertId(id);
//    if(!isPluginAllowed(id)) {
//        throw new ::java::lang::IllegalArgumentException(::java::text::MessageFormat::format(Cres::get())->getString(u"pluginNotAvail"_j), new voidArray({id)})));
//    }
//    auto plugin = getExistingPlugin(id);
//    try {
//        Log::PLUGINS())->debug(std::stringBuilder().append(u"Creating new instance of plugin "_j)->append(id)->toString());
//        auto instance = java_cast< BasePlugin* >(plugin)->getClass())->newInstance());
//        instance)->setId(plugin)->getId());
//        instance)->setDescription(plugin)->getDescription());
//        instance)->setPluginDirector(this);
//        return instance;
//    } catch (::java::lang::Exception* ex) {
//        throw new ::java::lang::IllegalArgumentException(ex)->getMessage(), ex);
//    }
//}
//
//bool PluginDirector::isPluginAllowed(const std::string & id)
//{
//    if(allowedPlugins != 0 && !allowedPlugins)->contains(id)) {
//        return false;
//    }
//    return true;
//}
//
//org::java::plugin::PluginManager* PluginDirector::getPluginManager()
//{
//    return pluginManager;
//}
//
//java::lang::ClassLoader* PluginDirector::getPluginClassLoader(const std::string & id) /* throws(PluginLifecycleException) */
//{
//    auto plugin = pluginManager)->getPlugin(id);
//    if(plugin == 0) {
//        return 0;
//    }
//    return pluginManager)->getPluginClassLoader(plugin)->getDescriptor());
//}
//
//ExtensionsPlugin* PluginDirector::getExtensionsPlugin()
//{
//    return extensionsPlugin;
//}
//
//java::util::Map* PluginDirector::getPluginIdMap()
//{
//    return pluginIdMap;
//}
//
//
//
//java::lang::Class* PluginDirector::class_()
//{
//    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.plugin.PluginDirector", 48);
//    return c;
//}
//
//void PluginDirector::clinit()
//{
//struct string_init_ {
//    string_init_() {
//    PLUGIN_DIRS_SEPARATOR_ = u","_j;
//    PLUGIN_FILE_EXTENSION_ = u".jar"_j;
//    EXTENSIONS_PLUGIN_ID_ = u"com.tibbo.aggregate.common.plugin.extensions"_j;
//    }
//};
//
//    static string_init_ string_init_instance;
//
//    super::
//}
//

