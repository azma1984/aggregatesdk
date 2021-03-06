#include "ActionUtils.h"
//#include "datatable/DataRecord.h"
#include "action/DefaultActionInitializer.h"

std::string ActionUtils::CMD_SHOW_MESSAGE = "showMessage";;

std::string ActionUtils::CMD_CONFIRM = "confirm";

std::string ActionUtils::CMD_EDIT_DATA = "editData";

std::string ActionUtils::CMD_EDIT_PROPERTIES = "editProperties";

std::string ActionUtils::CMD_EDIT_WIDGET =  "editWidget";

std::string ActionUtils::CMD_LAUNCH_WIDGET =  "launchWidget";

std::string ActionUtils::CMD_BROWSE =  "browse";

std::string ActionUtils::CMD_SHOW_EVENT_LOG = "showEventLog";

std::string ActionUtils::CMD_SHOW_ERROR = "showError";

std::string ActionUtils::CMD_EDIT_REPORT =  "editReport";

std::string ActionUtils::CMD_SHOW_REPORT =  "showReport";

std::string ActionUtils::CMD_SHOW_GUIDE = "showGuide";

std::string ActionUtils::CMD_SELECT_ENTITIES = "selectEntities";

std::string ActionUtils::CMD_EDIT_TEXT =   "editText";

std::string ActionUtils::CMD_EDIT_CODE =   "editCode";

std::string ActionUtils::CMD_SHOW_SYSTEM_TREE =  "showSystemTree";

std::string ActionUtils::CMD_ACTIVATE_DASHBOARD = "activateDashboard";

std::string ActionUtils::CMD_SHOW_DIFF =  "showDiff";

std::string ActionUtils::RESPONSE_OK = "ok";
std::string ActionUtils::RESPONSE_SAVED = "saved";
std::string ActionUtils::RESPONSE_CLOSED = "closed";
std::string ActionUtils::RESPONSE_ERROR = "error";
std::string ActionUtils::FIELD_ACTION_TARGET_CONTEXT = "targetContext";
std::string ActionUtils::FIELD_ACTION_FROM_CONTEXT = "fromContext";
std::string ActionUtils::FIELD_ACTION_EXECUTION_PARAMETERS = "executionParameters";

/*
const int ActionUtils::INDEX_HIGHEST;

const int ActionUtils::INDEX_VERY_HIGH;

const int ActionUtils::INDEX_HIGH;

const int ActionUtils::INDEX_HIGHER;

const int ActionUtils::INDEX_NORMAL;

const int ActionUtils::INDEX_LOWER;

const int ActionUtils::INDEX_LOW;

const int ActionUtils::INDEX_VERY_LOW;

const int ActionUtils::INDEX_LOWEST;

const int ActionUtils::DELTA_HIGHEST;

const int ActionUtils::DELTA_VERY_HIGH;

const int ActionUtils::DELTA_HIGH;

const int ActionUtils::DELTA_HIGHER;

const int ActionUtils::DELTA_LOWER;

const int ActionUtils::DELTA_LOW;

const int ActionUtils::DELTA_VERY_LOW;

const int ActionUtils::DELTA_LOWEST;

const int ActionUtils::YES_NO_OPTION;

const int ActionUtils::YES_NO_CANCEL_OPTION;

const int ActionUtils::OK_CANCEL_OPTION;

const int ActionUtils::YES_OPTION;

const int ActionUtils::NO_OPTION;

const int ActionUtils::CANCEL_OPTION;

const int ActionUtils::OK_OPTION;

const int ActionUtils::ERROR_MESSAGE;

const int ActionUtils::INFORMATION_MESSAGE;

const int ActionUtils::WARNING_MESSAGE;

const int ActionUtils::QUESTION_MESSAGE;

const int ActionUtils::PLAIN_MESSAGE;
  */


void ActionUtils::setActionInitializer(ActionInitializerPtr initializer)
{
    
	ACTION_INITIALIZER = initializer;
}


void ActionUtils::checkResponseCode(const std::string& result)
{
    if( ((RESPONSE_SAVED != result.c_str()) && (RESPONSE_CLOSED != result.c_str())) && (RESPONSE_ERROR != result.c_str()))
    {
    std::cout <<"Illegal response result: ";
    }
}

DataTablePtr ActionUtils::createDndActionParameters(ContextPtr acceptedContext)
{
    
	return createDndActionParameters(acceptedContext->getPath());
}

DataTablePtr ActionUtils::createDndActionParameters(const std::string& accepterContextPath)
{
//todo
  //  DataTablePtr paramsEntry( new DataTable(FORMAT_DND_ACTION) );
	//paramsEntry->addRecord()->addString(accepterContextPath);
	//return paramsEntry;

  return DataTablePtr();
}

//Not used
//ServerActionInputPtr ActionUtils::createActionInput(DataTablePtr executionParameters)
//{ //todo
// //return new ServerActionInput(new DataTable(FORMAT_NORMAL_ACTION,executionParameters));
// return ServerActionInputPtr();
//}

ActionIdentifierPtr ActionUtils::initAction(ContextPtr context,const std::string &actionName, ServerActionInputPtr initialParameters, DataTablePtr inputData, ActionExecutionModePtr mode, CallerControllerPtr callerController)
{ //todo
// return initAction(context, actionName, initialParameters, inputData, 0, mode, callerController, 0);
 return ActionIdentifierPtr();
}

ActionIdentifierPtr ActionUtils::initAction(
    ContextPtr context,
    const std::string& actionName,
    ServerActionInputPtr initialParameters,
    DataTablePtr inputData,
    std::map<std::string,AgObjectPtr> environment,
    ActionExecutionModePtr mode,
    CallerControllerPtr callerController,
    ErrorCollectorPtr collector)
{
 return ACTION_INITIALIZER->initAction(context, actionName, initialParameters, inputData, environment, mode, callerController, collector);
}

GenericActionCommandPtr ActionUtils::stepAction(ContextPtr context, ActionIdentifierPtr actionId, GenericActionResponsePtr actionResponse, CallerControllerPtr callerController)
{//todo
 //DataTable res = context->callFunction(ServerContextConstants::F_STEP_ACTION, callerController, actionId->toString(), ProtocolHandler::actionResponseToDataTable(actionResponse));
// return ProtocolHandler::actionCommandFromDataTable(res.rec().getDataTable(ServerContextConstants::FOF_STEP_ACTION_ACTION_COMMAND()));
 return GenericActionCommandPtr();
}


ActionUtils::ActionUtils()
{
//todo
//	FORMAT_NORMAL_ACTION.reset( new TableFormat(1,1) );
//		{
//		 FORMAT_NORMAL_ACTION->addField( std::string("<").append(FIELD_ACTION_EXECUTION_PARAMETERS).append(+"><T><F=N>") );
//		}
//
//	FORMAT_DND_ACTION.reset( new TableFormat(1, 1) );
//		{
//		 FORMAT_DND_ACTION->addField("<"+FIELD_ACTION_FROM_CONTEXT+"><S>");
//		}
//
//
//	FORMAT_PROPAGATED_ACTION.reset( new TableFormat(1, 1) );
//		{
//		 FORMAT_PROPAGATED_ACTION->addField("<"+FIELD_ACTION_TARGET_CONTEXT+"><S>");
//		}
//
//	ACTION_INITIALIZER.reset( new DefaultActionInitializer() );
}


