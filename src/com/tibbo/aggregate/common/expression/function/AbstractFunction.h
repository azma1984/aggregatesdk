#pragma once

#include "expression/Function.h"
#include <string>


class AbstractFunction : public Function
{
private:
    const std::string parametersFootprint;
    const std::string category;
    const std::string returnValue;

public:
    std::string getCategory();
    std::string getReturnValue();
    std::string getParametersFootprint();

protected:
    void checkParameters(int minimalCount, bool allowNulls, std::vector<void *> parameters) /* throws(EvaluationException) */;
    void checkParameterType(int num, void* value, ::java::lang::Class* requiredType) /* throws(EvaluationException) */;

public:
    AbstractFunction(const std::string & category, const std::string & parametersFootprint, const std::string & returnValue);
};
