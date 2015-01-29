// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/type/TypeConversionFunction.java
#include "expression/function/type/TypeConversionFunction.h"

#include "expression/function/Functions.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
#include <ObjectArray.h"

function::type::TypeConversionFunction::TypeConversionFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::type::TypeConversionFunction::TypeConversionFunction(const std::string & returnValue) 
    : TypeConversionFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(returnValue);
}

void function::type::TypeConversionFunction::ctor(const std::string & returnValue)
{
    super::ctor(function::Functions::GROUP_TYPE_CONVERSION(), u"Object value"_j, returnValue);
}

void* function::type::TypeConversionFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, true, parameters);
    return convert((*parameters)[int(0)]);
}



java::lang::Class* function::type::TypeConversionFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.type.TypeConversionFunction", 74);
    return c;
}

java::lang::Class* function::type::TypeConversionFunction::getClass0()
{
    return class_();
}

