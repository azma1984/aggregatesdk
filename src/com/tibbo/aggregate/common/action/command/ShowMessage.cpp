// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/ShowMessage.java
#include <com/tibbo/aggregate/common/action/command/ShowMessage.h"

#include <com/tibbo/aggregate/common/action/ActionUtils.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
/*
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
#include <ObjectArray.h"*/

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::action::command::ShowMessage::ShowMessage(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::command::ShowMessage::ShowMessage() 
    : ShowMessage(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::action::command::ShowMessage::ShowMessage(std::string* title, std::string* message, int level) 
    : ShowMessage(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,message,level);
}

com::tibbo::aggregate::common::action::command::ShowMessage::ShowMessage(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) 
    : ShowMessage(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,parameters);
}

std::string& com::tibbo::aggregate::common::action::command::ShowMessage::CF_MESSAGE()
{
    
    return CF_MESSAGE_;
}
std::string com::tibbo::aggregate::common::action::command::ShowMessage::CF_MESSAGE_;

std::string& com::tibbo::aggregate::common::action::command::ShowMessage::CF_LEVEL()
{
    
    return CF_LEVEL_;
}
std::string com::tibbo::aggregate::common::action::command::ShowMessage::CF_LEVEL_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::ShowMessage::CFT_SHOW_MESSAGE()
{
    
    return CFT_SHOW_MESSAGE_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::ShowMessage::CFT_SHOW_MESSAGE_;

void com::tibbo::aggregate::common::action::command::ShowMessage::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_MESSAGE(), CFT_SHOW_MESSAGE_, static_cast< ::com::tibbo::aggregate::common::datatable::TableFormat* >(0));
}

void com::tibbo::aggregate::common::action::command::ShowMessage::ctor(std::string* title, std::string* message, int level)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_MESSAGE(), title);
    this->message = message;
    this->level = level;
}

void com::tibbo::aggregate::common::action::command::ShowMessage::ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_MESSAGE(), title, parameters, CFT_SHOW_MESSAGE_);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::command::ShowMessage::constructParameters()
{
    return new ::com::tibbo::aggregate::common::datatable::DataTable(CFT_SHOW_MESSAGE_, new voidArray({message), level))}));
}

std::string com::tibbo::aggregate::common::action::command::ShowMessage::getMessage()
{
    return message;
}

int com::tibbo::aggregate::common::action::command::ShowMessage::getLevel()
{
    return level;
}

void com::tibbo::aggregate::common::action::command::ShowMessage::setMessage(std::string* message)
{
    this->message = message;
}

void com::tibbo::aggregate::common::action::command::ShowMessage::setLevel(int level)
{
    this->level = level;
}



java::lang::Class* com::tibbo::aggregate::common::action::command::ShowMessage::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.command.ShowMessage", 53);
    return c;
}

void com::tibbo::aggregate::common::action::command::ShowMessage::clinit()
{
struct string_init_ {
    string_init_() {
    CF_MESSAGE_ = u"message"_j;
    CF_LEVEL_ = u"level"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CFT_SHOW_MESSAGE_ = new ::com::tibbo::aggregate::common::datatable::TableFormat(int(1), int(1));
        {
            CFT_SHOW_MESSAGE_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_MESSAGE_)
                ->append(u"><S>"_j)->toString());
            CFT_SHOW_MESSAGE_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_LEVEL_)
                ->append(u"><I>"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::command::ShowMessage::getClass0()
{
    return class_();
}

