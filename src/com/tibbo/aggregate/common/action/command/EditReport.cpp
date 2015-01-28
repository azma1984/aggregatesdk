#include "action/command/EditReport.h"

#include "action/ActionUtils.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"

const std::string EditReport::CF_TEMPLATE = "template";
const std::string EditReport::CF_DATA = "data";
const std::string EditReport::RF_TEMPLATE = "template";
const std::string EditReport::RF_RESULT = "result";


EditReport::EditReport()
    : GenericActionCommand(ActionUtils::CMD_EDIT_REPORT, CFT_EDIT_REPORT(), RFT_EDIT_REPORT())
{    
}

EditReport::EditReport(const std::string& title, const std::string& template_, DataTablePtr data)
    : GenericActionCommand(title,template_,data)
{    
    this->template_ = template_;
    this->data = data;
}

EditReport::EditReport(const std::string& title, DataTablePtr parameters)
    : GenericActionCommand(ActionUtils::CMD_EDIT_REPORT, title, parameters, CFT_EDIT_REPORT())
{    
}


TableFormatPtr EditReport::CFT_EDIT_REPORT()
{
    if (!CFT_EDIT_REPORT_) {
        CFT_EDIT_REPORT_.reset(new TableFormat(1, 1));

        CFT_EDIT_REPORT_->addField( std::string("<").append(CF_TEMPLATE).append("><S>") );
        CFT_EDIT_REPORT_->addField( std::string("<").append(CF_DATA).append("><T>") );
    }

    return CFT_EDIT_REPORT_;
}

TableFormatPtr EditReport::RFT_EDIT_REPORT()
{
    if (!RFT_EDIT_REPORT_) {
        RFT_EDIT_REPORT_.reset(new TableFormat(1, 1));

        RFT_EDIT_REPORT_->addField( std::string("<").append(RF_RESULT).append("><S>") );
        RFT_EDIT_REPORT_->addField( std::string("<").append(RF_TEMPLATE).append("><S><F=N>") );
    }

    return RFT_EDIT_REPORT_;
}

std::string EditReport::getTemplate()
{
    return template_;
}

void EditReport::setTemplate(const std::string & template_)
{
    this->template_ = template_;
}

DataTablePtr EditReport::getData()
{
    return data;
}

void EditReport::setData(DataTablePtr data)
{
    this->data = data;
}

