#include "action/command/ShowError.h"

ShowError::ShowError()
	: GenericActionCommand(ActionUtils::CMD_SHOW_ERROR, CFT_SHOW_ERROR, TableFormatPtr())
{
 level = 0;
}

//ShowError::ShowError(const std::string & title, const std::string & message, int level, ::java::lang::Throwable* exception):GenericActionCommand(ActionUtils::CMD_SHOW_ERROR, title)
//{
// this->message = message;
// this->level = level;
// this->exception = exception;
//}

void ShowError::Init()
{
//todo
// if (!CFT_SHOW_ERROR)
//  {
//	CFT_SHOW_ERROR = TableFormatPtr (new TableFormat(1, 1));
//	CFT_SHOW_ERROR->addField("<" + CF_LEVEL + "><I>");
//	CFT_SHOW_ERROR->addField("<" + CF_MESSAGE + "><S><F=N>");
//	CFT_SHOW_ERROR->addField("<" + CF_EXCEPTION + "><S><F=N>");
//   }

}

DataTablePtr ShowError::constructParameters()
{
//todo
  //	DataTablePtr t = DataTablePtr (new DataTable(CFT_SHOW_ERROR));
//    auto exTrace = new ::java::io::StringWriter();
//    auto pw = new ::java::io::PrintWriter(static_cast< ::java::io::Writer* >(exTrace));
//    exception)->printStackTrace(pw);

   // std::string finalDetails = "";//exTrace->toString();
   // t->addRecord()->addInt(level).addString(message).addString(finalDetails);
   // return t;
   return DataTablePtr();
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
