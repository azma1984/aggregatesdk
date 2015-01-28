#ifndef _PROTOCOL_HANDLER_H_
#define _PROTOCOL_HANDLER_H_



class ProtocolHandler
{

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
    static TableFormatPtr FORMAT_ACTION_ID_FORMAT_;
    static TableFormatPtr FORMAT_ACTION_COMMAND_;
    static TableFormatPtr FORMAT_ACTION_RESPONSE_;

public:
    static DataTablePtr actionIdToDataTable(ActionIdentifierPtr id);
    static ActionIdentifierPtr actionIdFromDataTable(DataTablePtr table);
    static DataTablePtr actionCommandToDataTable(GenericActionCommandPtr cmd);
    static GenericActionCommandPtr actionCommandFromDataTable(DataTablePtr table);
    static DataTablePtr actionResponseToDataTable(GenericActionResponsePtr response);
    static GenericActionResponsePtr actionResponseFromDataTable(DataTablePtr table);


    ProtocolHandler();

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
    static TableFormatPtr& FORMAT_ACTION_ID_FORMAT();
    static TableFormatPtr& FORMAT_ACTION_COMMAND();
    static TableFormatPtr& FORMAT_ACTION_RESPONSE();
};
#endif//_PROTOCOL_HANDLER_H_
