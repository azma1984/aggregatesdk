#ifndef AggreGateCommandH
#define AggreGateCommandH

#include "communication/Command.h"

#include "datatable/DataTableUtils.h"

class AggreGateCommand: public Command
{
private:

	static int GENERATED_ID;
	static const int MAX_PRINTED_LENGTH = 1000;
public:
	static const std::string REPLY_CODE_OK;
	static const std::string REPLY_CODE_DENIED;
	static const std::string REPLY_CODE_ERROR;
	static const std::string CLIENT_COMMAND_SEPARATOR;

	static const unsigned char START_CHAR = 0x02;
	static const unsigned char END_CHAR   = 0x0D;
	static const char COMMAND_CODE_MESSAGE = 'M';
	static const char COMMAND_CODE_REPLY= 'R';
	static const char MESSAGE_CODE_START= 'S';
	static const char MESSAGE_CODE_OPERATION ='O';
	static const char MESSAGE_CODE_EVENT ='E';


   static const char COMMAND_OPERATION_GET_VAR= 'G';
	static const char COMMAND_OPERATION_SET_VAR ='S';
	static const char COMMAND_OPERATION_CALL_FUNCTION ='C';
	static const char COMMAND_OPERATION_ADD_EVENT_LISTENER= 'L';
	static const char COMMAND_OPERATION_REMOVE_EVENT_LISTENER ='R';
	static const int INDEX_COMMAND_CODE = 0;
	static const int INDEX_ID = 1;
	static const int INDEX_MESSAGE_CODE = 2;
	static const int INDEX_PROTOCOL_VERSION = 3;
	static const int INDEX_OPERATION_CODE = 3;

	static const int INDEX_OPERATION_CONTEXT = 4;

	static const int INDEX_OPERATION_TARGET = 5;
    static const int INDEX_OPERATION_MESSAGE_DATA_TABLE = 6;
	static const int INDEX_OPERATION_LISTENER_CODE = 6;
	static const int INDEX_OPERATION_FILTER = 7;
	static const int INDEX_EVENT_CONTEXT = 3;
	static const int INDEX_EVENT_NAME = 4;
	static const int INDEX_EVENT_LEVEL = 5;
	static const int INDEX_EVENT_ID = 6;
	static const int INDEX_EVENT_LISTENER = 7;
    static const int INDEX_EVENT_DATA_TABLE = 8;
	static const int INDEX_EVENT_TIMESTAMP = 9;
	static const int INDEX_REPLY_CODE = 2;
	static const int INDEX_REPLY_MESSAGE = 3;
	static const int INDEX_REPLY_DETAILS = 4;
	static const int INDEX_DATA_TABLE_IN_REPLY = 3;

	const std::string & toString();
    static const std::string generateId();

	const std::string & toString(const std::string & arg0);
	const std::string & toString(int arg0);
	 AggreGateCommand();

};
#endif
