#ifndef ActionInitializerH
#define ActionInitializerH

#include <map>
#include "action/ActionIdentifier.h"
#include "action/ServerActionInput.h"
#include "action/ActionExecutionMode.h"
#include "datatable/DataTable.h"
#include "context/Context.h"
#include "context/CallerController.h"
#include "util/ErrorCollector.h"



class ActionInitializer : public Interface
{
public:
	virtual ActionIdentifierPtr initAction(ContextPtr context, const std::string& actionName, ServerActionInputPtr initialParameters,
                                       DataTablePtr inputData, std::map<std::string, AgObjectPtr> environment, ActionExecutionModePtr mode,
                                       CallerControllerPtr callerController, ErrorCollectorPtr collector) = 0;
};

#endif  //ActionInitializerH
