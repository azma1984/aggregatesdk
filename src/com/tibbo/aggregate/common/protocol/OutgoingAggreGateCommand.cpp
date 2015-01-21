// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/OutgoingAggreGateCommand.java
#include "OutgoingAggreGateCommand.h"

/*
#include <com/tibbo/aggregate/common/datatable/DataTableUtils.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommand.h"
#include <com/tibbo/aggregate/common/util/StringUtils.h"


com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommand::OutgoingAggreGateCommand(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommand::OutgoingAggreGateCommand() 
    : OutgoingAggreGateCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommand::ctor()
{
    super::ctor();
}

std::string com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommand::header()
{
    return ::java::lang::Character::toString(static_cast< char16_t >(AggreGateCommand::START_CHAR));
}

std::string com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommand::footer()
{
    return ::java::lang::Character::toString(static_cast< char16_t >(AggreGateCommand::END_CHAR));
}

com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommand* com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommand::addParam(const std::string & param)
{
    if(paramCount != 0) {
        write(AggreGateCommand::CLIENT_COMMAND_SEPARATOR())->getBytes(), int(0), AggreGateCommand::CLIENT_COMMAND_SEPARATOR())->getBytes())->length);
    }
    if(paramCount == AggreGateCommand::INDEX_ID) {
        this->id = param;
    }
    write(param)->getBytes(::com::tibbo::aggregate::common::util::StringUtils::UTF8_CHARSET()), int(0), param)->getBytes(::com::tibbo::aggregate::common::util::StringUtils::UTF8_CHARSET()))->length);
    paramCount++;
    return this;
}

std::string com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommand::getId()
{
    return id;
}

void com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommand::constructReply(const std::string & id, const std::string & code)
{
    if(paramCount > 0) {
        throw new ::java::lang::IllegalStateException(u"Can't construct reply - parameters already added to command"_j);
    }
    addParam(std::string::valueOf(AggreGateCommand::COMMAND_CODE_REPLY));
    addParam(id);
    addParam(code);
}

void com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommand::constructReply(const std::string & id, const std::string & code, const std::string & message)
{
    constructReply(id, code);
    addParam(DataTableUtils::transferEncode(message));
}

void com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommand::constructReply(const std::string & id, const std::string & code, const std::string & message, const std::string & details)
{
    constructReply(id, code, message);
    addParam(DataTableUtils::transferEncode(details));
}

void com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommand::constructEvent(const std::string & context, const std::string & name, int level, const std::string & encodedDataTable, long  eventId, Date* creationtime, int  listener)
{
    this->id = new std::string();
    addParam(std::string::valueOf(AggreGateCommand::COMMAND_CODE_MESSAGE));
    addParam(this->id);
    addParam(std::string::valueOf(AggreGateCommand::MESSAGE_CODE_EVENT));
    addParam(context);
    addParam(name);
    addParam(std::string::valueOf(level));
    addParam(eventId != 0 ? eventId)->toString() : u""_j);
    addParam(listener != 0 ? listener)->toString() : u""_j);
    addParam(encodedDataTable);
    addParam(creationtime != 0 ? std::string::valueOf(creationtime)->getTime()) : u""_j);
}



java::lang::Class* com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommand::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.protocol.OutgoingAggreGateCommand", 60);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommand::getClass0()
{
    return class_();
}
	   */
