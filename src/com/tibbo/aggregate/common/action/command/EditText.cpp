#include "action/command/EditText.h"
#include "action/ActionUtils.h"
#include "datatable/TableFormat.h"

const std::string EditText::CF_TEXT = "text";
const std::string EditText::CF_MODE = "mode";
const std::string EditText::RF_RESULT = "result";
const std::string EditText::RF_TEXT = "text";

TableFormatPtr EditText::CFT_EDIT_TEXT_;
TableFormatPtr EditText::RFT_EDIT_TEXT_;


EditText::EditText()
    : GenericActionCommand(ActionUtils::CMD_EDIT_TEXT, CFT_EDIT_TEXT(), RFT_EDIT_TEXT())
{
}

EditText::EditText(const std::string & title, const std::string & text, const std::string & mode)
    : GenericActionCommand(ActionUtils::CMD_EDIT_TEXT, title)
{
    this->text = text;
    this->mode = mode;
}

EditText::EditText(const std::string & title, DataTablePtr parameters)
    : GenericActionCommand(ActionUtils::CMD_EDIT_TEXT, title, parameters, CFT_EDIT_TEXT())
{
}


TableFormatPtr EditText::CFT_EDIT_TEXT()
{
    if (!CFT_EDIT_TEXT_)
    {
        CFT_EDIT_TEXT_ = TableFormatPtr(new TableFormat(1, 1));

        CFT_EDIT_TEXT_->addField("<"+CF_TEXT+"><S>");
        CFT_EDIT_TEXT_->addField("<"+CF_MODE+"><S><F=N>");
    }

    return CFT_EDIT_TEXT_;
}

TableFormatPtr EditText::RFT_EDIT_TEXT()
{
    if (!RFT_EDIT_TEXT_)
    {
        RFT_EDIT_TEXT_ = TableFormatPtr(new TableFormat(1, 1));

        RFT_EDIT_TEXT_->addField("<"+RF_RESULT+"><S>");
        RFT_EDIT_TEXT_->addField("<"+RF_TEXT+"><S><F=N>");
    }

    return RFT_EDIT_TEXT_;
}

DataTablePtr EditText::constructParameters()
{    //todo
  //return new DataTable(CFT_EDIT_TEXT, text, mode);
  return DataTablePtr();
}

std::string EditText::getText()
{
    return text;
}

void EditText::setText(const std::string & text)
{
    this->text = text;
}

std::string EditText::getMode()
{
    return mode;
}

void EditText::setMode(const std::string & mode)
{
    this->mode = mode;
}
