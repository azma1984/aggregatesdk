// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AggreGateCommand.java


#ifndef AggreGateCommandH
#define AggreGateCommandH

#include "communication/Command.h"

//#include <com/tibbo/aggregate/common/datatable/DataTableUtils.h"


class AggreGateCommand: public Command
{
  /*
public:
	typedef ::com::tibbo::aggregate::common::communication::Command super;
    static const int8_t START_CHAR { int8_t(2) };
    static const int8_t END_CHAR { int8_t(13) };
    static const char16_t COMMAND_CODE_MESSAGE { u'M' };
    static const char16_t COMMAND_CODE_REPLY { u'R' };
    static const char16_t MESSAGE_CODE_START { u'S' };
    static const char16_t MESSAGE_CODE_OPERATION { u'O' };
    static const char16_t MESSAGE_CODE_EVENT { u'E' };

private:
    static const std::string REPLY_CODE_OK_;
    static const std::string REPLY_CODE_DENIED_;
    static const std::string REPLY_CODE_ERROR_;
*/
public:
 /*
   static const char16_t COMMAND_OPERATION_GET_VAR { u'G' };
    static const char16_t COMMAND_OPERATION_SET_VAR { u'S' };
    static const char16_t COMMAND_OPERATION_CALL_FUNCTION { u'C' };
    static const char16_t COMMAND_OPERATION_ADD_EVENT_LISTENER { u'L' };
    static const char16_t COMMAND_OPERATION_REMOVE_EVENT_LISTENER { u'R' };
    static const int INDEX_COMMAND_CODE) };
    static const int INDEX_ID = 1) };
    static const int INDEX_MESSAGE_CODE = 2) };
    static const int INDEX_PROTOCOL_VERSION = 3) };
    static const int INDEX_OPERATION_CODE = 3) };
    */
    static const int INDEX_OPERATION_CONTEXT = 4;
    /*
    static const int INDEX_OPERATION_TARGET = 5) };
    static const int INDEX_OPERATION_MESSAGE_DATA_TABLE = 6) };
    static const int INDEX_OPERATION_LISTENER_CODE = 6) };
    static const int INDEX_OPERATION_FILTER = 7) };
    static const int INDEX_EVENT_CONTEXT = 3) };
    static const int INDEX_EVENT_NAME = 4) };
    static const int INDEX_EVENT_LEVEL = 5) };
    static const int INDEX_EVENT_ID = 6) };
    static const int INDEX_EVENT_LISTENER = 7) };
    static const int INDEX_EVENT_DATA_TABLE = 8) };
    static const int INDEX_EVENT_TIMESTAMP = 9) };
    static const int INDEX_REPLY_CODE = 2) };
    static const int INDEX_REPLY_MESSAGE = 3) };
    static const int INDEX_REPLY_DETAILS = 4) };
    static const int INDEX_DATA_TABLE_IN_REPLY = 3) };

private:
    static const std::string CLIENT_COMMAND_SEPARATOR_;
    static int GENERATED_ID_;
    static const int MAX_PRINTED_LENGTH = 1000) };

public:
    std::string* toString();

public:
    static const std::string generateId();

    // Generated

public:
    AggreGateCommand();
protected:
    AggreGateCommand(const ::default_init_tag&);


public:
    
    static void 
    std::string* toString(std::string* arg0);
    std::string* toString(int arg0);
    static const std::string& REPLY_CODE_OK();
    static const std::string& REPLY_CODE_DENIED();
    static const std::string& REPLY_CODE_ERROR();
    static const std::string& CLIENT_COMMAND_SEPARATOR();

*/
};
#endif
