#include "Confirm.h"
#include "AggreGateException.h"

std::string Confirm::CF_MESSAGE = "message";
std::string Confirm::CF_OPTION_TYPE =  "optionType";
std::string Confirm::CF_MESSAGE_TYPE = "messageType";
std::string Confirm::RF_OPTION = "option";


Confirm::Confirm()
{
  GenericActionCommand(ActionUtils::CMD_CONFIRM, CFT_CONFIRM, RFT_CONFIRM);
}

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


Confirm::Confirm(std::string title, DataTable parameters)
{
    GenericActionCommand(title, parameters);
}


DataTable* Confirm::constructParameters()
{
    DataRecord* dr = new DataRecord(CFT_CONFIRM);
    dr->addString(message);
    dr->addInt(optionType);
    dr->addInt(messageType);

    return dr;
}

GenericActionResponse Confirm::createDefaultResponse()
{
	TableFormat *responseFormat = RFT_CONFIRM->clone();
    std::map<int, std::string> selectionValues;
	int optionType = getParameters()->rec()->getInt(Confirm::CF_OPTION_TYPE);

    if(ActionUtils::YES_NO_OPTION == optionType) {
        selectionValues.insert( std::pair<int, std::string>(ActionUtils::YES_OPTION, Cres::get()->getString("yes")) );
        selectionValues.insert( std::pair<int, std::string>(ActionUtils::NO_OPTION, Cres::get()->getString("no")) );
	} else if(ActionUtils::OK_CANCEL_OPTION == optionType) {
        selectionValues.insert( std::pair<int, std::string>(ActionUtils::OK_OPTION, Cres::get()->getString("ok")) );
        selectionValues.insert( std::pair<int, std::string>(ActionUtils::CANCEL_OPTION, Cres::get()->getString("cancel")) );
	} else if(ActionUtils::YES_NO_CANCEL_OPTION == optionType) {
        selectionValues.insert( std::pair<int, std::string>(ActionUtils::YES_OPTION, Cres::get()->getString("yes")) );
        selectionValues.insert(std::pair<int, std::string>(ActionUtils::NO_OPTION, Cres::get()->getString("no")) );
        selectionValues.insert(std::pair<int, std::string>(ActionUtils::CANCEL_OPTION,Cres::get()->getString("cancel");
    } else {
      std::cout<<"Unsupported option type: ";
    }
    responseFormat->getField(RF_OPTION_)->setSelectionValues(selectionValues);
    return new GenericActionResponse(new ::DataTable(responseFormat, true));
}

int Confirm::parseConfirm(GenericActionResponse* resp)
{
    DataTable* dt = NULL;
    if (resp) {
        dt = resp->getParameters();
    }

    if (dt == NULL || (dt->getRecordCount() == 0) ) {
        return ActionUtils::CANCEL_OPTION;
    }

    if (!dt->getFormat()->hasField(RF_OPTION)) {
        throw  AggreGateException("Malformed response", "Confirm::parseConfirm");
    }

    int option = dt->rec()->getInt(RF_OPTION);
    switch (option) {
        case ActionUtils::YES_OPTION:
        case ActionUtils::NO_OPTION:
        case ActionUtils::CANCEL_OPTION:
            break;

        default:
            throw  AggreGateException("Illegal response option: ", "Confirm::parseConfirm");
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


