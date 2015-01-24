#include "expression/function/AbstractFunction.h"

#include "Cres.h"
#include "expression/EvaluationException.h"
#include <vector>

AbstractFunction::AbstractFunction(
    const std::string & category,
    const std::string & parametersFootprint,
    const std::string & returnValue)
{
    this->category = category;
    this->parametersFootprint = parametersFootprint;
    this->returnValue = returnValue;
}

std::string AbstractFunction::getCategory()
{
    return category;
}

std::string AbstractFunction::getReturnValue()
{
    return returnValue;
}

std::string AbstractFunction::getParametersFootprint()
{
    return parametersFootprint;
}

void AbstractFunction::checkParameters(int minimalCount, bool allowNulls, std::vector<void*> parameters) /* throws(EvaluationException) */
{
    if (parameters.size() < minimalCount) {
        //TODO: exception
        //throw new EvaluationException(::java::text::MessageFormat::format(Cres::get())->getString(u"exprInvalidParamCount"_j), new voidArray({minimalCount)), parameters)->length))})));
    }
    if(!allowNulls) {
        for (int i = 0; i < minimalCount; i++) {
            if(parameters[i] == 0) {
                // TODO: exception
                //throw new EvaluationException(::java::text::MessageFormat::format(Cres::get())->getString(u"exprParamCantBeNull"_j), new voidArray({i))})));
            }
        }
    }
}

void function::AbstractFunction::checkParameterType(int num, void* value, ::java::lang::Class* requiredType) /* throws(EvaluationException) */
{
    //TODO: now cehck class?
//    if(!(requiredType)->isAssignableFrom(value)->getClass()))) {
//        throw new EvaluationException(::java::text::MessageFormat::format(Cres::get())->getString(u"exprInvalidParameterType"_j), new voidArray({num)), requiredType)->getSimpleName()), value)->getClass())->getSimpleName())})));
//    }
}
