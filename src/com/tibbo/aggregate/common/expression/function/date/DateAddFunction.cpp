// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/date/DateAddFunction.java
#include "expression/function/date/DateAddFunction.h"

#include "expression/function/Functions.h"
#include "util/DateUtils.h"
#include "util/TimeHelper.h"
#include "util/TimeUnit.h"
#include "util/Util.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/Calendar.h"
//#include <java/util/Date.h"
//#include <java/util/TimeZone.h"
#include <ObjectArray.h"

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::date::DateAddFunction::DateAddFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::date::DateAddFunction::DateAddFunction() 
    : DateAddFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::date::DateAddFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATE_TIME_PROCESSING(), u"Date date, Integer count, String unit [, String timezone]"_j, u"Date"_j);
}

void* function::date::DateAddFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(3, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], Date::class_());
    auto date = java_cast< Date* >((*parameters)[int(0)]);
    int  count = util::Util::convertToNumber((*parameters)[int(1)], false, false))->intValue());
    auto unit = ::com::tibbo::aggregate::common::util::TimeHelper::getTimeUnit((*parameters)[int(2)])->toString());
    auto tz = ::com::tibbo::aggregate::common::util::DateUtils::UTC_TIME_ZONE();
    if(parameters)->length > 3) {
        tz = ::java::util::TimeZone::getTimeZone((*parameters)[int(3)])->toString());
    }
    auto cal = ::java::util::Calendar::getInstance(tz);
    cal)->setTime(date);
    cal)->add(unit)->getCalendarField(), (count))->intValue());
    return cal)->getTime();
}



java::lang::Class* function::date::DateAddFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.date.DateAddFunction", 67);
    return c;
}

java::lang::Class* function::date::DateAddFunction::getClass0()
{
    return class_();
}

