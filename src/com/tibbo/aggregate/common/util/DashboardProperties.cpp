#include "util/DashboardProperties.h"


std::string DashboardProperties::FIELD_NAME = "name";
std::string DashboardProperties::FIELD_DESCRIPTION = "description";
std::string DashboardProperties::FIELD_LAYOUT = "layout";
std::string DashboardProperties::FIELD_COLUMNS = "columns";
std::string DashboardProperties::FIELD_CLOSABLE = "closable";
std::string DashboardProperties::FIELD_CLEANUP = "cleanup";
  
int DashboardProperties::LAYOUT_DOCKABLE = 0;
int DashboardProperties::LAYOUT_SCROLLABLE = 1;

TableFormat DashboardProperties::FORMAT = TableFormat(1, 1);
// TODO: нужно инициализировать FORMAT до конструктора DashboardProperties()
/*
static
  {
    FieldFormat ff = FieldFormat.create("<" + FIELD_NAME + "><S><F=N><D=" + Cres.get().getString("name") + ">");
    FORMAT.addField(ff);
    
    ff = FieldFormat.create("<" + FIELD_DESCRIPTION + "><S><F=N><D=" + Cres.get().getString("description") + ">");
    ff.addValidator(ValidatorHelper.DESCRIPTION_LENGTH_VALIDATOR);
    ff.addValidator(ValidatorHelper.DESCRIPTION_SYNTAX_VALIDATOR);
    FORMAT.addField(ff);
    
    ff = FieldFormat.create("<" + FIELD_LAYOUT + "><I><A=" + LAYOUT_DOCKABLE + "><D=" + Cres.get().getString("layout") + ">");
    ff.addSelectionValue(LAYOUT_DOCKABLE, Cres.get().getString("dbLayoutDockable"));
    ff.addSelectionValue(LAYOUT_SCROLLABLE, Cres.get().getString("dbLayoutScrollable"));
    FORMAT.addField(ff);
    
    ff = FieldFormat.create("<" + FIELD_COLUMNS + "><I><A=3><D=" + Cres.get().getString("columns") + ">");
    FORMAT.addField(ff);
    
    FORMAT.addField(FieldFormat.create("<" + FIELD_CLOSABLE + "><B><A=1><D=" + Cres.get().getString("clDashboardClosable") + ">"));
    
    FORMAT.addField(FieldFormat.create("<" + FIELD_CLEANUP + "><B><F=H>"));
    
    FORMAT.setNamingExpression("{" + FIELD_DESCRIPTION + "} != null ? {" + FIELD_DESCRIPTION + "} : ({" + FIELD_NAME + "} != null ? {" + FIELD_NAME + "} : '')");
  }
*/


DashboardProperties::DashboardProperties() : 
    AggreGateBean(FORMAT), layout(0), columns(0), closable(0), cleanup(0)
{
}
  
DashboardProperties::DashboardProperties(DataRecord &data) :
    AggreGateBean(FORMAT, data), layout(0), columns(0), closable(0), cleanup(0)
{
}
  
DashboardProperties::DashboardProperties(std::string& name, std::string& description) :
    AggreGateBean(FORMAT), name(name), description(description), layout(0), columns(0), closable(0), cleanup(0)
{    
}
  
DashboardProperties::DashboardProperties(std::string& name, std::string& description, int layout) :
    AggreGateBean(FORMAT), name(name), description(description), layout(layout), columns(0), closable(0), cleanup(0)
{
}
  
std::string DashboardProperties::getName() 
{
    return name;
}
  
void DashboardProperties::setName(std::string name)
{
    this->name = name;
}
  
std::string DashboardProperties::getDescription()
{
    return description;
}
  
void DashboardProperties::setDescription(std::string description)
{
    this->description = description;
}
  
int DashboardProperties::getLayout()
{
    return layout;
}
  
void DashboardProperties::setLayout(int layout)
{
    this->layout = layout;
}
  
int DashboardProperties::getColumns()
{
    return columns;
}
  
void DashboardProperties::setColumns(int columns)
{
    this->columns = columns;
}
  
void DashboardProperties::setClosable(bool closable)
{
    this->closable = closable;
}
  
bool DashboardProperties::isCleanup()
{
    return cleanup;
}
  
void DashboardProperties::setCleanup(bool cleanup)
{
    this->cleanup = cleanup;
}
  
bool DashboardProperties::isClosable()
{
    return closable;
}

DashboardProperties::operator std::string() const
{
    stringstream ss;
    ss <<"Dashboard [name=" <<name <<", description=" <<description <<", layout=" <<layout <<"]";

    return ss.str();
}
