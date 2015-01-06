// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionInitializer.java

#ifndef ActionInitializerH
#define ActionInitializerH


#include "ActionIdentifier.h"
#include "Context.h"
#include "ServerActionInput.h"
#include "DataTable.h"
#include <map>
#include "ActionExecutionMode.h"
#include "CallerController.h"
#include "ErrorCollector.h"



class ActionInitializer
{
  ActionIdentifier* initAction(Context<ActionInitializer>* context, std::string actionName, ServerActionInput* initialParameters, DataTable* inputData, std::map<std::string,void*> environment, ActionExecutionMode* mode, CallerController* callerController, ErrorCollector* collector);
};

#endif
