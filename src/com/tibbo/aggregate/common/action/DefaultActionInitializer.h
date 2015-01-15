// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/action/DefaultActionInitializer.java

#pragma once

//#include <com/tibbo/aggregate/common/action/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/action/ActionInitializer.h"



class com::tibbo::aggregate::common::action::DefaultActionInitializer
    
    , public ActionInitializer
{

public:
    typedef void super;
    ActionIdentifier* initAction(::com::tibbo::aggregate::common::context::Context* context, const std::string & actionName, ServerActionInput* initialParametrs, DataTable* inputData, std::map environment, ActionExecutionMode* mode, ::com::tibbo::aggregate::common::context::CallerController* callerController, ::com::tibbo::aggregate::common::util::ErrorCollector* collector) /* throws(ContextException) */;

    // Generated
    DefaultActionInitializer();
protected:
    DefaultActionInitializer(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
