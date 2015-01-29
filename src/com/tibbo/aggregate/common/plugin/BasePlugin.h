#ifndef _BasePlugin_H_
#define _BasePlugin_H_

//#include "plugin/AggreGatePlugin.h"
////#include "Log.h"
//#include "context/Context.h"
//#include "context/ContextManager.h"
//#include "context/ContextUtils.h"
#include "plugin/AggreGatePlugin.h"
//#include "plugin/PluginDirector.h"
#include <string>
#include "util/pointers.h"

//todo - class stub
class BasePlugin : public AggreGatePlugin
{
private:
	PluginDirectorPtr pluginDirector;
	std::string id;
	std::string description;
	int index;
	void init();


public:
   // const std::string & getId();   todo
    void setId(const std::string & id);
   // const std::string & getShortId();todo
   // const std::string & getDescription();    todo
    void setDescription(const std::string & description);
	PluginDirectorPtr getPluginDirector();
	void setPluginDirector(PluginDirectorPtr pluginDirector);
    ContextPtr createGlobalConfigContext(ContextPtr rootContext, bool requestReboot, VariableDefinitionPtr/*...*/ properties);
    ContextPtr createUserConfigContext(ContextPtr userContext, bool requestReboot, VariableDefinitionPtr/*...*/ properties);
    ContextPtr getGlobalConfigContext();
    ContextPtr getUserConfigContext(const std::string & username);
    int getSortIndex();

   void setIndex(int index);

   int compareTo(AggreGatePlugin* other);

   void doStart();
   void doStop();

	static const int INDEX_HIGHEST = 400;
    static const int INDEX_VERY_HIGH = 300;
    static const int INDEX_HIGH = 200;
    static const int INDEX_HIGHER = 100;
    static const int INDEX_NORMAL=0;
    static const int INDEX_LOWER = -100;
    static const int INDEX_LOW = -200;
    static const int INDEX_VERY_LOW = -300;
    static const int INDEX_LOWEST = -400;

    void globalInit(ContextPtr rootContext) ;
    void globalDeinit(ContextPtr rootContext) ;
    void userInit(ContextPtr userContext) ;
    void userDeinit(ContextPtr userContext) ;
    void globalStart() ;
	void globalStop() ;


	BasePlugin();
    BasePlugin(const std::string & description);

};
#endif
