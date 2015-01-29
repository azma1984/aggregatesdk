
#ifndef IncomingAggreGateCommandH
#define IncomingAggreGateCommandH

#include "AggreGateCommand.h"
#include "string"

class IncomingAggreGateCommand : public AggreGateCommand
{

private:
	static const std::string EMPTY_ID_;

public:
	std::list<std::string>  parameters;

public:
	void parse() ;

public:
    int getNumberOfParameters();
    bool hasParameter(int number);

	std::list<std::string>  getParameters(int number);
    bool isReply();
    bool isMessage();
	std::string getReplyCode();
	std::string getMessageCode();
	std::string getEncodedDataTable(int index) ;
	std::string getEncodedDataTableFromReply() ;
	std::string getEncodedDataTableFromOperationMessage() ;
	std::string getEncodedDataTableFromEventMessage() ;
	std::string getId();
    bool isAsync();

	std::string getParameter(int number);

	IncomingAggreGateCommand(char* data);
	IncomingAggreGateCommand(const std::string & str);
   //	IncomingAggreGateCommand(::java::io::ByteArrayOutputStream* s);  todo


};
#endif
