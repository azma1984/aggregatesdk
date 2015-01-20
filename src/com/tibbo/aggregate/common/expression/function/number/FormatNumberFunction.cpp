// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/number/FormatNumberFunction.java
#include <com/tibbo/aggregate/common/expression/function/number/FormatNumberFunction.h"

#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/text/DecimalFormat.h"
#include <ObjectArray.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::number::FormatNumberFunction::FormatNumberFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::number::FormatNumberFunction::FormatNumberFunction() 
    : FormatNumberFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::number::FormatNumberFunction::ctor()
{
    super::ctor(function::Functions::GROUP_NUMBER_PROCESSING(), u"Number number, String pattern"_j, u"String"_j);
}

void* function::number::FormatNumberFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, true, parameters);
    auto number = ::com::tibbo::aggregate::common::util::Util::convertToNumber((*parameters)[int(0)], true, false);
    auto pattern = (*parameters)[int(1)])->toString();
    if(number == 0) {
        return u""_j;
    }
    return (new ::java::text::DecimalFormat(pattern))->format(static_cast< double >(number)->floatValue()));
}



java::lang::Class* function::number::FormatNumberFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.number.FormatNumberFunction", 74);
    return c;
}

java::lang::Class* function::number::FormatNumberFunction::getClass0()
{
    return class_();
}

