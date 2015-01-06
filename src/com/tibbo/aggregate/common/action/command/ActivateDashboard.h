// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/ActivateDashboard.java
#ifndef ActivateDashboardH
#define ActivateDashboardH

#include "GenericActionCommand.h"
#include "ActionUtils.h"
/*
#include <com/tibbo/aggregate/common/Cres.h"

#include <com/tibbo/aggregate/common/context/Contexts.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/field/StringFieldFormat.h"
#include <com/tibbo/aggregate/common/util/DashboardProperties.h"     */
//#include "WindowLocation.h"



class ActivateDashboard : public GenericActionCommand
{
private:
	std::string name;
	std::string path;
      //WindowLocation* location;  //todo it is defined in com/tibbo/aggregate/common/util/WindowLocation.h
      //DashboardProperties* dashboard; //todo it is defined in  com/tibbo/aggregate/common/util/DashboardProperties.h

protected:
   //	DataTable* constructParameters();  todo it is defined in com\tibbo\aggregate\common\datatable\DataTable.h

public:
	static std::string  CF_NAME;
	static std::string  CF_PATH;
	static std::string  CF_LOCATION;
	static std::string  CF_DASHBOARD;
       //TableFormat* CFT_ACTIVATE_DASHBOARD; todo it is defined in com\tibbo\aggregate\common\datatable\TableFormat.h

	void Init();
	ActivateDashboard();
   //	ActivateDashboard(std::string title, DataTable* parameters);
	ActivateDashboard(const std::string &name);

	std::string getName();
	void setName(std::string name);

	std::string getPath();
	void setPath(std::string path);

   //	WindowLocation* getLocation();  ////todo it is defined in com/tibbo/aggregate/common/util/WindowLocation.h
  //	void setLocation(WindowLocation location);

  //	DashboardProperties* getDashboard(); //todo it is defined in  com/tibbo/aggregate/common/util/DashboardProperties.h"
  //	void setDashboard(DashboardProperties* dashboard);
};

#endif
