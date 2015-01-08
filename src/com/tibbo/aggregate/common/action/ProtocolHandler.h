#ifndef _PROTOCOL_HANDLER_H_
#define _PROTOCOL_HANDLER_H_



class ProtocolHandler
    
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
#endif//_PROTOCOL_HANDLER_H_
