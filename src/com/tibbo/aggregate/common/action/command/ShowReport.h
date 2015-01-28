#ifndef ShowReportH
#define ShowReportH
#include "action/GenericActionCommand.h"



class ShowReport : public GenericActionCommand
{
private:
    static const std::string CF_REPORT_DATA_;
    static const std::string CF_LOCATION_;
    static const std::string CF_DASHBOARD_;
    static TableFormatPtr CFT_SHOW_REPORT_;
    ::unsigned charArray* reportData;
    WindowLocationPtr location;
    DashboardPropertiesPtr dashboard;

public:
    DataTablePtr constructParameters();

	::unsigned charArray* getReportData();
    void setReportData(::unsigned charArray* reportData);
    WindowLocationPtr getLocation();
    void setLocation(WindowLocationPtr location);
    DashboardPropertiesPtr getDashboard();
    void setDashboard(DashboardPropertiesPtr dashboard);

    ShowReport();
    ShowReport(const std::string & title, ::unsigned charArray* reportData, WindowLocationPtr location, DashboardPropertiesPtr dashboard);
    ShowReport(const std::string & title, DataTablePtr parameters);


    static const std::string& CF_REPORT_DATA();
    static const std::string& CF_LOCATION();
    static const std::string& CF_DASHBOARD();
    static TableFormatPtr& CFT_SHOW_REPORT();

};
#endif
