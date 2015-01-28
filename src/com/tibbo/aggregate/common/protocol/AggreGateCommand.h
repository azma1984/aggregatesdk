#ifndef AggreGateCommandH
#define AggreGateCommandH

#include "communication/Command.h"

#include "datatable/DataTableUtils.h"

class AggreGateCommand: public Command
{
private:
	static const std::string REPLY_CODE_OK_;
	static const std::string REPLY_CODE_DENIED_;
	static const std::string REPLY_CODE_ERROR_;
	static const std::string CLIENT_COMMAND_SEPARATOR_;
	static int GENERATED_ID_;
	static const int MAX_PRINTED_LENGTH = 1000;
public:
	static const unsigned char START_CHAR nsigned char(2;
	static const unsigned char END_CHAR nsigned char(13;
	static const int COMMAND_CODE_MESSAGE 'M';
	static const int COMMAND_CODE_REPLY 'R';
	static const int MESSAGE_CODE_START 'S';
	static const int MESSAGE_CODE_OPERATION 'O';
	static const int MESSAGE_CODE_EVENT 'E';


   static const int COMMAND_OPERATION_GET_VAR 'G';
	static const int COMMAND_OPERATION_SET_VAR 'S';
	static const int COMMAND_OPERATION_CALL_FUNCTION 'C';
	static const int COMMAND_OPERATION_ADD_EVENT_LISTENER 'L';
	static const int COMMAND_OPERATION_REMOVE_EVENT_LISTENER 'R';
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
	static const std::string& REPLY_CODE_OK();
	static const std::string& REPLY_CODE_DENIED();
	static const std::string& REPLY_CODE_ERROR();
	static const std::string& CLIENT_COMMAND_SEPARATOR();
	 AggreGateCommand();

};
#endif
