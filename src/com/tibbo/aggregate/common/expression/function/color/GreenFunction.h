// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/color/GreenFunction.java

#pragma once

//#include "expression/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/color/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/color/RgbFunction.h"



class function::color::GreenFunction
    : public RgbFunction
{

public:
    typedef RgbFunction super;
    void* execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

    // Generated
    GreenFunction();
protected:
    GreenFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
