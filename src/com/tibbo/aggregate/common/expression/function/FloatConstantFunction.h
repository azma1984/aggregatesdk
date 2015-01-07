// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/FloatConstantFunction.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/AbstractFunction.h"



class com::tibbo::aggregate::common::expression::function::FloatConstantFunction
    : public AbstractFunction
{

public:
    typedef AbstractFunction super;

private:
    float constant;
protected:
    void ctor(float constant);

public:
    void* execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

    // Generated
    FloatConstantFunction(float constant);
protected:
    FloatConstantFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
