#include "action/command/EditCode.h"

const std::string EditCode::CF_CODE = "code";
const std::string EditCode::CF_MODE = "mode";
const std::string EditCode::RF_RESULT = "result";
const std::string EditCode::RF_CODE = "code";

TableFormatPtr EditCode::CFT_EDIT_CODE_;
TableFormatPtr EditCode::RFT_EDIT_CODE_;


EditCode::EditCode()
    : GenericActionCommand(ActionUtils::CMD_EDIT_TEXT, CFT_EDIT_CODE(), RFT_EDIT_CODE())
{    
}

EditCode::EditCode(const std::string & title, const std::string & code, const std::string & mode)
    : GenericActionCommand(ActionUtils::CMD_EDIT_CODE, title)
{    
    this->code = code;
    this->mode = mode;
}

EditCode::EditCode(const std::string & title, DataTablePtr parameters)
    : GenericActionCommand(ActionUtils::CMD_EDIT_CODE, title, parameters, CFT_EDIT_CODE())
{    
}

TableFormatPtr EditCode::CFT_EDIT_CODE()
{
    if (!CFT_EDIT_CODE_) {
        CFT_EDIT_CODE_.reset(new TableFormat(1, 1));

        CFT_EDIT_CODE_->addField( std::string("<").append(CF_CODE).append("><S>") );
        CFT_EDIT_CODE_->addField( std::string("<").append(CF_MODE).append("><S><F=N>") );
    }

    return CFT_EDIT_CODE_;
}

TableFormatPtr EditCode::RFT_EDIT_CODE()
{
    if (!RFT_EDIT_CODE_) {
        RFT_EDIT_CODE_.reset(new TableFormat(1, 1));

        RFT_EDIT_CODE_->addField( std::string("<").append(RF_RESULT).append("><S>") );
        RFT_EDIT_CODE_->addField( std::string("<").append(RF_CODE).append("><S><F=N>") );
    }

    return RFT_EDIT_CODE_;
}



DataTablePtr EditCode::constructParameters()
{
    std::list<AgObjectPtr> firstRowData;
    //TODO: append in firstRowData code, mode

    return DataTablePtr(new DataTable(CFT_EDIT_CODE(), firstRowData));
}

std::string EditCode::getCode()
{
    return code;
}

void EditCode::setCode(const std::string & code)
{
    this->code = code;
}

std::string EditCode::getMode()
{
    return mode;
}

void EditCode::setMode(const std::string & mode)
{
    this->mode = mode;
}
