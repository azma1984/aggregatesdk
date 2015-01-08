#include "action/command/EditData.h"
/*
#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/action/ActionUtils.h"
#include <com/tibbo/aggregate/common/action/EditDataMerger.h"
#include <com/tibbo/aggregate/common/action/GenericActionResponse.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/field/LongFieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/field/StringFieldFormat.h"
#include <com/tibbo/aggregate/common/util/DashboardProperties.h"
#include <com/tibbo/aggregate/common/util/WindowLocation.h"
*/

com::tibbo::aggregate::common::action::command::EditData::EditData(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::command::EditData::EditData() 
    : EditData(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::action::command::EditData::EditData(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) 
    : EditData(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,parameters);
}

com::tibbo::aggregate::common::action::command::EditData::EditData(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* data, bool readonly) 
    : EditData(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,data,readonly);
}

com::tibbo::aggregate::common::action::command::EditData::EditData(std::string* title, std::string* iconId, std::string* expression, ::java::lang::Long* period) 
    : EditData(*static_cast< ::default_init_tag* >(0))
{
    ctor(title,iconId,expression,period);
}

std::string& com::tibbo::aggregate::common::action::command::EditData::CF_DATA()
{
    
    return CF_DATA_;
}
std::string com::tibbo::aggregate::common::action::command::EditData::CF_DATA_;

std::string& com::tibbo::aggregate::common::action::command::EditData::CF_USE_DOCKABLE_FRAME()
{
    
    return CF_USE_DOCKABLE_FRAME_;
}
std::string com::tibbo::aggregate::common::action::command::EditData::CF_USE_DOCKABLE_FRAME_;

std::string& com::tibbo::aggregate::common::action::command::EditData::CF_READ_ONLY()
{
    
    return CF_READ_ONLY_;
}
std::string com::tibbo::aggregate::common::action::command::EditData::CF_READ_ONLY_;

std::string& com::tibbo::aggregate::common::action::command::EditData::CF_ICON_ID()
{
    
    return CF_ICON_ID_;
}
std::string com::tibbo::aggregate::common::action::command::EditData::CF_ICON_ID_;

std::string& com::tibbo::aggregate::common::action::command::EditData::CF_HELP_ID()
{
    
    return CF_HELP_ID_;
}
std::string com::tibbo::aggregate::common::action::command::EditData::CF_HELP_ID_;

std::string& com::tibbo::aggregate::common::action::command::EditData::CF_HELP()
{
    
    return CF_HELP_;
}
std::string com::tibbo::aggregate::common::action::command::EditData::CF_HELP_;

std::string& com::tibbo::aggregate::common::action::command::EditData::CF_DEFAULT_CONTEXT()
{
    
    return CF_DEFAULT_CONTEXT_;
}
std::string com::tibbo::aggregate::common::action::command::EditData::CF_DEFAULT_CONTEXT_;

std::string& com::tibbo::aggregate::common::action::command::EditData::CF_LOCATION()
{
    
    return CF_LOCATION_;
}
std::string com::tibbo::aggregate::common::action::command::EditData::CF_LOCATION_;

std::string& com::tibbo::aggregate::common::action::command::EditData::CF_DASHBOARD()
{
    
    return CF_DASHBOARD_;
}
std::string com::tibbo::aggregate::common::action::command::EditData::CF_DASHBOARD_;

std::string& com::tibbo::aggregate::common::action::command::EditData::CF_EXPRESSION()
{
    
    return CF_EXPRESSION_;
}
std::string com::tibbo::aggregate::common::action::command::EditData::CF_EXPRESSION_;

std::string& com::tibbo::aggregate::common::action::command::EditData::CF_PERIOD()
{
    
    return CF_PERIOD_;
}
std::string com::tibbo::aggregate::common::action::command::EditData::CF_PERIOD_;

com::tibbo::aggregate::common::datatable::TableFormat*& com::tibbo::aggregate::common::action::command::EditData::CFT_EDIT_DATA()
{
    
    return CFT_EDIT_DATA_;
}
com::tibbo::aggregate::common::datatable::TableFormat* com::tibbo::aggregate::common::action::command::EditData::CFT_EDIT_DATA_;

