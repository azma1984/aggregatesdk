#pragma once

#include "action/GenericActionCommand.h"
#include <string>
#include <boost/shared_ptr.hpp>

class EditData : public GenericActionCommand
{
private:

    static TableFormat* CFT_EDIT_DATA_;
    EditDataMerger* merger;
    DataTable* data;
    bool useDockableFrame;
    bool readOnly;
    std::string iconId;
    std::string helpId;
    std::string help;
    std::string defaultContext;
    WindowLocation* location;
    DashboardProperties* dashboard;
    const std::string & expression;
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
    GenericActionResponse* createDefaultResponse();
    DataTable* getData();
    void setData(DataTable* data);
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
    WindowLocation* getLocation();
    void setLocation(WindowLocation* location);
    DashboardProperties* getDashboard();
    void setDashboard(::com::tibbo::aggregate::common::util::DashboardProperties* dashboard);
    std::string getExpression();
    void setExpression(const std::string & expression);
    long  getPeriod();
    void setPeriod(long  period);
    EditDataMerger* getMerger();
    void setMerger(EditDataMerger* merger);

    // Generated
    EditData();
    EditData(const std::string & title, DataTable* parameters);
    EditData(const std::string & title, DataTable* data, bool readonly);
    EditData(const std::string & title, const std::string & iconId, const std::string & expression, long  period);
protected:
    EditData(const ::default_init_tag&);


public:
    
    static void
    static const std::string& CF_DATA();
    static const std::string& CF_USE_DOCKABLE_FRAME();
    static const std::string& CF_READ_ONLY();
    static const std::string& CF_ICON_ID();
    static const std::string& CF_HELP_ID();
    static const std::string& CF_HELP();
    static const std::string& CF_DEFAULT_CONTEXT();
    static const std::string& CF_LOCATION();
    static const std::string& CF_DASHBOARD();
    static const std::string& CF_EXPRESSION();
    static const std::string& CF_PERIOD();
    static TableFormat*& CFT_EDIT_DATA();
};
