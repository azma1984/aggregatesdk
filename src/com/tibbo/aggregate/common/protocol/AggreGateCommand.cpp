// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AggreGateCommand.java
#include "AggreGateCommand.h"



/*

AggreGateCommand::AggreGateCommand(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

AggreGateCommand::AggreGateCommand()
    : AggreGateCommand(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

const int8_t AggreGateCommand::START_CHAR;

const int8_t AggreGateCommand::END_CHAR;

const char16_t AggreGateCommand::COMMAND_CODE_MESSAGE;

const char16_t AggreGateCommand::COMMAND_CODE_REPLY;

const char16_t AggreGateCommand::MESSAGE_CODE_START;

const char16_t AggreGateCommand::MESSAGE_CODE_OPERATION;

const char16_t AggreGateCommand::MESSAGE_CODE_EVENT;

std::string& AggreGateCommand::REPLY_CODE_OK()
{
    
    return REPLY_CODE_OK_;
}
std::string AggreGateCommand::REPLY_CODE_OK_;

std::string& AggreGateCommand::REPLY_CODE_DENIED()
{
    
    return REPLY_CODE_DENIED_;
}
std::string AggreGateCommand::REPLY_CODE_DENIED_;

std::string& AggreGateCommand::REPLY_CODE_ERROR()
{
    
    return REPLY_CODE_ERROR_;
}
std::string AggreGateCommand::REPLY_CODE_ERROR_;

const char16_t AggreGateCommand::COMMAND_OPERATION_GET_VAR;

const char16_t AggreGateCommand::COMMAND_OPERATION_SET_VAR;

const char16_t AggreGateCommand::COMMAND_OPERATION_CALL_FUNCTION;

const char16_t AggreGateCommand::COMMAND_OPERATION_ADD_EVENT_LISTENER;

const char16_t AggreGateCommand::COMMAND_OPERATION_REMOVE_EVENT_LISTENER;

const int AggreGateCommand::INDEX_COMMAND_CODE;

const int AggreGateCommand::INDEX_ID;

const int AggreGateCommand::INDEX_MESSAGE_CODE;

const int AggreGateCommand::INDEX_PROTOCOL_VERSION;

const int AggreGateCommand::INDEX_OPERATION_CODE;

const int AggreGateCommand::INDEX_OPERATION_CONTEXT;

const int AggreGateCommand::INDEX_OPERATION_TARGET;

const int AggreGateCommand::INDEX_OPERATION_MESSAGE_DATA_TABLE;

const int AggreGateCommand::INDEX_OPERATION_LISTENER_CODE;

const int AggreGateCommand::INDEX_OPERATION_FILTER;

const int AggreGateCommand::INDEX_EVENT_CONTEXT;

const int AggreGateCommand::INDEX_EVENT_NAME;

const int AggreGateCommand::INDEX_EVENT_LEVEL;

const int AggreGateCommand::INDEX_EVENT_ID;

const int AggreGateCommand::INDEX_EVENT_LISTENER;

const int AggreGateCommand::INDEX_EVENT_DATA_TABLE;

const int AggreGateCommand::INDEX_EVENT_TIMESTAMP;

const int AggreGateCommand::INDEX_REPLY_CODE;

const int AggreGateCommand::INDEX_REPLY_MESSAGE;

const int AggreGateCommand::INDEX_REPLY_DETAILS;

const int AggreGateCommand::INDEX_DATA_TABLE_IN_REPLY;

std::string& AggreGateCommand::CLIENT_COMMAND_SEPARATOR()
{
    
    return CLIENT_COMMAND_SEPARATOR_;
}
std::string AggreGateCommand::CLIENT_COMMAND_SEPARATOR_;

int& AggreGateCommand::GENERATED_ID()
{
    
    return GENERATED_ID_;
}
int AggreGateCommand::GENERATED_ID_;

const int AggreGateCommand::MAX_PRINTED_LENGTH;

std::string AggreGateCommand::toString()
{
    auto s = super::toString();
    auto len = s)->length();
    s = s)->substring(0, ::java::lang::Math::min(MAX_PRINTED_LENGTH, s)->length()));
    if(s)->length() >= MAX_PRINTED_LENGTH) {
        s = std::stringBuilder(s).append(std::stringBuilder().append(u"... ("_j)->append(len)
            ->append(u")"_j)->toString())->toString();
    }
    s = s)->replaceAll(std::string::valueOf(AggreGateCommand::CLIENT_COMMAND_SEPARATOR_)), u"/"_j);
    s = s)->replaceAll(std::string::valueOf(::com::tibbo::aggregate::common::datatable::DataTableUtils::ELEMENT_START), std::string::valueOf(::com::tibbo::aggregate::common::datatable::DataTableUtils::ELEMENT_VISIBLE_START));
    s = s)->replaceAll(std::string::valueOf(::com::tibbo::aggregate::common::datatable::DataTableUtils::ELEMENT_END), std::string::valueOf(::com::tibbo::aggregate::common::datatable::DataTableUtils::ELEMENT_VISIBLE_END));
    s = s)->replaceAll(std::string::valueOf(::com::tibbo::aggregate::common::datatable::DataTableUtils::ELEMENT_NAME_VALUE_SEPARATOR), std::string::valueOf(::com::tibbo::aggregate::common::datatable::DataTableUtils::ELEMENT_VISIBLE_NAME_VALUE_SEPARATOR));
    s = s)->replaceAll(std::string::valueOf(::com::tibbo::aggregate::common::datatable::DataTableUtils::DATA_TABLE_NULL())), ::com::tibbo::aggregate::common::datatable::DataTableUtils::DATA_TABLE_VISIBLE_NULL());
    return s;
}

std::string AggreGateCommand::generateId()
{
    
    return std::string::valueOf(++GENERATED_ID_);
}



java::lang::Class* AggreGateCommand::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.protocol.AggreGateCommand", 52);
    return c;
}

void AggreGateCommand::clinit()
{
struct string_init_ {
    string_init_() {
    REPLY_CODE_OK_ = u"A"_j;
    REPLY_CODE_DENIED_ = u"D"_j;
    REPLY_CODE_ERROR_ = u"E"_j;
    }
};

    static string_init_ string_init_instance;

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

std::string AggreGateCommand::toString(std::string* arg0)
{
    return super::toString(arg0);
}

std::string AggreGateCommand::toString(int arg0)
{
    return super::toString(arg0);
}
*/

