// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/Agent.java


#ifndef AgentH
#define AgentH

/*
#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"
*/

#include "AgentImplementationController.h"
//#include "Context.h"

//#include "RemoteDeviceErrorException.h"
#include "RemoteServer.h"

#include "DefaultContextManager.h"

#include "AgentContext.h"

#include "EventDefinition.h"



 class AgentContextManager: public DefaultContextManager<Context>
 {
  
    public:
    AgentContextManager(Context *rootContext, bool async)
    {
    //  super(rootContext, async);
    }
    
    void eventAdded(Context *con, EventDefinition ed)
    {
     
    //  super.eventAdded(con, ed);
    //  
    //  if (ed.getGroup() != null && controller != null)
    //  {
    //    con.addEventListener(ed.getName(), controller.getDefaultEventListener(), true);
    //  }
    }
    
 };
  
class Agent
{

private:
    static const int SOCKET_TIMEOUT = 20000;
    
    RemoteServer* server; // todo it is defined in com\tibbo\aggregate\common\protocol\RemoteServer.h
    int maxEventQueueLength;
    AgentContext* context;
    ContextManager<Agent>* contextManager;// todo it is defined in com\tibbo\aggregate\common\context\ContextManager.h
    AgentImplementationController* controller;
 
    
public:
    static const int DEFAULT_PORT = 6480;    

    Agent(RemoteServer* server, const std::string &name, bool eventConfirmation);
    Agent(AgentContext* context);

    void connect();
    void disconnect();
    void run();
    RemoteServer* getServer();// todo it is defined in com\tibbo\aggregate\common\protocol\RemoteServer.h
    AgentContext* getContext();
    int getMaxEventQueueLength();
    void setMaxEventQueueLength(int maxEventQueueLength);

};

#endif