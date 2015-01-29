// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/date/TimeFunction.java
//#include "expression/function/date/TimeFunction.h"

#include "expression/function/Functions.h"
/*
//#include <java/lang/Class.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Long.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/util/Date.h"
#include <ObjectArray.h"
*/
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

function::date::TimeFunction::TimeFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::date::TimeFunction::TimeFunction() 
    : TimeFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::date::TimeFunction::ctor()
{
    super::ctor(function::Functions::GROUP_DATE_TIME_PROCESSING(), u"Date date"_j, u"Long"_j);
}

void* function::date::TimeFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, false, parameters);
    checkParameterType(0, (*parameters)[int(0)], Date::class_());
    return ::java::lang::Long::valueOf((java_cast< Date* >((*parameters)[int(0)])))->getTime());
}



java::lang::Class* function::date::TimeFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.date.TimeFunction", 64);
    return c;
}

java::lang::Class* function::date::TimeFunction::getClass0()
{
    return class_();
}

