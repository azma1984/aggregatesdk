// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionManager.java
#include <ActionManager.h>



void ActionManager::init()
{
    actionIdGenerator = new ActionIdGenerator();
    actions = ::java::util::Collections::synchronizedMap(new ::java::util::HashMap());
    actionContexts = ::java::util::Collections::synchronizedMap(new ::java::util::HashMap());
}

void ActionManager::ActionManager(ActionDirectory<ActionLocator>* actionDirectory)
{
	init();
	if(actionDirectory == 0)
	{
	 std::cout<<"Pointer = NULL!";
    }
    this->actionDirectory = actionDirectory;
}

std::list<ActionDefinition>* ActionManager::resolveDefinitions(std::list<ActionLocator>  actionLocators)
{
	if(actionLocators == 0)
	{
	 std::cout<<"Pointer = NULL!";
	}
	std::list<ActionDefinition>  actionDefinitions;

   std::list<ActionLocator>::const_iterator  actionLocator;

	for (actionLocator = actionLocators.begin(); actionLocator != actionLocators.end(); ++actionLocator)
	{
	  ActionDefinitionPtractionDefinition = actionDirectory->getActionDefinition(*actionLocator);
	   if(actionDefinition == 0)
		{
		 std::cout <<"Can't resolve: ";

		}
	  actionDefinitions->Insert(actionDefinitions->begin(),actionDefinition);
	}
    return actionDefinitions;
}

ActionIdentifierPtr ActionManager::initActions(std::list<BatchEntry>  entries, ActionContextPtr batchActionContext)
{
	if(entries == 0)
	{
	 std::exception("Pointer = NULL!");
	}

	if(batchActionContext == 0)
	{
	 std::exception("Pointer = NULL!");
	}

	RequestCachePtr requestCache = new RequestCache();
	BatchContextPtr batchContext = new BatchContext();


	std::list<BatchEntry>::const_iterator  BatchEntry;

	for (BatchEntry = entries.begin(); BatchEntry!= entries.end(); ++BatchEntry)
	{
	  if(entry == 0)
	  {
	   std::cout<<"Entries list contains nulls";
	  }

	  ActionContext actionContext = entry->getActionContext();
	  actionContext->setBatchContext(batchContext);
	  actionContext->setRequestCache(requestCache);
	  batchContext->addBatchEntry(entry);

	}
	batchActionContext->setBatchContext(batchContext);
	batchActionContext->setRequestCache(requestCache);

	BatchActionPtrbatchAction = new BatchAction(this);
	batchAction->init(batchActionContext, 0);
	batchActionContext->setActionState(ActionContext.ActionState::INITIALIZED);
    return registerAction(batchActionContext, batchAction, new ActionExecutionMode(ActionExecutionMode::BATCH));
}

ActionIdentifierPtr ActionManager::initAction(ActionContextPtr actionContext, InitialRequestPtr initialParameters, ActionExecutionModePtr mode)
{
	ActionDefinitionPtractionDefinition = actionContext->getActionDefinition();
	ReentrantLock *lock = actionDefinition->getExecutionLock();

	if(lock->isLocked() && !lock->isHeldByCurrentThread())
	{
	 std::cout<< Cres::get())->getString(u"acActionBeingExecuted");
    }
	Action<InitialRequest,ActionCommand,ActionResponse>  *action = instantiateAction(actionDefinition);
	actionContext->setActionState(ActionContext.ActionState::CREATED);
	action->init(actionContext, initialParameters);
	actionContext->setActionState(ActionContext.ActionState::INITIALIZED);
    return registerAction(actionContext, action, mode);
}


Action<InitialRequest,ActionCommand,ActionResponse> * ActionManager::instantiateAction(ActionDefinitionPtr actionDefinition)
{
	if(actionDefinition == 0)
	{
        std::exception("Pointer = NULL!");
    }
	return actionDefinition->instantiate();
}

ActionCommandPtr ActionManager::service(ActionIdentifierPtr actionId, ActionResponsePtr actionRequest)
{
    if(actionId == 0) {
        std::exception("Pointer = NULL!");
    }
	Action<InitialRequest,ActionCommand,ActionResponse> * action = actions->get(actionId));
	if(action == 0)
	{
	 std::cout<<"Action with id '"+actionId+"' doesn't exists";
    }
	ActionContextPtr actionContext = (ActionContextPtr)(actionContexts)->get(action);

	if(actionRequest == 0 && actionContext->getActionState() != ActionContext.ActionState::INITIALIZED)
	{
	  std::cout<<"Null actionRequest is allowed only within first call to service()";
    }
	actionContext->setActionState(ActionContext.ActionState::WORKING);
	ActionCommandPtr actionCommand=0;
	ActionResponsePtractiveRequest = actionRequest;
	do
	{
		RequestCachePtrrequestCache = actionContext->getRequestCache();

		if((activeRequest != 0 && (activeRequest->getRequestId() != 0) && (activeRequest->shouldRemember()==true))
		{
			if(requestCache == 0)
			{
			  RequestCachePtr  requestCache = new RequestCache();
			  actionContext->setRequestCache(requestCache);
            }
		   requestCache->addRequest(activeRequest->getRequestId(), activeRequest);
		}

		actionCommand = action->service(activeRequest));

		if((requestCache != 0) && (actionCommand != 0) && (actionCommand->getRequestId() != 0) && !actionContext->getRequestedIds()->contains(actionCommand->getRequestId()))
		{
		 activeRequest = requestCache->getRequest(actionCommand->getRequestId());
		}
		else
		{
		 activeRequest = 0;
        }

		if((actionCommand != 0) && (actionCommand->getRequestId() != 0))
		{
		 actionContext->getRequestedIds()->add(actionCommand->getRequestId());
        }
	}
	while (activeRequest != 0);

    return actionCommand;
}

ActionResultPtr ActionManager::destroyAction(ActionIdentifierPtr actionId)
{
	if(actionId == 0)
	{
	 std::cout<<"Pointer = NULL!";
	}

	Action<InitialRequest,ActionCommand,ActionResponse>  *action = actions->get(actionId);

	if(action == 0)
	{
	 std::cout<<"Action with id '" + actionId + "' doesn't exists";
	 return 0;
    }

	try
	 {
	  actionContexts->get(action)->setActionState(ActionContext.ActionState::DESTROYED);
	  return action->destroy();
	 }
	 __finally
	 {
	  actions->remove(actionId);
	  actionContexts->remove(action);
	 }

}

void ActionManager::destroyAll()
{
   //todo That has to be destroyed?
  //	for (;;)
  //	{
   //	   ActionIdentifierPtr actionId = ActionIdentifierPtrMap;
   //	   {
	  //		destroyAction(actionId);
   //	  }
   //	}
}

ActionContextPtr ActionManager::getActionContext(ActionIdentifierPtr actionId)
{
	Action<InitialRequest,ActionCommand,ActionResponse> * action =  actions->get(actionId));
	return actionContexts->get(action);
}

ActionDirectoryPtr ActionManager::getActionDirectory()
{
	return actionDirectory;
}

ActionIdentifierPtr ActionManager::registerAction(ActionContextPtr actionContext, Action<InitialRequest,ActionCommand,ActionResponse> * action, ActionExecutionModePtr mode)
{
	ActionIdentifierPtractionId = actionIdGenerator->generate(action);
	actions->put(actionId, action);
    actionContexts->put(action, actionContext);
    return actionId;
}


