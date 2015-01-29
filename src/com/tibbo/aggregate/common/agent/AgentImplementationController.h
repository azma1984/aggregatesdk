#ifndef AgentImplementationControllerH
#define AgentImplementationControllerH
  #define BOOST_THREAD_USE_LIB
//#include "AbstractContext.h"
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
  AgentImplementationController(BlockingChannelPtr dataChannel, ContextManagerPtr contextManager,/*ExecutorService**/AgObjectPtr commandExecutionService, int maxEventQueueLength)
:DefaultClientController(dataChannel,contextManager,commandExecutionService,maxEventQueueLength)
{
}

   
  bool controllerShouldHandle(EventPtr ev, ContextEventListenerPtr listener);


  
};

#endif