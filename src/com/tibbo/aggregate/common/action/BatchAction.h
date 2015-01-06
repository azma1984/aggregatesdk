// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/BatchAction.java

#ifndef BatchActionH
#define BatchActionH

#include "Action.h"
#include "ActionCommand.h"
#include "ActionContext.h"
#include "ActionExecutionMode.h"
#include "ActionIdentifier.h"
#include "ActionManager.h"
#include "BatchContext.h"
#include "BatchEntry.h"



class BatchAction:public Action<InitialRequest,ActionCommand,ActionResponse>
{
private:
    ActionManager* actionManager;
    ActionContext* actionContext;
	ActionIdentifier* currentActionId;

	BatchEntry* getNextEntry(BatchContext* batchContext);

public:
	BatchAction(ActionManager* actionManager);
	void init(ActionContext* actionContext, InitialRequest* initialParameters);
	ActionCommand* service(ActionResponse* actionRequest);

	void destroy();

};


#endif
