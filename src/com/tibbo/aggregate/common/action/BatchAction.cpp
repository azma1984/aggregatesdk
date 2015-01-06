// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/BatchAction.java

#include "BatchAction.h"




BatchAction::BatchAction(ActionManager* actionManager)
{
   if(actionManager == 0)
   {
	std::cout<<"Pointer = NULL!";
   }

   this->actionManager = actionManager;
}

void BatchAction::init(ActionContext* actionContext, InitialRequest* initialParameters)
{
	if(actionContext == 0)
	{
	 std::cout<<"Pointer = NULL!";
    }
    this->actionContext = actionContext;
}

ActionCommand* BatchAction::service(ActionResponse* actionRequest)
{
	BatchAction* batchContext = actionContext->getBatchContext();
	if(batchContext == 0)
	{
	 // It's incorrect to use BatchAction without BatchContext
	 std::cout<< "AssertionError()";
    }
	do {
        ActionCommand* actionCommand;
		if(currentActionId == 0)
		{
			BatchEntry* batchEntry = getNextEntry(batchContext);
			if(batchEntry == 0)
			{
                return 0;
            }
			ActionContext entryContext = batchEntry->getActionContext();
			entryContext->getRequestedIds()->clear();
			currentActionId = actionManager->initAction(entryContext, batchEntry->getInitialRequest(), new ActionExecutionMode(ActionExecutionMode::BATCH));
			actionCommand = actionManager->service(currentActionId, 0);
        } else {
			actionCommand = actionManager->service(currentActionId, actionRequest);
        }
		if(actionCommand != 0)
		{
		 actionCommand->setBatchEntry(true);
		 return actionCommand;
		}
		else
		{
		 currentActionId = 0;
		 batchContext->markAsPerfomed(batchContext)->getCurrentEntry();
        }
    } while (true);
}

BatchEntry* BatchAction::getNextEntry(BatchContext* batchContext)
{
	std::list<BatchEntry> entries = batchContext->getEntries()
	std::list<BatchEntry>::const_iterator BatchEntry;

	for (BatchEntry = entries.begin(); BatchEntry!= entries.end(); ++BatchEntry)
	{
	  if(!batchEntry->isFulfilled())
	  {
	   batchContext->setCurrentEntry(batchEntry);
	   return batchEntry;
	  }

	}
    return 0;
}

void BatchAction::destroy()
{
	if(currentActionId != 0)
	{
	 actionManager->destroyAction(currentActionId);
    }
	actionManager=0;
	actionContext=0;
    currentActionId=0;
    return 0;
}



