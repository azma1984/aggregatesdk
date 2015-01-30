#ifndef ActivateDashboardH
#define ActivateDashboardH

#include "action/GenericActionCommand.h"
//#include "ActionUtils.h"



class ActivateDashboard : public GenericActionCommand
{
private:
	std::string name;
	std::string path;
	WindowLocationPtr location;  //it is defined in com/tibbo/aggregate/common/util/WindowLocation.h
	DashboardPropertiesPtr dashboard; //it is defined in  com/tibbo/aggregate/common/util/DashboardProperties.h

protected:
	DataTablePtr constructParameters(); //it is defined in com\tibbo\aggregate\common\datatable\DataTable.h

public:
	static std::string  CF_NAME;
	static std::string  CF_PATH;
	static std::string  CF_LOCATION;
	static std::string  CF_DASHBOARD;
	TableFormatPtr CFT_ACTIVATE_DASHBOARD; //it is defined in com\tibbo\aggregate\common\datatable\TableFormat.h

	void Init();
	ActivateDashboard();
	ActivateDashboard(std::string title, DataTablePtr parameters);
	ActivateDashboard(const std::string &name);

	std::string getName();
	void setName(std::string name);

	std::string getPath();
	void setPath(std::string path);

	WindowLocationPtr getLocation();  //it is defined in com/tibbo/aggregate/common/util/WindowLocation.h
	void setLocation(WindowLocation location);

	DashboardPropertiesPtr getDashboard(); //it is defined in  com/tibbo/aggregate/common/util/DashboardProperties.h"
	void setDashboard(DashboardPropertiesPtr dashboard);
};

#endif
