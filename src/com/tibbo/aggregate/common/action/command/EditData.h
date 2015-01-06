// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/EditData.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/action/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/command/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"



class com::tibbo::aggregate::common::action::command::EditData
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
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
    static ::com::tibbo::aggregate::common::datatable::TableFormat* CFT_EDIT_DATA_;
    ::com::tibbo::aggregate::common::action::EditDataMerger* merger;
    ::com::tibbo::aggregate::common::datatable::DataTable* data;
    bool useDockableFrame;
    bool readOnly;
    std::string* iconId;
    std::string* helpId;
    std::string* help;
    std::string* defaultContext;
    ::com::tibbo::aggregate::common::util::WindowLocation* location;
    ::com::tibbo::aggregate::common::util::DashboardProperties* dashboard;
    std::string* expression;
    ::java::lang::Long* period;
protected:
    void ctor();
    void ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);
    void ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* data, bool readonly);
    void ctor(std::string* title, std::string* iconId, std::string* expression, ::java::lang::Long* period);

public: /* protected */
    ::com::tibbo::aggregate::common::datatable::DataTable* constructParameters();

public:
    ::com::tibbo::aggregate::common::action::GenericActionResponse* createDefaultResponse();
    ::com::tibbo::aggregate::common::datatable::DataTable* getData();
    void setData(::com::tibbo::aggregate::common::datatable::DataTable* data);
    bool isUseDockableFrame();
    void setUseDockableFrame(bool useDockableFrame);
    bool isReadOnly();
    void setReadOnly(bool readonly);
    std::string* getIconId();
    void setIconId(std::string* iconId);
    std::string* getHelpId();
    void setHelpId(std::string* helpId);
    std::string* getHelp();
    void setHelp(std::string* help);
    std::string* getDefaultContext();
    void setDefaultContext(std::string* defaultContext);
    ::com::tibbo::aggregate::common::util::WindowLocation* getLocation();
    void setLocation(::com::tibbo::aggregate::common::util::WindowLocation* location);
    ::com::tibbo::aggregate::common::util::DashboardProperties* getDashboard();
    void setDashboard(::com::tibbo::aggregate::common::util::DashboardProperties* dashboard);
    std::string* getExpression();
    void setExpression(std::string* expression);
    ::java::lang::Long* getPeriod();
    void setPeriod(::java::lang::Long* period);
    ::com::tibbo::aggregate::common::action::EditDataMerger* getMerger();
    void setMerger(::com::tibbo::aggregate::common::action::EditDataMerger* merger);

    // Generated
    EditData();
    EditData(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);
    EditData(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* data, bool readonly);
    EditData(std::string* title, std::string* iconId, std::string* expression, ::java::lang::Long* period);
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
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& CFT_EDIT_DATA();

private:
    ::java::lang::Class* getClass0();
};
