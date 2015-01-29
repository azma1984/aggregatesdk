
#include "action/command/ShowMessage.h"



//ShowMessage::ShowMessage(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//ShowMessage::ShowMessage()
//    : ShowMessage(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//ShowMessage::ShowMessage(const std::string & title, const std::string & message, int level)
//    : ShowMessage(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(title,message,level);
//}
//
//ShowMessage::ShowMessage(const std::string & title, DataTablePtr parameters)
//    : ShowMessage(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(title,parameters);
//}
//
//std::string& ShowMessage::CF_MESSAGE()
//{
//
//    return CF_MESSAGE_;
//}
//std::string ShowMessage::CF_MESSAGE_;
//
//std::string& ShowMessage::CF_LEVEL()
//{
//
//    return CF_LEVEL_;
//}
//std::string ShowMessage::CF_LEVEL_;
//
//DateTableFormatPtr& ShowMessage::CFT_SHOW_MESSAGE()
//{
//
//    return CFT_SHOW_MESSAGE_;
//}
//DateTableFormatPtr ShowMessage::CFT_SHOW_MESSAGE_;
//
//void ShowMessage::ctor()
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_MESSAGE(), CFT_SHOW_MESSAGE_, static_cast< TableFormatPtr >(0));
//}
//
//void ShowMessage::ctor(const std::string & title, const std::string & message, int level)
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_MESSAGE(), title);
//    this->message = message;
//    this->level = level;
//}
//
//void ShowMessage::ctor(const std::string & title, DataTablePtr parameters)
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_MESSAGE(), title, parameters, CFT_SHOW_MESSAGE_);
//}
//
//DateDataTablePtr ShowMessage::constructParameters()
//{
//    return new DataTable(CFT_SHOW_MESSAGE_, new voidArray({message), level))}));
//}
//
//std::string ShowMessage::getMessage()
//{
//    return message;
//}
//
//int ShowMessage::getLevel()
//{
//    return level;
//}
//
//void ShowMessage::setMessage(const std::string & message)
//{
//    this->message = message;
//}
//
//void ShowMessage::setLevel(int level)
//{
//    this->level = level;
//}
//
//
//
//java::lang::Class* ShowMessage::class_()
//{
//    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.action.command.ShowMessage", 53);
//    return c;
//}
//
//void ShowMessage::clinit()
//{
//struct string_init_ {
//    string_init_() {
//    CF_MESSAGE_ = u"message"_j;
//    CF_LEVEL_ = u"level"_j;
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
//        CFT_SHOW_MESSAGE_ = new TableFormat(int(1), int(1));
//        {
//            CFT_SHOW_MESSAGE_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_MESSAGE_)
//                ->append(u"><S>"_j)->toString());
//            CFT_SHOW_MESSAGE_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_LEVEL_)
//                ->append(u"><I>"_j)->toString());
//        }
//    }
//};
//
//    if(!in_cl_init) {
//        static clinit_ clinit_instance;
//    }
//}
//

