// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionManager.java
#ifndef ActionManagerH
#define ActionManagerH

#include "ActionDirectory.h"
/*
#include <com/tibbo/aggregate/common/action/Action.h"
#include <com/tibbo/aggregate/common/action/ActionCommand.h"
#include <com/tibbo/aggregate/common/action/ActionContext_ActionState.h"
#include <com/tibbo/aggregate/common/action/ActionContext.h"
#include <com/tibbo/aggregate/common/action/ActionDefinition.h"

#include <com/tibbo/aggregate/common/action/ActionExecutionMode.h"
#include <com/tibbo/aggregate/common/action/ActionIdGenerator.h"
#include <com/tibbo/aggregate/common/action/ActionIdentifier.h"
#include <com/tibbo/aggregate/common/action/ActionLocator.h"
#include <com/tibbo/aggregate/common/action/ActionResponse.h"
#include <com/tibbo/aggregate/common/action/ActionResult.h"
#include <com/tibbo/aggregate/common/action/BatchAction.h"
#include <com/tibbo/aggregate/common/action/BatchContext.h"
#include <com/tibbo/aggregate/common/action/BatchEntry.h"
#include <com/tibbo/aggregate/common/action/InitialRequest.h"
#include <com/tibbo/aggregate/common/action/RequestCache.h"
#include <com/tibbo/aggregate/common/action/RequestIdentifier.h"
*/

class ActionManager
{
private:
	ActionDirectory<ActionLocator>* actionDirectory;
  /*
	ActionIdGenerator* actionIdGenerator;
	std::map<ActionIdentifier, Action> actions;
	std::map<Action, ActionContext> actionContexts;

protected:
	Action* instantiateAction(ActionDefinition* actionDefinition);

public:
	ActionManager(ActionDirectory* actionDirectory);
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
