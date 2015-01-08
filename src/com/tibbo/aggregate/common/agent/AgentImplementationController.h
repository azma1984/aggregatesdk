// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/AgentImplementationController.java

#ifndef AgentImplementationControllerH
#define AgentImplementationControllerH

#include "AbstractContext.h"
#include "Context.h"
#include "AggreGateCommand.h"
#include "IncomingAggreGateCommand.h"
#include "OutgoingAggreGateCommand.h"
#include "DefaultClientController.h"
#include "Event.h"
#include "ContextEventListener.h"
#include "BlockingChannel.h"
#include "ContextManager.h"


class AgentImplementationController : public DefaultClientController
{
  protected: 
   void processMessageOperation(IncomingAggreGateCommand* cmd, OutgoingAggreGateCommand* ans);
  
  public:  
 //todo ExecutorService
  AgentImplementationController(BlockingChannel* dataChannel, ContextManager<Context>* contextManager,/*ExecutorService**/void* commandExecutionService, int maxEventQueueLength)
:DefaultClientController(dataChannel,contextManager,commandExecutionService,maxEventQueueLength)
{
}

   
  bool controllerShouldHandle(Event* ev, ContextEventListener* listener);


  
};

#endif