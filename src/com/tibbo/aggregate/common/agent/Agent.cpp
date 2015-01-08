// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/Agent.java

#include "Agent.h"


Agent::Agent(RemoteServer* server, const std::string &name, bool eventConfirmation) 
{
 this->server = server;
 this->context = new AgentContext(server, name, eventConfirmation);
 //this->contextManager = new AgentContextManager((Context *)context, false); 
}


Agent::Agent(AgentContext* context) 
{
   this->server = context->getServer();
   this->context = context;
//   this->contextManager = new AgentContextManager((Context *)context, false);
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
        BlockingChannel dataChannel = BlockingChannel(/*socket*/);
        //"Connection with remote server established";
    //    contextManager->start();
    //    controller = new AgentImplementationController(dataChannel, contextManager,0 /*newCachedThreadPool()*/, maxEventQueueLength);
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
   //  controller->shutdown();
    }
   
   if(contextManager != 0) 
    {
     // contextManager->stop();
    }
    context->setSynchronized(false);
}

void Agent::run() 
{
   // controller->runImpl();
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




