#include "action/command/ShowError.h"


#include "action/ActionUtils.h"
//#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
//#include <com/tibbo/aggregate/common/datatable/DataTable.h"
//#include <com/tibbo/aggregate/common/datatable/TableFormat.h"


ShowError::ShowError()
    : GenericActionCommand(ActionUtils::CMD_SHOW_ERROR, CFT_SHOW_ERROR(), NULL)
{    
    level = 0;
}

//ShowError::ShowError(const std::string & title, const std::string & message, int level, ::java::lang::Throwable* exception)
//{
//    super(ActionUtils::CMD_SHOW_ERROR, title);
//    this->message = message;
//    this->level = level;
//    this->exception = exception;
//}

std::string& ShowError::CF_LEVEL()
{    
    return CF_LEVEL_;
}

std::string& ShowError::CF_MESSAGE()
{   
    return CF_MESSAGE_;
}

std::string& ShowError::CF_EXCEPTION()
{    
    return CF_EXCEPTION_;
}

TableFormatPtr ShowError::CFT_SHOW_ERROR()
{
    if (!CFT_SHOW_ERROR_) {
        CFT_SHOW_ERROR_ = new TableFormat(1, 1);
        CFT_SHOW_ERROR_->addField("<" + CF_LEVEL + "><I>");
        CFT_SHOW_ERROR_->addField("<" + CF_MESSAGE + "><S><F=N>");
        CFT_SHOW_ERROR_->addField("<" + CF_EXCEPTION + "><S><F=N>");
    }
    return CFT_SHOW_ERROR_;
}

DataTablePtr ShowError::constructParameters()
{
    DataTablePtr t = new DataTable(CFT_SHOW_ERROR_);
//    auto exTrace = new ::java::io::StringWriter();
//    auto pw = new ::java::io::PrintWriter(static_cast< ::java::io::Writer* >(exTrace));
//    exception)->printStackTrace(pw);

    std::string finalDetails = "";//exTrace->toString();
    t->addRecord()->addInt(level).addString(message).addString(finalDetails);
    return t;
}

int ShowError::getLevel()
{
    return level;
}

void ShowError::setLevel(int level)
{
    this->level = level;
}

std::string ShowError::getMessage()
{
    return message;
}

void ShowError::setMessage(const std::string & message)
{
    this->message = message;
}

//java::lang::Throwable* com::tibbo::aggregate::common::action::command::ShowError::getException()
//{
//    return exception;
//}

//void ShowError::setException(::java::lang::Throwable* exception)
//{
//    this->exception = exception;
//}
