#ifndef ActionUtilsH
#define ActionUtilsH

#include "ActionInitializer.h"
#include "ActionIdentifier.h"

/*
#include <com/tibbo/aggregate/common/action/DefaultActionInitializer.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"
#include <com/tibbo/aggregate/common/action/ProtocolHandler.h"
#include <com/tibbo/aggregate/common/action/ServerActionInput.h"
#include <com/tibbo/aggregate/common/action/command/ActivateDashboard.h"
#include <com/tibbo/aggregate/common/action/command/Browse.h"
#include <com/tibbo/aggregate/common/action/command/Confirm.h"
#include <com/tibbo/aggregate/common/action/command/EditCode.h"
#include <com/tibbo/aggregate/common/action/command/EditData.h"
#include <com/tibbo/aggregate/common/action/command/EditProperties.h"
#include <com/tibbo/aggregate/common/action/command/EditReport.h"
#include <com/tibbo/aggregate/common/action/command/EditText.h"
#include <com/tibbo/aggregate/common/action/command/EditWidget.h"
#include <com/tibbo/aggregate/common/action/command/LaunchWidget.h"
#include <com/tibbo/aggregate/common/action/command/SelectEntities.h"
#include <com/tibbo/aggregate/common/action/command/ShowDiff.h"
#include <com/tibbo/aggregate/common/action/command/ShowError.h"
#include <com/tibbo/aggregate/common/action/command/ShowEventLog.h"
#include <com/tibbo/aggregate/common/action/command/ShowGuide.h"
#include <com/tibbo/aggregate/common/action/command/ShowMessage.h"
#include <com/tibbo/aggregate/common/action/command/ShowReport.h"
#include <com/tibbo/aggregate/common/action/command/ShowSystemTree.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/server/ServerContextConstants.h"
  */

#include <string>
#include <iostream>

class ActionUtils
{

public:
	static std::string CMD_SHOW_MESSAGE;
	static std::string CMD_CONFIRM;
	static std::string CMD_EDIT_DATA;
	static std::string CMD_EDIT_PROPERTIES;
	static std::string CMD_EDIT_WIDGET;
	static std::string CMD_LAUNCH_WIDGET;
	static std::string CMD_BROWSE;
	static std::string CMD_SHOW_EVENT_LOG;
	static std::string CMD_SHOW_ERROR;
	static std::string CMD_EDIT_REPORT;
	static std::string CMD_SHOW_REPORT;
	static std::string CMD_SHOW_GUIDE;
	static std::string CMD_SELECT_ENTITIES;
	static std::string CMD_EDIT_TEXT;
	static std::string CMD_EDIT_CODE;
	static std::string CMD_SHOW_SYSTEM_TREE;
	static std::string CMD_ACTIVATE_DASHBOARD;
	static std::string CMD_SHOW_DIFF;


	static const int INDEX_HIGHEST = 400;
	static const int INDEX_VERY_HIGH = 300;
	static const int INDEX_HIGH = 200;
    static const int INDEX_HIGHER = 100;
	static const int INDEX_NORMAL = 0;
    static const int INDEX_LOWER = -100;
    static const int INDEX_LOW = -200;
    static const int INDEX_VERY_LOW = -300;
	static const int INDEX_LOWEST = -400;

    static const int DELTA_HIGHEST = 40;
    static const int DELTA_VERY_HIGH = 30;
    static const int DELTA_HIGH = 20;
    static const int DELTA_HIGHER = 10;
	static const int DELTA_LOWER = -10;
    static const int DELTA_LOW = -20;
    static const int DELTA_VERY_LOW = -30;
    static const int DELTA_LOWEST = -400;

	static std::string RESPONSE_OK;
    static std::string RESPONSE_SAVED;
    static std::string RESPONSE_CLOSED;
    static std::string RESPONSE_ERROR;

    
    
	//todo Dialog boxes
	static const int YES_NO_OPTION = 0;
	static const int YES_NO_CANCEL_OPTION = 1;
	static const int OK_CANCEL_OPTION = 2;
	static const int YES_OPTION = 3;
	static const int NO_OPTION = 4;
	static const int CANCEL_OPTION = 5;
	static const int OK_OPTION = 6;
	static const int ERROR_MESSAGE = 7;
	static const int INFORMATION_MESSAGE = 8;
	static const int WARNING_MESSAGE = 9;
	static const int QUESTION_MESSAGE = 10;
	static const int PLAIN_MESSAGE = 11;
  /*
	static const int YES_NO_OPTION = JOptionPane::YES_NO_OPTION;
	static const int YES_NO_CANCEL_OPTION = JOptionPane.YES_NO_CANCEL_OPTION;
	static const int OK_CANCEL_OPTION = JOptionPane.OK_CANCEL_OPTION;
	static const int YES_OPTION = JOptionPane.YES_OPTION;
	static const int NO_OPTION = JOptionPane.NO_OPTION;
	static const int CANCEL_OPTION = JOptionPane.CANCEL_OPTION;
	static const int OK_OPTION = JOptionPane.OK_OPTION;
	static const int ERROR_MESSAGE = JOptionPane.ERROR_MESSAGE;
	static const int INFORMATION_MESSAGE = JOptionPane.INFORMATION_MESSAGE;
	static const int WARNING_MESSAGE = JOptionPane.WARNING_MESSAGE;
	static const int QUESTION_MESSAGE = JOptionPane.QUESTION_MESSAGE;
	static const int PLAIN_MESSAGE = JOptionPane.PLAIN_MESSAGE;
    */
	static std::string FIELD_ACTION_TARGET_CONTEXT;
	static std::string FIELD_ACTION_FROM_CONTEXT;
	static std::string FIELD_ACTION_EXECUTION_PARAMETERS;

  // it is defined in com\tibbo\aggregate\common\datatable\TableFormat.h
	TableFormatPtr FORMAT_NORMAL_ACTION;
	TableFormatPtr FORMAT_DND_ACTION;
	TableFormatPtr FORMAT_PROPAGATED_ACTION;
	ActionInitializerPtr ACTION_INITIALIZER;

	 void setActionInitializer(ActionInitializerPtr initializer);

	void checkResponseCode(const std::string & result);
	DataTablePtr createDndActionParameters(ContextPtr acceptedContext); //  it is defined in com\tibbo\aggregate\common\datatable\DataTable.h
	DataTablePtr createDndActionParameters(const std::string & accepterContextPath);//  it is defined in com\tibbo\aggregate\common\datatable\DataTable.h


	ServerActionInputPtr createActionInput(DataTablePtr executionParameters);

  	ActionIdentifierPtr initAction(ContextPtr context, const std::string & actionName, ServerActionInputPtr initialParameters, DataTablePtr inputData, ActionExecutionModePtr mode, CallerControllerPtr callerController);
  	ActionIdentifierPtr initAction(ContextPtr context, const std::string & actionName, ServerActionInputPtr initialParameters, DataTablePtr inputData, std::map<std::string,AgObjectPtr> environment, ActionExecutionModePtr mode, CallerControllerPtr callerController, ErrorCollectorPtr collector);
  	GenericActionCommandPtr stepAction(ContextPtr context, ActionIdentifierPtr actionId, GenericActionResponsePtr actionResponse, CallerControllerPtr callerController);


};
#endif
