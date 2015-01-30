#ifndef ShowReportH
#define ShowReportH
#include "action/GenericActionCommand.h"

#include "action/ActionUtils.h"
#include "data/Data.h"
#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "util/DashboardProperties.h"
//#include "util/WindowLocation.h"



class ShowReport : public GenericActionCommand
{
private:
	char* reportData;
	WindowLocationPtr location;
	DashboardPropertiesPtr dashboard;

public:
	static const std::string CF_REPORT_DATA;
	static const std::string CF_LOCATION;
	static const std::string CF_DASHBOARD;
	static TableFormatPtr CFT_SHOW_REPORT;
    DataTablePtr constructParameters();

	char* getReportData();
	void setReportData(char* reportData);
	WindowLocationPtr getLocation();
	void setLocation(WindowLocationPtr location);
	DashboardPropertiesPtr getDashboard();
	void setDashboard(DashboardPropertiesPtr dashboard);

    ShowReport();
   	ShowReport(const std::string & title, char* reportData, WindowLocationPtr location, DashboardPropertiesPtr dashboard);
    ShowReport(const std::string & title, DataTablePtr parameters);

};
#endif
