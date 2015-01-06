// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/ShowGuide.java
//#include <com/tibbo/aggregate/common/action/command/ShowGuide.h"

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

com::tibbo::aggregate::common::action::command::ShowGuide::ShowGuide(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::command::ShowGuide::ShowGuide() 
    : ShowGuide(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::action::command::ShowGuide::ShowGuide(std::string* title, std::string* invokerContext, std::string* macroName) 
    : ShowGuide(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,invokerContext,macroName);
}

com::tibbo::aggregate::common::action::command::ShowGuide::ShowGuide(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) 
    : ShowGuide(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,parameters);
}

std::string& com::tibbo::aggregate::common::action::command::ShowGuide::CF_INVOKER_CONTEXT()
{
    
    return CF_INVOKER_CONTEXT_;
}
std::string com::tibbo::aggregate::common::action::command::ShowGuide::CF_INVOKER_CONTEXT_;

std::string& com::tibbo::aggregate::common::action::command::ShowGuide::CF_MACRO_NAME()
{
    
    return CF_MACRO_NAME_;
}
std::string com::tibbo::aggregate::common::action::command::ShowGuide::CF_MACRO_NAME_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::ShowGuide::CFT_SHOW_GUIDE()
{
    
    return CFT_SHOW_GUIDE_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::ShowGuide::CFT_SHOW_GUIDE_;

void com::tibbo::aggregate::common::action::command::ShowGuide::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_GUIDE(), CFT_SHOW_GUIDE_, static_cast< ::com::tibbo::aggregate::common::datatable::TableFormat* >(0));
}

void com::tibbo::aggregate::common::action::command::ShowGuide::ctor(std::string* title, std::string* invokerContext, std::string* macroName)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_GUIDE(), title);
    this->invokerContext = invokerContext;
    this->macroName = macroName;
}

void com::tibbo::aggregate::common::action::command::ShowGuide::ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_GUIDE(), title, parameters, CFT_SHOW_GUIDE_);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::command::ShowGuide::constructParameters()
{
    return new ::com::tibbo::aggregate::common::datatable::DataTable(CFT_SHOW_GUIDE_, new voidArray({invokerContext), macroName)}));
}

std::string com::tibbo::aggregate::common::action::command::ShowGuide::getInvokerContext()
{
    return invokerContext;
}

void com::tibbo::aggregate::common::action::command::ShowGuide::setInvokerContext(std::string* invokerContext)
{
    this->invokerContext = invokerContext;
}

std::string com::tibbo::aggregate::common::action::command::ShowGuide::getMacroName()
{
    return macroName;
}

void com::tibbo::aggregate::common::action::command::ShowGuide::setMacroName(std::string* macroName)
{
    this->macroName = macroName;
}



java::lang::Class* com::tibbo::aggregate::common::action::command::ShowGuide::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.command.ShowGuide", 51);
    return c;
}

void com::tibbo::aggregate::common::action::command::ShowGuide::clinit()
{
struct string_init_ {
    string_init_() {
    CF_INVOKER_CONTEXT_ = u"invokerContext"_j;
    CF_MACRO_NAME_ = u"macroName"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CFT_SHOW_GUIDE_ = new ::com::tibbo::aggregate::common::datatable::TableFormat(int(1), int(1));
        {
            CFT_SHOW_GUIDE_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_INVOKER_CONTEXT_)
                ->append(u"><S><F=N>"_j)->toString());
            CFT_SHOW_GUIDE_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_MACRO_NAME_)
                ->append(u"><S><F=N>"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::command::ShowGuide::getClass0()
{
    return class_();
}

