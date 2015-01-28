// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/AgentImplementationController.java
#include "AgentImplementationController.h"





void AgentImplementationController::processMessageOperation(IncomingAggreGateCommandPtr cmd, OutgoingAggreGateCommandPtr ans) 
{
    DefaultClientController::processMessageOperation(cmd, ans);
    std::string context = cmd->getParameter(AggreGateCommand::INDEX_OPERATION_CONTEXT);
    ContextPtr con = getContext(context);
    if(con != 0) 
    {
     addNormalListener(con->getPath(),AbstractContext::E_UPDATED, getDefaultEventListener());
    }
}

bool AgentImplementationController::controllerShouldHandle(EventPtr ev, ContextEventListenerPtr listener) 
{
    return true;
}



