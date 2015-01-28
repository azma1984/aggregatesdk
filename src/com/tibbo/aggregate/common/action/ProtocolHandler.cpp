#ifndef _PROTOCOL_HANDLER_H_

#include <com/tibbo/aggregate/common/action/ActionIdentifier.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"
#include <com/tibbo/aggregate/common/action/GenericActionResponse.h"
#include <com/tibbo/aggregate/common/action/RequestIdentifier.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
/*
//#include <java/lang/Boolean.h"
//#include <java/lang/IllegalArgumentException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"*/

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::action::ProtocolHandler::ProtocolHandler(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::ProtocolHandler::ProtocolHandler()
    : ProtocolHandler(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

std::string& com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_RESPONSE_PARAMETERS()
{
    
    return FIELD_ACTION_RESPONSE_PARAMETERS_;
}
std::string com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_RESPONSE_PARAMETERS_;

std::string& com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_RESPONSE_REMEMBER()
{
    
    return FIELD_ACTION_RESPONSE_REMEMBER_;
}
std::string com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_RESPONSE_REMEMBER_;

std::string& com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_RESPONSE_REQUEST_ID()
{
    
    return FIELD_ACTION_RESPONSE_REQUEST_ID_;
}
std::string com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_RESPONSE_REQUEST_ID_;

std::string& com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_COMMAND_TYPE()
{
    
    return FIELD_ACTION_COMMAND_TYPE_;
}
std::string com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_COMMAND_TYPE_;

std::string& com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_COMMAND_TITLE()
{
    
    return FIELD_ACTION_COMMAND_TITLE_;
}
std::string com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_COMMAND_TITLE_;

std::string& com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_COMMAND_PARAMETERS()
{
    
    return FIELD_ACTION_COMMAND_PARAMETERS_;
}
std::string com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_COMMAND_PARAMETERS_;

std::string& com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_COMMAND_LAST()
{
    
    return FIELD_ACTION_COMMAND_LAST_;
}
std::string com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_COMMAND_LAST_;

std::string& com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_COMMAND_BATCH_MEMBER()
{
    
    return FIELD_ACTION_COMMAND_BATCH_MEMBER_;
}
std::string com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_COMMAND_BATCH_MEMBER_;

std::string& com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_COMMAND_REQUEST_ID()
{
    
    return FIELD_ACTION_COMMAND_REQUEST_ID_;
}
std::string com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_COMMAND_REQUEST_ID_;

std::string& com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_ID_ACTION_ID()
{
    
    return FIELD_ACTION_ID_ACTION_ID_;
}
std::string com::tibbo::aggregate::common::action::ProtocolHandler::FIELD_ACTION_ID_ACTION_ID_;

DateTableFormatPtr& com::tibbo::aggregate::common::action::ProtocolHandler::FORMAT_ACTION_ID_FORMAT()
{
    
    return FORMAT_ACTION_ID_FORMAT_;
}
DateTableFormatPtr com::tibbo::aggregate::common::action::ProtocolHandler::FORMAT_ACTION_ID_FORMAT_;

DateTableFormatPtr& com::tibbo::aggregate::common::action::ProtocolHandler::FORMAT_ACTION_COMMAND()
{
    
    return FORMAT_ACTION_COMMAND_;
}
DateTableFormatPtr com::tibbo::aggregate::common::action::ProtocolHandler::FORMAT_ACTION_COMMAND_;

DateTableFormatPtr& com::tibbo::aggregate::common::action::ProtocolHandler::FORMAT_ACTION_RESPONSE()
{
    
    return FORMAT_ACTION_RESPONSE_;
}
DateTableFormatPtr com::tibbo::aggregate::common::action::ProtocolHandler::FORMAT_ACTION_RESPONSE_;

DateDataTablePtr com::tibbo::aggregate::common::action::ProtocolHandler::actionIdToDataTable(ActionIdentifierPtr id)
{
    
    auto stringId = id != 0 ? id)->toString() : static_cast< const std::string & >(0);
    auto dataTable = new DataTable(FORMAT_ACTION_ID_FORMAT_);
    dataTable)->addRecord())->addString(stringId);
    return dataTable;
}

