// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/type/StringFunction.java
#include <com/tibbo/aggregate/common/expression/function/type/StringFunction.h"

//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::type::StringFunction::StringFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::type::StringFunction::StringFunction() 
    : StringFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::type::StringFunction::ctor()
{
    super::ctor(u"String"_j);
}

void* function::type::StringFunction::convert(void* parameter) /* throws(EvaluationException) */
{
    return parameter != 0 ? parameter)->toString()) : 0);
}



java::lang::Class* function::type::StringFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.type.StringFunction", 66);
    return c;
}

java::lang::Class* function::type::StringFunction::getClass0()
{
    return class_();
}

