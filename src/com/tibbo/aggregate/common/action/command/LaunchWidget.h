// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/LaunchWidget.java

#pragma once

#include <com/tibbo/aggregate/common/action/command/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"



class com::tibbo::aggregate::common::action::command::LaunchWidget
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
    static const std::string CF_DEFAULT_CONTEXT_;
    static const std::string CF_WIDGET_CONTEXT_;
    static const std::string CF_TEMPLATE_;
    static const std::string CF_LOCATION_;
    static const std::string CF_DASHBOARD_;
    static const std::string CF_INPUT_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* CFT_LAUNCH_WIDGET_;
    std::string* widgetContext;
    std::string* defaultContext;
    std::string* template_;
    ::com::tibbo::aggregate::common::util::WindowLocation* location;
    ::com::tibbo::aggregate::common::util::DashboardProperties* dashboard;
    ::com::tibbo::aggregate::common::datatable::DataTable* input;
protected:
    void ctor();
    void ctor(std::string* title, std::string* widgetContext, std::string* defaultContext);
    void ctor(std::string* title, std::string* widgetContext, std::string* defaultContext, std::string* template_);
    void ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);

public: /* protected */
    ::com::tibbo::aggregate::common::datatable::DataTable* constructParameters();

public:
    std::string* getDefaultContext();
    void setDefaultContext(std::string* defaultContext);
    std::string* getWidgetContext();
    void setWidgetContext(std::string* widgetContext);
    std::string* getTemplate();
    void setTemplate(std::string* encodedWidgetTemplate);
    ::com::tibbo::aggregate::common::util::WindowLocation* getLocation();
    void setLocation(::com::tibbo::aggregate::common::util::WindowLocation* location);
    ::com::tibbo::aggregate::common::util::DashboardProperties* getDashboard();
    void setDashboard(::com::tibbo::aggregate::common::util::DashboardProperties* dashboard);
    ::com::tibbo::aggregate::common::datatable::DataTable* getInput();
    void setInput(::com::tibbo::aggregate::common::datatable::DataTable* input);

    // Generated
    LaunchWidget();
    LaunchWidget(std::string* title, std::string* widgetContext, std::string* defaultContext);
    LaunchWidget(std::string* title, std::string* widgetContext, std::string* defaultContext, std::string* template_);
    LaunchWidget(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);
protected:
    LaunchWidget(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_DEFAULT_CONTEXT();
    static const std::string& CF_WIDGET_CONTEXT();
    static const std::string& CF_TEMPLATE();
    static const std::string& CF_LOCATION();
    static const std::string& CF_DASHBOARD();
    static const std::string& CF_INPUT();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& CFT_LAUNCH_WIDGET();

private:
    ::java::lang::Class* getClass0();
};
