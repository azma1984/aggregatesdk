// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/color/BlueFunction.java
#include <com/tibbo/aggregate/common/expression/function/color/BlueFunction.h"

//#include <java/awt/Color.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::color::BlueFunction::BlueFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::color::BlueFunction::BlueFunction()
    : BlueFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void* com::tibbo::aggregate::common::expression::function::color::BlueFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    return color(parameters))->getBlue());
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::color::BlueFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.color.BlueFunction", 65);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::color::BlueFunction::getClass0()
{
    return class_();
}

