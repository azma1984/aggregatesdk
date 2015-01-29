#include "action/command/ShowError.h"

//ShowError::ShowError(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//ShowError::ShowError()
//    : ShowError(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//ShowError::ShowError(const std::string & title, const std::string & message, int level, ::java::lang::Throwable* exception)
//    : ShowError(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(title,message,level,exception);
//}
//
//std::string& ShowError::CF_LEVEL()
//{
//
//    return CF_LEVEL_;
//}
//std::string ShowError::CF_LEVEL_;
//
//std::string& ShowError::CF_MESSAGE()
//{
//
//    return CF_MESSAGE_;
//}
//std::string ShowError::CF_MESSAGE_;
//
//std::string& ShowError::CF_EXCEPTION()
//{
//
//    return CF_EXCEPTION_;
//}
//std::string ShowError::CF_EXCEPTION_;
//
//DateTableFormatPtr& ShowError::CFT_SHOW_ERROR()
//{
//
//    return CFT_SHOW_ERROR_;
//}
//DateTableFormatPtr ShowError::CFT_SHOW_ERROR_;
//
//void ShowError::ctor()
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_ERROR(), CFT_SHOW_ERROR_, static_cast< TableFormatPtr >(0));
//}
//
//void ShowError::ctor(const std::string & title, const std::string & message, int level, ::java::lang::Throwable* exception)
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_ERROR(), title);
//    this->message = message;
//    this->level = level;
//    this->exception = exception;
//}
//
//DateDataTablePtr ShowError::constructParameters()
//{
//    auto t = new DataTable(CFT_SHOW_ERROR_);
//    auto exTrace = new ::java::io::StringWriter();
//    auto pw = new ::java::io::PrintWriter(static_cast< ::java::io::Writer* >(exTrace));
//    exception)->printStackTrace(pw);
//    auto finalDetails = exTrace)->toString();
//    t)->addRecord())->addInt(level)))->addString(message))->addString(finalDetails);
//    return t;
//}
//
//int ShowError::getLevel()
//{
//    return level;
//}
//
//void ShowError::setLevel(int level)
//{
//    this->level = level;
//}
//
//std::string ShowError::getMessage()
//{
//    return message;
//}
//
//void ShowError::setMessage(const std::string & message)
//{
//    this->message = message;
//}
//
//java::lang::Throwable* ShowError::getException()
//{
//    return exception;
//}
//
//void ShowError::setException(::java::lang::Throwable* exception)
//{
//    this->exception = exception;
//}
//
//
//
//java::lang::Class* ShowError::class_()
//{
//    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.action.command.ShowError", 51);
//    return c;
//}
//
//void ShowError::clinit()
//{
//struct string_init_ {
//    string_init_() {
//    CF_LEVEL_ = u"level"_j;
//    CF_MESSAGE_ = u"message"_j;
//    CF_EXCEPTION_ = u"exception"_j;
//    }
//};
//
//    static string_init_ string_init_instance;
//
//    super::
//    static bool in_cl_init = false;
//struct clinit_ {
//    clinit_() {
//        in_cl_init = true;
//        CFT_SHOW_ERROR_ = new TableFormat(int(1), int(1));
//        {
//            CFT_SHOW_ERROR_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_LEVEL_)
//                ->append(u"><I>"_j)->toString());
//            CFT_SHOW_ERROR_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_MESSAGE_)
//                ->append(u"><S><F=N>"_j)->toString());
//            CFT_SHOW_ERROR_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_EXCEPTION_)
//                ->append(u"><S><F=N>"_j)->toString());
//        }
//    }
//};
//
//    if(!in_cl_init) {
//        static clinit_ clinit_instance;
//    }
//}

