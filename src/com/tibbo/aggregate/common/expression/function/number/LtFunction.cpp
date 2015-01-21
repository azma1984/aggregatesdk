// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/number/LtFunction.java
#include <com/tibbo/aggregate/common/expression/function/number/LtFunction.h"

#include <com/tibbo/aggregate/common/expression/AbstractEvaluatingVisitor.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/String.h"
#include <ObjectArray.h"

function::number::LtFunction::LtFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::number::LtFunction::LtFunction() 
    : LtFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::number::LtFunction::ctor()
{
    super::ctor(function::Functions::GROUP_NUMBER_PROCESSING(), u"Long number1, Long number2"_j, u"Boolean"_j);
}

void* function::number::LtFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    return ::java::lang::Boolean::valueOf(AbstractEvaluatingVisitor::compare((*parameters)[int(0)], (*parameters)[int(1)]) < 0);
}



java::lang::Class* function::number::LtFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.number.LtFunction", 64);
    return c;
}

java::lang::Class* function::number::LtFunction::getClass0()
{
    return class_();
}

