#ifndef AgentH
#define AgentH
 #define BOOST_THREAD_USE_LIB
/*
#include "Cres.h"
#include "Log.h"
*/

#include "agent/AgentImplementationController.h"
#include "context/Context.h"

//#include "RemoteDeviceErrorException.h"
#include "protocol/RemoteServer.h"
#include "context/DefaultContextManager.h"
#include "agent/AgentContext.h"
#include "context/EventDefinition.h"
//#include "context/ContextManager.h"


 class AgentContextManager: public DefaultContextManager<Context>
 {
  
    public:
   // AgentContextManager(ContextPtrrootContext, bool async):DefaultContextManager<Context>(rootContext, async)
  //  {
   
  //  }
    
	void eventAdded(ContextPtr con, EventDefinitionPtr ed)
	{
     
     DefaultContextManager<Context>::eventAdded(con, ed);
      
	 //todo - How to address to the Agent::controller?
     if ((ed->getGroup().empty() == false) /*&& (Agent::controller != 0)*/)
      {
      //todo - Where to define virtual function addEventListener(,,)?
    //    con->addEventListener(ed->getName(), Agent::controller->getDefaultEventListener(), true);
      }
    }
    
 };
  
class Agent
{
private:  
    static const int SOCKET_TIMEOUT = 20000;
    
    RemoteServerPtr server; //it is defined in com\tibbo\aggregate\common\protocol\RemoteServer.h
    int maxEventQueueLength;
	AgentContextPtr context;
	/*ContextManager<Agent>*/AgentContextManagerPtr contextManager;//it is defined in com\tibbo\aggregate\common\context\ContextManager.h
    AgentImplementationController* controller;


public:
	
    static const int DEFAULT_PORT = 6480;    

    Agent(RemoteServerPtr server, const std::string &name, bool eventConfirmation);
    Agent(AgentContextPtr context);

    void connect();
    void disconnect();
    void run();
    RemoteServerPtr getServer();//it is defined in com\tibbo\aggregate\common\protocol\RemoteServer.h
    AgentContextPtr getContext();
    int getMaxEventQueueLength();
    void setMaxEventQueueLength(int maxEventQueueLength);



};

#endif
