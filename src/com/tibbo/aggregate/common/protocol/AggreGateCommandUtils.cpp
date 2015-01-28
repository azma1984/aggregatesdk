// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AggreGateCommandUtils.java
#include <com/tibbo/aggregate/common/protocol/AggreGateCommandUtils.h"

#include <com/tibbo/aggregate/common/datatable/encoding/TransferEncodingHelper.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommand.h"
#include <com/tibbo/aggregate/common/protocol/OutgoingAggreGateCommand.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::AggreGateCommandUtils(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::AggreGateCommandUtils()
    : AggreGateCommandUtils(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

const int com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::CLIENT_PROTOCOL_VERSION;

com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommandPtr com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::startMessage()
{
    
    auto cmd = new OutgoingAggreGateCommand();
    cmd)->addParam(std::string::valueOf(AggreGateCommand::COMMAND_CODE_MESSAGE));
    cmd)->addParam(cmd)->generateId());
    cmd)->addParam(std::string::valueOf(AggreGateCommand::MESSAGE_CODE_START));
    cmd)->addParam(std::string::valueOf(CLIENT_PROTOCOL_VERSION));
    return cmd;
}

com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommandPtr com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::operationMessage()
{
    
    auto cmd = new OutgoingAggreGateCommand();
    cmd)->addParam(std::string::valueOf(AggreGateCommand::COMMAND_CODE_MESSAGE));
    cmd)->addParam(cmd)->generateId());
    cmd)->addParam(std::string::valueOf(AggreGateCommand::MESSAGE_CODE_OPERATION));
    return cmd;
}

com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommandPtr com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::getVariableOperation(const std::string & context, const std::string & name)
{
    
    auto cmd = operationMessage();
    cmd)->addParam(std::string::valueOf(AggreGateCommand::COMMAND_OPERATION_GET_VAR));
    cmd)->addParam(context);
    cmd)->addParam(name);
    return cmd;
}

com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommandPtr com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::setVariableOperation(const std::string & context, const std::string & name, const std::string & encodedValue)
{
    
    auto cmd = operationMessage();
    cmd)->addParam(std::string::valueOf(AggreGateCommand::COMMAND_OPERATION_SET_VAR));
    cmd)->addParam(context);
    cmd)->addParam(name);
    cmd)->addParam(encodedValue);
    return cmd;
}

com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommandPtr com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::callFunctionOperation(const std::string & context, const std::string & name, const std::string & encodedParameters)
{
    
    auto cmd = operationMessage();
    cmd)->addParam(std::string::valueOf(AggreGateCommand::COMMAND_OPERATION_CALL_FUNCTION));
    cmd)->addParam(context);
    cmd)->addParam(name);
    cmd)->addParam(encodedParameters);
    return cmd;
}

com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommandPtr com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::addEventListenerOperation(const std::string & context, const std::string & name, int  listenerHashCode, const std::string & filter)
{
    
    auto cmd = operationMessage();
    cmd)->addParam(std::string::valueOf(AggreGateCommand::COMMAND_OPERATION_ADD_EVENT_LISTENER));
    cmd)->addParam(context);
    cmd)->addParam(name);
    cmd)->addParam(listenerHashCode != 0 ? listenerHashCode)->toString() : u""_j);
    if(filter != 0) {
        cmd)->addParam(encoding::TransferEncodingHelper::encode(filter));
    }
    return cmd;
}

com::tibbo::aggregate::common::protocol::OutgoingAggreGateCommandPtr com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::removeEventListenerOperation(const std::string & context, const std::string & name, int  listenerHashCode, const std::string & filter)
{
    
    auto cmd = operationMessage();
    cmd)->addParam(std::string::valueOf(AggreGateCommand::COMMAND_OPERATION_REMOVE_EVENT_LISTENER));
    cmd)->addParam(context);
    cmd)->addParam(name);
    cmd)->addParam(listenerHashCode != 0 ? listenerHashCode)->toString() : u""_j);
    if(filter != 0) {
        cmd)->addParam(encoding::TransferEncodingHelper::encode(filter));
    }
    return cmd;
}

std::string& com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::CLIENT_COMMAND_SEPARATOR()
{
    
    return CLIENT_COMMAND_SEPARATOR_;
}
std::string com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::CLIENT_COMMAND_SEPARATOR_;



java::lang::Class* com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::class_()
{
    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.protocol.AggreGateCommandUtils", 57);
    return c;
}

void com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::clinit()
{
    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CLIENT_COMMAND_SEPARATOR_ = std::string::valueOf(u'\u0017');
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::protocol::AggreGateCommandUtils::getClass0()
{
    return class_();
}

