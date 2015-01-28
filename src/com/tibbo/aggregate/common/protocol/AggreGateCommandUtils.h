#ifndef AggreGateCommandUtilsH
#define AggreGateCommandUtilsH


class AggreGateCommandUtils
{
private:
	static const std::string CLIENT_COMMAND_SEPARATOR_;

public:

	static const int CLIENT_PROTOCOL_VERSION = 2;
	static OutgoingAggreGateCommandPtr startMessage();
	static OutgoingAggreGateCommandPtr operationMessage();
	static OutgoingAggreGateCommandPtr getVariableOperation(const std::string & context, const std::string & name);
	static OutgoingAggreGateCommandPtr setVariableOperation(const std::string & context, const std::string & name, const std::string & encodedValue);
	static OutgoingAggreGateCommandPtr callFunctionOperation(const std::string & context, const std::string & name, const std::string & encodedParameters);
	static OutgoingAggreGateCommandPtr addEventListenerOperation(const std::string & context, const std::string & name, int  listenerHashCode, const std::string & filter);
	static OutgoingAggreGateCommandPtr removeEventListenerOperation(const std::string & context, const std::string & name, int  listenerHashCode, const std::string & filter);


    AggreGateCommandUtils();


    static const std::string& CLIENT_COMMAND_SEPARATOR();

};
#endif
