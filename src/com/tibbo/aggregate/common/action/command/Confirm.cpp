// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/Confirm.java
#include "Confirm.h"

std::string Confirm::CF_MESSAGE = "message";

std::string Confirm::CF_OPTION_TYPE =  "optionType";

std::string Confirm::CF_MESSAGE_TYPE = "messageType";

std::string Confirm::RF_OPTION = "option";

/*
Confirm::Confirm()
{
  GenericActionCommand(ActionUtils::CMD_CONFIRM, CFT_CONFIRM, RFT_CONFIRM);
}
*/
Confirm::Confirm(const std::string &message)
{
  // todo Cres is defined in com\tibbo\aggregate\common\cres.h
  Init(/*Cres::get()->getString(u"confirmation")*/"", message, ActionUtils::YES_NO_OPTION, ActionUtils::QUESTION_MESSAGE);
}

 Confirm::Confirm(const std::string &title, const std::string &message, int optionType, int messageType)
{
  Init(title, message,optionType, messageType);
}


Confirm::Init(const std::string &title, const std::string &message, int optionType, int messageType)
 {
  	GenericActionCommand(ActionUtils::CMD_CONFIRM(), title);
	this->message = message;
	this->optionType = optionType;
	this->messageType = messageType; 
 }

/*
Confirm::Confirm(std::string title, DataTable parameters)
{
	GenericActionCommand(title,parameters);
}
*/


TableFormat*& Confirm::CFT_CONFIRM()
{
    
    return CFT_CONFIRM_;
}
TableFormat* Confirm::CFT_CONFIRM_;

TableFormat*& Confirm::RFT_CONFIRM()
{

    return RFT_CONFIRM_;
}
TableFormat* Confirm::RFT_CONFIRM_;



DataTable* Confirm::constructParameters()
{
	return new DataRecord(CFT_CONFIRM)->addString(message))->addInt(optionType)->addInt(messageType)->wrap();
}

GenericActionResponse* Confirm::createDefaultResponse()
{
	TableFormat *responseFormat = RFT_CONFIRM->clone();
	std::map<void*,string> selectionValues;
	int optionType = getParameters()->rec()->getInt(Confirm::CF_OPTION_TYPE);

	if(ActionUtils::YES_NO_OPTION == optionType)
	{
		selectionValues[ActionUtils::YES_OPTION]= Cres::get()->getString(u"yes");
		selectionValues[ActionUtils::NO_OPTION]= Cres::get()->getString(u"no"));
	} else if(ActionUtils::OK_CANCEL_OPTION == optionType) {
		selectionValues[ActionUtils::OK_OPTION]= Cres::get()->getString(u"ok");
		selectionValues[ActionUtils::CANCEL_OPTION]= Cres::get()->getString(u"cancel");
	} else if(ActionUtils::YES_NO_CANCEL_OPTION == optionType) {
		selectionValues)[ActionUtils::YES_OPTION]= Cres::get()->getString(u"yes");
		selectionValues)[ActionUtils::NO_OPTION]= Cres::get()->getString(u"no");
		selectionValues)[ActionUtils::CANCEL_OPTION]= Cres::get()->getString(u"cancel");
	} else
	{
      std::cout<<"Unsupported option type: ";
    }
    responseFormat)->getField(RF_OPTION_))->setSelectionValues(static_cast< std::map >(selectionValues));
    return new GenericActionResponse(new ::DataTable(responseFormat, true));
}

int Confirm::parseConfirm(GenericActionResponse* resp)
{
    
    auto t = resp != 0 ? resp)->getParameters() : static_cast< ::DataTable* >(0);
    if(t == 0 || t)->getRecordCount() == 0) {
        return ActionUtils::CANCEL_OPTION;
    }
    if(!t)->getFormat())->hasField(RF_OPTION_)) {
        throw new ::java::lang::IllegalArgumentException(u"Malformed response"_j);
    }
    int option = (t)->rec())->getInt(RF_OPTION_)))->intValue();
    switch (option) {
    case ActionUtils::YES_OPTION:
    case ActionUtils::NO_OPTION:
	case ActionUtils::CANCEL_OPTION:
        break;
    default:
        std::cout <<"Illegal response option: "_j)->append(option)->toString());
    }

    return option;
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

void Confirm::setMessage(std::string* message)
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



void Confirm::init()
{
  CFT_CONFIRM = new TableFormat(1,1);

  CFT_CONFIRM->addField("<"+Confirm::CF_MESSAGE+"><S>");
  CFT_CONFIRM->addField("<"+Confirm::CF_OPTION_TYPE+"><I>");
  CFT_CONFIRM->addField("<"+Confirm::CF_MESSAGE_TYPE+"><I>");

  RFT_CONFIRM_ = new ::TableFormat(1, 1,  "<" + RF_OPTION + "><I><D=" + Cres.get().getString("option") + ">");

}


