
#include "action/command/ShowGuide.h"

//
//
//ShowGuide::ShowGuide(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//ShowGuide::ShowGuide()
//    : ShowGuide(*static_cast< ::default_init_tag* >(0))
//{
//    ctor();
//}
//
//ShowGuide::ShowGuide(const std::string & title, const std::string & invokerContext, const std::string & macroName)
//    : ShowGuide(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(title,invokerContext,macroName);
//}
//
//ShowGuide::ShowGuide(const std::string & title, DataTablePtr parameters)
//    : ShowGuide(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(title,parameters);
//}
//
//std::string& ShowGuide::CF_INVOKER_CONTEXT()
//{
//
//    return CF_INVOKER_CONTEXT_;
//}
//std::string ShowGuide::CF_INVOKER_CONTEXT_;
//
//std::string& ShowGuide::CF_MACRO_NAME()
//{
//
//    return CF_MACRO_NAME_;
//}
//std::string ShowGuide::CF_MACRO_NAME_;
//
//DateTableFormatPtr& ShowGuide::CFT_SHOW_GUIDE()
//{
//
//    return CFT_SHOW_GUIDE_;
//}
//DateTableFormatPtr ShowGuide::CFT_SHOW_GUIDE_;
//
//void ShowGuide::ctor()
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_GUIDE(), CFT_SHOW_GUIDE_, static_cast< TableFormatPtr >(0));
//}
//
//void ShowGuide::ctor(const std::string & title, const std::string & invokerContext, const std::string & macroName)
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_GUIDE(), title);
//    this->invokerContext = invokerContext;
//    this->macroName = macroName;
//}
//
//void ShowGuide::ctor(const std::string & title, DataTablePtr parameters)
//{
//    super::ctor(::com::tibbo::aggregate::common::action::ActionUtils::CMD_SHOW_GUIDE(), title, parameters, CFT_SHOW_GUIDE_);
//}
//
//DateDataTablePtr ShowGuide::constructParameters()
//{
//    return new DataTable(CFT_SHOW_GUIDE_, new voidArray({invokerContext), macroName)}));
//}
//
//std::string ShowGuide::getInvokerContext()
//{
//    return invokerContext;
//}
//
//void ShowGuide::setInvokerContext(const std::string & invokerContext)
//{
//    this->invokerContext = invokerContext;
//}
//
//std::string ShowGuide::getMacroName()
//{
//    return macroName;
//}
//
//void ShowGuide::setMacroName(const std::string & macroName)
//{
//    this->macroName = macroName;
//}
//
//
//
//java::lang::Class* ShowGuide::class_()
//{
//    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.action.command.ShowGuide", 51);
//    return c;
//}
//
//void ShowGuide::clinit()
//{
//struct string_init_ {
//    string_init_() {
//    CF_INVOKER_CONTEXT_ = u"invokerContext"_j;
//    CF_MACRO_NAME_ = u"macroName"_j;
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
//        CFT_SHOW_GUIDE_ = new TableFormat(int(1), int(1));
//        {
//            CFT_SHOW_GUIDE_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_INVOKER_CONTEXT_)
//                ->append(u"><S><F=N>"_j)->toString());
//            CFT_SHOW_GUIDE_)->addField(std::stringBuilder().append(u"<"_j)->append(CF_MACRO_NAME_)
//                ->append(u"><S><F=N>"_j)->toString());
//        }
//    }
//};
//
//    if(!in_cl_init) {
//        static clinit_ clinit_instance;
//    }
//}
//

