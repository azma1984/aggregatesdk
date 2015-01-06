// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/command/ShowReport.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/command/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/action/GenericActionCommand.h"



class com::tibbo::aggregate::common::action::command::ShowReport
    : public ::com::tibbo::aggregate::common::action::GenericActionCommand
{

public:
    typedef ::com::tibbo::aggregate::common::action::GenericActionCommand super;

private:
    static const std::string CF_REPORT_DATA_;
    static const std::string CF_LOCATION_;
    static const std::string CF_DASHBOARD_;
    static ::com::tibbo::aggregate::common::datatable::TableFormat* CFT_SHOW_REPORT_;
    ::int8_tArray* reportData;
    ::com::tibbo::aggregate::common::util::WindowLocation* location;
    ::com::tibbo::aggregate::common::util::DashboardProperties* dashboard;
protected:
    void ctor();
    void ctor(std::string* title, ::int8_tArray* reportData, ::com::tibbo::aggregate::common::util::WindowLocation* location, ::com::tibbo::aggregate::common::util::DashboardProperties* dashboard);
    void ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);

public: /* protected */
    ::com::tibbo::aggregate::common::datatable::DataTable* constructParameters();

public:
    ::int8_tArray* getReportData();
    void setReportData(::int8_tArray* reportData);
    ::com::tibbo::aggregate::common::util::WindowLocation* getLocation();
    void setLocation(::com::tibbo::aggregate::common::util::WindowLocation* location);
    ::com::tibbo::aggregate::common::util::DashboardProperties* getDashboard();
    void setDashboard(::com::tibbo::aggregate::common::util::DashboardProperties* dashboard);

    // Generated
    ShowReport();
    ShowReport(std::string* title, ::int8_tArray* reportData, ::com::tibbo::aggregate::common::util::WindowLocation* location, ::com::tibbo::aggregate::common::util::DashboardProperties* dashboard);
    ShowReport(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);
protected:
    ShowReport(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& CF_REPORT_DATA();
    static const std::string& CF_LOCATION();
    static const std::string& CF_DASHBOARD();
    static ::com::tibbo::aggregate::common::datatable::TableFormat*& CFT_SHOW_REPORT();

private:
    ::java::lang::Class* getClass0();
};
