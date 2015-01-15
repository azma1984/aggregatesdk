// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/date/DateFunction.java
#include <com/tibbo/aggregate/common/expression/function/date/DateFunction.h"

#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/util/DateUtils.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/Date.h"
//#include <java/util/GregorianCalendar.h"
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

com::tibbo::aggregate::common::expression::function::date::DateFunction::DateFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::date::DateFunction::DateFunction(const std::string & returnValue) 
    : DateFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor(returnValue);
}

void com::tibbo::aggregate::common::expression::function::date::DateFunction::ctor(const std::string & returnValue)
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_DATE_TIME_PROCESSING(), u"Date date [, String timezone]"_j, returnValue);
}

void* com::tibbo::aggregate::common::expression::function::date::DateFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], ::java::util::Date::class_());
    auto tz = ::com::tibbo::aggregate::common::util::DateUtils::UTC_TIME_ZONE();
    if(parameters)->length > 1) {
        tz = ::java::util::TimeZone::getTimeZone((*parameters)[int(1)])->toString());
    }
    auto calendar = new ::java::util::GregorianCalendar(tz);
    calendar)->setTime(java_cast< ::java::util::Date* >((*parameters)[int(0)]));
    return execute(calendar, parameters);
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::date::DateFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.date.DateFunction", 64);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::date::DateFunction::getClass0()
{
    return class_();
}

