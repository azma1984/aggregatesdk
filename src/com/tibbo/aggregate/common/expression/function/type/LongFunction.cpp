// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/type/LongFunction.java
//#include "expression/function/type/LongFunction.h"

#include "expression/function/Functions.h"
#include "util/Util.h"
//#include <java/lang/Long.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
#include <ObjectArray.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::type::LongFunction::LongFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::type::LongFunction::LongFunction() 
    : LongFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::type::LongFunction::ctor()
{
    super::ctor(function::Functions::GROUP_TYPE_CONVERSION(), u"Object value [, Integer radix]"_j, u"Long"_j);
}

void* function::type::LongFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, true, parameters);
    if(parameters)->length >= 2) {
        auto radix = util::Util::convertToNumber((*parameters)[int(1)], true, false))->intValue();
        auto source = (*parameters)[int(0)])->toString();
        return ::java::lang::Long::valueOf(::java::lang::Long::parseLong(source, radix));
    } else {
        auto n = ::com::tibbo::aggregate::common::util::Util::convertToNumber((*parameters)[int(0)], true, false);
        return ::java::lang::Long::valueOf(n)->longValue());
    }
}



java::lang::Class* function::type::LongFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.type.LongFunction", 64);
    return c;
}

java::lang::Class* function::type::LongFunction::getClass0()
{
    return class_();
}

