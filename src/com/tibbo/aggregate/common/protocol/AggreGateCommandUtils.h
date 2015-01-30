#ifndef AggreGateCommandUtilsH
#define AggreGateCommandUtilsH


//#include "datatable/encoding/TransferEncodingHelper.h"
#include "protocol/AggreGateCommand.h"
#include "protocol/OutgoingAggreGateCommand.h"

class AggreGateCommandUtils
{
 public:
	static const std::string CLIENT_COMMAND_SEPARATOR;
	static const int CLIENT_PROTOCOL_VERSION = 2;
	static OutgoingAggreGateCommandPtr startMessage();
	static OutgoingAggreGateCommandPtr operationMessage();
	static OutgoingAggreGateCommandPtr getVariableOperation(const std::string & context, const std::string & name);
	static OutgoingAggreGateCommandPtr setVariableOperation(const std::string & context, const std::string & name, const std::string & encodedValue);
	static OutgoingAggreGateCommandPtr callFunctionOperation(const std::string & context, const std::string & name, const std::string & encodedParameters);
	static OutgoingAggreGateCommandPtr addEventListenerOperation(const std::string & context, const std::string & name, int  listenerHashCode, const std::string & filter);
	static OutgoingAggreGateCommandPtr removeEventListenerOperation(const std::string & context, const std::string & name, int  listenerHashCode, const std::string & filter);

	AggreGateCommandUtils();

};
#endif
