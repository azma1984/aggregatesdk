// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/DrFunction.java

#pragma once

//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/AbstractFunction.h"



class com::tibbo::aggregate::common::expression::function::context::DrFunction
    : public ::com::tibbo::aggregate::common::expression::function::AbstractFunction
{

public:
    typedef ::com::tibbo::aggregate::common::expression::function::AbstractFunction super;
protected:
    void ctor();

public:
    void* execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

    // Generated
    DrFunction();
protected:
    DrFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
