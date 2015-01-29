#include "action/command/LaunchWidget.h"

/*
#include "Cres.h"
#include "action/ActionUtils.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "datatable/field/StringFieldFormat.h"
#include "util/DashboardProperties.h"
#include "util/WindowLocation.h"
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

LaunchWidget::LaunchWidget(const std::string & title, const std::string & widgetContext, const std::string & defaultContext)
    : LaunchWidget(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,widgetContext,defaultContext);
}

LaunchWidget::LaunchWidget(const std::string & title, const std::string & widgetContext, const std::string & defaultContext, const std::string & template_)
    : LaunchWidget(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,widgetContext,defaultContext,template_);
}

LaunchWidget::LaunchWidget(const std::string & title, DataTablePtr parameters)
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

TableFormatPtr LaunchWidget::CFT_LAUNCH_WIDGET()
{
    
    return CFT_LAUNCH_WIDGET_;
}
DateTableFormatPtr LaunchWidget::CFT_LAUNCH_WIDGET_;

void LaunchWidget::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_LAUNCH_WIDGET(), CFT_LAUNCH_WIDGET_, static_cast< TableFormatPtr >(0));
}

void LaunchWidget::ctor(const std::string & title, const std::string & widgetContext, const std::string & defaultContext)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_LAUNCH_WIDGET(), title);
    this->widgetContext = widgetContext;
    this->defaultContext = defaultContext;
}

void LaunchWidget::ctor(const std::string & title, const std::string & widgetContext, const std::string & defaultContext, const std::string & template_)
{
    ctor(title, widgetContext, defaultContext);
    this->template_ = template_;
}

void LaunchWidget::ctor(const std::string & title, DataTablePtr parameters)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_LAUNCH_WIDGET(), title, parameters, CFT_LAUNCH_WIDGET_);
}

DateDataTablePtr LaunchWidget::constructParameters()
{
    return new DataTable(CFT_LAUNCH_WIDGET_, new voidArray({widgetContext), defaultContext), template_), location != 0 ? location)->toDataTable()) : 0), dashboard != 0 ? dashboard)->toDataTable()) : 0), input)}));
}

std::string LaunchWidget::getDefaultContext()
{
    return defaultContext;
}

void LaunchWidget::setDefaultContext(const std::string & defaultContext)
{
    this->defaultContext = defaultContext;
}

std::string LaunchWidget::getWidgetContext()
{
    return widgetContext;
}

void LaunchWidget::setWidgetContext(const std::string & widgetContext)
{
    this->widgetContext = widgetContext;
}

std::string LaunchWidget::getTemplate()
{
    return template_;
}

void LaunchWidget::setTemplate(const std::string & encodedWidgetTemplate)
{
    this->template_ = encodedWidgetTemplate;
}

com::tibbo::aggregate::common::util::WindowLocationPtr LaunchWidget::getLocation()
{
    return location;
}

void LaunchWidget::setLocation(WindowLocationPtr location)
{
    this->location = location;
}

com::tibbo::aggregate::common::util::DashboardPropertiesPtr LaunchWidget::getDashboard()
{
    return dashboard;
}

void LaunchWidget::setDashboard(DashboardPropertiesPtr dashboard)
{
    this->dashboard = dashboard;
}

DateDataTablePtr LaunchWidget::getInput()
{
    return input;
}

void LaunchWidget::setInput(DataTablePtr input)
{
    this->input = input;
}



java::lang::Class* LaunchWidget::class_()
{
    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.action.command.LaunchWidget", 54);
    return c;
}

void LaunchWidget::clinit()
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
        CFT_LAUNCH_WIDGET_ = new TableFormat(int(1), int(1));
        {
            CFT_LAUNCH_WIDGET_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_WIDGET_CONTEXT_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"widget"_j))
                ->append(u"><E="_j)
                ->append(field::StringFieldFormat::EDITOR_CONTEXT())
                ->append(u">"_j)->toString());
            CFT_LAUNCH_WIDGET_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_DEFAULT_CONTEXT_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"conDefaultContext"_j))
                ->append(u"><E="_j)
                ->append(field::StringFieldFormat::EDITOR_CONTEXT())
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

java::lang::Class* LaunchWidget::getClass0()
{
    return class_();
}
*/
