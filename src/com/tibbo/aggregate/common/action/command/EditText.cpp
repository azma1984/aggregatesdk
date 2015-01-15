// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/EditText.java
#include <com/tibbo/aggregate/common/action/command/EditText.h"

#include <com/tibbo/aggregate/common/action/ActionUtils.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
/*
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

com::tibbo::aggregate::common::action::command::EditText::EditText(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::command::EditText::EditText() 
    : EditText(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::action::command::EditText::EditText(const std::string & title, const std::string & text, const std::string & mode) 
    : EditText(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,text,mode);
}

com::tibbo::aggregate::common::action::command::EditText::EditText(const std::string & title, DataTable* parameters) 
    : EditText(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,parameters);
}

std::string& com::tibbo::aggregate::common::action::command::EditText::CF_TEXT()
{
    
    return CF_TEXT_;
}
std::string com::tibbo::aggregate::common::action::command::EditText::CF_TEXT_;

std::string& com::tibbo::aggregate::common::action::command::EditText::CF_MODE()
{
    
    return CF_MODE_;
}
std::string com::tibbo::aggregate::common::action::command::EditText::CF_MODE_;

std::string& com::tibbo::aggregate::common::action::command::EditText::RF_RESULT()
{
    
    return RF_RESULT_;
}
std::string com::tibbo::aggregate::common::action::command::EditText::RF_RESULT_;

std::string& com::tibbo::aggregate::common::action::command::EditText::RF_TEXT()
{
    
    return RF_TEXT_;
}
std::string com::tibbo::aggregate::common::action::command::EditText::RF_TEXT_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::EditText::CFT_EDIT_TEXT()
{
    
    return CFT_EDIT_TEXT_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::EditText::CFT_EDIT_TEXT_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::EditText::RFT_EDIT_TEXT()
{
    
    return RFT_EDIT_TEXT_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::EditText::RFT_EDIT_TEXT_;

void com::tibbo::aggregate::common::action::command::EditText::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_TEXT(), CFT_EDIT_TEXT_, RFT_EDIT_TEXT_);
}

void com::tibbo::aggregate::common::action::command::EditText::ctor(const std::string & title, const std::string & text, const std::string & mode)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_TEXT(), title);
    this->text = text;
    this->mode = mode;
}

void com::tibbo::aggregate::common::action::command::EditText::ctor(const std::string & title, DataTable* parameters)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_TEXT(), title, parameters, CFT_EDIT_TEXT_);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::command::EditText::constructParameters()
{
    return new DataTable(CFT_EDIT_TEXT_, new voidArray({text), mode)}));
}

std::string com::tibbo::aggregate::common::action::command::EditText::getText()
{
    return text;
}

void com::tibbo::aggregate::common::action::command::EditText::setText(const std::string & text)
{
    this->text = text;
}

std::string com::tibbo::aggregate::common::action::command::EditText::getMode()
{
    return mode;
}

void com::tibbo::aggregate::common::action::command::EditText::setMode(const std::string & mode)
{
    this->mode = mode;
}



java::lang::Class* com::tibbo::aggregate::common::action::command::EditText::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.command.EditText", 50);
    return c;
}

void com::tibbo::aggregate::common::action::command::EditText::clinit()
{
struct string_init_ {
    string_init_() {
    CF_TEXT_ = u"text"_j;
    CF_MODE_ = u"mode"_j;
    RF_RESULT_ = u"result"_j;
    RF_TEXT_ = u"text"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CFT_EDIT_TEXT_ = new TableFormat(int(1), int(1));
        {
            CFT_EDIT_TEXT_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_TEXT_)
                ->append(u"><S>"_j)->toString());
            CFT_EDIT_TEXT_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_MODE_)
                ->append(u"><S><F=N>"_j)->toString());
        }
        RFT_EDIT_TEXT_ = new TableFormat(int(1), int(1));
        {
            RFT_EDIT_TEXT_)->addField(std::stringBuilder().append(u"<"_j)->append(RF_RESULT_)
                ->append(u"><S>"_j)->toString());
            RFT_EDIT_TEXT_)->addField(std::stringBuilder().append(u"<"_j)->append(RF_TEXT_)
                ->append(u"><S><F=N>"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::command::EditText::getClass0()
{
    return class_();
}

