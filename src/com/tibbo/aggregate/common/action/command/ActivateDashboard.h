#ifndef ActivateDashboardH
#define ActivateDashboardH

#include "action/GenericActionCommand.h"
//#include "ActionUtils.h"



class ActivateDashboard : public GenericActionCommand
{
private:
	std::string name;
	std::string path;
    static TableFormatPtr CFT_ACTIVATE_DASHBOARD_;
      //WindowLocationPtr location;  //todo it is defined in com/tibbo/aggregate/common/util/WindowLocation.h
      //DashboardPropertiesPtr dashboard; //todo it is defined in  com/tibbo/aggregate/common/util/DashboardProperties.h

protected:
   //	DataTablePtr constructParameters();  todo it is defined in com\tibbo\aggregate\common\datatable\DataTable.h

public:
	static std::string  CF_NAME;
	static std::string  CF_PATH;
	static std::string  CF_LOCATION;
	static std::string  CF_DASHBOARD;
    static TableFormatPtr CFT_ACTIVATE_DASHBOARD();

	ActivateDashboard();
    ActivateDashboard(const std::string& title, DataTablePtr parameters);
    ActivateDashboard(const std::string& name);

	std::string getName();
	void setName(std::string name);

	std::string getPath();
	void setPath(std::string path);

   //	WindowLocationPtr getLocation();  ////todo it is defined in com/tibbo/aggregate/common/util/WindowLocation.h
  //	void setLocation(WindowLocation location);

  //	DashboardPropertiesPtr getDashboard(); //todo it is defined in  com/tibbo/aggregate/common/util/DashboardProperties.h"
  //	void setDashboard(DashboardPropertiesPtr dashboard);
};

#endif
