// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/AbstractFunction.java
#include <com/tibbo/aggregate/common/expression/function/AbstractFunction.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
//#include <java/lang/Class.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/text/MessageFormat.h"
//#include <java/util/ResourceBundle.h"
#include <ObjectArray.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::AbstractFunction::AbstractFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::AbstractFunction::AbstractFunction(const std::string & category, const std::string & parametersFootprint, const std::string & returnValue) 
    : AbstractFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(category,parametersFootprint,returnValue);
}

void function::AbstractFunction::ctor(const std::string & category, const std::string & parametersFootprint, const std::string & returnValue)
{
    super::ctor();
    this->category = category;
    this->parametersFootprint = parametersFootprint;
    this->returnValue = returnValue;
}

std::string function::AbstractFunction::getCategory()
{
    return category;
}

std::string function::AbstractFunction::getReturnValue()
{
    return returnValue;
}

std::string function::AbstractFunction::getParametersFootprint()
{
    return parametersFootprint;
}

void function::AbstractFunction::checkParameters(int minimalCount, bool allowNulls, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    if(parameters)->length < minimalCount) {
        throw new EvaluationException(::java::text::MessageFormat::format(Cres::get())->getString(u"exprInvalidParamCount"_j), new voidArray({minimalCount)), parameters)->length))})));
    }
    if(!allowNulls) {
        for (auto i = int(0); i < minimalCount; i++) {
            if((*parameters)[i] == 0) {
                throw new EvaluationException(::java::text::MessageFormat::format(Cres::get())->getString(u"exprParamCantBeNull"_j), new voidArray({i))})));
            }
        }
    }
}

void function::AbstractFunction::checkParameterType(int num, void* value, ::java::lang::Class* requiredType) /* throws(EvaluationException) */
{
    if(!(requiredType)->isAssignableFrom(value)->getClass()))) {
        throw new EvaluationException(::java::text::MessageFormat::format(Cres::get())->getString(u"exprInvalidParameterType"_j), new voidArray({num)), requiredType)->getSimpleName()), value)->getClass())->getSimpleName())})));
    }
}



java::lang::Class* function::AbstractFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.AbstractFunction", 63);
    return c;
}

java::lang::Class* function::AbstractFunction::getClass0()
{
    return class_();
}

