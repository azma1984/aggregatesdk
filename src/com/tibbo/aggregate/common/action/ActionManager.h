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
#include "util/Pointers.h"

#include <map>
#include <list>
#include <iostream>




class ActionManager
{
private:
    ActionDirectoryPtr actionDirectory;

	ActionIdGeneratorPtr actionIdGenerator;
    std::map< ActionIdentifierPtr, ActionPtr> actions;
    std::map< ActionPtr, ActionContextPtr > actionContexts;

protected:
    ActionPtr instantiateAction(ActionDefinitionPtr actionDefinition);

public:
    ActionManager(ActionDirectoryPtr actionDirectory);
    //TODO: not used
    //std::list< ActionDefinitionPtr > resolveDefinitions(std::list< ActionLocatorPtr >  actionLocators);
	ActionIdentifierPtr initActions(std::list<BatchEntryPtr>  entries, ActionContextPtr batchActionContext);
	ActionIdentifierPtr initAction(ActionContextPtr actionContext, InitialRequestPtr initialParameters, ActionExecutionModePtr mode);
	ActionCommandPtr service(ActionIdentifierPtr actionId, ActionResponsePtr actionRequest);
	ActionResultPtr destroyAction(ActionIdentifierPtr actionId);
	void destroyAll();
	ActionContextPtr getActionContext(ActionIdentifierPtr actionId);
    ActionDirectoryPtr getActionDirectory();
    ActionIdentifierPtr registerAction(ActionContextPtr actionContext, ActionPtr action, ActionExecutionModePtr mode);

};

#endif
