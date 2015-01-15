#include "ActivateDashboard.h"

std::string  ActivateDashboard::CF_NAME      = "name";
std::string  ActivateDashboard::CF_PATH      = "path";
std::string  ActivateDashboard::CF_LOCATION  = "location";
std::string  ActivateDashboard::CF_DASHBOARD = "dashboard";

void ActivateDashboard::Init()
{
/*
 CFT_ACTIVATE_DASHBOARD = new TableFormat(1, 1);

 CFT_ACTIVATE_DASHBOARD->addField("<"+ CF_NAME +"><S>");
 FieldFormat *ff = new FieldFormat(CF_PATH,FieldFormat::STRING_FIELD, Cres::get()->getString(u"dashboard"));
 ff->setNullable(true);
 ff->setEditor(StringFieldFormat::EDITOR_CONTEXT());
 ff->setEditorOptions(StringFieldFormat::encodeMaskEditorOptions(Contexts::TYPE_DASHBOARD()));
 CFT_ACTIVATE_DASHBOARD->addField(ff);

 ff = FieldFormat("<" + CF_LOCATION + "><T><F=N>");
 ff->setDefault(new WindowLocation()->toDataTable());
 CFT_ACTIVATE_DASHBOARD->addField(ff);

 ff = FieldFormat("<" + CF_DASHBOARD + "><T><F=N>");
 ff->setDefault(new DashboardProperties()->toDataTable());
 CFT_ACTIVATE_DASHBOARD->addField(ff);  */
}

/*
ActivateDashboard::ActivateDashboard()
{
  Init();

 GenericActionCommand(ActionUtils::CMD_ACTIVATE_DASHBOARD, CFT_ACTIVATE_DASHBOARD,0);
}   */

/*
void ActivateDashboard::ActivateDashboard(const std::string & title, DataTable* parameters)
{
  GenericActionCommand::GenericActionCommand(ActionUtils::CMD_ACTIVATE_DASHBOARD, title, parameters, CFT_ACTIVATE_DASHBOARD);
}

ActivateDashboard::ActivateDashboard(const std::string &name)
{
 GenericActionCommand::GenericActionCommand(CMD_ACTIVATE_DASHBOARD,0);
 this->name = name;
}


DataTable* ActivateDashboard::constructParameters()
{
 return new DataTable(CFT_ACTIVATE_DASHBOARD, name, path, location != 0 ? location->toDataTable() : 0, dashboard != 0 ? dashboard->toDataTable() : 0);
}
 */
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
WindowLocation* ActivateDashboard::getLocation()
{
	return location;
}

void ActivateDashboard::setLocation(WindowLocation* location)
{
	this->location = location;
}

DashboardProperties* ActivateDashboard::getDashboard()
{
	return dashboard;
}

void ActivateDashboard::setDashboard(DashboardProperties* dashboard)
{
	this->dashboard = dashboard;
}
    */



