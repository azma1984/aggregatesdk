// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/number/EqFunction.java
#include "expression/function/number/EqFunction.h"

#include "expression/AbstractEvaluatingVisitor.h"
#include "expression/function/Functions.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/String.h"
#include <ObjectArray.h"

function::number::EqFunction::EqFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::number::EqFunction::EqFunction() 
    : EqFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::number::EqFunction::ctor()
{
    super::ctor(function::Functions::GROUP_NUMBER_PROCESSING(), u"Long number1, Long number2"_j, u"Boolean"_j);
}

void* function::number::EqFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    return ::java::lang::Boolean::valueOf(AbstractEvaluatingVisitor::equal((*parameters)[int(0)], (*parameters)[int(1)]));
}



java::lang::Class* function::number::EqFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.number.EqFunction", 64);
    return c;
}

java::lang::Class* function::number::EqFunction::getClass0()
{
    return class_();
}

