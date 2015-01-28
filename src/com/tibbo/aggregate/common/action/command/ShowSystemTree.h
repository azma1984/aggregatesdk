#ifndef ShowSystemTreeH
#define ShowSystemTreeH
#include "action/GenericActionCommand.h"


class ShowSystemTree : public GenericActionCommand
{
private:
    static const std::string CF_ROOT_;
    static const std::string CF_ROOTS_;
    static const std::string CF_LOCATION_;
    static const std::string CF_DASHBOARD_;
    static const std::string CF_RELATED_ACTIONS_;
    static const std::string CF_ROOTS_ROOT_;
    static TableFormatPtr CFT_SHOW_SYSTEM_TREE_ROOTS_;
    static TableFormatPtr CFT_SHOW_SYSTEM_TREE_;
    const std::string & root;
    std::list  roots;
    bool relatedActions;
    WindowLocationPtr location;
    DashboardPropertiesPtr dashboard;
	void init();
public:
	DataTablePtr constructParameters();

	bool isRelatedActions();
	void setRelatedActions(bool relatedActions);
	WindowLocationPtr getLocation();
	void setLocation(WindowLocationPtr location);
	DashboardPropertiesPtr getDashboard();
	void setDashboard(DashboardPropertiesPtr dashboard);

	ShowSystemTree();
	ShowSystemTree(const std::string & title, ContextPtr root);
	ShowSystemTree(const std::string & title, std::stringArray* roots);
	ShowSystemTree(const std::string & title, DataTablePtr parameters);

    static const std::string& CF_ROOT();
    static const std::string& CF_ROOTS();
    static const std::string& CF_LOCATION();
    static const std::string& CF_DASHBOARD();
    static const std::string& CF_RELATED_ACTIONS();
    static const std::string& CF_ROOTS_ROOT();
    static TableFormatPtr& CFT_SHOW_SYSTEM_TREE_ROOTS();
	static TableFormatPtr& CFT_SHOW_SYSTEM_TREE();
};
#endif
