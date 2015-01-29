// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/color/GreenFunction.java
#include "expression/function/color/GreenFunction.h"

//#include <java/awt/Color.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::color::GreenFunction::GreenFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::color::GreenFunction::GreenFunction()
    : GreenFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void* function::color::GreenFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    return color(parameters))->getGreen());
}



java::lang::Class* function::color::GreenFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.color.GreenFunction", 66);
    return c;
}

java::lang::Class* function::color::GreenFunction::getClass0()
{
    return class_();
}

