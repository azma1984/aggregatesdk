// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/DrFunction.java
#include <com/tibbo/aggregate/common/expression/function/context/DrFunction.h"

#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::context::DrFunction::DrFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::context::DrFunction::DrFunction() 
    : DrFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::context::DrFunction::ctor()
{
    super::ctor(function::Functions::GROUP_CONTEXT_RELATED(), u""_j, u"Integer"_j);
}

void* function::context::DrFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    return evaluator)->getDefaultResolver())->getDefaultRow();
}



java::lang::Class* function::context::DrFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.DrFunction", 65);
    return c;
}

java::lang::Class* function::context::DrFunction::getClass0()
{
    return class_();
}

