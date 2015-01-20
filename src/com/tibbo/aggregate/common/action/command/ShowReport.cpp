#include "action/command/ShowReport.h"
/*
#include <com/tibbo/aggregate/common/action/ActionUtils.h"
#include <com/tibbo/aggregate/common/data/Data.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/util/DashboardProperties.h"
#include <com/tibbo/aggregate/common/util/WindowLocation.h"
*/


/*
com::tibbo::aggregate::common::action::command::ShowReport::ShowReport(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::command::ShowReport::ShowReport() 
    : ShowReport(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::action::command::ShowReport::ShowReport(const std::string & title, ::int8_tArray* reportData, ::com::tibbo::aggregate::common::util::WindowLocation* location, ::com::tibbo::aggregate::common::util::DashboardProperties* dashboard) 
    : ShowReport(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,reportData,location,dashboard);
}

com::tibbo::aggregate::common::action::command::ShowReport::ShowReport(const std::string & title, DataTable* parameters) 
    : ShowReport(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,parameters);
}

std::string& com::tibbo::aggregate::common::action::command::ShowReport::CF_REPORT_DATA()
{
    
    return CF_REPORT_DATA_;
}
std::string com::tibbo::aggregate::common::action::command::ShowReport::CF_REPORT_DATA_;

std::string& com::tibbo::aggregate::common::action::command::ShowReport::CF_LOCATION()
{
    
    return CF_LOCATION_;
}
std::string com::tibbo::aggregate::common::action::command::ShowReport::CF_LOCATION_;

std::string& com::tibbo::aggregate::common::action::command::ShowReport::CF_DASHBOARD()
{
    
    return CF_DASHBOARD_;
}
std::string com::tibbo::aggregate::common::action::command::ShowReport::CF_DASHBOARD_;

DateTableFormat*& com::tibbo::aggregate::common::action::command::ShowReport::CFT_SHOW_REPORT()
{
    
    return CFT_SHOW_REPORT_;
}
DateTableFormat* com::tibbo::aggregate::common::action::command::ShowReport::CFT_SHOW_REPORT_;

void com::tibbo::aggregate::common::action::command::ShowReport::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_REPORT(), CFT_SHOW_REPORT_, static_cast< TableFormat* >(0));
}

void com::tibbo::aggregate::common::action::command::ShowReport::ctor(const std::string & title, ::int8_tArray* reportData, ::com::tibbo::aggregate::common::util::WindowLocation* location, ::com::tibbo::aggregate::common::util::DashboardProperties* dashboard)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_REPORT(), title);
    this->reportData = reportData;
    this->location = location;
    this->dashboard = dashboard;
}

void com::tibbo::aggregate::common::action::command::ShowReport::ctor(const std::string & title, DataTable* parameters)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_REPORT(), title, parameters, CFT_SHOW_REPORT_);
}

DateDataTable* com::tibbo::aggregate::common::action::command::ShowReport::constructParameters()
{
    auto t = new DataTable(CFT_SHOW_REPORT_);
    auto r = t)->addRecord();
    r)->addData(new Data(reportData));
    r)->addDataTable(location != 0 ? location)->toDataTable() : static_cast< DataTable* >(0));
    r)->addDataTable(dashboard != 0 ? dashboard)->toDataTable() : static_cast< DataTable* >(0));
    return t;
}

int8_tArray* com::tibbo::aggregate::common::action::command::ShowReport::getReportData()
{
    return reportData;
}

void com::tibbo::aggregate::common::action::command::ShowReport::setReportData(::int8_tArray* reportData)
{
    this->reportData = reportData;
}

com::tibbo::aggregate::common::util::WindowLocation* com::tibbo::aggregate::common::action::command::ShowReport::getLocation()
{
    return location;
}

void com::tibbo::aggregate::common::action::command::ShowReport::setLocation(::com::tibbo::aggregate::common::util::WindowLocation* location)
{
    this->location = location;
}

com::tibbo::aggregate::common::util::DashboardProperties* com::tibbo::aggregate::common::action::command::ShowReport::getDashboard()
{
    return dashboard;
}

void com::tibbo::aggregate::common::action::command::ShowReport::setDashboard(::com::tibbo::aggregate::common::util::DashboardProperties* dashboard)
{
    this->dashboard = dashboard;
}



java::lang::Class* com::tibbo::aggregate::common::action::command::ShowReport::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.command.ShowReport", 52);
    return c;
}

void com::tibbo::aggregate::common::action::command::ShowReport::clinit()
{
struct string_init_ {
    string_init_() {
    CF_REPORT_DATA_ = u"reportData"_j;
    CF_LOCATION_ = u"location"_j;
    CF_DASHBOARD_ = u"dashboard"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CFT_SHOW_REPORT_ = new TableFormat(int(1), int(1));
        {
            CFT_SHOW_REPORT_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_REPORT_DATA_)
                ->append(u"><A>"_j)->toString());
            CFT_SHOW_REPORT_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_LOCATION_)
                ->append(u"><T><F=N>"_j)->toString());
            CFT_SHOW_REPORT_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_DASHBOARD_)
                ->append(u"><T><F=N>"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::command::ShowReport::getClass0()
{
    return class_();
}
*/
