// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/type/TypeConversionFunction.java

#pragma once

//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/type/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/AbstractFunction.h"



class com::tibbo::aggregate::common::expression::function::type::TypeConversionFunction
    : public ::com::tibbo::aggregate::common::expression::function::AbstractFunction
{

public:
    typedef ::com::tibbo::aggregate::common::expression::function::AbstractFunction super;
protected:
    void ctor(std::string* returnValue);

public:
    void* execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;
    void* convert(void* parameter) /* throws(EvaluationException) */;

    // Generated
    TypeConversionFunction(std::string* returnValue);
protected:
    TypeConversionFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
