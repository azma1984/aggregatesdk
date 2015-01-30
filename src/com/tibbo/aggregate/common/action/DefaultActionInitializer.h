#ifndef DefaultActionInitializerH
#define DefaultActionInitializerH
#define BOOST_THREAD_USE_LIB
#include "action/ActionInitializer.h"
 #include "Cres.h"
#include "action/ActionExecutionMode.h"
#include "action/ActionIdentifier.h"
#include "action/ServerActionInput.h"
#include "context/Context.h"
#include "context/FunctionDefinition.h"
//#include "datatable/DataRecord.h"
//#include "datatable/DataTable.h"
//#include "datatable/TableFormat.h"
#include "server/ServerContextConstants.h"



class DefaultActionInitializer: public ActionInitializer
{
 public:
	ActionIdentifierPtr initAction(ContextPtr context, const std::string & actionName, ServerActionInputPtr initialParametrs, DataTablePtr inputData, std::map<std::string,AgObjectPtr> environment, ActionExecutionModePtr mode, CallerControllerPtr callerController, ErrorCollectorPtr collector) ;

	DefaultActionInitializer();
};

#endif
