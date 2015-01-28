
#ifndef IncomingAggreGateCommandH
#define IncomingAggreGateCommandH

#include "AggreGateCommand.h"
#include "string"

class IncomingAggreGateCommand : public AggreGateCommand
{

private:
	static const std::string EMPTY_ID_;

public:
    std::list  parameters;

public:
	void parse() ;

public:
    int getNumberOfParameters();
    bool hasParameter(int number);

    std::list  getParameters(int number);
    bool isReply();
    bool isMessage();
    const std::string & getReplyCode();
    const std::string & getMessageCode();
    const std::string & getEncodedDataTable(int index) ;
    const std::string & getEncodedDataTableFromReply() ;
    const std::string & getEncodedDataTableFromOperationMessage() ;
	const std::string & getEncodedDataTableFromEventMessage() ;
    const std::string & getId();
    bool isAsync();


    IncomingAggreGateCommand(::unsigned charArray* data);
    IncomingAggreGateCommand(const std::string & str);
    IncomingAggreGateCommand(::java::io::ByteArrayOutputStream* s);

public:
    std::string getParameter(int number);
};
#endif