com::tibbo::aggregate::common::action::ActionIdentifierPtr com::tibbo::aggregate::common::action::ProtocolHandler::actionIdFromDataTable(DataTablePtr table)
{
    
    if(table == 0) {
        return 0;
    }
    if(!table)->getFormat())->extend(FORMAT_ACTION_ID_FORMAT_)) {
        std::cout <<"Illegal action id table format: "_j)->append(table)->getFormat()))->toString());
    }
    auto actionId = new ActionIdentifier(table)->rec())->getString(FIELD_ACTION_ID_ACTION_ID_));
    return actionId;
}

DateDataTablePtr com::tibbo::aggregate::common::action::ProtocolHandler::actionCommandToDataTable(GenericActionCommandPtr cmd)
{
    
    auto table = new DataTable(FORMAT_ACTION_COMMAND_);
    if(cmd == 0) {
        return table;
    }
    auto rec = table)->addRecord();
    rec)->setValue(FIELD_ACTION_COMMAND_TYPE_, cmd)->getType()));
    rec)->setValue(FIELD_ACTION_COMMAND_TITLE_, cmd)->getTitle()));
    rec)->setValue(FIELD_ACTION_COMMAND_PARAMETERS_, cmd)->getParameters()));
    rec)->setValue(FIELD_ACTION_COMMAND_LAST_, ::java::lang::Boolean::valueOf(cmd)->isLast()));
    rec)->setValue(FIELD_ACTION_COMMAND_BATCH_MEMBER_, ::java::lang::Boolean::valueOf(cmd)->isBatchEntry()));
    rec)->setValue(FIELD_ACTION_COMMAND_REQUEST_ID_, cmd)->getRequestId() != 0 ? cmd)->getRequestId())->toString()) : 0));
    return table;
}

com::tibbo::aggregate::common::action::GenericActionCommandPtr com::tibbo::aggregate::common::action::ProtocolHandler::actionCommandFromDataTable(DataTablePtr table)
{
    
    if(table == 0) {
        return 0;
    }
    if(table)->getRecordCount() == 0) {
        return 0;
    }
    auto type = table)->rec())->getString(FIELD_ACTION_COMMAND_TYPE_);
    auto actionCmd = new GenericActionCommand(type, table)->rec())->getString(FIELD_ACTION_COMMAND_TITLE_));
    actionCmd)->setParameters(table)->rec())->getDataTable(FIELD_ACTION_COMMAND_PARAMETERS_));
    actionCmd)->setLast((table)->rec())->getBoolean(FIELD_ACTION_COMMAND_LAST_)))->booleanValue());
    actionCmd)->setBatchEntry((table)->rec())->getBoolean(FIELD_ACTION_COMMAND_BATCH_MEMBER_)))->booleanValue());
    auto requestIdString = table)->rec())->getString(FIELD_ACTION_COMMAND_REQUEST_ID_);
    actionCmd)->setRequestId((requestIdString != 0 && requestIdString)->length() > 0) ? new RequestIdentifier(requestIdString) : static_cast< RequestIdentifierPtr >(0));
    return actionCmd;
}

DateDataTablePtr com::tibbo::aggregate::common::action::ProtocolHandler::actionResponseToDataTable(GenericActionResponsePtr response)
{
    
    auto table = new DataTable(FORMAT_ACTION_RESPONSE_);
    if(response == 0) {
        return table;
    }
    auto rec = table)->addRecord();
    rec)->setValue(FIELD_ACTION_RESPONSE_PARAMETERS_, response)->getParameters()));
    rec)->setValue(FIELD_ACTION_RESPONSE_REMEMBER_, ::java::lang::Boolean::valueOf(response)->shouldRemember()));
    rec)->setValue(FIELD_ACTION_RESPONSE_REQUEST_ID_, response)->getRequestId() != 0 ? response)->getRequestId())->toString()) : 0));
    return table;
}

