#ifndef _PluginDirector_H_
#define _PluginDirector_H_

#include "AggreGateException.h"
#include "Constants.h"
#include "Cres.h"
//#include "Log.h"
#include "plugin/BasePlugin.h"
#include "plugin/ExtensionsPlugin.h"
#include "util/net.h"

class PluginDirector_loadPlugins_2
{
public:
//	bool accept(::java::io::File* file);


   // PluginDirector_loadPlugins_2(PluginDirector *PluginDirector_this);

   //	PluginDirector *PluginDirector_this;

private:
	friend class PluginDirector;
    friend class PluginDirector_PluginDirector_1;
    friend class PluginDirector_PluginLocationImpl;
};
//
class PluginDirector_PluginDirector_1 //, public ::java::io::FileFilter
{

public:
//
  //  bool accept(::java::io::File* file);

    // Generated
  //  PluginDirector_PluginDirector_1(PluginDirector *PluginDirector_this);

    PluginDirector *PluginDirector_this;


};

class PluginDirector_PluginLocationImpl
{

private:
	URL* manifest;
	URL* plugin;
	friend class PluginDirector;
	friend class PluginDirector_PluginDirector_1;
	friend class PluginDirector_loadPlugins_2;

public:
	URL* getManifestLocation();
	URL* getContextLocation();

   //	PluginDirector_PluginLocationImpl(PluginDirector *PluginDirector_this, ::java::net::URL* manifest, ::java::net::URL* plugin);
protected:
   //	PluginDirector_PluginLocationImpl(PluginDirector *PluginDirector_this, const ::default_init_tag&);


public:

	PluginDirector *PluginDirector_this;


};


class PluginDirector
{

private:
	//::org::java::plugin::PluginManager* pluginManager;
	ExtensionsPlugin* extensionsPlugin;
   // std::list allowedPlugins;
  //  std::map pluginIdMap;
	void loadPlugins(const std::string & dirList) /* throws(AggreGateException) */;
   //	const std::string & integrityCheckReportToString(::org::java::plugin::registry::IntegrityCheckReport* report);
	void init();
	friend class PluginDirector_PluginDirector_1;
	friend class PluginDirector_loadPlugins_2;
	friend class PluginDirector_PluginLocationImpl;
public:
	static const std::string PLUGIN_DIRS_SEPARATOR;
	static const std::string PLUGIN_FILE_EXTENSION;
	static const std::string EXTENSIONS_PLUGIN_ID;

	ContextManagerPtr getContextManager();
	CallerControllerPtr getCallerController();
	ContextPtr createGlobalConfigContext(BasePluginPtr plugin, ContextPtr rootContext, bool requestReboot, VariableDefinitionPtr/*...*/ properties);
	ContextPtr createUserConfigContext(BasePluginPtr plugin, ContextPtr userContext, bool requestReboot, VariableDefinitionPtr/*...*/ properties);


	void stop() /* throws(AggreGateException) */;

	const std::string & convertId(const std::string & id);


	BasePluginPtr getExistingPlugin(const std::string & id);
   //	::org::java::plugin::Plugin* createNewPlugin(const std::string & id);


	bool isPluginAllowed(const std::string & id);


   //	::org::java::plugin::PluginManager* getPluginManager();
   //	::java::lang::ClassLoader* getPluginClassLoader(const std::string & id) /* throws(PluginLifecycleException) */;

	ExtensionsPlugin* getExtensionsPlugin();

   //	std::map getPluginIdMap();

   //	PluginDirector(const std::string & homeDir, const std::string & additionalPluginDirs, std::list allowedPlugins);

};

#endif