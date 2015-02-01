#include "action/command/EditText.h"
#include "action/ActionUtils.h"

const std::string EditText::CF_TEXT = "text";
const std::string EditText::CF_MODE = "mode";
const std::string EditText::RF_RESULT = "result";
const std::string EditText::RF_TEXT = "text";


EditText::EditText()
    : GenericActionCommand(ActionUtils::CMD_EDIT_TEXT, CFT_EDIT_TEXT, RFT_EDIT_TEXT)
{
 Init();
}

EditText::EditText(const std::string & title, const std::string & text, const std::string & mode):GenericActionCommand(ActionUtils::CMD_EDIT_TEXT, title)
{
 Init();
  this->text = text;
  this->mode = mode;
}

EditText::EditText(const std::string & title, DataTablePtr parameters):GenericActionCommand(ActionUtils::CMD_EDIT_TEXT, title, parameters, CFT_EDIT_TEXT)
{
   Init();
}


void EditText::Init()
{
//todo
//	if (!CFT_EDIT_TEXT)
//	{
//		CFT_EDIT_TEXT.reset(new TableFormat(1, 1));
//
//		CFT_EDIT_TEXT->addField("<"+CF_TEXT+"><S>");
//		CFT_EDIT_TEXT->addField("<"+CF_MODE+"><S><F=N>");
//	}
//
//
//	if (!RFT_EDIT_TEXT)
//	{
//		RFT_EDIT_TEXT.reset(new TableFormat(1, 1));
//
//		RFT_EDIT_TEXT->addField("<"+RF_RESULT+"><S>");
//		RFT_EDIT_TEXT->addField("<"+RF_TEXT+"><S><F=N>");
//	}
    
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
