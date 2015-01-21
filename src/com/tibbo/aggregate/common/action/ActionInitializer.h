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
    virtual ActionIdentifier* initAction(Context<ActionInitializer>* context, const std::string& actionName, ServerActionInput* initialParameters,
                                       DataTable* inputData, std::map<std::string, void*> environment, ActionExecutionMode* mode,
                                       CallerController* callerController, ErrorCollector* collector) = 0;
};

#endif  //ActionInitializerH
