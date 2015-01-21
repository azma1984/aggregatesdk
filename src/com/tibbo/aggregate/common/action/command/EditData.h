#pragma once

#include "action/GenericActionCommand.h"
#include "action/EditDataMerger.h"
#include "util/DashboardProperties.h"
#include "util/WindowLocation.h"
#include <string>
#include <boost/shared_ptr.hpp>

class EditData : public GenericActionCommand
{
private:

    static boost::shared_ptr<TableFormat> CFT_EDIT_DATA_;
    boost::shared_ptr<EditDataMerger> merger;
    boost::shared_ptr<DataTable> data;
    bool useDockableFrame;
    bool readOnly;
    std::string iconId;
    std::string helpId;
    std::string help;
    std::string defaultContext;
    boost::shared_ptr<WindowLocation> location;
    boost::shared_ptr<DashboardProperties> dashboard;
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

public: /* protected */
    DataTable* constructParameters();

public:
    boost::shared_ptr<GenericActionResponse> createDefaultResponse();
    boost::shared_ptr<DataTable> getData();
    void setData(boost::shared_ptr<DataTable> data);
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
    boost::shared_ptr<WindowLocation> getLocation();
    void setLocation(boost::shared_ptr<WindowLocation> location);
    boost::shared_ptr<DashboardProperties> getDashboard();
    void setDashboard(boost::shared_ptr<DashboardProperties> dashboard);
    std::string getExpression();
    void setExpression(const std::string & expression);
    long  getPeriod();
    void setPeriod(long  period);
    boost::shared_ptr<EditDataMerger> getMerger();
    void setMerger(boost::shared_ptr<EditDataMerger> merger);

    // Generated
    EditData();
    EditData(const std::string & title, boost::shared_ptr<DataTable> parameters);
    EditData(const std::string & title, boost::shared_ptr<DataTable> data, bool readonly);
    EditData(const std::string & title, const std::string & iconId, const std::string & expression, long  period);

    static boost::shared_ptr<TableFormat> CFT_EDIT_DATA();
};
