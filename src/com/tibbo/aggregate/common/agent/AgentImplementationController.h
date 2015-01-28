// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/AgentImplementationController.java

#ifndef AgentImplementationControllerH
#define AgentImplementationControllerH

#include "AbstractContext.h"
#include "context/Context.h"
#include "AggreGateCommand.h"
#include "IncomingAggreGateCommand.h"
#include "OutgoingAggreGateCommand.h"
#include "DefaultClientController.h"
#include "Event.h"
#include "event/ContextEventListener.h"
#include "BlockingChannel.h"
#include "ContextManager.h"
#include <string>


class AgentImplementationController : public DefaultClientController
{
  protected: 
   void processMessageOperation(IncomingAggreGateCommandPtr cmd, OutgoingAggreGateCommandPtr ans);
  
  public:  
 //todo ExecutorService
  AgentImplementationController(BlockingChannel* dataChannel, ContextManager<Context>* contextManager,/*ExecutorService**/AgObjectPtr commandExecutionService, int maxEventQueueLength)
:DefaultClientController(dataChannel,contextManager,commandExecutionService,maxEventQueueLength)
{
}

   
  bool controllerShouldHandle(EventPtr ev, ContextEventListenerPtr listener);


  
};

#endif