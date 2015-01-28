#ifndef _PluginDirector_H_
#define _PluginDirector_H_

#include "AggreGateException.h"
#include "Constants.h"
#include "Cres.h"
#include "Log.h"
#include "plugin/BasePlugin.h"
#include "plugin/ExtensionsPlugin.h"


class PluginDirector_loadPlugins_2
{
public:
    typedef void super;
    bool accept(::java::io::File* file);

	// Generated
    PluginDirector_loadPlugins_2(PluginDirector *PluginDirector_this);

    PluginDirector *PluginDirector_this;

private:
    AgClassPtr getClass0();
    friend class PluginDirector;
    friend class PluginDirector_PluginDirector_1;
    friend class PluginDirector_PluginLocationImpl;
};
//
class PluginDirector_PluginDirector_1 //, public ::java::io::FileFilter
{

public:
//
    bool accept(::java::io::File* file);

    // Generated
    PluginDirector_PluginDirector_1(PluginDirector *PluginDirector_this);

    PluginDirector *PluginDirector_this;


};

class PluginDirector_PluginLocationImpl
{

private:
	::java::net::URL* manifest;
	::java::net::URL* plugin;
	friend class PluginDirector;
	friend class PluginDirector_PluginDirector_1;
	friend class PluginDirector_loadPlugins_2;

public:
	::java::net::URL* getManifestLocation();
	::java::net::URL* getContextLocation();

	PluginDirector_PluginLocationImpl(PluginDirector *PluginDirector_this, ::java::net::URL* manifest, ::java::net::URL* plugin);
protected:
	PluginDirector_PluginLocationImpl(PluginDirector *PluginDirector_this, const ::default_init_tag&);


public:

	PluginDirector *PluginDirector_this;


};


class PluginDirector
{

private:
    static const std::string PLUGIN_DIRS_SEPARATOR_;
    static const std::string PLUGIN_FILE_EXTENSION_;
    static const std::string EXTENSIONS_PLUGIN_ID_;
    ::org::java::plugin::PluginManager* pluginManager;
    ExtensionsPlugin* extensionsPlugin;
    std::list allowedPlugins;
    std::map pluginIdMap;
protected:
    void ctor(const std::string & homeDir, const std::string & additionalPluginDirs, std::list allowedPlugins) /* throws(AggreGateException) */;

public:
    ContextManagerPtr getContextManager();
    CallerControllerPtr getCallerController();
    ContextPtr createGlobalConfigContext(BasePlugin* plugin, ContextPtr rootContext, bool requestReboot, VariableDefinitionPtr/*...*/ properties);
    ContextPtr createUserConfigContext(BasePlugin* plugin, ContextPtr userContext, bool requestReboot, VariableDefinitionPtr/*...*/ properties);

private:
    void loadPlugins(const std::string & dirList) /* throws(AggreGateException) */;
    const std::string & integrityCheckReportToString(::org::java::plugin::registry::IntegrityCheckReport* report);

public:
    void stop() /* throws(AggreGateException) */;

public: /* protected */
    const std::string & convertId(const std::string & id);

public:
    BasePlugin* getExistingPlugin(const std::string & id);
    ::org::java::plugin::Plugin* createNewPlugin(const std::string & id);

public: /* protected */
    bool isPluginAllowed(const std::string & id);

public:
    ::org::java::plugin::PluginManager* getPluginManager();
    ::java::lang::ClassLoader* getPluginClassLoader(const std::string & id) /* throws(PluginLifecycleException) */;

public: /* protected */
    ExtensionsPlugin* getExtensionsPlugin();

public:
	std::map getPluginIdMap();

    // Generated
    PluginDirector(const std::string & homeDir, const std::string & additionalPluginDirs, std::list allowedPlugins);
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
    AgClassPtr getClass0();
    friend class PluginDirector_PluginDirector_1;
    friend class PluginDirector_loadPlugins_2;
	friend class PluginDirector_PluginLocationImpl;
};

#endif