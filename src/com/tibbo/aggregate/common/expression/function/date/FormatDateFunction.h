// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/date/FormatDateFunction.java

#pragma once

//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/date/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/AbstractFunction.h"



class function::date::FormatDateFunction
    : public function::AbstractFunction
{

public:
    typedef function::AbstractFunction super;
protected:
    void ctor();

public:
    void* execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

    // Generated
    FormatDateFunction();
protected:
    FormatDateFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
