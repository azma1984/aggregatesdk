#include "expression/function/FloatConstantFunction.h"


FloatConstantFunction::FloatConstantFunction(float constant)
{
    this->constant = constant;
}

void* FloatConstantFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    return ::java::lang::Float::valueOf(constant);
}

