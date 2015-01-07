// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/ReferenceListener.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::binding::ReferenceListener
    
{
    void referenceChanged(::com::tibbo::aggregate::common::expression::Reference* cause, std::map environment, ChangeCache* cache) /* throws(BindingException) */;
    void referenceChanged(::com::tibbo::aggregate::common::expression::Reference* cause, std::map environment, ChangeCache* cache, bool asynchronousProcessing) /* throws(BindingException) */;
    BindingProcessor* getBindingProcessor();
    Binding* getBinding();
    EvaluationOptions* getEvaluationOptions();
    void setContent(void* content);
    void* getContent();

    // Generated
    
};
