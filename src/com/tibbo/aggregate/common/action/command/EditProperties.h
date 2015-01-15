// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/EditProperties.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/action/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/command/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"



class com::tibbo::aggregate::common::action::command::EditProperties
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
    static const std::string CF_READ_ONLY_;
    static const std::string CF_DYNAMIC_;
    static const std::string CF_ASYNC_;
    static const std::string CF_USE_DOCKABLE_FRAME_;
    static const std::string CF_SINGLE_WINDOW_MODE_;
    static const std::string CF_CONTEXT_;
    static const std::string CF_SLAVES_;
    static const std::string CF_LOCATION_;
    static const std::string CF_DASHBOARD_;
    static const std::string CF_PROPERTIES_;
    static const std::string CF_PROPERTIES_GROUP_;
    static const std::string RF_EDIT_PROPERTIES_RESULT_;
    static const std::string RF_EDIT_PROPERTIES_CHANGED_PROPERTIES_;
    static const std::string FIELD_PROPERTIES_PROPERTY_;
    static const std::string CF_SLAVES_CONTEXT_;
    static TableFormat* CFT_SLAVES_;
    static TableFormat* FT_PROPERTIES_;
    static TableFormat* CFT_EDIT_PROPERTIES_;
    static TableFormat* RFT_EDIT_PROPERTIES_;
    const std::string & context;
    const std::string & propertiesGroup;
    std::list  properties;
    std::list  slaves;
    bool readOnly;
    bool dynamic;
    bool useDockableFrame;
    bool singleWindowMode;
    bool async;
    ::com::tibbo::aggregate::common::util::WindowLocation* location;
    ::com::tibbo::aggregate::common::util::DashboardProperties* dashboard;
protected:
    void ctor();
    void ctor(const std::string & title, const std::string & contextName, const std::string & propertiesGroup);
    void ctor(const std::string & title, const std::string & contextName, std::list  properties);
    void ctor(const std::string & title, DataTable* parameters);

public: /* protected */
    DataTable* constructParameters();

private:
    DataTable* createSlavesTable(std::list  slaves);

public:
    static std::list  getSlaves(::com::tibbo::aggregate::common::action::GenericActionCommand* cmd, ::com::tibbo::aggregate::common::context::Context* base, ::com::tibbo::aggregate::common::context::CallerController* caller);
    const std::string & getContext();
    void setContext(const std::string & contextName);
    const std::string & getPropertiesGroup();
    void setPropertiesGroup(const std::string & propertiesGroup);
    std::list  getProperties();
    void setProperties(std::list  properties);
    std::list  getSlaves();
    void setSlaves(std::list  slaves);
    bool isReadOnly();
    void setReadOnly(bool readOnly);
    bool isDynamic();
    void setDynamic(bool dynamic);
    bool isUseDockableFrame();
    void setUseDockableFrame(bool useDockableFrame);
    bool isSingleWindowMode();
    void setSingleWindowMode(bool singleWindowMode);
    bool isAsync();
    void setAsync(bool async);
    ::com::tibbo::aggregate::common::util::WindowLocation* getLocation();
    void setLocation(::com::tibbo::aggregate::common::util::WindowLocation* location);
    ::com::tibbo::aggregate::common::util::DashboardProperties* getDashboard();
    void setDashboard(::com::tibbo::aggregate::common::util::DashboardProperties* dashboard);

    // Generated
    EditProperties();
    EditProperties(const std::string & title, const std::string & contextName, const std::string & propertiesGroup);
    EditProperties(const std::string & title, const std::string & contextName, std::list  properties);
    EditProperties(const std::string & title, DataTable* parameters);
protected:
    EditProperties(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_READ_ONLY();
    static const std::string& CF_DYNAMIC();
    static const std::string& CF_ASYNC();
    static const std::string& CF_USE_DOCKABLE_FRAME();
    static const std::string& CF_SINGLE_WINDOW_MODE();
    static const std::string& CF_CONTEXT();
    static const std::string& CF_SLAVES();
    static const std::string& CF_LOCATION();
    static const std::string& CF_DASHBOARD();
    static const std::string& CF_PROPERTIES();
    static const std::string& CF_PROPERTIES_GROUP();
    static const std::string& RF_EDIT_PROPERTIES_RESULT();
    static const std::string& RF_EDIT_PROPERTIES_CHANGED_PROPERTIES();
    static const std::string& FIELD_PROPERTIES_PROPERTY();
    static const std::string& CF_SLAVES_CONTEXT();
    static TableFormat*& CFT_SLAVES();
    static TableFormat*& FT_PROPERTIES();
    static TableFormat*& CFT_EDIT_PROPERTIES();
    static TableFormat*& RFT_EDIT_PROPERTIES();

private:
    ::java::lang::Class* getClass0();
};
