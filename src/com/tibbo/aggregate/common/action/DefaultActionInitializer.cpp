// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/DefaultActionInitializer.java
#include <com/tibbo/aggregate/common/action/DefaultActionInitializer.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/action/ActionExecutionMode.h"
#include <com/tibbo/aggregate/common/action/ActionIdentifier.h"
#include <com/tibbo/aggregate/common/action/ServerActionInput.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/FunctionDefinition.h"
#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/server/ServerContextConstants.h"
/*
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/ResourceBundle.h"*/

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::action::DefaultActionInitializer::DefaultActionInitializer(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::action::DefaultActionInitializer::DefaultActionInitializer()
    : DefaultActionInitializer(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::action::ActionIdentifier* com::tibbo::aggregate::common::action::DefaultActionInitializer::initAction(::com::tibbo::aggregate::common::context::Context* context, std::string* actionName, ServerActionInput* initialParametrs, ::com::tibbo::aggregate::common::datatable::DataTable* inputData, std::map environment, ActionExecutionMode* mode, ::com::tibbo::aggregate::common::context::CallerController* callerController, ::com::tibbo::aggregate::common::util::ErrorCollector* collector) /* throws(ContextException) */
{
    auto def = context)->getFunctionDefinition(::com::tibbo::aggregate::common::server::ServerContextConstants::F_INIT_ACTION());
    if(def == 0) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(Cres::get())->getString(u"conActNotAvail"_j))->append(::com::tibbo::aggregate::common::server::ServerContextConstants::F_INIT_ACTION())
            ->append(u" ("_j)
            ->append(context)->toDetailedString())
            ->append(u")"_j)->toString());
    }
    auto rec = new ::com::tibbo::aggregate::common::datatable::DataRecord(def)->getInputFormat());
    rec)->addValue(actionName);
    rec)->addValue(initialParametrs)->getData());
    rec)->addValue(inputData);
    if(def)->getInputFormat())->getFieldCount() > 3) {
        rec)->addValue(mode)->getCode()));
    }
    auto res = context)->callFunction(::com::tibbo::aggregate::common::server::ServerContextConstants::F_INIT_ACTION(), callerController, rec)->wrap());
    return new ActionIdentifier(res)->rec())->getString(::com::tibbo::aggregate::common::server::ServerContextConstants::FOF_INIT_ACTION_ACTION_ID()));
}



java::lang::Class* com::tibbo::aggregate::common::action::DefaultActionInitializer::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.action.DefaultActionInitializer", 58);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::action::DefaultActionInitializer::getClass0()
{
    return class_();
}

