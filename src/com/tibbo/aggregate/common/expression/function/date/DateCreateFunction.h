// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/date/DateCreateFunction.java

#pragma once

//#include "expression/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/date/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/AbstractFunction.h"



class function::date::DateCreateFunction
    : public function::AbstractFunction
{

public:
    typedef function::AbstractFunction super;
protected:
    void ctor();

public:
    void* execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

    // Generated
    DateCreateFunction();
protected:
    DateCreateFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
