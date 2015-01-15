// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/date/PrintPeriodFunction.java
#include <com/tibbo/aggregate/common/expression/function/date/PrintPeriodFunction.h"

#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/util/TimeUnitsManager.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/String.h"
#include <ObjectArray.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::date::PrintPeriodFunction::PrintPeriodFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::date::PrintPeriodFunction::PrintPeriodFunction() 
    : PrintPeriodFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::date::PrintPeriodFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_DATE_TIME_PROCESSING(), u"Long period"_j, u"String"_j);
}

void* com::tibbo::aggregate::common::expression::function::date::PrintPeriodFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, false, parameters);
    auto period = ::com::tibbo::aggregate::common::util::Util::convertToNumber((*parameters)[int(0)], false, false);
    auto tum = new ::com::tibbo::aggregate::common::util::TimeUnitsManager();
    if(parameters)->length > 1) {
        tum)->setMinUnit(util::Util::convertToNumber((*parameters)[int(1)], true, false))->intValue());
    }
    if(parameters)->length > 2) {
        tum)->setMaxUnit(util::Util::convertToNumber((*parameters)[int(2)], true, false))->intValue());
    }
    return tum)->createTimeString(period)->longValue());
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::date::PrintPeriodFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.date.PrintPeriodFunction", 71);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::date::PrintPeriodFunction::getClass0()
{
    return class_();
}

