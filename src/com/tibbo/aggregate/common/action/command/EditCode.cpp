#include "action/command/EditCode.h"

#include "action/ActionUtils.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"

/*
template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}
*/

EditCode::EditCode()
    : GenericActionCommand(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::command::EditCode::EditCode() 
    : EditCode(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::action::command::EditCode::EditCode(const std::string & title, const std::string & code, const std::string & mode) 
    : EditCode(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,code,mode);
}

com::tibbo::aggregate::common::action::command::EditCode::EditCode(const std::string & title, DataTable* parameters) 
    : EditCode(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,parameters);
}

std::string& com::tibbo::aggregate::common::action::command::EditCode::CF_CODE()
{
    
    return CF_CODE_;
}
std::string com::tibbo::aggregate::common::action::command::EditCode::CF_CODE_;

std::string& com::tibbo::aggregate::common::action::command::EditCode::CF_MODE()
{
    
    return CF_MODE_;
}
std::string com::tibbo::aggregate::common::action::command::EditCode::CF_MODE_;

std::string& com::tibbo::aggregate::common::action::command::EditCode::RF_RESULT()
{
    
    return RF_RESULT_;
}
std::string com::tibbo::aggregate::common::action::command::EditCode::RF_RESULT_;

std::string& com::tibbo::aggregate::common::action::command::EditCode::RF_CODE()
{
    
    return RF_CODE_;
}
std::string com::tibbo::aggregate::common::action::command::EditCode::RF_CODE_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::EditCode::CFT_EDIT_CODE()
{
    
    return CFT_EDIT_CODE_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::EditCode::CFT_EDIT_CODE_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::EditCode::RFT_EDIT_CODE()
{
    
    return RFT_EDIT_CODE_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::EditCode::RFT_EDIT_CODE_;

void com::tibbo::aggregate::common::action::command::EditCode::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_TEXT(), CFT_EDIT_CODE_, RFT_EDIT_CODE_);
}

void com::tibbo::aggregate::common::action::command::EditCode::ctor(const std::string & title, const std::string & code, const std::string & mode)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_CODE(), title);
    this->code = code;
    this->mode = mode;
}

void com::tibbo::aggregate::common::action::command::EditCode::ctor(const std::string & title, DataTable* parameters)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_CODE(), title, parameters, CFT_EDIT_CODE_);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::command::EditCode::constructParameters()
{
    return new DataTable(CFT_EDIT_CODE_, new voidArray({code), mode)}));
}

std::string com::tibbo::aggregate::common::action::command::EditCode::getCode()
{
    return code;
}

void com::tibbo::aggregate::common::action::command::EditCode::setCode(const std::string & code)
{
    this->code = code;
}

std::string com::tibbo::aggregate::common::action::command::EditCode::getMode()
{
    return mode;
}

void com::tibbo::aggregate::common::action::command::EditCode::setMode(const std::string & mode)
{
    this->mode = mode;
}



java::lang::Class* com::tibbo::aggregate::common::action::command::EditCode::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.command.EditCode", 50);
    return c;
}

void com::tibbo::aggregate::common::action::command::EditCode::clinit()
{
struct string_init_ {
    string_init_() {
    CF_CODE_ = u"code"_j;
    CF_MODE_ = u"mode"_j;
    RF_RESULT_ = u"result"_j;
    RF_CODE_ = u"code"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CFT_EDIT_CODE_ = new TableFormat(int(1), int(1));
        {
            CFT_EDIT_CODE_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_CODE_)
                ->append(u"><S>"_j)->toString());
            CFT_EDIT_CODE_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_MODE_)
                ->append(u"><S><F=N>"_j)->toString());
        }
        RFT_EDIT_CODE_ = new TableFormat(int(1), int(1));
        {
            RFT_EDIT_CODE_)->addField(std::stringBuilder().append(u"<"_j)->append(RF_RESULT_)
                ->append(u"><S>"_j)->toString());
            RFT_EDIT_CODE_)->addField(std::stringBuilder().append(u"<"_j)->append(RF_CODE_)
                ->append(u"><S><F=N>"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::command::EditCode::getClass0()
{
    return class_();
}