void com::tibbo::aggregate::common::action::command::EditData::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_DATA(), CFT_EDIT_DATA_, static_cast< ::com::tibbo::aggregate::common::datatable::TableFormat* >(0));
}

void com::tibbo::aggregate::common::action::command::EditData::ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* parameters)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_DATA(), title, parameters, CFT_EDIT_DATA_);
}

void com::tibbo::aggregate::common::action::command::EditData::ctor(std::string* title, ::com::tibbo::aggregate::common::datatable::DataTable* data, bool readonly)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_DATA(), title);
    this->data = data;
    this->readOnly = readonly;
}

void com::tibbo::aggregate::common::action::command::EditData::ctor(std::string* title, std::string* iconId, std::string* expression, ::java::lang::Long* period)
{
    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_EDIT_DATA(), title);
    this->data = new ::com::tibbo::aggregate::common::datatable::DataTable();
    this->iconId = iconId;
    this->expression = expression;
    this->period = period;
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::command::EditData::constructParameters()
{
    auto rec = new ::com::tibbo::aggregate::common::datatable::DataRecord(CFT_EDIT_DATA_);
    rec)->addDataTable(data);
    rec)->addBoolean(::java::lang::Boolean::valueOf(useDockableFrame));
    rec)->addBoolean(::java::lang::Boolean::valueOf(readOnly));
    rec)->addString(iconId);
    rec)->addString(helpId);
    rec)->addString(help);
    rec)->addString(defaultContext);
    rec)->addDataTable(location != 0 ? location)->toDataTable() : static_cast< ::com::tibbo::aggregate::common::datatable::DataTable* >(0));
    rec)->addDataTable(dashboard != 0 ? dashboard)->toDataTable() : static_cast< ::com::tibbo::aggregate::common::datatable::DataTable* >(0));
    rec)->addString(expression);
    rec)->addLong(period);
    return rec)->wrap();
}

com::tibbo::aggregate::common::action::GenericActionResponse* com::tibbo::aggregate::common::action::command::EditData::createDefaultResponse()
{
    auto const table = getParameters())->rec())->getDataTable(CF_DATA_);
    return new ::com::tibbo::aggregate::common::action::GenericActionResponse(table);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::action::command::EditData::getData()
{
    return data;
}

void com::tibbo::aggregate::common::action::command::EditData::setData(::com::tibbo::aggregate::common::datatable::DataTable* data)
{
    this->data = data;
}

bool com::tibbo::aggregate::common::action::command::EditData::isUseDockableFrame()
{
    return useDockableFrame;
}

void com::tibbo::aggregate::common::action::command::EditData::setUseDockableFrame(bool useDockableFrame)
{
    this->useDockableFrame = useDockableFrame;
}

bool com::tibbo::aggregate::common::action::command::EditData::isReadOnly()
{
    return readOnly;
}

void com::tibbo::aggregate::common::action::command::EditData::setReadOnly(bool readonly)
{
    this->readOnly = readonly;
}

std::string com::tibbo::aggregate::common::action::command::EditData::getIconId()
{
    return iconId;
}

void com::tibbo::aggregate::common::action::command::EditData::setIconId(std::string* iconId)
{
    this->iconId = iconId;
}

std::string com::tibbo::aggregate::common::action::command::EditData::getHelpId()
{
    return helpId;
}

void com::tibbo::aggregate::common::action::command::EditData::setHelpId(std::string* helpId)
{
    this->helpId = helpId;
}

std::string com::tibbo::aggregate::common::action::command::EditData::getHelp()
{
    return help;
}

void com::tibbo::aggregate::common::action::command::EditData::setHelp(std::string* help)
{
    this->help = help;
}

std::string com::tibbo::aggregate::common::action::command::EditData::getDefaultContext()
{
    return defaultContext;
}

void com::tibbo::aggregate::common::action::command::EditData::setDefaultContext(std::string* defaultContext)
{
    this->defaultContext = defaultContext;
}

com::tibbo::aggregate::common::util::WindowLocation* com::tibbo::aggregate::common::action::command::EditData::getLocation()
{
    return location;
}

void com::tibbo::aggregate::common::action::command::EditData::setLocation(::com::tibbo::aggregate::common::util::WindowLocation* location)
{
    this->location = location;
}

