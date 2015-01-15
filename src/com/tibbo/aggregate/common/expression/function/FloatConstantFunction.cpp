// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/FloatConstantFunction.java
//#include <com/tibbo/aggregate/common/expression/function/FloatConstantFunction.h"

#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/Float.h"
//#include <java/lang/String.h"

com::tibbo::aggregate::common::expression::function::FloatConstantFunction::FloatConstantFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::FloatConstantFunction::FloatConstantFunction(float constant) 
    : FloatConstantFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(constant);
}

void com::tibbo::aggregate::common::expression::function::FloatConstantFunction::ctor(float constant)
{
    super::ctor(Functions::GROUP_NUMBER_PROCESSING(), u""_j, u"Float"_j);
    this->constant = constant;
}

void* com::tibbo::aggregate::common::expression::function::FloatConstantFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    return ::java::lang::Float::valueOf(constant);
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::FloatConstantFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.FloatConstantFunction", 68);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::FloatConstantFunction::getClass0()
{
    return class_();
}

