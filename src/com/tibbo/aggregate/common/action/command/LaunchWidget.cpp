#include "action/command/LaunchWidget.h"

/*
#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/action/ActionUtils.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/field/StringFieldFormat.h"
#include <com/tibbo/aggregate/common/util/DashboardProperties.h"
#include <com/tibbo/aggregate/common/util/WindowLocation.h"
*/

/*
LaunchWidget::LaunchWidget(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

LaunchWidget::LaunchWidget()
    : LaunchWidget(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

LaunchWidget::LaunchWidget(std::string* title, std::string* widgetContext, std::string* defaultContext)
    : LaunchWidget(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,widgetContext,defaultContext);
}

LaunchWidget::LaunchWidget(std::string* title, std::string* widgetContext, std::string* defaultContext, std::string* template_)
    : LaunchWidget(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,widgetContext,defaultContext,template_);
}

LaunchWidget::LaunchWidget(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters)
    : LaunchWidget(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,parameters);
}

LaunchWidget::CF_DEFAULT_CONTEXT()
{  
    return CF_DEFAULT_CONTEXT_;
}
std::string LaunchWidget::CF_DEFAULT_CONTEXT_;

std::string LaunchWidget::CF_WIDGET_CONTEXT()
{    
    return CF_WIDGET_CONTEXT_;
}
std::string LaunchWidget::CF_WIDGET_CONTEXT_;

std::string LaunchWidget::CF_TEMPLATE()
{ 
    return CF_TEMPLATE_;
}
std::string LaunchWidget::CF_TEMPLATE_;

std::string LaunchWidget::CF_LOCATION()
{    
    return CF_LOCATION_;
}
std::string LaunchWidget::CF_LOCATION_;

std::string LaunchWidget::CF_DASHBOARD()
{    
    return CF_DASHBOARD_;
}
std::string LaunchWidget::CF_DASHBOARD_;

std::string LaunchWidget::CF_INPUT()
{    
    return CF_INPUT_;
}
std::string LaunchWidget::CF_INPUT_;

TableFormat* com::tibbo::aggregate::common::action::command::LaunchWidget::CFT_LAUNCH_WIDGET()
{
    
    return CFT_LAUNCH_WIDGET_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::LaunchWidget::CFT_LAUNCH_WIDGET_;

void com::tibbo::aggregate::common::action::command::LaunchWidget::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_LAUNCH_WIDGET(), CFT_LAUNCH_WIDGET_, static_cast< ::com::tibbo::aggregate::common::datatable::TableFormat* >(0));
}

void com::tibbo::aggregate::common::action::command::LaunchWidget::ctor(std::string* title, std::string* widgetContext, std::string* defaultContext)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_LAUNCH_WIDGET(), title);
    this->widgetContext = widgetContext;
    this->defaultContext = defaultContext;
}

void com::tibbo::aggregate::common::action::command::LaunchWidget::ctor(std::string* title, std::string* widgetContext, std::string* defaultContext, std::string* template_)
{
    ctor(title, widgetContext, defaultContext);
    this->template_ = template_;
}

void com::tibbo::aggregate::common::action::command::LaunchWidget::ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_LAUNCH_WIDGET(), title, parameters, CFT_LAUNCH_WIDGET_);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::command::LaunchWidget::constructParameters()
{
    return new ::com::tibbo::aggregate::common::datatable::DataTable(CFT_LAUNCH_WIDGET_, new voidArray({widgetContext), defaultContext), template_), location != 0 ? location)->toDataTable()) : 0), dashboard != 0 ? dashboard)->toDataTable()) : 0), input)}));
}

std::string com::tibbo::aggregate::common::action::command::LaunchWidget::getDefaultContext()
{
    return defaultContext;
}

void com::tibbo::aggregate::common::action::command::LaunchWidget::setDefaultContext(std::string* defaultContext)
{
    this->defaultContext = defaultContext;
}

std::string com::tibbo::aggregate::common::action::command::LaunchWidget::getWidgetContext()
{
    return widgetContext;
}

void com::tibbo::aggregate::common::action::command::LaunchWidget::setWidgetContext(std::string* widgetContext)
{
    this->widgetContext = widgetContext;
}

std::string com::tibbo::aggregate::common::action::command::LaunchWidget::getTemplate()
{
    return template_;
}

void com::tibbo::aggregate::common::action::command::LaunchWidget::setTemplate(std::string* encodedWidgetTemplate)
{
    this->template_ = encodedWidgetTemplate;
}

com::tibbo::aggregate::common::util::WindowLocation* com::tibbo::aggregate::common::action::command::LaunchWidget::getLocation()
{
    return location;
}

void com::tibbo::aggregate::common::action::command::LaunchWidget::setLocation(::com::tibbo::aggregate::common::util::WindowLocation* location)
{
    this->location = location;
}

com::tibbo::aggregate::common::util::DashboardProperties* com::tibbo::aggregate::common::action::command::LaunchWidget::getDashboard()
{
    return dashboard;
}

void com::tibbo::aggregate::common::action::command::LaunchWidget::setDashboard(::com::tibbo::aggregate::common::util::DashboardProperties* dashboard)
{
    this->dashboard = dashboard;
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::command::LaunchWidget::getInput()
{
    return input;
}

void com::tibbo::aggregate::common::action::command::LaunchWidget::setInput(::com::tibbo::aggregate::common::datatable::DataTable* input)
{
    this->input = input;
}



java::lang::Class* com::tibbo::aggregate::common::action::command::LaunchWidget::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.command.LaunchWidget", 54);
    return c;
}

void com::tibbo::aggregate::common::action::command::LaunchWidget::clinit()
{
struct string_init_ {
    string_init_() {
    CF_DEFAULT_CONTEXT_ = u"defaultContext"_j;
    CF_WIDGET_CONTEXT_ = u"widgetContext"_j;
    CF_TEMPLATE_ = u"template"_j;
    CF_LOCATION_ = u"location"_j;
    CF_DASHBOARD_ = u"dashboard"_j;
    CF_INPUT_ = u"input"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CFT_LAUNCH_WIDGET_ = new ::com::tibbo::aggregate::common::datatable::TableFormat(int(1), int(1));
        {
            CFT_LAUNCH_WIDGET_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_WIDGET_CONTEXT_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"widget"_j))
                ->append(u"><E="_j)
                ->append(::com::tibbo::aggregate::common::datatable::field::StringFieldFormat::EDITOR_CONTEXT())
                ->append(u">"_j)->toString());
            CFT_LAUNCH_WIDGET_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_DEFAULT_CONTEXT_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"conDefaultContext"_j))
                ->append(u"><E="_j)
                ->append(::com::tibbo::aggregate::common::datatable::field::StringFieldFormat::EDITOR_CONTEXT())
                ->append(u">"_j)->toString());
            CFT_LAUNCH_WIDGET_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_TEMPLATE_)
                ->append(u"><S><F=N>"_j)->toString());
            CFT_LAUNCH_WIDGET_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_LOCATION_)
                ->append(u"><T><F=N>"_j)->toString());
            CFT_LAUNCH_WIDGET_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_DASHBOARD_)
                ->append(u"><T><F=N>"_j)->toString());
            CFT_LAUNCH_WIDGET_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_INPUT_)
                ->append(u"><T><F=N>"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::command::LaunchWidget::getClass0()
{
    return class_();
}
*/
