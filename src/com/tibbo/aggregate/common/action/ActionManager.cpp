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
	  ActionDefinition *actionDefinition = actionDirectory->getActionDefinition(*actionLocator);
	   if(actionDefinition == 0)
		{
		 std::cout <<"Can't resolve: ";

		}
	  actionDefinitions->Insert(actionDefinitions->begin(),actionDefinition);
	}
    return actionDefinitions;
}

ActionIdentifier* ActionManager::initActions(std::list<BatchEntry>  entries, ActionContext* batchActionContext)
{
	if(entries == 0)
	{
	 std::exception("Pointer = NULL!");
	}

	if(batchActionContext == 0)
	{
	 std::exception("Pointer = NULL!");
	}

	RequestCache* requestCache = new RequestCache();
	BatchContext* batchContext = new BatchContext();


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

	BatchAction *batchAction = new BatchAction(this);
	batchAction->init(batchActionContext, 0);
	batchActionContext->setActionState(ActionContext.ActionState::INITIALIZED);
    return registerAction(batchActionContext, batchAction, new ActionExecutionMode(ActionExecutionMode::BATCH));
}

ActionIdentifier* ActionManager::initAction(ActionContext* actionContext, InitialRequest* initialParameters, ActionExecutionMode* mode)
{
	ActionDefinition *actionDefinition = actionContext->getActionDefinition();
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


Action<InitialRequest,ActionCommand,ActionResponse> * ActionManager::instantiateAction(ActionDefinition* actionDefinition)
{
	if(actionDefinition == 0)
	{
        std::exception("Pointer = NULL!");
    }
	return actionDefinition->instantiate();
}

ActionCommand* ActionManager::service(ActionIdentifier* actionId, ActionResponse* actionRequest)
{
    if(actionId == 0) {
        std::exception("Pointer = NULL!");
    }
	Action<InitialRequest,ActionCommand,ActionResponse> * action = actions->get(actionId));
	if(action == 0)
	{
	 std::cout<<"Action with id '"+actionId+"' doesn't exists";
    }
	ActionContext* actionContext = (ActionContext*)(actionContexts)->get(action);

	if(actionRequest == 0 && actionContext->getActionState() != ActionContext.ActionState::INITIALIZED)
	{
	  std::cout<<"Null actionRequest is allowed only within first call to service()";
    }
	actionContext->setActionState(ActionContext.ActionState::WORKING);
	ActionCommand* actionCommand=0;
	ActionResponse  *activeRequest = actionRequest;
	do
	{
		RequestCache *requestCache = actionContext->getRequestCache();

		if((activeRequest != 0 && (activeRequest->getRequestId() != 0) && (activeRequest->shouldRemember()==true))
		{
			if(requestCache == 0)
			{
			  RequestCache*  requestCache = new RequestCache();
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

ActionResult* ActionManager::destroyAction(ActionIdentifier* actionId)
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
   //	   ActionIdentifier* actionId = ActionIdentifier*Map;
   //	   {
	  //		destroyAction(actionId);
   //	  }
   //	}
}

ActionContext* ActionManager::getActionContext(ActionIdentifier* actionId)
{
	Action<InitialRequest,ActionCommand,ActionResponse> * action =  actions->get(actionId));
	return actionContexts->get(action);
}

ActionDirectory* ActionManager::getActionDirectory()
{
	return actionDirectory;
}

ActionIdentifier* ActionManager::registerAction(ActionContext* actionContext, Action<InitialRequest,ActionCommand,ActionResponse> * action, ActionExecutionMode* mode)
{
	ActionIdentifier *actionId = actionIdGenerator->generate(action);
	actions->put(actionId, action);
    actionContexts->put(action, actionContext);
    return actionId;
}


