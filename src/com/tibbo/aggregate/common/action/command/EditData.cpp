#include "action/command/EditData.h"

#include "action/ActionUtils.h"
#include "datatable/field/LongFieldFormat.h"
#include "datatable/field/StringFieldFormat.h"


EditData::EditData()
    : GenericActionCommand(ActionUtils::CMD_EDIT_DATA, CFT_EDIT_DATA(), NULL)
{    
    this->useDockableFrame = false;
    this->readOnly = false;
    this->period = 0;
}

EditData::EditData(const std::string & title, DataTablePtr parameters)
    : GenericActionCommand(ActionUtils::CMD_EDIT_DATA, title, parameters, CFT_EDIT_DATA()
{
    this->useDockableFrame = false;
    this->readOnly = false;
    this->period = 0;
}

EditData::EditData(const std::string & title, DataTablePtr data, bool readonly)
    : GenericActionCommand(ActionUtils::CMD_EDIT_DATA, title)
{    
    this->data = data;
    this->useDockableFrame = false;
    this->readOnly = readonly;
    this->period = 0;
}

EditData::EditData(const std::string & title, const std::string & iconId, const std::string & expression, long  period)
    : GenericActionCommand(ActionUtils::CMD_EDIT_DATA, title)
{
   this->data.reset( new DataTable() );
   this->iconId = iconId;
   this->expression = expression;
   this->period = period;
   this->useDockableFrame = false;
   this->readOnly = readonly;
}

TableFormatPtr EditData::CFT_EDIT_DATA()
{
    if (CFT_EDIT_DATA_) {
        CFT_EDIT_DATA_.reset( new TableFormat(1, 1) );
        CFT_EDIT_DATA_->addField( std::string("<").append(CF_DATA_).append("><T>") );
        CFT_EDIT_DATA_->addField( std::string("<").append(CF_USE_DOCKABLE_FRAME_).append("><B><A=0>") );
        CFT_EDIT_DATA_->addField( std::string("<").append(CF_READ_ONLY_).append("><B><A=0>") );
        CFT_EDIT_DATA_->addField( std::string("<").append(CF_ICON_ID_).append("><S><F=N><D=")
                                    .append(Cres::get()->getString("conIconId")).append(">") );
        CFT_EDIT_DATA_->addField( std::string("<").append(CF_HELP_ID_).append("><S><F=N><D=")
                                    .append(Cres::get()->getString("conHelpId")).append(">") );
        CFT_EDIT_DATA_->addField( std::string("<").append(CF_HELP_).append("><S><F=N><D=")
                                    .append(Cres::get()->getString("help")).append(">") );
        CFT_EDIT_DATA_->addField( std::string("<").append(CF_DEFAULT_CONTEXT_).append("><S><F=N><D=")
                                    .append(Cres::get()->getString("conDefaultContext")).append(">") );
        CFT_EDIT_DATA_->addField( std::string("<").append(CF_LOCATION_).append("><T><F=N>") );
        CFT_EDIT_DATA_->addField( std::string("<").append(CF_DASHBOARD_).append("><T><F=N>") );
        CFT_EDIT_DATA_->addField( std::string("<").append(CF_EXPRESSION_).append("><S><F=N><D=")
                                    .append(Cres::get()->getString("expression"))
                                    .append("><E=").append(StringFieldFormat::EDITOR_EXPRESSION).append(">") );
        CFT_EDIT_DATA_->addField( std::string("<").append(CF_PERIOD_).append("><L><F=N><D=")
                                    .append(Cres::get()->getString("acRefreshPeriod"))
                                    .append("><E=").append(LongFieldFormat::EDITOR_PERIOD).append(">") );
    }

    return CFT_EDIT_DATA_;
}


DataTablePtr EditData::constructParameters()
{
    DataRecordPtr rec = new DataRecord(CFT_EDIT_DATA();
    rec->addDataTable(data);
    rec->addBoolean(useDockableFrame);
    rec->addBoolean(readOnly);
    rec->addString(iconId);
    rec->addString(helpId);
    rec->addString(help);
    rec->addString(defaultContext);
    rec->addDataTable(location != 0 ? location->toDataTable() : static_cast< DataTablePtr >(0));
    rec->addDataTable(dashboard != 0 ? dashboard->toDataTable() : static_cast< DataTablePtr >(0));
    rec->addString(expression);
    rec->addLong(period);

    return rec->wrap();
}

GenericActionResponsePtr EditData::createDefaultResponse()
{
    DataTablePtr table = getParameters()->rec()->getDataTable(CF_DATA_);

    return new GenericActionResponse(table);
}

DataTablePtr EditData::getData()
{
    return data;
}

void EditData::setData(DataTablePtr data)
{
    this->data = data;
}

bool EditData::isUseDockableFrame()
{
    return useDockableFrame;
}

void EditData::setUseDockableFrame(bool useDockableFrame)
{
    this->useDockableFrame = useDockableFrame;
}

bool EditData::isReadOnly()
{
    return readOnly;
}

void EditData::setReadOnly(bool readonly)
{
    this->readOnly = readonly;
}

std::string EditData::getIconId()
{
    return iconId;
}

void EditData::setIconId(const std::string & iconId)
{
    this->iconId = iconId;
}

std::string EditData::getHelpId()
{
    return helpId;
}

void EditData::setHelpId(const std::string & helpId)
{
    this->helpId = helpId;
}

std::string EditData::getHelp()
{
    return help;
}

void EditData::setHelp(const std::string & help)
{
    this->help = help;
}

std::string EditData::getDefaultContext()
{
    return defaultContext;
}

void EditData::setDefaultContext(const std::string & defaultContext)
{
    this->defaultContext = defaultContext;
}

WindowLocationPtr EditData::getLocation()
{
    return location;
}

void EditData::setLocation(WindowLocationPtr location)
{
    this->location = location;
}

DashboardPropertiesPtr EditData::getDashboard()
{
    return dashboard;
}

void EditData::setDashboard(DashboardPropertiesPtr dashboard)
{
    this->dashboard = dashboard;
}

std::string EditData::getExpression()
{
    return expression;
}

void EditData::setExpression(const std::string & expression)
{
    this->expression = expression;
}

long EditData::getPeriod()
{
    return period;
}

void EditData::setPeriod(long  period)
{
    this->period = period;
}

EditDataMergerPtr EditData::getMerger()
{
    return merger;
}

void EditData::setMerger(EditDataMergerPtr merger)
{
    this->merger = merger;
}
