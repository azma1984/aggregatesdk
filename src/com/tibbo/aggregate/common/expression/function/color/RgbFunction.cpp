// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/color/RgbFunction.java
#include <com/tibbo/aggregate/common/expression/function/color/RgbFunction.h"

#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/awt/Color.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
#include <ObjectArray.h"

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

function::color::RgbFunction::RgbFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::color::RgbFunction::RgbFunction() 
    : RgbFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::color::RgbFunction::ctor()
{
    super::ctor(function::Functions::GROUP_COLOR_PROCESSING(), u"Color color"_j, u"Integer"_j);
}

java::awt::Color* function::color::RgbFunction::color(voidArray* parameters) /* throws(EvaluationException) */
{
    checkParameters(1, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], ::java::awt::Color::class_());
    return java_cast< ::java::awt::Color* >((*parameters)[int(0)]);
}



java::lang::Class* function::color::RgbFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.color.RgbFunction", 64);
    return c;
}

java::lang::Class* function::color::RgbFunction::getClass0()
{
    return class_();
}

