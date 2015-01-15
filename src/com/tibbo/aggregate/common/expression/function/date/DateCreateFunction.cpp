// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/date/DateCreateFunction.java
#include <com/tibbo/aggregate/common/expression/function/date/DateCreateFunction.h"

#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/util/DateUtils.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/Date.h"
//#include <java/util/GregorianCalendar.h"
//#include <java/util/TimeZone.h"
#include <ObjectArray.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::function::date::DateCreateFunction::DateCreateFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::date::DateCreateFunction::DateCreateFunction() 
    : DateCreateFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::date::DateCreateFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_DATE_TIME_PROCESSING(), u"Integer year, Integer month, Integer day, Integer hour, Integer minute, Integer second [, String timezone]"_j, u"Date"_j);
}

void* com::tibbo::aggregate::common::expression::function::date::DateCreateFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(6, false, parameters);
    auto year = util::Util::convertToNumber((*parameters)[int(0)], true, false))->intValue();
    auto month = util::Util::convertToNumber((*parameters)[int(1)], true, false))->intValue();
    auto day = util::Util::convertToNumber((*parameters)[int(2)], true, false))->intValue();
    auto hour = util::Util::convertToNumber((*parameters)[int(3)], true, false))->intValue();
    auto minute = util::Util::convertToNumber((*parameters)[int(4)], true, false))->intValue();
    auto second = util::Util::convertToNumber((*parameters)[int(5)], true, false))->intValue();
    auto tz = ::com::tibbo::aggregate::common::util::DateUtils::UTC_TIME_ZONE();
    if(parameters)->length > 6) {
        tz = ::java::util::TimeZone::getTimeZone((*parameters)[int(6)])->toString());
    }
    auto gc = new ::java::util::GregorianCalendar(tz);
    gc)->set(year, month, day, hour, minute, second);
    return gc)->getTime();
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::date::DateCreateFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.date.DateCreateFunction", 70);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::date::DateCreateFunction::getClass0()
{
    return class_();
}

