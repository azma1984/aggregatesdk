// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/SleepFunction.java
#include <com/tibbo/aggregate/common/expression/function/other/SleepFunction.h"

#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
#include <com/tibbo/aggregate/common/expression/function/Functions.h"
#include <com/tibbo/aggregate/common/util/Util.h"
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

com::tibbo::aggregate::common::expression::function::other::SleepFunction::SleepFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::function::other::SleepFunction::SleepFunction() 
    : SleepFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::function::other::SleepFunction::ctor()
{
    super::ctor(::com::tibbo::aggregate::common::expression::function::Functions::GROUP_OTHER(), u"Integer milliseconds"_j, u"Null"_j);
}

void* com::tibbo::aggregate::common::expression::function::other::SleepFunction::execute(::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, false, parameters);
    auto n = ::com::tibbo::aggregate::common::util::Util::convertToNumber((*parameters)[int(0)], true, false);
    try {
        ::java::lang::Thread::currentThread())->sleep(n)->intValue());
    } catch (::java::lang::InterruptedException* ex) {
        throw new ::com::tibbo::aggregate::common::expression::EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
    }
    return 0;
}



java::lang::Class* com::tibbo::aggregate::common::expression::function::other::SleepFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.other.SleepFunction", 66);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::function::other::SleepFunction::getClass0()
{
    return class_();
}

