#ifndef ActionManagerH
#define ActionManagerH

#define BOOST_THREAD_USE_LIB

#include "ActionDirectory.h"
#include "ActionIdGenerator.h"

#include "action/Action.h"
#include "action/ActionCommand.h"
//#include "action/ActionContext.h"
#include "action/ActionDefinition.h"

#include "action/ActionExecutionMode.h"

#include "action/ActionIdentifier.h"
#include "action/ActionLocator.h"
#include "action/ActionResponse.h"
#include "action/ActionResult.h"
#include "action/BatchAction.h"
//#include "action/BatchContext.h"
#include "action/BatchEntry.h"
#include "action/InitialRequest.h"
//#include "action/RequestCache.h"
#include "action/RequestIdentifier.h"
#include "util/pointers.h"

#include <map>
#include <list>
#include <iostream>




class ActionManager
{
private:
	ActionDirectory<ActionLocatorPtr>* actionDirectory;

	ActionIdGeneratorPtr actionIdGenerator;
	std::map< ActionIdentifierPtr, Action< InitialRequestPtr,ActionCommandPtr,ActionResponsePtr >* > actions;
	std::map< Action< InitialRequestPtr,ActionCommandPtr,ActionResponsePtr >* , ActionContextPtr > actionContexts;

protected:
	Action< InitialRequestPtr,ActionCommandPtr,ActionResponsePtr >* instantiateAction(ActionDefinitionPtr actionDefinition);

public:
	ActionManager(ActionDirectory<ActionLocatorPtr>* actionDirectory);
	std::list< ActionDefinitionPtr > resolveDefinitions(std::list< ActionLocatorPtr >  actionLocators);
	ActionIdentifierPtr initActions(std::list<BatchEntryPtr>  entries, ActionContextPtr batchActionContext);
	ActionIdentifierPtr initAction(ActionContextPtr actionContext, InitialRequestPtr initialParameters, ActionExecutionModePtr mode);
	ActionCommandPtr service(ActionIdentifierPtr actionId, ActionResponsePtr actionRequest);
	ActionResultPtr destroyAction(ActionIdentifierPtr actionId);
	void destroyAll();
	ActionContextPtr getActionContext(ActionIdentifierPtr actionId);
	ActionDirectory<ActionManager>* getActionDirectory();
	ActionIdentifierPtr registerAction(ActionContextPtr actionContext, Action< InitialRequestPtr,ActionCommandPtr,ActionResponsePtr >* action, ActionExecutionModePtr mode);

};

#endif
