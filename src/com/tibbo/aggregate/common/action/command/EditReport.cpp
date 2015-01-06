// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/EditReport.java
//#include <com/tibbo/aggregate/common/action/command/EditReport.h"

//#include <com/tibbo/aggregate/common/action/ActionUtils.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
/*
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
#include <ObjectArray.h"
*/
template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::action::command::EditReport::EditReport(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::command::EditReport::EditReport() 
    : EditReport(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::action::command::EditReport::EditReport(std::string* title, std::string* template_, ::com::tibbo::aggregate::common::datatable::DataTable* data) 
    : EditReport(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,template_,data);
}

com::tibbo::aggregate::common::action::command::EditReport::EditReport(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) 
    : EditReport(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,parameters);
}

std::string& com::tibbo::aggregate::common::action::command::EditReport::CF_TEMPLATE()
{
    
    return CF_TEMPLATE_;
}
std::string com::tibbo::aggregate::common::action::command::EditReport::CF_TEMPLATE_;

std::string& com::tibbo::aggregate::common::action::command::EditReport::CF_DATA()
{
    
    return CF_DATA_;
}
std::string com::tibbo::aggregate::common::action::command::EditReport::CF_DATA_;

std::string& com::tibbo::aggregate::common::action::command::EditReport::RF_TEMPLATE()
{
    
    return RF_TEMPLATE_;
}
std::string com::tibbo::aggregate::common::action::command::EditReport::RF_TEMPLATE_;

std::string& com::tibbo::aggregate::common::action::command::EditReport::RF_RESULT()
{
    
    return RF_RESULT_;
}
std::string com::tibbo::aggregate::common::action::command::EditReport::RF_RESULT_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::EditReport::CFT_EDIT_REPORT()
{
    
    return CFT_EDIT_REPORT_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::EditReport::CFT_EDIT_REPORT_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::EditReport::RFT_EDIT_REPORT()
{
    
    return RFT_EDIT_REPORT_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::EditReport::RFT_EDIT_REPORT_;

void com::tibbo::aggregate::common::action::command::EditReport::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_REPORT(), CFT_EDIT_REPORT_, RFT_EDIT_REPORT_);
}

void com::tibbo::aggregate::common::action::command::EditReport::ctor(std::string* title, std::string* template_, ::com::tibbo::aggregate::common::datatable::DataTable* data)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_REPORT(), title);
    this->template_ = template_;
    this->data = data;
}

void com::tibbo::aggregate::common::action::command::EditReport::ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_REPORT(), title, parameters, CFT_EDIT_REPORT_);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::command::EditReport::constructParameters()
{
    return new ::com::tibbo::aggregate::common::datatable::DataTable(CFT_EDIT_REPORT_, new voidArray({template_), data)}));
}

std::string com::tibbo::aggregate::common::action::command::EditReport::getTemplate()
{
    return template_;
}

void com::tibbo::aggregate::common::action::command::EditReport::setTemplate(std::string* template_)
{
    this->template_ = template_;
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::command::EditReport::getData()
{
    return data;
}

void com::tibbo::aggregate::common::action::command::EditReport::setData(::com::tibbo::aggregate::common::datatable::DataTable* data)
{
    this->data = data;
}



java::lang::Class* com::tibbo::aggregate::common::action::command::EditReport::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.command.EditReport", 52);
    return c;
}

void com::tibbo::aggregate::common::action::command::EditReport::clinit()
{
struct string_init_ {
    string_init_() {
    CF_TEMPLATE_ = u"template"_j;
    CF_DATA_ = u"data"_j;
    RF_TEMPLATE_ = u"template"_j;
    RF_RESULT_ = u"result"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CFT_EDIT_REPORT_ = new ::com::tibbo::aggregate::common::datatable::TableFormat(int(1), int(1));
        {
            CFT_EDIT_REPORT_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_TEMPLATE_)
                ->append(u"><S>"_j)->toString());
            CFT_EDIT_REPORT_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_DATA_)
                ->append(u"><T>"_j)->toString());
        }
        RFT_EDIT_REPORT_ = new ::com::tibbo::aggregate::common::datatable::TableFormat(int(1), int(1));
        {
            RFT_EDIT_REPORT_)->addField(std::stringBuilder().append(u"<"_j)->append(RF_RESULT_)
                ->append(u"><S>"_j)->toString());
            RFT_EDIT_REPORT_)->addField(std::stringBuilder().append(u"<"_j)->append(RF_TEMPLATE_)
                ->append(u"><S><F=N>"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::command::EditReport::getClass0()
{
    return class_();
}

