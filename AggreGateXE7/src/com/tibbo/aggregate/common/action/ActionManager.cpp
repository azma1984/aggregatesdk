// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionManager.java
#include <ActionManager.h>

 /*

void ActionManager::init()
{
    actionIdGenerator = new ActionIdGenerator();
    actions = ::java::util::Collections::synchronizedMap(new ::java::util::HashMap());
    actionContexts = ::java::util::Collections::synchronizedMap(new ::java::util::HashMap());
}

void ActionManager::ActionManager(ActionDirectory* actionDirectory)
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
	if(actionLocators == 0) {
		std::cout<<"Pointer = NULL!";
	}
	std::list<ActionDefinition>  actionDefinitions;

	for (auto _i = actionLocators)->iterator(); _i->hasNext(); )
	{
        ActionLocator* actionLocator = java_cast< ActionLocator* >(_i->next());
        {
            auto actionDefinition = actionDirectory)->getActionDefinition(actionLocator);
            if(actionDefinition == 0) {
                std::cout <<"Can't resolve: "_j)->append(actionLocator))->toString());
            }
            actionDefinitions)->add(actionDefinition));
        }
    }
    return actionDefinitions;
}

ActionIdentifier* ActionManager::initActions(std::list  entries, ActionContext* batchActionContext)
{
    if(entries == 0) {
        std::exception("Pointer = NULL!");
    }
    if(batchActionContext == 0) {
        std::exception("Pointer = NULL!");
    }
    auto requestCache = new RequestCache();
    auto batchContext = new BatchContext();
    for (auto _i = entries)->iterator(); _i->hasNext(); ) {
        BatchEntry* entry = java_cast< BatchEntry* >(_i->next());
        {
            if(entry == 0) {
                throw new ::java::lang::IllegalArgumentException(u"Entries list contains nulls"_j);
            }
            auto actionContext = entry)->getActionContext();
            actionContext)->setBatchContext(batchContext);
            actionContext)->setRequestCache(requestCache);
            batchContext)->addBatchEntry(entry);
        }
    }
    batchActionContext)->setBatchContext(batchContext);
    batchActionContext)->setRequestCache(requestCache);
    auto batchAction = new BatchAction(this);
    batchAction)->init_(batchActionContext, static_cast< InitialRequest* >(0));
    batchActionContext)->setActionState(ActionContext_ActionState::INITIALIZED);
    return registerAction(batchActionContext, batchAction, new ActionExecutionMode(ActionExecutionMode::BATCH));
}

ActionIdentifier* ActionManager::initAction(ActionContext* actionContext, InitialRequest* initialParameters, ActionExecutionMode* mode)
{
    auto actionDefinition = actionContext)->getActionDefinition();
    auto lock = actionDefinition)->getExecutionLock();
    if(lock)->isLocked() && !lock)->isHeldByCurrentThread()) {
        throw new ::java::lang::IllegalStateException(Cres::get())->getString(u"acActionBeingExecuted"_j));
    }
    auto action = instantiateAction(actionDefinition);
    actionContext)->setActionState(ActionContext_ActionState::CREATED);
    action)->init_(actionContext, initialParameters);
    actionContext)->setActionState(ActionContext_ActionState::INITIALIZED);
    return registerAction(actionContext, action, mode);
}

Action* ActionManager::instantiateAction(ActionDefinition* actionDefinition)
{
    if(actionDefinition == 0) {
        std::exception("Pointer = NULL!");
    }
    return actionDefinition)->instantiate();
}

ActionCommand* ActionManager::service(ActionIdentifier* actionId, ActionResponse* actionRequest)
{
    if(actionId == 0) {
        std::exception("Pointer = NULL!");
    }
    auto action = java_cast< Action* >(actions)->get(actionId));
    if(action == 0) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Action with id '"_j)->append(actionId))
            ->append(u"' doesn't exists"_j)->toString());
    }
    auto actionContext = java_cast< ActionContext* >(actionContexts)->get(action));
    if(actionRequest == 0 && actionContext)->getActionState() != ActionContext_ActionState::INITIALIZED) {
        throw new ::java::lang::IllegalArgumentException(u"Null actionRequest is allowed only within first call to service()"_j);
    }
    actionContext)->setActionState(ActionContext_ActionState::WORKING);
    ActionCommand* actionCommand;
    auto activeRequest = actionRequest;
    do {
        auto requestCache = actionContext)->getRequestCache();
        if(activeRequest != 0 && activeRequest)->getRequestId() != 0 && activeRequest)->shouldRemember()) {
            if(requestCache == 0) {
                requestCache = new RequestCache();
                actionContext)->setRequestCache(requestCache);
            }
            requestCache)->addRequest(activeRequest)->getRequestId(), activeRequest);
        }
        actionCommand = java_cast< ActionCommand* >(action)->service(activeRequest));
        if(requestCache != 0 && actionCommand != 0 && actionCommand)->getRequestId() != 0 && !actionContext)->getRequestedIds())->contains(actionCommand)->getRequestId()))) {
            activeRequest = requestCache)->getRequest(actionCommand)->getRequestId());
        } else {
            activeRequest;
        }
        if(actionCommand != 0 && actionCommand)->getRequestId() != 0) {
            actionContext)->getRequestedIds())->add(actionCommand)->getRequestId()));
        }
    } while (activeRequest != 0);
    return actionCommand;
}

ActionResult* ActionManager::destroyAction(ActionIdentifier* actionId)
{
    if(actionId == 0) {
        std::exception("Pointer = NULL!");
    }
    auto action = java_cast< Action* >(actions)->get(actionId));
    if(action == 0) {
        Log::CONTEXT_ACTIONS())->debug(std::stringBuilder().append(u"Action with id '"_j)->append(actionId))
            ->append(u"' doesn't exists"_j)->toString());
        return 0;
    }
    {
        auto finally0 = finally([&] {
            actions)->remove(actionId);
            actionContexts)->remove(action);
        });
        {
            java_cast< ActionContext* >(actionContexts)->get(action)))->setActionState(ActionContext_ActionState::DESTROYED);
            return action)->destroy();
        }
    }

}

void ActionManager::destroyAll()
{
    for (auto _i = new ::java::util::LinkedHashSet(static_cast< ::java::util::Collection* >(actions)->keySet()))->iterator(); _i->hasNext(); ) {
        ActionIdentifier* actionId = java_cast< ActionIdentifier* >(_i->next());
        {
            destroyAction(actionId);
        }
    }
}

ActionContext* ActionManager::getActionContext(ActionIdentifier* actionId)
{
    auto action = java_cast< Action* >(actions)->get(actionId));
    return java_cast< ActionContext* >(actionContexts)->get(action));
}

ActionDirectory* ActionManager::getActionDirectory()
{
    return actionDirectory;
}

ActionIdentifier* ActionManager::registerAction(ActionContext* actionContext, Action* action, ActionExecutionMode* mode)
{
    auto actionId = actionIdGenerator)->generate(action);
    actions)->put(actionId, action);
    actionContexts)->put(action, actionContext);
    return actionId;
}

*/
