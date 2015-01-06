// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ActionUtils.java

#include "ActionUtils.h"

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


void ActionUtils::setActionInitializer(ActionInitializer* initializer)
{
    
	ACTION_INITIALIZER = initializer;
}


void ActionUtils::checkResponseCode(std::string result)
{
 if(!RESPONSE_SAVED.compare(result.c_str()) && !RESPONSE_CLOSED.compare(result.c_str())) && !RESPONSE_ERROR.compare(result.c_str()))
  {
	std::cout <<"Illegal response result: ";
  }
}

DataTable* ActionUtils::createDndActionParameters(Context* acceptedContext)
{
    
	return createDndActionParameters(acceptedContext->getPath());
}

DataTable* ActionUtils::createDndActionParameters(std::string accepterContextPath)
{
	DataTable *paramsEntry = new DataTable(FORMAT_DND_ACTION);
	paramsEntry->addRecord()->addString(accepterContextPath);
	return paramsEntry;
}

ServerActionInput* ActionUtils::createActionInput(DataTable* executionParameters)
{
 return new ServerActionInput(new DataTable(FORMAT_NORMAL_ACTION,executionParameters));
}

ActionIdentifier* ActionUtils::initAction(Context* context, std::string actionName, ServerActionInput* initialParameters, DataTable* inputData, ActionExecutionMode* mode, CallerController* callerController)
{
    
	return initAction(context, actionName, initialParameters, inputData, 0, mode, callerController, 0);
}

ActionIdentifier* ActionUtils::initAction(Context* context, std::string actionName, ServerActionInput* initialParameters, DataTable* inputData, std::map<string,void*> environment, ActionExecutionMode* mode, CallerController* callerController,ErrorCollector* collector)
{
 return ACTION_INITIALIZER->initAction(context, actionName, initialParameters, inputData, environment, mode, callerController, collector);
}

GenericActionCommand* ActionUtils::stepAction(Context* context, ActionIdentifier* actionId, GenericActionResponse* actionResponse, CallerController* callerController)
{
 DataTable res = context->callFunction(ServerContextConstants::F_STEP_ACTION, callerController, actionId->toString(), ProtocolHandler::actionResponseToDataTable(actionResponse));
 return ProtocolHandler::actionCommandFromDataTable(res.rec().getDataTable(ServerContextConstants::FOF_STEP_ACTION_ACTION_COMMAND()));
}


ActionUtils::ActionUtils()
{
	FORMAT_NORMAL_ACTION = new TableFormat(1,1);
		{
		 FORMAT_NORMAL_ACTION->addField("<"+FIELD_ACTION_EXECUTION_PARAMETERS+"><T><F=N>");
        }

	FORMAT_DND_ACTION = new TableFormat(1, 1);
        {
		 FORMAT_DND_ACTION->addField("<"+FIELD_ACTION_FROM_CONTEXT+"><S>");
        }


	FORMAT_PROPAGATED_ACTION = new TableFormat(1, 1);
		{
		 FORMAT_PROPAGATED_ACTION->addField("<"+FIELD_ACTION_TARGET_CONTEXT+"><S>");
		}

	ACTION_INITIALIZER = new DefaultActionInitializer();

}


