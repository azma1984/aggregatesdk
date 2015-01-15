// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/EditWidget.java
#include <com/tibbo/aggregate/common/action/command/EditWidget.h"

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

com::tibbo::aggregate::common::action::command::EditWidget::EditWidget(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::command::EditWidget::EditWidget() 
    : EditWidget(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::action::command::EditWidget::EditWidget(const std::string & title, const std::string & defaultContext, const std::string & widgetContext, const std::string & widget) 
    : EditWidget(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,defaultContext,widgetContext,widget);
}

com::tibbo::aggregate::common::action::command::EditWidget::EditWidget(const std::string & title, DataTable* parameters) 
    : EditWidget(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,parameters);
}

std::string& com::tibbo::aggregate::common::action::command::EditWidget::CF_DEFAULT_CONTEXT()
{
    
    return CF_DEFAULT_CONTEXT_;
}
std::string com::tibbo::aggregate::common::action::command::EditWidget::CF_DEFAULT_CONTEXT_;

std::string& com::tibbo::aggregate::common::action::command::EditWidget::CF_WIDGET_CONTEXT()
{
    
    return CF_WIDGET_CONTEXT_;
}
std::string com::tibbo::aggregate::common::action::command::EditWidget::CF_WIDGET_CONTEXT_;

std::string& com::tibbo::aggregate::common::action::command::EditWidget::CF_WIDGET()
{
    
    return CF_WIDGET_;
}
std::string com::tibbo::aggregate::common::action::command::EditWidget::CF_WIDGET_;

std::string& com::tibbo::aggregate::common::action::command::EditWidget::RF_WIDGET()
{
    
    return RF_WIDGET_;
}
std::string com::tibbo::aggregate::common::action::command::EditWidget::RF_WIDGET_;

std::string& com::tibbo::aggregate::common::action::command::EditWidget::RF_RESULT()
{
    
    return RF_RESULT_;
}
std::string com::tibbo::aggregate::common::action::command::EditWidget::RF_RESULT_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::EditWidget::CFT_EDIT_WIDGET()
{
    
    return CFT_EDIT_WIDGET_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::EditWidget::CFT_EDIT_WIDGET_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::EditWidget::RFT_EDIT_WIDGET()
{
    
    return RFT_EDIT_WIDGET_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::EditWidget::RFT_EDIT_WIDGET_;

void com::tibbo::aggregate::common::action::command::EditWidget::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_WIDGET(), CFT_EDIT_WIDGET_, RFT_EDIT_WIDGET_);
}

void com::tibbo::aggregate::common::action::command::EditWidget::ctor(const std::string & title, const std::string & defaultContext, const std::string & widgetContext, const std::string & widget)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_WIDGET(), title);
    this->defaultContext = defaultContext;
    this->widgetContext = widgetContext;
    this->widget = widget;
}

void com::tibbo::aggregate::common::action::command::EditWidget::ctor(const std::string & title, DataTable* parameters)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_WIDGET(), title, parameters, CFT_EDIT_WIDGET_);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::command::EditWidget::constructParameters()
{
    return new DataTable(CFT_EDIT_WIDGET_, new voidArray({defaultContext), widgetContext), widget)}));
}

std::string com::tibbo::aggregate::common::action::command::EditWidget::getDefaultContext()
{
    return defaultContext;
}

void com::tibbo::aggregate::common::action::command::EditWidget::setDefaultContext(const std::string & defaultContext)
{
    this->defaultContext = defaultContext;
}

std::string com::tibbo::aggregate::common::action::command::EditWidget::getWidgetContext()
{
    return widgetContext;
}

void com::tibbo::aggregate::common::action::command::EditWidget::setWidgetContext(const std::string & widgetContext)
{
    this->widgetContext = widgetContext;
}

std::string com::tibbo::aggregate::common::action::command::EditWidget::getWidget()
{
    return widget;
}

void com::tibbo::aggregate::common::action::command::EditWidget::setWidget(const std::string & widget)
{
    this->widget = widget;
}



java::lang::Class* com::tibbo::aggregate::common::action::command::EditWidget::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.command.EditWidget", 52);
    return c;
}

void com::tibbo::aggregate::common::action::command::EditWidget::clinit()
{
struct string_init_ {
    string_init_() {
    CF_DEFAULT_CONTEXT_ = u"defaultContext"_j;
    CF_WIDGET_CONTEXT_ = u"widgetContext"_j;
    CF_WIDGET_ = u"widget"_j;
    RF_WIDGET_ = u"widget"_j;
    RF_RESULT_ = u"result"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CFT_EDIT_WIDGET_ = new TableFormat(int(1), int(1));
        {
            CFT_EDIT_WIDGET_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_DEFAULT_CONTEXT_)
                ->append(u"><S><F=N>"_j)->toString());
            CFT_EDIT_WIDGET_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_WIDGET_CONTEXT_)
                ->append(u"><S>"_j)->toString());
            CFT_EDIT_WIDGET_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_WIDGET_)
                ->append(u"><S><F=N>"_j)->toString());
        }
        RFT_EDIT_WIDGET_ = new TableFormat(int(1), int(1));
        {
            RFT_EDIT_WIDGET_)->addField(std::stringBuilder().append(u"<"_j)->append(RF_RESULT_)
                ->append(u"><S>"_j)->toString());
            RFT_EDIT_WIDGET_)->addField(std::stringBuilder().append(u"<"_j)->append(RF_WIDGET_)
                ->append(u"><S><F=N>"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::command::EditWidget::getClass0()
{
    return class_();
}

