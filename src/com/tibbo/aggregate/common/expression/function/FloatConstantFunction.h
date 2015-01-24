#pragma once

#include "expression/function/AbstractFunction.h"
#include <vector>

class FloatConstantFunction : public AbstractFunction
{
private:
    float constant;

public:
    //TODO: Object
    void*/*Object*/ execute(Evaluator* evaluator, EvaluationEnvironment* environment, std::vector<void*>/*...*/ parameters) /* throws(EvaluationException) */;

    // Generated
    FloatConstantFunction(float constant);
};
