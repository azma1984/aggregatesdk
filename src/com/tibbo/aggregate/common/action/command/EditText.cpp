#include "action/command/EditText.h"
#include "action/ActionUtils.h"

const std::string EditText::CF_TEXT_ = "text";
const std::string EditText::CF_MODE_ = "mode";
const std::string EditText::RF_RESULT_ = "result";
const std::string EditText::RF_TEXT_ = "text";


EditText::EditText()
{
//todo
  //  GenericActionCommand(ActionUtils::CMD_EDIT_TEXT, CFT_EDIT_TEXT(), RFT_EDIT_TEXT());
}

EditText::EditText(const std::string & title, const std::string & text, const std::string & mode)
{
//todo
   // GenericActionCommand(ActionUtils::CMD_EDIT_TEXT, title);
    this->text = text;
    this->mode = mode;
}

EditText::EditText(const std::string & title, DataTablePtr parameters)
{   //todo
   //	GenericActionCommand(ActionUtils::CMD_EDIT_TEXT, title, parameters, CFT_EDIT_TEXT());
}


TableFormatPtr EditText::CFT_EDIT_TEXT()
{
    if (!CFT_EDIT_TEXT_) {
        CFT_EDIT_TEXT_.reset(new TableFormat(1, 1));

        CFT_EDIT_TEXT_->addField( std::string("<").append(CF_TEXT_).append("><S>") );
        CFT_EDIT_TEXT_->addField( std::string("<").append(CF_MODE_).append("><S><F=N>") );
    }

    return CFT_EDIT_TEXT_;
}

TableFormatPtr EditText::RFT_EDIT_TEXT()
{
    if (!RFT_EDIT_TEXT_) {
        RFT_EDIT_TEXT_.reset(new TableFormat(1, 1));

        RFT_EDIT_TEXT_->addField( std::string("<").append(RF_RESULT_).append("><S>") );
        RFT_EDIT_TEXT_->addField( std::string("<").append(RF_TEXT_).append("><S><F=N>") );
    }
    
    return RFT_EDIT_TEXT_;
}


DataTablePtr EditText::constructParameters()
{    //todo
   //	return new DataTable(CFT_EDIT_TEXT(), text, mode);
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
