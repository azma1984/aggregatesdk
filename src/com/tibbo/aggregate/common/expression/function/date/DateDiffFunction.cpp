// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/date/DateDiffFunction.java
#include <com/tibbo/aggregate/common/expression/function/date/DateDiffFunction.h"

#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/util/TimeHelper.h"
#include <com/tibbo/aggregate/common/util/TimeUnit.h"
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Long.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/Date.h"
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

function::date::DateDiffFunction::DateDiffFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::date::DateDiffFunction::DateDiffFunction() 
    : DateDiffFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::date::DateDiffFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATE_TIME_PROCESSING(), u"Date first, Date second, String unit"_j, u"Long"_j);
}

void* function::date::DateDiffFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(3, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], Date::class_());
    checkParameterType(1, (*parameters)[int(1)], Date::class_());
    auto unit = ::com::tibbo::aggregate::common::util::TimeHelper::getTimeUnit((*parameters)[int(2)])->toString());
    auto first = java_cast< Date* >((*parameters)[int(0)]);
    auto second = java_cast< Date* >((*parameters)[int(1)]);
    return ::java::lang::Long::valueOf((second)->getTime() - first)->getTime()) / unit)->getLength());
}



java::lang::Class* function::date::DateDiffFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.date.DateDiffFunction", 68);
    return c;
}

java::lang::Class* function::date::DateDiffFunction::getClass0()
{
    return class_();
}

