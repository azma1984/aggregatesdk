// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/BindingProvider.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::binding::BindingProvider
    
{
    std::map createBindings();
    void start();
    void stop();
    void writeReference(int method, ::com::tibbo::aggregate::common::expression::Reference* destination, ::com::tibbo::aggregate::common::expression::Reference* cause, void* value, ChangeCache* cache) /* throws(BindingException) */;
    void addReferenceListener(::com::tibbo::aggregate::common::expression::Reference* ref, ReferenceListener* listener) /* throws(BindingException) */;
    void removeReferenceListener(ReferenceListener* listener);
    void processExecution(int event, Binding* binding, EvaluationOptions* options, ::com::tibbo::aggregate::common::expression::Reference* cause, void* result);
    void processError(Binding* binding, int method, ::com::tibbo::aggregate::common::expression::Reference* cause, ::java::lang::Exception* error);

    // Generated
    
};
