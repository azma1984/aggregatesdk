// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/DefaultBindingProcessor.java
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor_EvaluationTimerTask_run_1.h"

#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor_EvaluationTimerTask.h"

com::tibbo::aggregate::common::binding::DefaultBindingProcessor_EvaluationTimerTask_run_1::DefaultBindingProcessor_EvaluationTimerTask_run_1(DefaultBindingProcessor_EvaluationTimerTask *DefaultBindingProcessor_EvaluationTimerTask_this)
    : super(*static_cast< ::default_init_tag* >(0))
    , DefaultBindingProcessor_EvaluationTimerTask_this(DefaultBindingProcessor_EvaluationTimerTask_this)
{
    
    ctor();
}

void* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_EvaluationTimerTask_run_1::call()
{
    DefaultBindingProcessor_EvaluationTimerTask_this->executeEvaluationTask();
    return 0;
}



java::lang::Class* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_EvaluationTimerTask_run_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_EvaluationTimerTask_run_1::getClass0()
{
    return class_();
}

