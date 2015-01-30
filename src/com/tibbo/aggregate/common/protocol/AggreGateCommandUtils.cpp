//
//#include "protocol/AggreGateCommandUtils.h"
//
//
//
//AggreGateCommandUtils::AggreGateCommandUtils(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//AggreGateCommandUtils::AggreGateCommandUtils()
//    : AggreGateCommandUtils(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//const int AggreGateCommandUtils::CLIENT_PROTOCOL_VERSION;
//
//OutgoingAggreGateCommandPtr AggreGateCommandUtils::startMessage()
//{
//
//    auto cmd = new OutgoingAggreGateCommand();
//    cmd)->addParam(std::string::valueOf(AggreGateCommand::COMMAND_CODE_MESSAGE));
//    cmd)->addParam(cmd)->generateId());
//    cmd)->addParam(std::string::valueOf(AggreGateCommand::MESSAGE_CODE_START));
//    cmd)->addParam(std::string::valueOf(CLIENT_PROTOCOL_VERSION));
//    return cmd;
//}
//
//OutgoingAggreGateCommandPtr AggreGateCommandUtils::operationMessage()
//{
//
//    auto cmd = new OutgoingAggreGateCommand();
//    cmd)->addParam(std::string::valueOf(AggreGateCommand::COMMAND_CODE_MESSAGE));
//    cmd)->addParam(cmd)->generateId());
//    cmd)->addParam(std::string::valueOf(AggreGateCommand::MESSAGE_CODE_OPERATION));
//    return cmd;
//}
//
//OutgoingAggreGateCommandPtr AggreGateCommandUtils::getVariableOperation(const std::string & context, const std::string & name)
//{
//
//    auto cmd = operationMessage();
//    cmd)->addParam(std::string::valueOf(AggreGateCommand::COMMAND_OPERATION_GET_VAR));
//    cmd)->addParam(context);
//    cmd)->addParam(name);
//    return cmd;
//}
//
//OutgoingAggreGateCommandPtr AggreGateCommandUtils::setVariableOperation(const std::string & context, const std::string & name, const std::string & encodedValue)
//{
//
//    auto cmd = operationMessage();
//    cmd)->addParam(std::string::valueOf(AggreGateCommand::COMMAND_OPERATION_SET_VAR));
//    cmd)->addParam(context);
//    cmd)->addParam(name);
//    cmd)->addParam(encodedValue);
//    return cmd;
//}
//
//OutgoingAggreGateCommandPtr AggreGateCommandUtils::callFunctionOperation(const std::string & context, const std::string & name, const std::string & encodedParameters)
//{
//
//    auto cmd = operationMessage();
//    cmd)->addParam(std::string::valueOf(AggreGateCommand::COMMAND_OPERATION_CALL_FUNCTION));
//    cmd)->addParam(context);
//    cmd)->addParam(name);
//    cmd)->addParam(encodedParameters);
//    return cmd;
//}
//
//OutgoingAggreGateCommandPtr AggreGateCommandUtils::addEventListenerOperation(const std::string & context, const std::string & name, int  listenerHashCode, const std::string & filter)
//{
//
//    auto cmd = operationMessage();
//    cmd)->addParam(std::string::valueOf(AggreGateCommand::COMMAND_OPERATION_ADD_EVENT_LISTENER));
//    cmd)->addParam(context);
//    cmd)->addParam(name);
//    cmd)->addParam(listenerHashCode != 0 ? listenerHashCode)->toString() : u""_j);
//    if(filter != 0) {
//        cmd)->addParam(encoding::TransferEncodingHelper::encode(filter));
//    }
//    return cmd;
//}
//
//OutgoingAggreGateCommandPtr AggreGateCommandUtils::removeEventListenerOperation(const std::string & context, const std::string & name, int  listenerHashCode, const std::string & filter)
//{
//
//    auto cmd = operationMessage();
//    cmd)->addParam(std::string::valueOf(AggreGateCommand::COMMAND_OPERATION_REMOVE_EVENT_LISTENER));
//    cmd)->addParam(context);
//    cmd)->addParam(name);
//    cmd)->addParam(listenerHashCode != 0 ? listenerHashCode)->toString() : u""_j);
//    if(filter != 0) {
//        cmd)->addParam(encoding::TransferEncodingHelper::encode(filter));
//    }
//    return cmd;
//}
//
//
//void AggreGateCommandUtils::clinit()
//{
//    super::
//    static bool in_cl_init = false;
//struct clinit_ {
//    clinit_() {
//        in_cl_init = true;
//        CLIENT_COMMAND_SEPARATOR_ = std::string::valueOf(u'\u0017');
//    }
//};
//
//    if(!in_cl_init) {
//        static clinit_ clinit_instance;
//    }
//}
//

