// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/number/GtFunction.java
#include <com/tibbo/aggregate/common/expression/function/number/GtFunction.h"

#include <com/tibbo/aggregate/common/expression/AbstractEvaluatingVisitor.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/String.h"
#include <ObjectArray.h"

function::number::GtFunction::GtFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::number::GtFunction::GtFunction() 
    : GtFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::number::GtFunction::ctor()
{
    super::ctor(function::Functions::GROUP_NUMBER_PROCESSING(), u"Long number1, Long number2"_j, u"Boolean"_j);
}

void* function::number::GtFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    return ::java::lang::Boolean::valueOf(AbstractEvaluatingVisitor::compare((*parameters)[int(0)], (*parameters)[int(1)]) > 0);
}



java::lang::Class* function::number::GtFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.number.GtFunction", 64);
    return c;
}

java::lang::Class* function::number::GtFunction::getClass0()
{
    return class_();
}

