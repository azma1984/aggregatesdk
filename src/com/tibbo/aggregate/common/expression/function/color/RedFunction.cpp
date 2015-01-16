// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/color/RedFunction.java
#include <com/tibbo/aggregate/common/expression/function/color/RedFunction.h"

//#include <java/awt/Color.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::color::RedFunction::RedFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::color::RedFunction::RedFunction()
    : RedFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void* com::tibbo::aggregate::common::expression::function::color::RedFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    return color(parameters))->getRed());
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::color::RedFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.color.RedFunction", 64);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::color::RedFunction::getClass0()
{
    return class_();
}
