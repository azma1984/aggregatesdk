// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/date/FormatDateFunction.java
#include "expression/function/date/FormatDateFunction.h"

#include "expression/function/Functions.h"
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

function::date::FormatDateFunction::FormatDateFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::date::FormatDateFunction::FormatDateFunction() 
    : FormatDateFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::date::FormatDateFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATE_TIME_PROCESSING(), u"Date date, String pattern [, String timezone]"_j, u"String"_j);
}

void* function::date::FormatDateFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(2, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], Date::class_());
    auto date = java_cast< Date* >((*parameters)[int(0)]);
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



java::lang::Class* function::date::FormatDateFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.date.FormatDateFunction", 70);
    return c;
}

java::lang::Class* function::date::FormatDateFunction::getClass0()
{
    return class_();
}

