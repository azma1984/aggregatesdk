// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/type/LongFunction.java

#pragma once

//#include "expression/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/type/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/AbstractFunction.h"



class function::type::LongFunction
    : public function::AbstractFunction
{

public:
    typedef function::AbstractFunction super;
protected:
    void ctor();

public:
    void* execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

    // Generated
    LongFunction();
protected:
    LongFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
