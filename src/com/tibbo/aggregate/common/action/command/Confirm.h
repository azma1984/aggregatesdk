#ifndef ConfirmH
#define ConfirmH

//#include "action/ActionUtils.h"
//#include "action/GenericActionResponse.h"
#include "action/GenericActionCommand.h"
#include "datatable/TableFormat.h"
#include <boost/shared_ptr.hpp>
#include "AggreGateException.h"
#include "Cres.h"

#include <string>

class Confirm : public GenericActionCommand
{
 private:
    static TableFormatPtr CFT_CONFIRM_; //it is defined in com\tibbo\aggregate\common\datatable\TableFormat.h
    static TableFormatPtr RFT_CONFIRM_;
	std::string message;
	int optionType;
	int messageType;

protected:
    DataTablePtr constructParameters();//it is defined in com\tibbo\aggregate\common\datatable\DataTable.h

public:
    GenericActionResponsePtr createDefaultResponse();
	int parseConfirm(GenericActionResponsePtr resp);
	std::string getMessage();
	int getOptionType();
	int getMessageType();
    void setMessage(const std::string& message);
	void setOptionType(int optionType);
	void setMessageType(int messageType);

	static std::string CF_MESSAGE;
	static std::string CF_OPTION_TYPE;
	static std::string CF_MESSAGE_TYPE;
    static std::string RF_OPTION;
    static TableFormatPtr CFT_CONFIRM();
    static TableFormatPtr RFT_CONFIRM();
        
    Confirm();
    Confirm(const std::string &message);
    Confirm(const std::string &title, const std::string  &message, int optionType, int messageType);
    Confirm(const std::string &title, DataTablePtr parameters);
	
};
#endif//ConfirmH
