#pragma once

#include <list>
#include <exception>
#include <iostream>

#include "action/ActionDefinition.h"
#include "action/BatchContext.h"
#include "action/ActionManager.h"
#include "action/RequestCache.h"
#include "context/Context.h"


enum ActionState{
    CREATED, INITIALIZED, WORKING, DESTROYED
};


class ActionContext
{
	/*
 private:
	ActionDefinition *actionDefinition;
	BatchContext* batchContext;
	RequestCache* requestCache;



	ActionState *actionState;
	ActionManager* actionManager;
	std::list<RequestIdentifier> requestedIds;

 public:

	ActionContext(ActionDefinition* actionDefinition, ActionManager* actionManager);

	//todo define com\tibbo\aggregate\common\context\CallerController.h;
	//CallerController* getCallerController();

	Context<ActionContext>* getDefiningContext();
	ActionDefinition* getActionDefinition();
	BatchContext* getBatchContext();
	RequestCache* getRequestCache();
	ActionState* getActionState();
	ActionManager *getActionManager();

	std::list<RequestIdentifier>* getRequestedIds();

	void setActionDefinition(ActionDefinition* actionDefinition);


	void setBatchContext(BatchContext* batchContext);
	void setRequestCache(RequestCache* requestCache);

	void setActionState(ActionState* actionState);
	void setActionManager(ActionManager* actionManager);
	*/
};
