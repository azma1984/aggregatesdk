// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/type/BooleanFunction.java
#include <com/tibbo/aggregate/common/expression/function/type/BooleanFunction.h"

#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/String.h"

function::type::BooleanFunction::BooleanFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::type::BooleanFunction::BooleanFunction() 
    : BooleanFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::type::BooleanFunction::ctor()
{
    super::ctor(u"Boolean"_j);
}

void* function::type::BooleanFunction::convert(void* parameter) /* throws(EvaluationException) */
{
    auto b = ::com::tibbo::aggregate::common::util::Util::convertToBoolean(parameter, true, false);
    return b;
}



java::lang::Class* function::type::BooleanFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.type.BooleanFunction", 67);
    return c;
}

java::lang::Class* function::type::BooleanFunction::getClass0()
{
    return class_();
}