com::tibbo::aggregate::common::util::DashboardProperties* com::tibbo::aggregate::common::action::command::EditData::getDashboard()
{
    return dashboard;
}

void com::tibbo::aggregate::common::action::command::EditData::setDashboard(::com::tibbo::aggregate::common::util::DashboardProperties* dashboard)
{
    this->dashboard = dashboard;
}

std::string com::tibbo::aggregate::common::action::command::EditData::getExpression()
{
    return expression;
}

void com::tibbo::aggregate::common::action::command::EditData::setExpression(std::string* expression)
{
    this->expression = expression;
}

java::lang::Long* com::tibbo::aggregate::common::action::command::EditData::getPeriod()
{
    return period;
}

void com::tibbo::aggregate::common::action::command::EditData::setPeriod(::java::lang::Long* period)
{
    this->period = period;
}

com::tibbo::aggregate::common::action::EditDataMerger* com::tibbo::aggregate::common::action::command::EditData::getMerger()
{
    return merger;
}

void com::tibbo::aggregate::common::action::command::EditData::setMerger(::com::tibbo::aggregate::common::action::EditDataMerger* merger)
{
    this->merger = merger;
}



java::lang::Class* com::tibbo::aggregate::common::action::command::EditData::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.command.EditData", 50);
    return c;
}

void com::tibbo::aggregate::common::action::command::EditData::clinit()
{
struct string_init_ {
    string_init_() {
    CF_DATA_ = u"data"_j;
    CF_USE_DOCKABLE_FRAME_ = u"useDockableFrame"_j;
    CF_READ_ONLY_ = u"readOnly"_j;
    CF_ICON_ID_ = u"iconId"_j;
    CF_HELP_ID_ = u"helpId"_j;
    CF_HELP_ = u"help"_j;
    CF_DEFAULT_CONTEXT_ = u"defaultContext"_j;
    CF_LOCATION_ = u"location"_j;
    CF_DASHBOARD_ = u"dashboard"_j;
    CF_EXPRESSION_ = u"expression"_j;
    CF_PERIOD_ = u"period"_j;
    }
};

    static string_init_ string_init_instance;

    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        CFT_EDIT_DATA_ = new ::com::tibbo::aggregate::common::datatable::TableFormat(int(1), int(1));
        {
            CFT_EDIT_DATA_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_DATA_)
                ->append(u"><T>"_j)->toString());
            CFT_EDIT_DATA_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_USE_DOCKABLE_FRAME_)
                ->append(u"><B><A=0>"_j)->toString());
            CFT_EDIT_DATA_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_READ_ONLY_)
                ->append(u"><B><A=0>"_j)->toString());
            CFT_EDIT_DATA_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_ICON_ID_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"conIconId"_j))
                ->append(u">"_j)->toString());
            CFT_EDIT_DATA_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_HELP_ID_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"conHelpId"_j))
                ->append(u">"_j)->toString());
            CFT_EDIT_DATA_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_HELP_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"help"_j))
                ->append(u">"_j)->toString());
            CFT_EDIT_DATA_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_DEFAULT_CONTEXT_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"conDefaultContext"_j))
                ->append(u">"_j)->toString());
            CFT_EDIT_DATA_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_LOCATION_)
                ->append(u"><T><F=N>"_j)->toString());
            CFT_EDIT_DATA_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_DASHBOARD_)
                ->append(u"><T><F=N>"_j)->toString());
            CFT_EDIT_DATA_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_EXPRESSION_)
                ->append(u"><S><F=N><D="_j)
                ->append(Cres::get())->getString(u"expression"_j))
                ->append(u"><E="_j)
                ->append(::com::tibbo::aggregate::common::datatable::field::StringFieldFormat::EDITOR_EXPRESSION())
                ->append(u">"_j)->toString());
            CFT_EDIT_DATA_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_PERIOD_)
                ->append(u"><L><F=N><D="_j)
                ->append(Cres::get())->getString(u"acRefreshPeriod"_j))
                ->append(u"><E="_j)
                ->append(::com::tibbo::aggregate::common::datatable::field::LongFieldFormat::EDITOR_PERIOD())
                ->append(u">"_j)->toString());
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::action::command::EditData::getClass0()
{
    return class_();
}

