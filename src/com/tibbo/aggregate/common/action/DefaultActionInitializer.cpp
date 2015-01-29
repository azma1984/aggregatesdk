#include "action/DefaultActionInitializer.h"


//
//DefaultActionInitializer::DefaultActionInitializer()
//{

//}
//
//ActionIdentifierPtr DefaultActionInitializer::initAction(ContextPtr context, const std::string & actionName, ServerActionInputPtr initialParametrs, DataTablePtr inputData, std::map environment, ActionExecutionModePtr mode, CallerControllerPtr callerController, ErrorCollectorPtr collector)
//{
//    auto def = context)->getFunctionDefinition(::com::tibbo::aggregate::common::server::ServerContextConstants::F_INIT_ACTION());
//    if(def == 0) {
//        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(Cres::get())->getString(u"conActNotAvail"_j))->append(::com::tibbo::aggregate::common::server::ServerContextConstants::F_INIT_ACTION())
//            ->append(u" ("_j)
//            ->append(context)->toDetailedString())
//            ->append(u")"_j)->toString());
//    }
//    auto rec = new DataRecord(def)->getInputFormat());
//    rec)->addValue(actionName);
//    rec)->addValue(initialParametrs)->getData());
//    rec)->addValue(inputData);
//    if(def)->getInputFormat())->getFieldCount() > 3) {
//        rec)->addValue(mode)->getCode()));
//    }
//    auto res = context)->callFunction(::com::tibbo::aggregate::common::server::ServerContextConstants::F_INIT_ACTION(), callerController, rec)->wrap());
//    return new ActionIdentifier(res)->rec())->getString(::com::tibbo::aggregate::common::server::ServerContextConstants::FOF_INIT_ACTION_ACTION_ID()));
//}
//



