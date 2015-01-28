// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AggreGateCommandParser.java
#include <com/tibbo/aggregate/common/protocol/AggreGateCommandParser.h"

#include <com/tibbo/aggregate/common/protocol/IncomingAggreGateCommand.h"
//#include <java/lang/Byte.h"

com::tibbo::aggregate::common::protocol::AggreGateCommandParser::AggreGateCommandParser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::protocol::AggreGateCommandParser::AggreGateCommandParser(::java::nio::channels::ReadableByteChannel* channel, unsigned char startChar, unsigned char endChar) 
    : AggreGateCommandParser(*static_cast< ::default_init_tag* >(0))
{
    ctor(channel,startChar,endChar);
}

void com::tibbo::aggregate::common::protocol::AggreGateCommandParser::ctor(::java::nio::channels::ReadableByteChannel* channel, unsigned char startChar, unsigned char endChar)
{
    super::ctor(channel, ::java::lang::Byte::valueOf(startChar), endChar);
}

com::tibbo::aggregate::common::protocol::IncomingAggreGateCommandPtr com::tibbo::aggregate::common::protocol::AggreGateCommandParser::createCommandFromBufferContent() /* throws(SyntaxErrorException) */
{
    return new IncomingAggreGateCommand(getData());
}



java::lang::Class* com::tibbo::aggregate::common::protocol::AggreGateCommandParser::class_()
{
    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.protocol.AggreGateCommandParser", 58);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::protocol::AggreGateCommandParser::getClass0()
{
    return class_();
}

