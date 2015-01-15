#ifndef _LAUNCHWIDGET_H_
#define _LAUNCHWIDGET_H_
#include "action/GenericActionCommand.h"


class LaunchWidget : public GenericActionCommand
{

//private:
//    static const std::string CF_DEFAULT_CONTEXT_;
//    static const std::string CF_WIDGET_CONTEXT_;
//    static const std::string CF_TEMPLATE_;
//    static const std::string CF_LOCATION_;
//    static const std::string CF_DASHBOARD_;
//    static const std::string CF_INPUT_;
//    static TableFormat* CFT_LAUNCH_WIDGET_;
//    const std::string & widgetContext;
//    const std::string & defaultContext;
//    const std::string & template_;
//    ::com::tibbo::aggregate::common::util::WindowLocation* location;
//    ::com::tibbo::aggregate::common::util::DashboardProperties* dashboard;
//    DataTable* input;
//protected:
//    void ctor();
//    void ctor(std::string& title, std::string& widgetContext, std::string& defaultContext);
//    void ctor(std::string& title, std::string& widgetContext, std::string& defaultContext, const std::string & template_);
//    void ctor(std::string& title, DataTable* parameters);

//public: /* protected */
//    DataTable* constructParameters();

//public:
//    std::string getDefaultContext();
//    void setDefaultContext(const std::string& defaultContext);
//    std::string getWidgetContext();
//    void setWidgetContext(const std::string& widgetContext);
//    std::strin* getTemplate();
//    void setTemplate(const std::string& encodedWidgetTemplate);
//    WindowLocation* getLocation();
//    void setLocation(WindowLocation* location);
//    DashboardProperties* getDashboard();
//    void setDashboard(DashboardProperties* dashboard);
//    DataTable* getInput();
//    void setInput(DataTable* input);

//    // Generated
//    LaunchWidget();
//    LaunchWidget(const std::string & title, const std::string & widgetContext, const std::string & defaultContext);
//    LaunchWidget(const std::string & title, const std::string & widgetContext, const std::string & defaultContext, const std::string & template_);
//    LaunchWidget(const std::string & title, DataTable* parameters);
//protected:
//    LaunchWidget(const ::default_init_tag&);

//public:
//    static const std::string& CF_DEFAULT_CONTEXT();
//    static const std::string& CF_WIDGET_CONTEXT();
//    static const std::string& CF_TEMPLATE();
//    static const std::string& CF_LOCATION();
//    static const std::string& CF_DASHBOARD();
//    static const std::string& CF_INPUT();
//    static TableFormat*& CFT_LAUNCH_WIDGET();

//private:
//    ::java::lang::Class* getClass0();
};
#endif  //_LAUNCHWIDGET_H_
