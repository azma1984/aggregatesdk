#pragma once

#include "action/ActionIdentifier.h"
#include "action/ServerActionInput.h"
#include "action/ActionExecutionMode.h"
#include "datatable/DataTable.h"
#include "context/Context.h"
#include "context/CallerController.h"
#include "util/ErrorCollector.h"

#include <map>
#include <boost/shared_ptr.hpp>


class ActionInitializer : public Interface
{
    virtual ActionIdentifier* initAction(boost::shared_ptr<Context>context, const std::string& actionName,
                                         boost::shared_ptr<ServerActionInput> initialParameters,
                                         boost::shared_ptr<DataTable> inputData, std::map<std::string, void*> environment,
                                         boost::shared_ptr<ActionExecutionMode>* mode,
                                         boost::shared_ptr<CallerController> callerController,
                                         boost::shared_ptr<ErrorCollector> collector) = 0;
};

