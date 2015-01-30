#include "ActivateDashboard.h"
#include "action/ActionUtils.h"
#include "datatable/TableFormat.h"
#include "datatable/field/StringFieldFormat.h"
#include "context/Contexts.h"
#include "Cres.h"

std::string  ActivateDashboard::CF_NAME      = "name";
std::string  ActivateDashboard::CF_PATH      = "path";
std::string  ActivateDashboard::CF_LOCATION  = "location";
std::string  ActivateDashboard::CF_DASHBOARD = "dashboard";


ActivateDashboard::ActivateDashboard()
    : GenericActionCommand(ActionUtils::CMD_ACTIVATE_DASHBOARD, CFT_ACTIVATE_DASHBOARD(),0)
{     
}


ActivateDashboard::ActivateDashboard(const std::string& title, DataTablePtr parameters)
    : GenericActionCommand(ActionUtils::CMD_ACTIVATE_DASHBOARD, title, parameters, CFT_ACTIVATE_DASHBOARD())
{    
}

ActivateDashboard::ActivateDashboard(const std::string& name)
    : GenericActionCommand(ActionUtils::CMD_ACTIVATE_DASHBOARD,0)
{    
    this->name = name;
}

TableFormatPtr ActivateDashboard::CFT_ACTIVATE_DASHBOARD()
{
    if (!CFT_ACTIVATE_DASHBOARD_) {
        CFT_ACTIVATE_DASHBOARD_ = TableFormatPtr( new TableFormat(1, 1) );

        //TODO: StringFieldFormat
//        CFT_ACTIVATE_DASHBOARD_->addField( std::string("<").append(CF_NAME).append("><S>") );
//        FieldFormatPtr ff = FieldFormatPtr(new FieldFormat(CF_PATH, FieldFormat::STRING_FIELD, Cres::get()->getString("dashboard")) );
//        ff->setNullable(true);
//        ff->setEditor(StringFieldFormat::EDITOR_CONTEXT);
//        ff->setEditorOptions(StringFieldFormat::encodeMaskEditorOptions(Contexts::TYPE_DASHBOARD));
//        CFT_ACTIVATE_DASHBOARD_->addField(ff);

//        ff = FieldFormat("<" + CF_LOCATION + "><T><F=N>");
//        ff->setDefault(new WindowLocation()->toDataTable());
//        CFT_ACTIVATE_DASHBOARD_->addField(ff);

//        ff = FieldFormat("<" + CF_DASHBOARD + "><T><F=N>");
//        ff->setDefault(new DashboardProperties()->toDataTable());
//        CFT_ACTIVATE_DASHBOARD_->addField(ff);
    }

    return CFT_ACTIVATE_DASHBOARD_;
}


//DataTablePtr ActivateDashboard::constructParameters()
//{
//    return new DataTable(CFT_ACTIVATE_DASHBOARD(), name, path, location != 0 ? location->toDataTable() : 0, dashboard != 0 ? dashboard->toDataTable() : 0);
//}

std::string ActivateDashboard::getName()
{
    return name;
}

void ActivateDashboard::setName(std::string name)
{
    this->name = name;
}

std::string ActivateDashboard::getPath()
{
    return path;
}

void ActivateDashboard::setPath(std::string path)
{
    this->path = path;
}

/*
WindowLocationPtr ActivateDashboard::getLocation()
{
	return location;
}

void ActivateDashboard::setLocation(WindowLocationPtr location)
{
	this->location = location;
}

DashboardPropertiesPtr ActivateDashboard::getDashboard()
{
	return dashboard;
}

void ActivateDashboard::setDashboard(DashboardPropertiesPtr dashboard)
{
	this->dashboard = dashboard;
}
*/



