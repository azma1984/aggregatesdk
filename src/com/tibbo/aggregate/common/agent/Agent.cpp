// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/Agent.java

#include "Agent.h"

/*
#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/agent/Agent_connect_1.h"
#include <com/tibbo/aggregate/common/agent/Agent_AgentContextManager.h"
#include <com/tibbo/aggregate/common/agent/AgentContext.h"
#include <com/tibbo/aggregate/common/agent/AgentImplementationController.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
#include <com/tibbo/aggregate/common/device/RemoteDeviceErrorException.h"
#include <com/tibbo/aggregate/common/protocol/RemoteServer.h"
#include <com/tibbo/aggregate/common/util/BlockingChannel.h"
*/

Agent::Agent()

{
    
}

Agent::Agent(RemoteServer* server, const std::string &name, bool eventConfirmation) 
{
 this->server = server;
 this->context = new AgentContext(server, name, eventConfirmation);
 this->contextManager = new AgentContextManager(context, false); 
}


Agent::Agent(AgentContext* context) 
{
   this->server = context->getServer();
   this->context = context;
   this->contextManager = new AgentContextManager(context, false);
}

void Agent::connect() 
{
    try 
     {
        context->setSynchronized(false);
        
	//todo Socket C++ ?
	//"Connecting to remote server"
      //  auto socket = SocketFactory::getDefault())->createSocket(server)->getAddress(), server->getPort());
      //  socket->setSoTimeout(SOCKET_TIMEOUT);
      //  BlockingChannel dataChannel = BlockingChannel(socket);
        //"Connection with remote server established";
        contextManager->start();
        controller = new AgentImplementationController(dataChannel, contextManager, newCachedThreadPool(), maxEventQueueLength);
      //  java_cast< ::com::tibbo::aggregate::common::context::Context* >(contextManager)->getRoot()))->accept(new Agent_connect_1(this));
    } 
    catch (...) 
    {

    }
}

void Agent::disconnect()
{
    if(controller != 0) 
    {
     controller->shutdown();
    }
   
   if(contextManager != 0) 
    {
      contextManager->stop();
    }
    context->setSynchronized(false);
}

void Agent::run() 
{
    controller->runImpl();
}

RemoteServer* Agent::getServer()
{
    return server;
}

AgentContext* Agent::getContext()
{
    return context;
}

int Agent::getMaxEventQueueLength()
{
    return maxEventQueueLength;
}

void Agent::setMaxEventQueueLength(int maxEventQueueLength)
{
    this->maxEventQueueLength = maxEventQueueLength;
}




