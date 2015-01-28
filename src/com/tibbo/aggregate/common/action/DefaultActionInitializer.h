#ifndef DefaultActionInitializerH
#define DefaultActionInitializerH

#include "action/ActionInitializer.h"



class DefaultActionInitializer, public ActionInitializer
{
 public:
	ActionIdentifierPtr initAction(ContextPtr context, const std::string & actionName, ServerActionInputPtr initialParametrs, DataTablePtr inputData, std::map environment, ActionExecutionModePtr mode, CallerControllerPtr callerController, ErrorCollectorPtr collector) ;

	DefaultActionInitializer();
};

#endif
