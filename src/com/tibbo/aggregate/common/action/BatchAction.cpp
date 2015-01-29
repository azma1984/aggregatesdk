#include "BatchAction.h"


BatchAction::BatchAction(ActionManagerPtr actionManager)
{
    if(actionManager == 0)
    {
        //TODO: exception
        //throw new NullPointerException();
    }

    this->actionManager = actionManager;
}

void BatchAction::init(ActionContextPtr actionContext, InitialRequestPtr initialParameters)
{
	if(actionContext == 0)
	{
        //TODO: exception
        //throw new NullPointerException();
	}
	this->actionContext = actionContext;
}

//todo
//ActionCommandPtr BatchAction::service(ActionResponsePtr actionRequest)
//{
//	BatchActionPtr batchContext = actionContext->getBatchContext();
//	if(batchContext == 0)
//	{
//	 // It's incorrect to use BatchAction without BatchContext
//	 std::cout<< "AssertionError()";
//	}
//	do {
//        ActionCommandPtr actionCommand;
//		if(currentActionId == 0)
//		{
//			BatchEntryPtr batchEntry = getNextEntry(batchContext);
//			if(batchEntry == 0)
//			{
//				return ActionCommandPtr();
//            }
//			ActionContextPtr entryContext = batchEntry->getActionContext();
//			entryContext->getRequestedIds().clear();
//			currentActionId = actionManager->initAction(entryContext, batchEntry->getInitialRequest(), ActionExecutionModePtr(new ActionExecutionMode(ActionExecutionMode::BATCH)));
//			actionCommand = actionManager->service(currentActionId, ActionResponsePtr());
//		} else {
//			actionCommand = actionManager->service(currentActionId, actionRequest);
//		}
//		if(actionCommand != 0)
//		{
//		 actionCommand->setBatchEntry(true);
//		 return actionCommand;
//		}
//		else
//		{  //todo
//		 //currentActionId = 0;
//		// batchContext->markAsPerfomed(batchContext)->getCurrentEntry();
//		}
//	} while (true);
//}
//todo
//BatchEntryPtr BatchAction::getNextEntry(BatchContextPtr batchContext)
//{
//	std::list<BatchEntryPtr> entries = batchContext->getEntries();
//	std::list<BatchEntryPtr>::const_iterator BatchEntryIt;
//
//	for (BatchEntryIt = entries.begin(); BatchEntryIt!= entries.end(); ++BatchEntryIt)
//	{
//	  BatchEntryPtr batchEntry = *BatchEntryIt;
//	  if(!batchEntry->isFulfilled())
//	  {
//	   batchContext->setCurrentEntry(batchEntry);
//	   return batchEntry;
//	  }
//
//	}
//	return BatchEntryPtr();
//}

//todo
// public synchronized ActionResult destroy()
//void BatchAction::destroy()
//{
//	if(currentActionId != 0)
//	{
//	 actionManager->destroyAction(currentActionId);
//	}
//	actionManager=0;
//	actionContext=0;
//	currentActionId=0;
//	return 0;
//}