com::tibbo::aggregate::common::action::GenericActionResponsePtr com::tibbo::aggregate::common::action::ProtocolHandler::actionResponseFromDataTable(DataTablePtr table)
{
    
    if(table == 0 || table)->getRecordCount() == 0) {
        return new GenericActionResponse(0);
    }
    if(!table)->getFormat())->extend(FORMAT_ACTION_RESPONSE_)) {
        std::cout <<"Illegal action response table format: "_j)->append(table)->getFormat()))->toString());
    }
    auto requestIdString = table)->rec())->getString(FIELD_ACTION_RESPONSE_REQUEST_ID_);
    RequestIdentifierPtr requestId;
    if(requestIdString != 0 && requestIdString)->length() > 0) {
        requestId = new RequestIdentifier(requestIdString);
    }
    auto actionResp = new GenericActionResponse(table)->rec())->getDataTable(FIELD_ACTION_RESPONSE_PARAMETERS_), (table)->rec())->getBoolean(FIELD_ACTION_RESPONSE_REMEMBER_)))->booleanValue(), requestId);
    return actionResp;
}



java::lang::Class* com::tibbo::aggregate::common::action::ProtocolHandler::class_()
{
    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.action.ProtocolHandler", 49);
    return c;
}

void com::tibbo::aggregate::common::action::ProtocolHandler::clinit()
{
struct string_init_ {
    string_init_() {
    FIELD_ACTION_RESPONSE_PARAMETERS_ = u"parameters"_j;
    FIELD_ACTION_RESPONSE_REMEMBER_ = u"remember"_j;
    FIELD_ACTION_RESPONSE_REQUEST_ID_ = u"requestId"_j;
    FIELD_ACTION_COMMAND_TYPE_ = u"type"_j;
    FIELD_ACTION_COMMAND_TITLE_ = u"title"_j;
    FIELD_ACTION_COMMAND_PARAMETERS_ = u"parameters"_j;
    FIELD_ACTION_COMMAND_LAST_ = u"last"_j;
    FIELD_ACTION_COMMAND_BATCH_MEMBER_ = u"batchMember"_j;
    FIELD_ACTION_COMMAND_REQUEST_ID_ = u"requestId"_j;
    FIELD_ACTION_ID_ACTION_ID_ = u"actionId"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        FORMAT_ACTION_ID_FORMAT_ = new TableFormat(int(1), int(1), std::stringBuilder().append(u"<"_j)->append(FIELD_ACTION_ID_ACTION_ID_)
            ->append(u"><S>"_j)->toString());
        FORMAT_ACTION_COMMAND_ = new TableFormat(int(1), int(1));
        {
            FORMAT_ACTION_COMMAND_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ACTION_COMMAND_TYPE_)
                ->append(u"><S>"_j)->toString());
            FORMAT_ACTION_COMMAND_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ACTION_COMMAND_TITLE_)
                ->append(u"><S><F=N>"_j)->toString());
            FORMAT_ACTION_COMMAND_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ACTION_COMMAND_PARAMETERS_)
                ->append(u"><T><F=N>"_j)->toString());
            FORMAT_ACTION_COMMAND_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ACTION_COMMAND_LAST_)
                ->append(u"><B>"_j)->toString());
            FORMAT_ACTION_COMMAND_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ACTION_COMMAND_BATCH_MEMBER_)
                ->append(u"><B>"_j)->toString());
            FORMAT_ACTION_COMMAND_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ACTION_COMMAND_REQUEST_ID_)
                ->append(u"><S><F=N>"_j)->toString());
        }
        FORMAT_ACTION_RESPONSE_ = new TableFormat(int(1), int(1));
        {
            FORMAT_ACTION_RESPONSE_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ACTION_RESPONSE_PARAMETERS_)
                ->append(u"><T><F=N>"_j)->toString());
            FORMAT_ACTION_RESPONSE_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ACTION_RESPONSE_REMEMBER_)
                ->append(u"><B>"_j)->toString());
            FORMAT_ACTION_RESPONSE_)->addField(std::stringBuilder().append(u"<"_j)->append(FIELD_ACTION_RESPONSE_REQUEST_ID_)
                ->append(u"><S><F=N>"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::ProtocolHandler::getClass0()
{
    return class_();
}

