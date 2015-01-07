// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/Function.java

#pragma once

//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::expression::Function
    
{
    std::string* getCategory();
    std::string* getReturnValue();
    std::string* getParametersFootprint();
    void* execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

    // Generated
    
};
