// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/SleepFunction.java
#include "expression/function/other/SleepFunction.h"

#include "expression/EvaluationException.h"
#include "expression/function/Functions.h"
#include "util/Util.h"
//#include <java/lang/InterruptedException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/String.h"
//#include <java/lang/Thread.h"
//#include <java/lang/Throwable.h"
#include <ObjectArray.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

function::other::SleepFunction::SleepFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::other::SleepFunction::SleepFunction() 
    : SleepFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::other::SleepFunction::ctor()
{
    super::ctor(function::Functions::GROUP_OTHER(), u"Integer milliseconds"_j, u"Null"_j);
}

void* function::other::SleepFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, false, parameters);
    auto n = ::com::tibbo::aggregate::common::util::Util::convertToNumber((*parameters)[int(0)], true, false);
    try {
        ::java::lang::Thread::currentThread())->sleep(n)->intValue());
    } catch (::java::lang::InterruptedException* ex) {
        throw new EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
    }
    return 0;
}



java::lang::Class* function::other::SleepFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.other.SleepFunction", 66);
    return c;
}

java::lang::Class* function::other::SleepFunction::getClass0()
{
    return class_();
}

