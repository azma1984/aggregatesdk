#include "action/command/EditCode.h"

#include "action/ActionUtils.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"

const std::string EditCode::CF_CODE_ = "code";
const std::string EditCode::CF_MODE_ = "mode";
const std::string EditCode::RF_RESULT_ = "result";
const std::string EditCode::RF_CODE_ = "code";


EditCode::EditCode()
{
    GenericActionCommand(ActionUtils::CMD_EDIT_TEXT, CFT_EDIT_CODE(), RFT_EDIT_CODE());
}

EditCode::EditCode(const std::string & title, const std::string & code, const std::string & mode)
{
    GenericActionCommand(ActionUtils::CMD_EDIT_CODE, title);
    this->code = code;
    this->mode = mode;
}

EditCode::EditCode(const std::string & title, DataTablePtr parameters)
{
    GenericActionCommand(ActionUtils::CMD_EDIT_CODE, title, parameters, CFT_EDIT_CODE());
}

TableFormatPtr EditCode::CFT_EDIT_CODE()
{
    if (!CFT_EDIT_CODE_) {
        CFT_EDIT_CODE_.reset(new TableFormat(1, 1));

        CFT_EDIT_CODE_->addField( std::string("<").append(CF_CODE_).append("><S>") );
        CFT_EDIT_CODE_->addField( std::string("<").append(CF_MODE_).append("><S><F=N>") );
    }

    return CFT_EDIT_CODE_;
}

TableFormatPtr EditCode::RFT_EDIT_CODE()
{
    if (!RFT_EDIT_CODE_) {
        RFT_EDIT_CODE_.reset(new TableFormat(1, 1));

        RFT_EDIT_CODE_->addField( std::string("<").append(RF_RESULT_).append("><S>") );
        RFT_EDIT_CODE_->addField( std::string("<").append(RF_CODE_).append("><S><F=N>") );
    }

    return RFT_EDIT_CODE_;
}



DataTablePtr EditCode::constructParameters()
{
    return DataTablePtr(new DataTable(CFT_EDIT_CODE(), code, mode));
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
