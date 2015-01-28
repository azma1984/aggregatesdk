#ifndef EditDataH
#define EditDataH

#include "action/GenericActionCommand.h"
#include "action/EditDataMerger.h"
#include "util/DashboardProperties.h"
#include "util/WindowLocation.h"
#include <string>
#include <boost/shared_ptr.hpp>

class EditData : public GenericActionCommand
{
private:

    static TableFormatPtr CFT_EDIT_DATA_;
    EditDataMergerPtr merger;
    DataTablePtr data;
    bool useDockableFrame;
    bool readOnly;
    std::string iconId;
    std::string helpId;
    std::string help;
    std::string defaultContext;
    WindowLocationPtr location;
    DashboardPropertiesPtr dashboard;
    const std::string expression;
    long  period;

public:
    static const std::string CF_DATA_;
    static const std::string CF_USE_DOCKABLE_FRAME_;
    static const std::string CF_READ_ONLY_;
    static const std::string CF_ICON_ID_;
    static const std::string CF_HELP_ID_;
    static const std::string CF_HELP_;
    static const std::string CF_DEFAULT_CONTEXT_;
    static const std::string CF_LOCATION_;
    static const std::string CF_DASHBOARD_;
    static const std::string CF_EXPRESSION_;
    static const std::string CF_PERIOD_;

    DataTablePtr constructParameters();

public:
    GenericActionResponsePtr createDefaultResponse();
    DataTablePtr getData();
    void setData(DataTablePtr data);
    bool isUseDockableFrame();
    void setUseDockableFrame(bool useDockableFrame);
    bool isReadOnly();
    void setReadOnly(bool readonly);
    std::string getIconId();
    void setIconId(const std::string & iconId);
    std::string getHelpId();
    void setHelpId(const std::string & helpId);
    std::string getHelp();
    void setHelp(const std::string & help);
    std::string getDefaultContext();
    void setDefaultContext(const std::string & defaultContext);
    WindowLocationPtr getLocation();
    void setLocation(WindowLocationPtr location);
    DashboardPropertiesPtr getDashboard();
    void setDashboard(DashboardPropertiesPtr dashboard);
    std::string getExpression();
    void setExpression(const std::string & expression);
    long  getPeriod();
    void setPeriod(long  period);
    EditDataMergerPtr getMerger();
    void setMerger(EditDataMergerPtr merger);

	EditData();
    EditData(const std::string & title, DataTablePtr parameters);
    EditData(const std::string & title, DataTablePtr data, bool readonly);
    EditData(const std::string & title, const std::string & iconId, const std::string & expression, long  period);

    static TableFormatPtr CFT_EDIT_DATA();
};

#endif
