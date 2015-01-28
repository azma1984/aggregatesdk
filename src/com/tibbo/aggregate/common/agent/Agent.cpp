// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/Agent.java

#include "Agent.h"


Agent::Agent(RemoteServerPtr server, const std::string &name, bool eventConfirmation) 
{
 this->server = server;
 this->context = new AgentContext(server, name, eventConfirmation);
 //todo
// this->contextManager = new AgentContextManager((ContextPtr)context, false); 
}


Agent::Agent(AgentContextPtr context) 
{
   this->server = context->getServer();
   this->context = context;
   //todo
//   this->contextManager = new AgentContextManager((ContextPtr)context, false);
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
      //  contextManager->getRoot()->accept(new Agent_connect_1(this));
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
	//todo - Where to define virtual function stop()?
     //contextManager->stop();
    }
    context->setSynchronized(false);
}

void Agent::run() 
{
    controller->runImpl();
}

RemoteServerPtr Agent::getServer()
{
    return server;
}

AgentContextPtr Agent::getContext()
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




