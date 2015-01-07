// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/date/DateFunction.java

#pragma once

//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/date/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/AbstractFunction.h"



class com::tibbo::aggregate::common::expression::function::date::DateFunction
    : public ::com::tibbo::aggregate::common::expression::function::AbstractFunction
{

public:
    typedef ::com::tibbo::aggregate::common::expression::function::AbstractFunction super;
protected:
    void ctor(std::string* returnValue);

public:
    void* execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;
    void* execute(::java::util::GregorianCalendar* calendar, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

    // Generated
    DateFunction(std::string* returnValue);
protected:
    DateFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
