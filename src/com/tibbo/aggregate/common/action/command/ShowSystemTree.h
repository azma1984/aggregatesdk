#ifndef ShowSystemTreeH
#define ShowSystemTreeH
#include "action/GenericActionCommand.h"
#include "Cres.h"
#include "action/ActionUtils.h"
#include "context/Context.h"
#include "datatable/DataRecord.h"
#include "datatable/DataTable.h"
#include "datatable/FieldFormat.h"
#include "datatable/TableFormat.h"
#include "datatable/field/StringFieldFormat.h"
#include "util/DashboardProperties.h"
//#include "util/WindowLocation.h"

class ShowSystemTree : public GenericActionCommand
{
private:
	const std::string & root;
	std::list<std::string>  roots;
    bool relatedActions;
	WindowLocationPtr location;
    DashboardPropertiesPtr dashboard;
	void init();
public:
    static const std::string CF_ROOT;
    static const std::string CF_ROOTS;
    static const std::string CF_LOCATION;
    static const std::string CF_DASHBOARD;
    static const std::string CF_RELATED_ACTIONS;
    static const std::string CF_ROOTS_ROOT;
    static TableFormatPtr CFT_SHOW_SYSTEM_TREE_ROOTS;
	static TableFormatPtr CFT_SHOW_SYSTEM_TREE;

	DataTablePtr constructParameters();

	bool isRelatedActions();
	void setRelatedActions(bool relatedActions);
	WindowLocationPtr getLocation();
	void setLocation(WindowLocationPtr location);
	DashboardPropertiesPtr getDashboard();
	void setDashboard(DashboardPropertiesPtr dashboard);

	ShowSystemTree();
	ShowSystemTree(const std::string & title, ContextPtr root);
	ShowSystemTree(const std::string & title, char* roots);
	ShowSystemTree(const std::string & title, DataTablePtr parameters);
};
#endif
