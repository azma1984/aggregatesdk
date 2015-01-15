// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/type/TimestampFunction.java
#include <com/tibbo/aggregate/common/expression/function/type/TimestampFunction.h"

#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/Date.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::type::TimestampFunction::TimestampFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::type::TimestampFunction::TimestampFunction() 
    : TimestampFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::type::TimestampFunction::ctor()
{
    super::ctor(u"Date"_j);
}

void* com::tibbo::aggregate::common::expression::function::type::TimestampFunction::convert(void* parameter) /* throws(EvaluationException) */
{
    return parameter != 0 ? new ::java::util::Date(util::Util::convertToNumber(parameter, false, false))->longValue())) : 0);
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::type::TimestampFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.type.TimestampFunction", 69);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::type::TimestampFunction::getClass0()
{
    return class_();
}

