#include "action/command/EditReport.h"



const std::string EditReport::CF_TEMPLATE = "template";
const std::string EditReport::CF_DATA = "data";
const std::string EditReport::RF_TEMPLATE = "template";
const std::string EditReport::RF_RESULT = "result";

TableFormatPtr EditReport::CFT_EDIT_REPORT;
TableFormatPtr EditReport::RFT_EDIT_REPORT;


EditReport::EditReport()
	: GenericActionCommand(ActionUtils::CMD_EDIT_REPORT, CFT_EDIT_REPORT, RFT_EDIT_REPORT)
{
Init();
}

EditReport::EditReport(const std::string& title, const std::string& template_, DataTablePtr data)
    : GenericActionCommand(title,template_,data)
{
Init();
    this->template_ = template_;
    this->data = data;
}

EditReport::EditReport(const std::string& title, DataTablePtr parameters)
	: GenericActionCommand(ActionUtils::CMD_EDIT_REPORT, title, parameters, CFT_EDIT_REPORT)
{
Init();
}


void EditReport::Init()
{
    if (!CFT_EDIT_REPORT)
    {
     CFT_EDIT_REPORT = TableFormatPtr(new TableFormat(1, 1));

     CFT_EDIT_REPORT->addField("<"+CF_TEMPLATE+"><S>");
     CFT_EDIT_REPORT->addField("<"+CF_DATA+"><T>" );
    }

    if (!RFT_EDIT_REPORT)
    {
        RFT_EDIT_REPORT = TableFormatPtr(new TableFormat(1, 1));

        RFT_EDIT_REPORT->addField("<"+RF_RESULT+"><S>");
        RFT_EDIT_REPORT->addField("<"+RF_TEMPLATE+"><S><F=N>");
    }

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

