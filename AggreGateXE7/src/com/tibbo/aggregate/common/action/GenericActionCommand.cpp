// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/GenericActionCommand.java
#include "GenericActionCommand.h"

/*
com::tibbo::aggregate::common::action::GenericActionCommand::GenericActionCommand(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::GenericActionCommand::GenericActionCommand(std::string* type, ::com::tibbo::aggregate::common::datatable::TableFormat* requestFormat, ::com::tibbo::aggregate::common::datatable::TableFormat* responseFormat) 
    : GenericActionCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor(type,requestFormat,responseFormat);
}

com::tibbo::aggregate::common::action::GenericActionCommand::GenericActionCommand(std::string* type, std::string* title) 
    : GenericActionCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor(type,title);
}

com::tibbo::aggregate::common::action::GenericActionCommand::GenericActionCommand(std::string* type, std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters, ::com::tibbo::aggregate::common::datatable::TableFormat* format) 
    : GenericActionCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor(type,title,parameters,format);
}

com::tibbo::aggregate::common::action::GenericActionCommand::GenericActionCommand(std::string* requestId, std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) 
    : GenericActionCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor(requestId,title,parameters);
}

void com::tibbo::aggregate::common::action::GenericActionCommand::init()
{
    interactive = true;
}

void com::tibbo::aggregate::common::action::GenericActionCommand::ctor(std::string* type, ::com::tibbo::aggregate::common::datatable::TableFormat* requestFormat, ::com::tibbo::aggregate::common::datatable::TableFormat* responseFormat)
{
    super::ctor();
    init();
    this->responseFormat = responseFormat;
    setType(type);
    parameters = new ::com::tibbo::aggregate::common::datatable::DataTable(requestFormat);
}

void com::tibbo::aggregate::common::action::GenericActionCommand::ctor(std::string* type, std::string* title)
{
    super::ctor();
    init();
    setType(type);
    this->title = title;
}

void com::tibbo::aggregate::common::action::GenericActionCommand::ctor(std::string* type, std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters, ::com::tibbo::aggregate::common::datatable::TableFormat* format)
{
    ctor(type, title);
    try {
        ::com::tibbo::aggregate::common::datatable::DataTableConversion::populateBeanFromRecord(this, parameters)->rec(), format, true);
    } catch (::com::tibbo::aggregate::common::datatable::DataTableException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

void com::tibbo::aggregate::common::action::GenericActionCommand::ctor(std::string* requestId, std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters)
{
    ctor(requestId, title);
    setParameters(parameters);
    setRequestId(new RequestIdentifier(requestId));
    setInteractive(false);
}

void com::tibbo::aggregate::common::action::GenericActionCommand::setType(std::string* type)
{
    if(type == 0 || type)->length() == 0) {
        throw new ::java::lang::IllegalArgumentException(u"Action command type is null or zero-length"_j);
    }
    this->type = type;
}

com::tibbo::aggregate::common::action::GenericActionResponse* com::tibbo::aggregate::common::action::GenericActionCommand::createDefaultResponse()
{
    auto format = responseFormat;
    if(format == 0) {
        auto const command = ActionCommandRegistry::getCommand(getType());
        format = command != 0 ? command)->getResponseFormat() : (getParameters() != 0 ? getParameters())->getFormat() : static_cast< ::com::tibbo::aggregate::common::datatable::TableFormat* >(0));
    }
    auto responseTable = format != 0 ? new ::com::tibbo::aggregate::common::datatable::DataTable(format, true) : static_cast< ::com::tibbo::aggregate::common::datatable::DataTable* >(0);
    return new GenericActionResponse(responseTable);
}

void com::tibbo::aggregate::common::action::GenericActionCommand::setParameters(::com::tibbo::aggregate::common::datatable::DataTable* parameters)
{
    this->parameters = parameters;
}

void com::tibbo::aggregate::common::action::GenericActionCommand::setTitle(std::string* title)
{
    this->title = title;
}

void com::tibbo::aggregate::common::action::GenericActionCommand::setLast(bool last)
{
    this->last = last;
}

void com::tibbo::aggregate::common::action::GenericActionCommand::setBatchEntry(bool batchEntry)
{
    this->batchEntry = batchEntry;
}

void com::tibbo::aggregate::common::action::GenericActionCommand::setRequestId(RequestIdentifier* requestId)
{
    this->requestId = requestId;
}

std::string com::tibbo::aggregate::common::action::GenericActionCommand::getType()
{
    return type;
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::GenericActionCommand::getParameters()
{
    return parameters != 0 ? parameters : constructParameters();
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::GenericActionCommand::constructParameters()
{
    return 0;
}

std::string com::tibbo::aggregate::common::action::GenericActionCommand::getTitle()
{
    return title;
}

bool com::tibbo::aggregate::common::action::GenericActionCommand::isLast()
{
    return last;
}

bool com::tibbo::aggregate::common::action::GenericActionCommand::isBatchEntry()
{
    return batchEntry;
}

com::tibbo::aggregate::common::action::RequestIdentifier* com::tibbo::aggregate::common::action::GenericActionCommand::getRequestId()
{
    return requestId;
}

bool com::tibbo::aggregate::common::action::GenericActionCommand::isResponseValid(ActionResponse* actionRequest)
{
    return true;
}

com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::GenericActionCommand::getResponseFormat()
{
    return responseFormat;
}

void com::tibbo::aggregate::common::action::GenericActionCommand::setInteractive(bool interactive)
{
    this->interactive = interactive;
}

bool com::tibbo::aggregate::common::action::GenericActionCommand::isInteractive()
{
    return interactive;
}

int com::tibbo::aggregate::common::action::GenericActionCommand::hashCode()
{
    auto const prime = int(31);
    auto result = int(1);
    result = prime * result + (batchEntry ? int(1231) : int(1237));
    result = prime * result + ((type == 0) ? int(0) : type)->hashCode());
    result = prime * result + (last ? int(1231) : int(1237));
    result = prime * result + ((parameters == 0) ? int(0) : parameters)->hashCode());
    result = prime * result + ((requestId == 0) ? int(0) : requestId)->hashCode());
    result = prime * result + ((title == 0) ? int(0) : title)->hashCode());
    return result;
}

bool com::tibbo::aggregate::common::action::GenericActionCommand::equals(void* obj)
{
    if(this) == obj) {
        return true;
    }
    if(obj == 0) {
        return false;
    }
    if(getClass()) != obj)->getClass())) {
        return false;
    }
    auto other = java_cast< GenericActionCommand* >(obj);
    if(batchEntry != other)->batchEntry) {
        return false;
    }
    if(type == 0) {
        if(other)->type != 0) {
            return false;
        }
    } else if(!type)->equals(other)->type))) {
        return false;
    }
    if(last != other)->last) {
        return false;
    }
    if(parameters == 0) {
        if(other)->parameters != 0) {
            return false;
        }
    } else if(!parameters)->equals(other)->parameters))) {
        return false;
    }
    if(requestId == 0) {
        if(other)->requestId != 0) {
            return false;
        }
    } else if(!requestId)->equals(other)->requestId))) {
        return false;
    }
    if(title == 0) {
        if(other)->title != 0) {
            return false;
        }
    } else if(!title)->equals(other)->title))) {
        return false;
    }
    return true;
}

com::tibbo::aggregate::common::action::ActionCommand* com::tibbo::aggregate::common::action::GenericActionCommand::clone()
{
    try {
        return java_cast< ActionCommand* >(super::clone());
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::AssertionError();
    }
}

std::string com::tibbo::aggregate::common::action::GenericActionCommand::toString()
{
    return std::stringBuilder().append(u"[type="_j)->append(type)
        ->append(u", title="_j)
        ->append(title)
        ->append(u", id="_j)
        ->append(requestId))
        ->append(u"]"_j)->toString();
}



java::lang::Class* com::tibbo::aggregate::common::action::GenericActionCommand::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.GenericActionCommand", 54);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::action::GenericActionCommand::getClass0()
{
    return class_();
}
                    */
