// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionManager.java
#ifndef ActionManagerH
#define ActionManagerH

/*
#include <com/tibbo/aggregate/common/action/Action.hpp>
#include <com/tibbo/aggregate/common/action/ActionCommand.hpp>
#include <com/tibbo/aggregate/common/action/ActionContext_ActionState.hpp>
#include <com/tibbo/aggregate/common/action/ActionContext.hpp>
#include <com/tibbo/aggregate/common/action/ActionDefinition.hpp>
#include <com/tibbo/aggregate/common/action/ActionDirectory.hpp>
#include <com/tibbo/aggregate/common/action/ActionExecutionMode.hpp>
#include <com/tibbo/aggregate/common/action/ActionIdGenerator.hpp>
#include <com/tibbo/aggregate/common/action/ActionIdentifier.hpp>
#include <com/tibbo/aggregate/common/action/ActionLocator.hpp>
#include <com/tibbo/aggregate/common/action/ActionResponse.hpp>
#include <com/tibbo/aggregate/common/action/ActionResult.hpp>
#include <com/tibbo/aggregate/common/action/BatchAction.hpp>
#include <com/tibbo/aggregate/common/action/BatchContext.hpp>
#include <com/tibbo/aggregate/common/action/BatchEntry.hpp>
#include <com/tibbo/aggregate/common/action/InitialRequest.hpp>
#include <com/tibbo/aggregate/common/action/RequestCache.hpp>
#include <com/tibbo/aggregate/common/action/RequestIdentifier.hpp>
*/

class ActionManager
{
/*
private:
    ActionDirectory* actionDirectory;
    ActionIdGenerator* actionIdGenerator;
    ::java::util::Map* actions;
    ::java::util::Map* actionContexts;
protected:
    void ctor(ActionDirectory* actionDirectory);

public:
    ::java::util::List* resolveDefinitions(::java::util::List* actionLocators);
    ActionIdentifier* initActions(::java::util::List* entries, ActionContext* batchActionContext);
    ActionIdentifier* initAction(ActionContext* actionContext, InitialRequest* initialParameters, ActionExecutionMode* mode);

public:
    Action* instantiateAction(ActionDefinition* actionDefinition);

public:
    ActionCommand* service(ActionIdentifier* actionId, ActionResponse* actionRequest);
    ActionResult* destroyAction(ActionIdentifier* actionId);
    void destroyAll();
    ActionContext* getActionContext(ActionIdentifier* actionId);
    ActionDirectory* getActionDirectory();

public:
    ActionIdentifier* registerAction(ActionContext* actionContext, Action* action, ActionExecutionMode* mode);

    // Generated

public:
    ActionManager(ActionDirectory* actionDirectory);
protected:
    ActionManager(const ::default_init_tag&);

 */
};

#endif
