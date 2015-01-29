#include "action/command/ShowReport.h"



/*
ShowReport::ShowReport(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

ShowReport::ShowReport() 
    : ShowReport(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

ShowReport::ShowReport(const std::string & title, ::unsigned charArray* reportData, WindowLocationPtr location, DashboardPropertiesPtr dashboard) 
    : ShowReport(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,reportData,location,dashboard);
}

ShowReport::ShowReport(const std::string & title, DataTablePtr parameters) 
    : ShowReport(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,parameters);
}

std::string& ShowReport::CF_REPORT_DATA()
{
    
    return CF_REPORT_DATA_;
}
std::string ShowReport::CF_REPORT_DATA_;

std::string& ShowReport::CF_LOCATION()
{
    
    return CF_LOCATION_;
}
std::string ShowReport::CF_LOCATION_;

std::string& ShowReport::CF_DASHBOARD()
{
    
    return CF_DASHBOARD_;
}
std::string ShowReport::CF_DASHBOARD_;

DateTableFormatPtr& ShowReport::CFT_SHOW_REPORT()
{
    
    return CFT_SHOW_REPORT_;
}
DateTableFormatPtr ShowReport::CFT_SHOW_REPORT_;

void ShowReport::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_REPORT(), CFT_SHOW_REPORT_, static_cast< TableFormatPtr >(0));
}

void ShowReport::ctor(const std::string & title, ::unsigned charArray* reportData, WindowLocationPtr location, DashboardPropertiesPtr dashboard)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_REPORT(), title);
    this->reportData = reportData;
    this->location = location;
    this->dashboard = dashboard;
}

void ShowReport::ctor(const std::string & title, DataTablePtr parameters)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_REPORT(), title, parameters, CFT_SHOW_REPORT_);
}

DateDataTablePtr ShowReport::constructParameters()
{
    auto t = new DataTable(CFT_SHOW_REPORT_);
    auto r = t)->addRecord();
    r)->addData(new Data(reportData));
    r)->addDataTable(location != 0 ? location)->toDataTable() : static_cast< DataTablePtr >(0));
    r)->addDataTable(dashboard != 0 ? dashboard)->toDataTable() : static_cast< DataTablePtr >(0));
    return t;
}

unsigned charArray* ShowReport::getReportData()
{
    return reportData;
}

void ShowReport::setReportData(::unsigned charArray* reportData)
{
    this->reportData = reportData;
}

com::tibbo::aggregate::common::util::WindowLocationPtr ShowReport::getLocation()
{
    return location;
}

void ShowReport::setLocation(WindowLocationPtr location)
{
    this->location = location;
}

com::tibbo::aggregate::common::util::DashboardPropertiesPtr ShowReport::getDashboard()
{
    return dashboard;
}

void ShowReport::setDashboard(DashboardPropertiesPtr dashboard)
{
    this->dashboard = dashboard;
}



java::lang::Class* ShowReport::class_()
{
    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.action.command.ShowReport", 52);
    return c;
}

void ShowReport::clinit()
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

java::lang::Class* ShowReport::getClass0()
{
    return class_();
}
*/
