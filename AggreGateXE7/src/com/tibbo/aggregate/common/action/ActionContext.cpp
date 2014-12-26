// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionContext.java
#include "ActionContext.h"
#include "ActionManager.h"


ActionContext::ActionContext(ActionDefinition* actionDefinition, ActionManager* actionManager)
{
 setActionDefinition(actionDefinition);
 setActionManager(actionManager);
}

ActionDefinition* ActionContext::getActionDefinition()
{
    return actionDefinition;
}

BatchContext* ActionContext::getBatchContext()
{
    return batchContext;
}

RequestCache* ActionContext::getRequestCache()
{
    return requestCache;
}

ActionState* ActionContext::getActionState()
{
    return actionState;
}

ActionManager* ActionContext::getActionManager()
{
    return actionManager;
}

std::list<RequestIdentifier>* ActionContext::getRequestedIds()
{
    return &requestedIds;
}

void ActionContext::setActionDefinition(ActionDefinition* actionDefinition)
{
	if(actionDefinition == 0)
	{
	 std::cout<<"Pointer = NULL!";
    }
    this->actionDefinition = actionDefinition;
}

void ActionContext::setBatchContext(BatchContext* batchContext)
{
    this->batchContext = batchContext;
}

void ActionContext::setRequestCache(RequestCache* requestCache)
{
    this->requestCache = requestCache;
}

void ActionContext::setActionState(ActionState* actionState)
{
	if(actionState == 0)
	{
	 std::cout<<"Pointer = NULL!";
	}
	this->actionState = actionState;
}

void ActionContext::setActionManager(ActionManager* actionManager)
{
	if(actionManager == 0)
	{
	 std::cout<<"Pointer = NULL!";
	}
    this->actionManager = actionManager;
}







