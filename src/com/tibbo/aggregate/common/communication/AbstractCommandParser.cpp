// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/communication/AbstractCommandParser.java
#include <com/tibbo/aggregate/common/communication/AbstractCommandParser.h"

#include <com/tibbo/aggregate/common/communication/CommandParserListener.h"
/*
//#include <java/io/ByteArrayOutputStream.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
#include <Array.h"
*/
template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::communication::AbstractCommandParser::AbstractCommandParser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::communication::AbstractCommandParser::AbstractCommandParser() 
    : AbstractCommandParser(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::communication::AbstractCommandParser::init()
{
    data = new ::java::io::ByteArrayOutputStream();
}

void com::tibbo::aggregate::common::communication::AbstractCommandParser::ctor()
{
    super::ctor();
    init();
}

void com::tibbo::aggregate::common::communication::AbstractCommandParser::reset()
{
    data)->reset();
}

int8_tArray* com::tibbo::aggregate::common::communication::AbstractCommandParser::getData()
{
    return data)->toByteArray_();
}

void com::tibbo::aggregate::common::communication::AbstractCommandParser::addData(int dataByte)
{
    data)->write(dataByte);
}

void com::tibbo::aggregate::common::communication::AbstractCommandParser::setListener(CommandParserListener* listener)
{
    this->listener = listener;
}

com::tibbo::aggregate::common::communication::CommandParserListener* com::tibbo::aggregate::common::communication::AbstractCommandParser::getListener()
{
    return listener;
}

std::string com::tibbo::aggregate::common::communication::AbstractCommandParser::toString()
{
    return data)->toString();
}



java::lang::Class* com::tibbo::aggregate::common::communication::AbstractCommandParser::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.communication.AbstractCommandParser", 62);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::communication::AbstractCommandParser::getClass0()
{
    return class_();
}

