// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/Confirm.java

/*
#include <com/tibbo/aggregate/common/Cres.h"


#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
*/
#include "ActionUtils.h"
#include "GenericActionResponse.h"
#include "GenericActionCommand.h"



class Confirm : public GenericActionCommand
{
 private:
	std::string message;
	int optionType;
	int messageType;

 protected:
       //DataTable* constructParameters();// todo it is defined in com\tibbo\aggregate\common\datatable\DataTable.h

public:
	GenericActionResponse* createDefaultResponse();
	int parseConfirm(GenericActionResponse* resp);
	std::string getMessage();
	int getOptionType();
	int getMessageType();
	void setMessage(std::string* message);
	void setOptionType(int optionType);
	void setMessageType(int messageType);

	static std::string CF_MESSAGE;
	static std::string CF_OPTION_TYPE;
	static std::string CF_MESSAGE_TYPE;
	static std::string RF_OPTION;
//	static TableFormat* CFT_CONFIRM; // todo it is defined in com\tibbo\aggregate\common\datatable\TableFormat.h
//	static TableFormat* RFT_CONFIRM;
        
	Init(const std::string &title, std::string  &message, int optionType, int messageType);
      //  Confirm();
        Confirm(const std::string &message);
	Confirm(const std::string &title, std::string  &message, int optionType, int messageType);
	//Confirm(const std::string &title, DataTable* parameters);
	
};