#include "util/DashboardProperties.h"
#include "datatable/validator/ValidatorHelper.h"


std::string DashboardProperties::FIELD_NAME = "name";
std::string DashboardProperties::FIELD_DESCRIPTION = "description";
std::string DashboardProperties::FIELD_LAYOUT = "layout";
std::string DashboardProperties::FIELD_COLUMNS = "columns";
std::string DashboardProperties::FIELD_CLOSABLE = "closable";
std::string DashboardProperties::FIELD_CLEANUP = "cleanup";
  
int DashboardProperties::LAYOUT_DOCKABLE = 0;
int DashboardProperties::LAYOUT_SCROLLABLE = 1;


TableFormatPtr DashboardProperties::FORMAT()
{
    if (!FORMAT_) {
        FORMAT_.reset( new TableFormat(1, 1) );
        //TODO: Cres::get()->getString
/*
        FieldFormat* ff = FieldFormat::create( std::string("<").append(FIELD_NAME).append("><S><F=N><D=")
                                                .append(Cres::get()->getString("name")).append(">") );
        FORMAT_->addField(ff);

        ff = FieldFormat.create( std::string("<").append(FIELD_DESCRIPTION).append("><S><F=N><D=")
                                    .append(Cres::get()->getString("description")).append(">") );
        ff->addValidator(ValidatorHelper::DESCRIPTION_LENGTH_VALIDATOR_);
        ff->addValidator(ValidatorHelper::DESCRIPTION_SYNTAX_VALIDATOR_);
        FORMAT_->addField(ff);

        ff = FieldFormat.create( std::string("<").append(FIELD_LAYOUT).append("><I><A=").append(LAYOUT_DOCKABLE)
                                    .append("><D=").append(Cres::get()->getString("layout")).append(">") );
        ff->addSelectionValue(LAYOUT_DOCKABLE, Cres::get()->getString("dbLayoutDockable"));
        ff->addSelectionValue(LAYOUT_SCROLLABLE, Cres::get()->getString("dbLayoutScrollable"));
        FORMAT_->addField(ff);

        ff = FieldFormat.create( std::string("<").append(FIELD_COLUMNS).append("><I><A=3><D=")
                                    .append(Cres::get()->getString("columns") + ">");
        FORMAT_->addField(ff);

        FORMAT_->addField(FieldFormat::create( std::string("<").append(FIELD_CLOSABLE).append("><B><A=1><D=")
                                    .append(Cres::get()->getString("clDashboardClosable")).append(">")) );

        FORMAT_->addField(FieldFormat::create( std::string("<").append(FIELD_CLEANUP).append("><B><F=H>")) );

        FORMAT_->setNamingExpression(  std::string("{").append(FIELD_DESCRIPTION).append("} != null ? {")
                                        .append(FIELD_DESCRIPTION).append("} : ({").append(FIELD_NAME)
                                        .append("} != null ? {").append(FIELD_NAME).append("} : '')") );
*/
    }

    return FORMAT_;
}


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
