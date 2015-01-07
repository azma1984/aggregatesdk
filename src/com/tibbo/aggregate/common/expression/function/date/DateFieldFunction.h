// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/date/DateFieldFunction.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/date/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/date/DateFunction.h"



class com::tibbo::aggregate::common::expression::function::date::DateFieldFunction
    : public DateFunction
{

public:
    typedef DateFunction super;

private:
    int field;
protected:
    void ctor(int field);

public:
    void* execute(::java::util::GregorianCalendar* calendar, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

    // Generated
    DateFieldFunction(int field);
protected:
    DateFieldFunction(const ::default_init_tag&);


public:
    
    void* execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray* parameters);

private:
    ::java::lang::Class* getClass0();
};
