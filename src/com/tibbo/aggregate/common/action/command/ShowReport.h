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

  // ::unsigned charArray* reportData;   //todo
 //   WindowLocationPtr location;   //todo
  //  DashboardPropertiesPtr dashboard;  //todo

public:
	static const std::string CF_REPORT_DATA;
	static const std::string CF_LOCATION;
	static const std::string CF_DASHBOARD;
	static TableFormatPtr CFT_SHOW_REPORT;
    DataTablePtr constructParameters();

   //	::unsigned charArray* getReportData();    //todo
  //  void setReportData(::unsigned charArray* reportData);  //todo
   // WindowLocationPtr getLocation();   //todo
	//void setLocation(WindowLocationPtr location);   //todo
   // DashboardPropertiesPtr getDashboard();   //todo
   // void setDashboard(DashboardPropertiesPtr dashboard);  //todo

    ShowReport();
   //	ShowReport(const std::string & title, char* reportData, WindowLocationPtr location, DashboardPropertiesPtr dashboard);  //todo
    ShowReport(const std::string & title, DataTablePtr parameters);

};
#endif
