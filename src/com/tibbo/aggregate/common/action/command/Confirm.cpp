#include "Confirm.h"
#include "action/ActionUtils.h"

std::string Confirm::CF_MESSAGE = "message";
std::string Confirm::CF_OPTION_TYPE =  "optionType";
std::string Confirm::CF_MESSAGE_TYPE = "messageType";
std::string Confirm::RF_OPTION = "option";


Confirm::Confirm()
    : GenericActionCommand(ActionUtils::CMD_CONFIRM, CFT_CONFIRM(), RFT_CONFIRM())
{
}

Confirm::Confirm(const std::string &message)
    : GenericActionCommand(ActionUtils::CMD_CONFIRM, Cres::get()->getString("confirmation"))
{
    this->message = message;
    this->optionType = ActionUtils::YES_NO_OPTION;
    this->messageType = ActionUtils::QUESTION_MESSAGE;
}

Confirm::Confirm(const std::string &title, const std::string &message, int optionType, int messageType)
    : GenericActionCommand(ActionUtils::CMD_CONFIRM, title)
{
    this->message = message;
    this->optionType = optionType;
    this->messageType = messageType;
}


Confirm::Confirm(const std::string& title, DataTablePtr parameters)
    : GenericActionCommand(ActionUtils::CMD_CONFIRM, title, parameters, CFT_CONFIRM())
{
    this->optionType = 0;
    this->messageType = 0;
}


DataTable *Confirm::constructParameters()
{
//todo
 //	DataRecordPtr dr( new DataRecord(CFT_CONFIRM) );
 //	dr->addString(message);
//	dr->addInt(optionType);
 //	dr->addInt(messageType);

  //	return dr;

   return NULL;
}

GenericActionResponsePtr Confirm::createDefaultResponse()
{
//todo
//	TableFormatPtrresponseFormat = RFT_CONFIRM->clone();
//	std::map<int, std::string> selectionValues;
//	int optionType = getParameters()->rec()->getInt(Confirm::CF_OPTION_TYPE);
//
//	if(ActionUtils::YES_NO_OPTION == optionType) {
//        selectionValues.insert( std::pair<int, std::string>(ActionUtils::YES_OPTION, Cres::get()->getString("yes")) );
//		selectionValues.insert( std::pair<int, std::string>(ActionUtils::NO_OPTION, Cres::get()->getString("no")) );
//	} else if(ActionUtils::OK_CANCEL_OPTION == optionType) {
//        selectionValues.insert( std::pair<int, std::string>(ActionUtils::OK_OPTION, Cres::get()->getString("ok")) );
//		selectionValues.insert( std::pair<int, std::string>(ActionUtils::CANCEL_OPTION, Cres::get()->getString("cancel")) );
//	} else if(ActionUtils::YES_NO_CANCEL_OPTION == optionType) {
//		selectionValues.insert( std::pair<int, std::string>(ActionUtils::YES_OPTION, Cres::get()->getString("yes")) );
//		selectionValues.insert(std::pair<int, std::string>(ActionUtils::NO_OPTION, Cres::get()->getString("no")) );
//        selectionValues.insert(std::pair<int, std::string>(ActionUtils::CANCEL_OPTION,Cres::get()->getString("cancel");
//	} else {
//	  std::cout<<"Unsupported option type: ";
//	}
//	responseFormat->getField(RF_OPTION_)->setSelectionValues(selectionValues);
//	return new GenericActionResponse(new ::DataTable(responseFormat, true));
return GenericActionResponsePtr();
}

int Confirm::parseConfirm(GenericActionResponsePtr resp)
{
//todo
//	DataTablePtr dt = NULL;
//	if (resp) {
//		dt = resp->getParameters();
//	}
//
//	if (dt == NULL || (dt->getRecordCount() == 0) ) {
//		return ActionUtils::CANCEL_OPTION;
//    }
//
//    if (!dt->getFormat()->hasField(RF_OPTION)) {
//		throw  AggreGateException("Malformed response", "Confirm::parseConfirm");
//    }
//
//    int option = dt->rec()->getInt(RF_OPTION);
//    switch (option) {
//		case ActionUtils::YES_OPTION:
//		case ActionUtils::NO_OPTION:
//        case ActionUtils::CANCEL_OPTION:
//			break;
//
//		default:
//			throw  AggreGateException("Illegal response option: ", "Confirm::parseConfirm");
//	}
//
//	return option;
return 0;
}

std::string Confirm::getMessage()
{
    return message;
}

int Confirm::getOptionType()
{
    return optionType;
}

int Confirm::getMessageType()
{
    return messageType;
}

void Confirm::setMessage(const std::string & message)
{
    this->message = message;
}

void Confirm::setOptionType(int optionType)
{
    this->optionType = optionType;
}

void Confirm::setMessageType(int messageType)
{
    this->messageType = messageType;
}

TableFormatPtr Confirm::CFT_CONFIRM()
{
    if (!CFT_CONFIRM_) {
        CFT_CONFIRM_ = TableFormatPtr(new TableFormat(1, 1));

        CFT_CONFIRM_->addField( std::string("<").append(Confirm::CF_MESSAGE).append("><S>") );
        CFT_CONFIRM_->addField( std::string("<").append(Confirm::CF_OPTION_TYPE).append("><I>") );
        CFT_CONFIRM_->addField( std::string("<").append(Confirm::CF_MESSAGE_TYPE).append("><I>") );
    }

    return CFT_CONFIRM_;
}

TableFormatPtr Confirm::RFT_CONFIRM()
{
    if (!RFT_CONFIRM_)
        RFT_CONFIRM_ = TableFormatPtr(new TableFormat(1, 1, std::string("<").append(RF_OPTION)
                                                                .append("><I><D=").append(Cres::get()->getString("option")).append(">")) );

    return RFT_CONFIRM_;
}


