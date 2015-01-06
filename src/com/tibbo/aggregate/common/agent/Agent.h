// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/Agent.java


#ifndef AgentH
#define AgentH


class Agent
{



private:
    static const int SOCKET_TIMEOUT = 20000;
    
  //  RemoteServer* server; // todo it is defined in com\tibbo\aggregate\common\protocol\RemoteServer.h
    int maxEventQueueLength;
    AgentContext* context;
    //ContextManager* contextManager;// todo it is defined in com\tibbo\aggregate\common\context\ContextManager.h
    AgentImplementationController* controller;
 
    
public:
    static const int DEFAULT_PORT = 6480;    

   // Agent(RemoteServer* server, const std::string &name, bool eventConfirmation);
    Agent(AgentContext* context);

    void connect();
    void disconnect();
    void run();
    //RemoteServer* getServer();// todo it is defined in com\tibbo\aggregate\common\protocol\RemoteServer.h
    AgentContext* getContext();
    int getMaxEventQueueLength();
    void setMaxEventQueueLength(int maxEventQueueLength);





};

#endif