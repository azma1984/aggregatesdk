// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/ExpressionEditorOptionsFunction.java

#pragma once

//#include "expression/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include "expression/function/AbstractFunction.h"



class function::ExpressionEditorOptionsFunction
    : public AbstractFunction
{

public:
    typedef AbstractFunction super;
protected:
    void ctor();

public:
    void* execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;

    // Generated
    ExpressionEditorOptionsFunction();
protected:
    ExpressionEditorOptionsFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
