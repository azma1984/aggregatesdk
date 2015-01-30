#include "action/GenericActionCommand.h"

GenericActionCommand::GenericActionCommand()
{
	init();
}

 /**
  * This constructor is used by specific implementations.
  */
GenericActionCommand::GenericActionCommand( const std::string& type, TableFormatPtr requestFormat, TableFormatPtr responseFormat)
{
  init();
  this->responseFormat = responseFormat;
  setType(type);
 // this->parameters = DataTablePtr(new DataTable(requestFormat));  todo
}

//GenericActionCommand::GenericActionCommand(const std::string& type, const std::string& title)
//{
//    ctor();
//    init();
//    setType(type);
//    this->title = title;
//}
//}
//
//GenericActionCommand::GenericActionCommand(
//    const std::string& type,
//    const std::string& title,
//    DataTablePtr parameters,
//    TableFormatPtr format
//) {
//    ctor(type,title,parameters,format);
//}
//
//GenericActionCommand::GenericActionCommand(
//    const std::string& requestId,
//    const std::string& title,
//    DataTablePtr parameters
//) {
//    ctor(requestId,title,parameters);
//}
//
void GenericActionCommand::init()
{
    interactive = true;
    last = false;
    batchEntry = false;
}


//
//void GenericActionCommand::ctor(
//    const std::string& type,
//    const std::string& title,
//    DataTablePtr parameters,
//    TableFormatPtr format
//) {
//    ctor(type, title);
//    try {
//        DataTableConversion::populateBeanFromRecord(this, parameters->rec(), format, true);
//    } catch (DataTableException& ex) {
//        throw  AggreGateException(ex.getMessage(), ex.getDetails());
//    }
//}
//
//void GenericActionCommand::ctor(const std::string & requestId, const std::string & title, DataTablePtr parameters)
//{
//    ctor(requestId, title);
//    setParameters(parameters);
//    setRequestId(new RequestIdentifier(requestId));
//    setInteractive(false);
//}
//
//void GenericActionCommand::setType(const std::string &type)
//{
//    if (type.length() == 0) {
//        throw  AggreGateException("Action command type is null or zero-length");
//    }
//
//    this->type = type;
//}
//
//GenericActionResponsePtr GenericActionCommand::createDefaultResponse()
//{
//    TableFormatPtr format = NULL;
//
//    if (responseFormat == 0) {
//        GenericActionCommandPtr command = ActionCommandRegistry::getCommand(getType();
//        format = (command != 0) ? command->getResponseFormat() : ( (getParameters() != 0) ? getParameters()->getFormat() : NULL);
//    }
//    DataTablePtr responseTable = (format != 0) ? new DataTable(format, true) : 0;
//
//    return new GenericActionResponse(responseTable);
//}
//
//void GenericActionCommand::setParameters(DataTablePtr parameters)
//{
//    *this->parameters = *parameters;
//}
//
//void GenericActionCommand::setTitle(const std::string &title)
//{
//    this->title = title;
//}
//
//void GenericActionCommand::setLast(bool last)
//{
//    this->last = last;
//}
//
//void GenericActionCommand::setBatchEntry(bool batchEntry)
//{
//    this->batchEntry = batchEntry;
//}
//
//void GenericActionCommand::setRequestId(RequestIdentifierPtr requestId)
//{
//    this->requestId = requestId;
//}
//
//std::string GenericActionCommand::getType()
//{
//    return type;
//}
//
//DataTablePtr GenericActionCommand::getParameters()
//{
//    return parameters != 0 ? parameters : constructParameters();
//}
//
//DataTablePtr GenericActionCommand::constructParameters()
//{
//    return 0;
//}
//
//std::string GenericActionCommand::getTitle()
//{
//    return title;
//}
//
//bool GenericActionCommand::isLast()
//{
//    return last;
//}
//
//bool GenericActionCommand::isBatchEntry()
//{
//    return batchEntry;
//}
//
//RequestIdentifierPtr GenericActionCommand::getRequestId()
//{
//    return requestId;
//}
//
//bool GenericActionCommand::isResponseValid(ActionResponsePtr actionRequest)
//{
//    return true;
//}
//
//TableFormatPtr GenericActionCommand::getResponseFormat()
//{
//    return responseFormat;
//}
//
//void GenericActionCommand::setInteractive(bool interactive)
//{
//    this->interactive = interactive;
//}
//
//bool GenericActionCommand::isInteractive()
//{
//    return interactive;
//}
////TODO: проверить необходимость
//int GenericActionCommand::hashCode()
//{
//
//    const int prime = 31;
//    intresult = 1;
//    /*
//    result = prime * result + (batchEntry ? 1231 : 1237);
//    result = prime * result + type.hashCode();
//    result = prime * result + (last ? int(1231) : int(1237));
//    result = prime * result + ((parameters == 0) ? int(0) : parameters)->hashCode());
//    result = prime * result + ((requestId == 0) ? int(0) : requestId)->hashCode());
//    result = prime * result + ((title == 0) ? int(0) : title)->hashCode());
//    */
//    return result;
//}
//
////TODO: возможно правильнее заменить на operator==()
//bool GenericActionCommand::equals(AgObjectPtr obj)
//{
//    GenericActionCommandPtr gac = static_cast<obj>;
//
//
//    if (gac == 0) {
//        return false;
//    }
//
//    if (batchEntry != gac->batchEntry) {
//        return false;
//    }
//
//    if (type != gac->type) {
//        return false;
//    }
//
//    if (last != gac->last) {
//        return false;
//    }
//
//    if (parameters == 0) {
//        if (gac->parameters != 0) {
//            return false;
//        }
//    }else if(!parameters->equals(gac->parameters)) {
//        return false;
//    }
//
//    if (requestId == 0) {
//        if(gac->requestId != 0) {
//            return false;
//        }
//    } else if(!requestId->equals(gac->requestId)) {
//        return false;
//    }
//
//    if (title != gac->title) {
//        return false;
//    }
//
//    return true;
//}

//
//std::string GenericActionCommand::toString()
//{
//    return std::string("[type=").append(type).append(", title=").append(title)
//            .append(", id=").append((requestId!=0) ? requestId->toString() : "null").append("]");
//}
