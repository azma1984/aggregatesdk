// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/Agent.java


#ifndef AgentH
#define AgentH

/*
#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"
*/

#include "AgentImplementationController.h"
#include "Context.h"

//#include "RemoteDeviceErrorException.h"
#include "RemoteServer.h"

#include "DefaultContextManager.h"

#include "AgentContext.h"

#include "EventDefinition.h"
//#include "context/ContextManager.h"



 class AgentContextManager: public DefaultContextManager<Context>
 {
  
    public:
   // AgentContextManager(Context *rootContext, bool async):DefaultContextManager<Context>(rootContext, async)
  //  {
   
  //  }
    
    void eventAdded(Context *con, EventDefinition *ed)
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
    
    RemoteServer* server; //it is defined in com\tibbo\aggregate\common\protocol\RemoteServer.h
    int maxEventQueueLength;
    AgentContext* context;
    /*ContextManager<Agent>*/AgentContextManager* contextManager;//it is defined in com\tibbo\aggregate\common\context\ContextManager.h
    AgentImplementationController* controller;

 
    
public:
	
    static const int DEFAULT_PORT = 6480;    

    Agent(RemoteServer* server, const std::string &name, bool eventConfirmation);
    Agent(AgentContext* context);

    void connect();
    void disconnect();
    void run();
    RemoteServer* getServer();//it is defined in com\tibbo\aggregate\common\protocol\RemoteServer.h
    AgentContext* getContext();
    int getMaxEventQueueLength();
    void setMaxEventQueueLength(int maxEventQueueLength);



};

#endif