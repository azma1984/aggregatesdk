#include "action/ActionManager.h"



ActionManager::ActionManager(ActionDirectoryPtr actionDirectory)
{
	actionIdGenerator = ActionIdGeneratorPtr(new ActionIdGenerator());

	if(actionDirectory == 0)
	{
        //TODO:
        //throw new NullPointerException();
    }
    this->actionDirectory = actionDirectory;
}

//TODO: not used
//std::list< ActionDefinitionPtr > ActionManager::resolveDefinitions(std::list< ActionLocatorPtr>  actionLocators)
//{     //todo
//   //	if(actionLocators == 0)
//	//{
//	// std::cout<<"Pointer = NULL!";
//	//}
//	std::list<ActionDefinitionPtr>  actionDefinitions;

//   std::list<ActionLocatorPtr>::const_iterator  actionLocator;

//	for (actionLocator = actionLocators.begin(); actionLocator != actionLocators.end(); ++actionLocator)
//	{
//        ActionDefinitionPtr actionDefinition = actionDirectory->getActionDefinition(actionLocator);
//        if(actionDefinition == 0) {
//            std::cout <<"Can't resolve: ";
//		}
//	  actionDefinitions.push_front(actionDefinition);
//	}
//	return actionDefinitions;
//}



ActionIdentifierPtr ActionManager::initActions(std::list<BatchEntryPtr>  entries, ActionContextPtr batchActionContext)
{      // todo
   //	if(entries == 0)
  //	{
  //	 throw new NullPointerException();
  //	}

	if(batchActionContext == 0)
	{
    // throw new NullPointerException();
	}

	RequestCachePtr requestCache = RequestCachePtr(new RequestCache());
	BatchContextPtr batchContext = BatchContextPtr(new BatchContext());


	std::list<BatchEntryPtr>::const_iterator  BatchEntryIt;

    for (BatchEntryIt = entries.begin(); BatchEntryIt!= entries.end(); ++BatchEntryIt)
    {
        BatchEntryPtr entry = BatchEntryPtr(*BatchEntryIt);
        if(entry == 0)
        {
           // throw new IllegalArgumentException("Entries list contains nulls");
        }

        ActionContextPtr actionContext = entry->getActionContext();
        actionContext->setBatchContext(batchContext);
        actionContext->setRequestCache(requestCache);
        batchContext->addBatchEntry(entry);

    }
    batchActionContext->setBatchContext(batchContext);
    batchActionContext->setRequestCache(requestCache);

    BatchActionPtr batchAction = BatchActionPtr(new BatchAction(ActionManagerPtr(this)));
    batchAction->init(batchActionContext, InitialRequestPtr());
    batchActionContext->setActionState(ActionContext::ActionState1::INITIALIZED);
  //	return registerAction(batchActionContext, batchAction, ActionExecutionModePtr(new ActionExecutionMode(ActionExecutionMode::BATCH)));
  //todo
 return ActionIdentifierPtr();
}

ActionIdentifierPtr ActionManager::initAction(
    ActionContextPtr actionContext,
    InitialRequestPtr initialParameters,
    ActionExecutionModePtr mode)
{
    ActionDefinitionPtr actionDefinition = actionContext->getActionDefinition();
    //  todo - thread
   //	ReentrantLock *lock = actionDefinition->getExecutionLock();

  //	if(lock->isLocked() && !lock->isHeldByCurrentThread())
    //{
   //	 std::cout<< Cres::get())->getString(u"acActionBeingExecuted");
   // }
    ActionPtr action = instantiateAction(actionDefinition);
    actionContext->setActionState(ActionContext::CREATED);
    action->init(actionContext, initialParameters);
    actionContext->setActionState(ActionContext::INITIALIZED);

    return registerAction(actionContext, action, mode);
}


ActionPtr ActionManager::instantiateAction(ActionDefinitionPtr actionDefinition)
{    //todo
    if(actionDefinition == 0)
    {
        //TODO:
        //throw new NullPointerException();
    }
    return actionDefinition->instantiate();
}

  //todo
ActionCommandPtr ActionManager::service(ActionIdentifierPtr actionId, ActionResponsePtr actionRequest)
{
    if(actionId == 0) {
        //TODO:
        //throw new NullPointerException();
    }
    ActionPtr action = actions[actionId];
    if(action == 0)
    {
        //TODO:
        //throw new IllegalStateException("Action with id '" + actionId + "' doesn't exists");
    }
    ActionContextPtr actionContext = actionContexts[action];

    if(actionRequest == 0 && actionContext->getActionState() != ActionContext::INITIALIZED)
    {
        //TODO:
        //throw new IllegalArgumentException("Null actionRequest is allowed only within first call to service()");
    }

    actionContext->setActionState(ActionContext::WORKING);
    ActionCommandPtr actionCommand=0;
    ActionResponsePtr activeRequest = actionRequest;
    do
    {
        RequestCachePtr requestCache = actionContext->getRequestCache();

        if((activeRequest != 0) && (activeRequest->getRequestId() != 0) && (activeRequest->shouldRemember()==true))
        {
            if(requestCache == 0)
            {
              RequestCachePtr  requestCache = RequestCachePtr(new RequestCache());
              actionContext->setRequestCache(requestCache);
            }
           requestCache->addRequest(activeRequest->getRequestId(), activeRequest);
        }

        actionCommand = action->service(activeRequest);

        if ( (requestCache != 0) && (actionCommand != 0) && (actionCommand->getRequestId() != 0) &&
                (std::find(actionContext->getRequestedIds().begin(),
                           actionContext->getRequestedIds().end(),
                           actionCommand->getRequestId()) == actionContext->getRequestedIds().end()) )
        {
            activeRequest = requestCache->getRequest(actionCommand->getRequestId());
        }
        else
        {
            activeRequest = 0;
        }

        if((actionCommand != 0) && (actionCommand->getRequestId() != 0))
        {
            actionContext->getRequestedIds().push_back(actionCommand->getRequestId());
        }
    }

    while (activeRequest != 0);

    return actionCommand;
}

 //todo
ActionResultPtr ActionManager::destroyAction(ActionIdentifierPtr actionId)
{
    if(actionId == 0)
    {
        //TODO:
        //throw new NullPointerException();
    }

    ActionPtr action = actions[actionId];

    if(action == 0)
    {
        //std::cout<<"Action with id '" + actionId + "' doesn't exists";
        //return 0;
    }

    try
    {
        actionContexts[action]->setActionState(ActionContext::DESTROYED);
        return action->destroy();
    }catch(...) {// TODO: finaly
        actions.erase(actionId);
        actionContexts.erase(action);
    }

}

void ActionManager::destroyAll()
{
//   todo That has to be destroyed?
//  	for (;;)
//  	{
//   	   ActionIdentifierPtr actionId = ActionIdentifierPtrMap;
//   	   {
//	  		destroyAction(actionId);
//   	  }
//   	}
}

ActionContextPtr ActionManager::getActionContext(ActionIdentifierPtr actionId)
{
    ActionPtr action =  actions[actionId];
    return actionContexts[action];
}

ActionDirectoryPtr ActionManager::getActionDirectory()
{
    return actionDirectory;
}

ActionIdentifierPtr ActionManager::registerAction(ActionContextPtr actionContext, ActionPtr action, ActionExecutionModePtr mode)
{
    ActionIdentifierPtr actionId = actionIdGenerator->generate(action);
    actions[actionId]= action;
    actionContexts[action]= actionContext;

    return actionId;
}


