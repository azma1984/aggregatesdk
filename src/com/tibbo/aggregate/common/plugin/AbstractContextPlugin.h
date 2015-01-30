#ifndef _AbstractContextPlugin_H_
#define _AbstractContextPlugin_H_

#include "plugin/BasePlugin.h"
#include "plugin/ContextPlugin.h"
#include "context/Context.h"

class AbstractContextPlugin : public BasePlugin, public ContextPlugin
{

 public:
    void initialize();
    void deinitialize();
    void install(ContextManagerPtr cm);
    void deinstall(ContextManagerPtr cm);
	void install(ServerContextPtr context);
    void deinstall(ServerContextPtr context) ;
    void launch();
    void shutdown();


    AbstractContextPlugin();
    AbstractContextPlugin(const std::string & name);


    ContextPtr createGlobalConfigContext(ContextPtr rootContext, bool requestReboot, VariableDefinitionPtr properties);
    ContextPtr createUserConfigContext(ContextPtr userContext, bool requestReboot, VariableDefinitionPtr properties);
	std::string getDescription();
    ContextPtr getGlobalConfigContext();
	std::string getId();
    std::string getShortId();
    int getSortIndex();
    ContextPtr getUserConfigContext(const std::string & username);
    void globalDeinit(ContextPtr rootContext);
    void globalInit(ContextPtr rootContext);
    void globalStart();
    void globalStop();
    void userDeinit(ContextPtr userContext);
	void userInit(ContextPtr userContext);

};
#endif