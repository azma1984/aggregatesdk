#ifndef LaunchWidgetH
#define LaunchWidgetH

#include "action/GenericActionCommand.h"


class LaunchWidget : public GenericActionCommand
{
 private:

	std::string widgetContext;
	std::string defaultContext;
	std::string template_;
	WindowLocationPtr location;
	DashboardPropertiesPtr dashboard;
    DataTablePtr input;

 public:
 	static const std::string CF_DEFAULT_CONTEXT;
	static const std::string CF_WIDGET_CONTEXT;
	static const std::string CF_TEMPLATE;
	static const std::string CF_LOCATION;
	static const std::string CF_DASHBOARD;
	static const std::string CF_INPUT;
	static TableFormatPtr CFT_LAUNCH_WIDGET;

	DataTablePtr constructParameters();

    std::string getDefaultContext();
    void setDefaultContext(const std::string& defaultContext);
    std::string getWidgetContext();
    void setWidgetContext(const std::string& widgetContext);
	std::string getTemplate();
    void setTemplate(const std::string& encodedWidgetTemplate);
	WindowLocationPtr getLocation();
	void setLocation(WindowLocationPtr location);
	DashboardPropertiesPtr getDashboard();
	void setDashboard(DashboardPropertiesPtr dashboard);
    DataTablePtr getInput();
    void setInput(DataTablePtr input);

    LaunchWidget();
    LaunchWidget(const std::string & title, const std::string & widgetContext, const std::string & defaultContext);
    LaunchWidget(const std::string & title, const std::string & widgetContext, const std::string & defaultContext, const std::string & template_);
    LaunchWidget(const std::string & title, DataTablePtr parameters);
};
#endif  //LaunchWidgetH
