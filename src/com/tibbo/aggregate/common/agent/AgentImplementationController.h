#pragma once

  #define BOOST_THREAD_USE_LIB
#include "context/Context.h"
#include "protocol/AggreGateCommand.h"
#include "protocol/IncomingAggreGateCommand.h"
#include "protocol/OutgoingAggreGateCommand.h"
#include "protocol/DefaultClientController.h"
#include "data/Event.h"
#include "event/ContextEventListener.h"
//#include "BlockingChannel.h"
#include "context/ContextManager.h"
#include <string>


class AgentImplementationController : public DefaultClientController
{
protected:
   void processMessageOperation(IncomingAggreGateCommandPtr cmd, OutgoingAggreGateCommandPtr ans);
  
public:
    //todo ExecutorService
    AgentImplementationController(BlockingChannelPtr dataChannel, ContextManagerPtr contextManager,
                                  /*ExecutorService**/AgObjectPtr commandExecutionService, int maxEventQueueLength);
   
    bool controllerShouldHandle(EventPtr ev, ContextEventListenerPtr listener);
};
