#ifndef BatchActionH
#define BatchActionH

#include "Action.h"
#include "ActionCommand.h"
#include "ActionContext.h"
#include "ActionExecutionMode.h"
#include "ActionIdentifier.h"
//#include "ActionManager.h"
#include "BatchContext.h"
//#include "BatchEntry.h"



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
