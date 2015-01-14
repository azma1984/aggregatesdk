// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/agent/AgentImplementationController.java
#include "AgentImplementationController.h"





void AgentImplementationController::processMessageOperation(IncomingAggreGateCommand* cmd, OutgoingAggreGateCommand* ans) 
{
    DefaultClientController::processMessageOperation(cmd, ans);
    std::string context = cmd->getParameter(AggreGateCommand::INDEX_OPERATION_CONTEXT);
    Context* con = getContext(context);
    if(con != 0) 
    {
     addNormalListener(con->getPath(),AbstractContext::E_UPDATED, getDefaultEventListener());
    }
}

bool AgentImplementationController::controllerShouldHandle(Event* ev, ContextEventListener* listener) 
{
    return true;
}



