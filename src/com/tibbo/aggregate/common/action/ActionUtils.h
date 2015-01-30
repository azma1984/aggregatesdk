#pragma once
#ifndef ActionUtilsH
#define ActionUtilsH

#define BOOST_THREAD_USE_LIB
//#include "action/ActionInitializer.h"
//#include "action/ActionIdentifier.h"
//#include "action/DefaultActionInitializer.h"
//#include "action/GenericActionCommand.h"
//#include "action/ProtocolHandler.h"
//#include "action/ServerActionInput.h"
//#include "action/command/ActivateDashboard.h"
//#include "action/command/Browse.h"
//#include "action/command/Confirm.h"
//#include "action/command/EditCode.h"
//#include "action/command/EditData.h"
//#include "action/command/EditProperties.h"
//#include "action/command/EditReport.h"
//#include "action/command/EditText.h"
//#include "action/command/EditWidget.h"
//#include "action/command/LaunchWidget.h"
//#include "action/command/SelectEntities.h"
//#include "action/command/ShowDiff.h"
//#include "action/command/ShowError.h"
//#include "action/command/ShowEventLog.h"
//#include "action/command/ShowGuide.h"
//#include "action/command/ShowMessage.h"
//#include "action/command/ShowReport.h"
//#include "action/command/ShowSystemTree.h"
//#include "context/Context.h"
//#include "datatable/DataRecord.h"
//#include "datatable/DataTable.h"
//#include "datatable/TableFormat.h"
//#include "server/ServerContextConstants.h"
 #include "util/Pointers.h"

#include <string>
#include <iostream>
#include <map>


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

    //Not used
    ServerActionInputPtr createActionInput(DataTablePtr executionParameters);

  	ActionIdentifierPtr initAction(ContextPtr context, const std::string & actionName, ServerActionInputPtr initialParameters, DataTablePtr inputData, ActionExecutionModePtr mode, CallerControllerPtr callerController);
  	ActionIdentifierPtr initAction(ContextPtr context, const std::string & actionName, ServerActionInputPtr initialParameters, DataTablePtr inputData, std::map<std::string,AgObjectPtr> environment, ActionExecutionModePtr mode, CallerControllerPtr callerController, ErrorCollectorPtr collector);
  	GenericActionCommandPtr stepAction(ContextPtr context, ActionIdentifierPtr actionId, GenericActionResponsePtr actionResponse, CallerControllerPtr callerController);
	ActionUtils();

};

#endif
