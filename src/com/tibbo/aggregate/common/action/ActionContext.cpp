#include "ActionContext.h"


ActionContext::ActionContext(ActionDefinitionPtr actionDefinition, ActionManagerPtr actionManager)
{
    setActionDefinition(actionDefinition);
    setActionManager(actionManager);
}

ActionDefinitionPtr ActionContext::getActionDefinition()
{
    return actionDefinition;
}

BatchContextPtr ActionContext::getBatchContext()
{
    return batchContext;
}

RequestCachePtr ActionContext::getRequestCache()
{
    return requestCache;
}

ActionStatePtr ActionContext::getActionState()
{
    return actionState;
}

ActionManagerPtr ActionContext::getActionManager()
{
    return actionManager;
}

std::list<RequestIdentifier>* ActionContext::getRequestedIds()
{
    return &requestedIds;
}

void ActionContext::setActionDefinition(ActionDefinitionPtr actionDefinition)
{
	if(actionDefinition == 0)
	{
	 std::cout<<"Pointer = NULL!";
    }
    this->actionDefinition = actionDefinition;
}

void ActionContext::setBatchContext(BatchContextPtr batchContext)
{
    this->batchContext = batchContext;
}

void ActionContext::setRequestCache(RequestCachePtr requestCache)
{
    this->requestCache = requestCache;
}

void ActionContext::setActionState(ActionStatePtr actionState)
{
	if(actionState == 0)
	{
	 std::cout<<"Pointer = NULL!";
	}
	this->actionState = actionState;
}

void ActionContext::setActionManager(ActionManagerPtr actionManager)
{
	if(actionManager == 0)
	{
	 std::cout<<"Pointer = NULL!";
	}
    this->actionManager = actionManager;
}







