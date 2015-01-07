// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/EntityAvailableFunction.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/AbstractFunction.h"



class com::tibbo::aggregate::common::expression::function::context::EntityAvailableFunction
    : public ::com::tibbo::aggregate::common::expression::function::AbstractFunction
{

public:
    typedef ::com::tibbo::aggregate::common::expression::function::AbstractFunction super;
protected:
    void ctor(std::string* group, std::string* parametersFootprint);

public:
    void* execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

public: /* protected */
    bool hasEntity(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::context::Context* con, voidArray*/*...*/ parameters);

    // Generated

public:
    EntityAvailableFunction(std::string* group, std::string* parametersFootprint);
protected:
    EntityAvailableFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
