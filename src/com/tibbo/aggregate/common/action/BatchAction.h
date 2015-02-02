#ifndef BatchActionH
#define BatchActionH

#include "action/Action.h"
#include "action/ActionCommand.h"
#include "action/ActionContext.h"
#include "action/ActionExecutionMode.h"
#include "action/ActionIdentifier.h"
#include "action/BatchContext.h"


class BatchAction : public Action
{

private:
    ActionManagerPtr actionManager;
    ActionContextPtr actionContext;
	ActionIdentifierPtr currentActionId;

	BatchEntryPtr getNextEntry(BatchContextPtr batchContext);

public:
	BatchAction(ActionManagerPtr actionManager);
	void init(ActionContextPtr actionContext, InitialRequestPtr initialParameters);
	ActionCommandPtr service(ActionResponsePtr actionRequest);
	ActionResultPtr  destroy();
};


#endif
