// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/type/FloatFunction.java
#include "expression/function/type/FloatFunction.h"

#include "util/Util.h"
//#include <java/lang/Float.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/String.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::type::FloatFunction::FloatFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::type::FloatFunction::FloatFunction() 
    : FloatFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::type::FloatFunction::ctor()
{
    super::ctor(u"Float"_j);
}

void* function::type::FloatFunction::convert(void* parameter) /* throws(EvaluationException) */
{
    auto n = ::com::tibbo::aggregate::common::util::Util::convertToNumber(parameter, true, false);
    return ::java::lang::Float::valueOf(n)->floatValue());
}



java::lang::Class* function::type::FloatFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.type.FloatFunction", 65);
    return c;
}

java::lang::Class* function::type::FloatFunction::getClass0()
{
    return class_();
}

