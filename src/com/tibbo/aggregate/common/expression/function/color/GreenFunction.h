// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/color/GreenFunction.java

#pragma once

//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/color/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/color/RgbFunction.h"



class com::tibbo::aggregate::common::expression::function::color::GreenFunction
    : public RgbFunction
{

public:
    typedef RgbFunction super;
    void* execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

    // Generated
    GreenFunction();
protected:
    GreenFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
