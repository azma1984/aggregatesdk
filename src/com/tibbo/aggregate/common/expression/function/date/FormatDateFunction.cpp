// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/date/FormatDateFunction.java
#include <com/tibbo/aggregate/common/expression/function/date/FormatDateFunction.h"

#include <com/tibbo/aggregate/common/expression/function/Functions.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/text/SimpleDateFormat.h"
//#include <java/util/Date.h"
//#include <java/util/Locale.h"
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

com::tibbo::aggregate::common::expression::function::date::FormatDateFunction::FormatDateFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::date::FormatDateFunction::FormatDateFunction() 
    : FormatDateFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::date::FormatDateFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_DATE_TIME_PROCESSING(), u"Date date, String pattern [, String timezone]"_j, u"String"_j);
}

void* com::tibbo::aggregate::common::expression::function::date::FormatDateFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], ::java::util::Date::class_());
    auto date = java_cast< ::java::util::Date* >((*parameters)[int(0)]);
    auto pattern = (*parameters)[int(1)])->toString();
    if(date == 0) {
        return u""_j;
    }
    auto const simpleDateFormat = new ::java::text::SimpleDateFormat(pattern, ::java::util::Locale::ENGLISH());
    if(parameters)->length > 2) {
        simpleDateFormat)->setTimeZone(::java::util::TimeZone::getTimeZone((*parameters)[int(2)])->toString()));
    }
    return simpleDateFormat)->format(date);
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::date::FormatDateFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.date.FormatDateFunction", 70);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::date::FormatDateFunction::getClass0()
{
    return class_();
}

