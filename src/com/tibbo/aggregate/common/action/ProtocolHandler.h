#ifndef ProtocolHandlerH
#define ProtocolHandlerH

#include "action/ActionIdentifier.h"
#include "action/GenericActionCommand.h"
#include "action/GenericActionResponse.h"
#include "action/RequestIdentifier.h"
//#include "datatable/DataRecord.h"
//#include "datatable/DataTable.h"
//#include "datatable/TableFormat.h"

class ProtocolHandler
{

private:
	static const std::string FIELD_ACTION_RESPONSE_PARAMETERS;
	static const std::string FIELD_ACTION_RESPONSE_REMEMBER;
	static const std::string FIELD_ACTION_RESPONSE_REQUEST_ID;
    static const std::string FIELD_ACTION_COMMAND_TYPE;
    static const std::string FIELD_ACTION_COMMAND_TITLE;
    static const std::string FIELD_ACTION_COMMAND_PARAMETERS;
    static const std::string FIELD_ACTION_COMMAND_LAST;
    static const std::string FIELD_ACTION_COMMAND_BATCH_MEMBER;
    static const std::string FIELD_ACTION_COMMAND_REQUEST_ID;
    static const std::string FIELD_ACTION_ID_ACTION_ID;
    static TableFormatPtr FORMAT_ACTION_ID_FORMAT;
    static TableFormatPtr FORMAT_ACTION_COMMAND;
	static TableFormatPtr FORMAT_ACTION_RESPONSE;

public:
    static DataTablePtr actionIdToDataTable(ActionIdentifierPtr id);
    static ActionIdentifierPtr actionIdFromDataTable(DataTablePtr table);
    static DataTablePtr actionCommandToDataTable(GenericActionCommandPtr cmd);
    static GenericActionCommandPtr actionCommandFromDataTable(DataTablePtr table);
    static DataTablePtr actionResponseToDataTable(GenericActionResponsePtr response);
    static GenericActionResponsePtr actionResponseFromDataTable(DataTablePtr table);


    ProtocolHandler();
};
#endif //ProtocolHandlerH
