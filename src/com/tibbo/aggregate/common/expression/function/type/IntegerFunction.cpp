// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/type/IntegerFunction.java
#include <com/tibbo/aggregate/common/expression/function/type/IntegerFunction.h"

#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/Integer.h"
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

function::type::IntegerFunction::IntegerFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::type::IntegerFunction::IntegerFunction() 
    : IntegerFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::type::IntegerFunction::ctor()
{
    super::ctor(function::Functions::GROUP_TYPE_CONVERSION(), u"Object value [, Integer radix]"_j, u"Integer"_j);
}

void* function::type::IntegerFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, true, parameters);
    if(parameters)->length >= 2) {
        auto radix = util::Util::convertToNumber((*parameters)[int(1)], true, false))->intValue();
        auto source = (*parameters)[int(0)])->toString();
        return ::java::lang::Integer::parseInt(source, radix));
    } else {
        auto n = ::com::tibbo::aggregate::common::util::Util::convertToNumber((*parameters)[int(0)], true, false);
        return n)->intValue());
    }
}



java::lang::Class* function::type::IntegerFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.type.IntegerFunction", 67);
    return c;
}

java::lang::Class* function::type::IntegerFunction::getClass0()
{
    return class_();
}

