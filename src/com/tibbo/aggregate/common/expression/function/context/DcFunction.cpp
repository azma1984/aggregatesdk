// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/context/DcFunction.java
#include <com/tibbo/aggregate/common/expression/function/context/DcFunction.h"

#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::context::DcFunction::DcFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::context::DcFunction::DcFunction() 
    : DcFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::context::DcFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_CONTEXT_RELATED(), u""_j, u"String"_j);
}

void* com::tibbo::aggregate::common::expression::function::context::DcFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    auto dc = evaluator)->getDefaultResolver())->getDefaultContext();
    return dc != 0 ? dc)->getPath()) : 0);
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::context::DcFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.context.DcFunction", 65);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::context::DcFunction::getClass0()
{
    return class_();
}

