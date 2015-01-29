// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/number/NeFunction.java
#include "expression/function/number/NeFunction.h"

#include "expression/AbstractEvaluatingVisitor.h"
#include "expression/function/Functions.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/String.h"
#include <ObjectArray.h"

function::number::NeFunction::NeFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::number::NeFunction::NeFunction() 
    : NeFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::number::NeFunction::ctor()
{
    super::ctor(function::Functions::GROUP_NUMBER_PROCESSING(), u"Long number1, Long number2"_j, u"Boolean"_j);
}

void* function::number::NeFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    return ::java::lang::Boolean::valueOf(!AbstractEvaluatingVisitor::equal((*parameters)[int(0)], (*parameters)[int(1)]));
}



java::lang::Class* function::number::NeFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.number.NeFunction", 64);
    return c;
}

java::lang::Class* function::number::NeFunction::getClass0()
{
    return class_();
}

