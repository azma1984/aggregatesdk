// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/AbstractFunction.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/expression/Function.h"



class com::tibbo::aggregate::common::expression::function::AbstractFunction
    
    , public ::com::tibbo::aggregate::common::expression::Function
{

public:
    typedef void super;

private:
    std::string* parametersFootprint;
    std::string* category;
    std::string* returnValue;
protected:
    void ctor(std::string* category, std::string* parametersFootprint, std::string* returnValue);

public:
    std::string* getCategory();
    std::string* getReturnValue();
    std::string* getParametersFootprint();

public: /* protected */
    void checkParameters(int minimalCount, bool allowNulls, voidArray*/*...*/ parameters) /* throws(EvaluationException) */;
    void checkParameterType(int num, void* value, ::java::lang::Class* requiredType) /* throws(EvaluationException) */;

    // Generated

public:
    AbstractFunction(std::string* category, std::string* parametersFootprint, std::string* returnValue);
protected:
    AbstractFunction(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
