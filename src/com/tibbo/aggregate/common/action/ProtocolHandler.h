// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/ProtocolHandler.java

#pragma once

//#include <com/tibbo/aggregate/common/action/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::action::ProtocolHandler
    
{

public:
    typedef void super;

private:
    static const std::string FIELD_ACTION_RESPONSE_PARAMETERS_;
    static const std::string FIELD_ACTION_RESPONSE_REMEMBER_;
    static const std::string FIELD_ACTION_RESPONSE_REQUEST_ID_;
    static const std::string FIELD_ACTION_COMMAND_TYPE_;
    static const std::string FIELD_ACTION_COMMAND_TITLE_;
    static const std::string FIELD_ACTION_COMMAND_PARAMETERS_;
    static const std::string FIELD_ACTION_COMMAND_LAST_;
    static const std::string FIELD_ACTION_COMMAND_BATCH_MEMBER_;
    static const std::string FIELD_ACTION_COMMAND_REQUEST_ID_;
    static const std::string FIELD_ACTION_ID_ACTION_ID_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FORMAT_ACTION_ID_FORMAT_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FORMAT_ACTION_COMMAND_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* FORMAT_ACTION_RESPONSE_;

public:
    static ::com::tibbo::aggregate::common::datatable::DataTable* actionIdToDataTable(ActionIdentifier* id);
    static ActionIdentifier* actionIdFromDataTable(::com::tibbo::aggregate::common::datatable::DataTable* table);
    static ::com::tibbo::aggregate::common::datatable::DataTable* actionCommandToDataTable(GenericActionCommand* cmd);
    static GenericActionCommand* actionCommandFromDataTable(::com::tibbo::aggregate::common::datatable::DataTable* table);
    static ::com::tibbo::aggregate::common::datatable::DataTable* actionResponseToDataTable(GenericActionResponse* response);
    static GenericActionResponse* actionResponseFromDataTable(::com::tibbo::aggregate::common::datatable::DataTable* table);

    // Generated
    ProtocolHandler();
protected:
    ProtocolHandler(const ::default_init_tag&);


public:
    
    static void 

private:
    static const std::string& FIELD_ACTION_RESPONSE_PARAMETERS();
    static const std::string& FIELD_ACTION_RESPONSE_REMEMBER();
    static const std::string& FIELD_ACTION_RESPONSE_REQUEST_ID();
    static const std::string& FIELD_ACTION_COMMAND_TYPE();
    static const std::string& FIELD_ACTION_COMMAND_TITLE();
    static const std::string& FIELD_ACTION_COMMAND_PARAMETERS();
    static const std::string& FIELD_ACTION_COMMAND_LAST();
    static const std::string& FIELD_ACTION_COMMAND_BATCH_MEMBER();
    static const std::string& FIELD_ACTION_COMMAND_REQUEST_ID();
    static const std::string& FIELD_ACTION_ID_ACTION_ID();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FORMAT_ACTION_ID_FORMAT();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FORMAT_ACTION_COMMAND();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& FORMAT_ACTION_RESPONSE();
    ::java::lang::Class* getClass0();
};
