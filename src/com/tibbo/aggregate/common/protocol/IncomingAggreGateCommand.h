// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/IncomingAggreGateCommand.java

#ifndef IncomingAggreGateCommandH
#define IncomingAggreGateCommandH

#include "AggreGateCommand.h"
#include "string"

class IncomingAggreGateCommand : public AggreGateCommand
{

/*
private:
	static const std::string EMPTY_ID_;

public:
    std::list  parameters;
protected:
    void ctor(::int8_tArray* data) ;
    void ctor(const std::string & str) ;
    void ctor(::java::io::ByteArrayOutputStream* s) ;

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

    // Generated
    IncomingAggreGateCommand(::int8_tArray* data);
    IncomingAggreGateCommand(const std::string & str);
    IncomingAggreGateCommand(::java::io::ByteArrayOutputStream* s);
protected:
    IncomingAggreGateCommand(const ::default_init_tag&);
*/

public:
    std::string getParameter(int number);
};
#endif
