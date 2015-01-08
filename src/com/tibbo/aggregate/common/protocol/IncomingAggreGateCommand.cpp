// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/IncomingAggreGateCommand.java
#include "IncomingAggreGateCommand.h"

/*
#include <com/tibbo/aggregate/common/protocol/AggreGateCommand.h"
#include <com/tibbo/aggregate/common/util/StringUtils.h"
#include <com/tibbo/aggregate/common/util/SyntaxErrorException.h"



IncomingAggreGateCommand::IncomingAggreGateCommand(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

IncomingAggreGateCommand::IncomingAggreGateCommand(::int8_tArray* data)
    : IncomingAggreGateCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor(data);
}

IncomingAggreGateCommand::IncomingAggreGateCommand(std::string* str)
    : IncomingAggreGateCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor(str);
}

IncomingAggreGateCommand::IncomingAggreGateCommand(::java::io::ByteArrayOutputStream* s)
    : IncomingAggreGateCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor(s);
}

void IncomingAggreGateCommand::init()
{
    parameters;
}

std::string& IncomingAggreGateCommand::EMPTY_ID()
{
    
    return EMPTY_ID_;
}
std::string IncomingAggreGateCommand::EMPTY_ID_;

void IncomingAggreGateCommand::ctor(::int8_tArray* data)
{
    super::ctor();
    init();
    write(data, int(0), data)->length);
    parse();
}

void IncomingAggreGateCommand::ctor(std::string* str)
{
    super::ctor();
    init();
    write(str)->getBytes(), int(0), str)->getBytes())->length);
    parse();
}

void IncomingAggreGateCommand::ctor(::java::io::ByteArrayOutputStream* s)
{
    super::ctor();
    init();
    write(s)->toByteArray_(), int(0), s)->size());
    parse();
}

void IncomingAggreGateCommand::parse()
{
    if(getContent())->length() == 0) {
        throw new ::com::tibbo::aggregate::common::util::SyntaxErrorException(u"Zero length command received"_j);
    }
    parameters = ::com::tibbo::aggregate::common::util::StringUtils::split(getContent(), AggreGateCommand::CLIENT_COMMAND_SEPARATOR())->charAt(int(0)));
}

int IncomingAggreGateCommand::getNumberOfParameters()
{
    return parameters != 0 ? parameters)->size() : int(0);
}

bool IncomingAggreGateCommand::hasParameter(int number)
{
    return number < getNumberOfParameters();
}
*/
std::string IncomingAggreGateCommand::getParameter(int number)
{
   // if(number > getNumberOfParameters()) 
 //   {
   /* 
      std::cout <<"Trying to access parameter #"_j)->append(number)
            ->append(u" of command that has only "_j)
            ->append(getNumberOfParameters())
            ->append(u" parameters"_j)->toString());
    */
      
   // } 
   // else 
   // {
    //    return parameters->get(number);
   // }
   std::string str = " ";
   return str;
}
/*
java::util::List* IncomingAggreGateCommand::getParameters(int number)
{
    if(number != getNumberOfParameters()) {
        std::cout <<"Error getting command parameters: command has "_j)->append(getNumberOfParameters())
            ->append(u" parameters, should have "_j)
            ->append(number)->toString());
    }
    return parameters;
}

bool IncomingAggreGateCommand::isReply()
{
    if(getParameter(0))->length() > 1) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Invalid command type: "_j)->append(getParameter(0))->toString());
    }
    return (getParameter(0))->charAt(int(0)) == AggreGateCommand::COMMAND_CODE_REPLY);
}

bool IncomingAggreGateCommand::isMessage()
{
    if(getParameter(0))->length() > 1) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(u"Invalid command type: "_j)->append(getParameter(0))->toString());
    }
    return (getParameter(0))->charAt(int(0)) == AggreGateCommand::COMMAND_CODE_MESSAGE);
}

std::string IncomingAggreGateCommand::getReplyCode()
{
    if(!isReply()) {
        throw new ::java::lang::UnsupportedOperationException(u"Command is not a reply"_j);
    }
    return getParameter(AggreGateCommand::INDEX_REPLY_CODE);
}

std::string IncomingAggreGateCommand::getMessageCode()
{
    if(!isMessage()) {
        throw new ::java::lang::UnsupportedOperationException(u"Command is not a message"_j);
    }
    return getParameter(AggreGateCommand::INDEX_MESSAGE_CODE);
}

std::string IncomingAggreGateCommand::getEncodedDataTable(int index)
{
    return getParameter(index);
}

std::string IncomingAggreGateCommand::getEncodedDataTableFromReply()
{
    if(!isReply()) {
        throw new ::java::lang::UnsupportedOperationException(u"Command is not reply"_j);
    }
    return getEncodedDataTable(AggreGateCommand::INDEX_DATA_TABLE_IN_REPLY);
}

std::string IncomingAggreGateCommand::getEncodedDataTableFromOperationMessage()
{
    if(!isMessage()) {
        throw new ::java::lang::UnsupportedOperationException(u"Command is not message"_j);
    }
    return getEncodedDataTable(AggreGateCommand::INDEX_OPERATION_MESSAGE_DATA_TABLE);
}

std::string IncomingAggreGateCommand::getEncodedDataTableFromEventMessage()
{
    if(!isMessage()) {
        throw new ::java::lang::UnsupportedOperationException(u"Command is not message"_j);
    }
    return getEncodedDataTable(AggreGateCommand::INDEX_EVENT_DATA_TABLE);
}

std::string IncomingAggreGateCommand::getId()
{
    return getNumberOfParameters() > AggreGateCommand::INDEX_ID ? getParameter(AggreGateCommand::INDEX_ID) : EMPTY_ID_;
}

bool IncomingAggreGateCommand::isAsync()
{
    return isMessage();
}



java::lang::Class* IncomingAggreGateCommand::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.protocol.IncomingAggreGateCommand", 60);
    return c;
}

void IncomingAggreGateCommand::clinit()
{
struct string_init_ {
    string_init_() {
    EMPTY_ID_ = u""_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

java::lang::Class* IncomingAggreGateCommand::getClass0()
{
    return class_();
}
	*/
