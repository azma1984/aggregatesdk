// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionManager.java
#ifndef ActionManagerH
#define ActionManagerH

#include "ActionDirectory.h"
#include "ActionIdGenerator.h"

#include "Action.h"
#include "ActionCommand.h"
#include "ActionContext.h"
#include "ActionDefinition.h"

#include "ActionExecutionMode.h"

#include "ActionIdentifier.h"
#include "ActionLocator.h"
#include "ActionResponse.h"
#include "ActionResult.h"
#include "BatchAction.h"
#include "BatchContext.h"
#include "BatchEntry.h"
#include "InitialRequest.h"
#include "RequestCache.h"
#include "RequestIdentifier.h"


class ActionManager
{
	/*
private:
	ActionDirectory<ActionLocator>* actionDirectory;

	ActionIdGenerator* actionIdGenerator;
	std::map<ActionIdentifier, Action<InitialRequest,ActionCommand,ActionResponse> > actions;
	std::map< Action<InitialRequest,ActionCommand,ActionResponse> , ActionContext > actionContexts;

protected:
	Action* instantiateAction(ActionDefinition* actionDefinition);

public:
	ActionManager(ActionDirectory<ActionLocator>* actionDirectory);
	std::list<ActionDefinition> * resolveDefinitions(std::list<ActionLocator> *actionLocators);
	ActionIdentifier* initActions(std::list<BatchEntry>  entries, ActionContext* batchActionContext);
	ActionIdentifier* initAction(ActionContext* actionContext, InitialRequest* initialParameters, ActionExecutionMode* mode);
	ActionCommand* service(ActionIdentifier* actionId, ActionResponse* actionRequest);
	ActionResult* destroyAction(ActionIdentifier* actionId);
	void destroyAll();
	ActionContext* getActionContext(ActionIdentifier* actionId);
	ActionDirectory* getActionDirectory();
	ActionIdentifier* registerAction(ActionContext* actionContext, Action* action, ActionExecutionMode* mode);
	*/
};

#endif
