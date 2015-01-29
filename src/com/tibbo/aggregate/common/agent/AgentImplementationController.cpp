#include "agent/AgentImplementationController.h"
#include "context/AbstractContext.h"

AgentImplementationController::AgentImplementationController(
    BlockingChannel dataChannel,
    ContextManager contextManager,
    /*ExecutorService**/AgObjectPtr commandExecutionService,
    Integer maxEventQueueLength)
{
    DefaultClientController(dataChannel, contextManager, commandExecutionService, maxEventQueueLength);
}

void AgentImplementationController::processMessageOperation(IncomingAggreGateCommandPtr cmd, OutgoingAggreGateCommandPtr ans) 
{
    DefaultClientController::processMessageOperation(cmd, ans);
    std::string context = cmd->getParameter(AggreGateCommand::INDEX_OPERATION_CONTEXT);
    ContextPtr con = getContext(context); //todo
    if(con != 0)
    {
        addNormalListener(con->getPath(),AbstractContext::E_UPDATED, getDefaultEventListener());
    }
}

bool AgentImplementationController::controllerShouldHandle(EventPtr ev, ContextEventListenerPtr listener) 
{
    return true;
}



