// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/DefaultBindingProcessor.java
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor_EvaluationTimerTask.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/binding/Binding.h"
#include <com/tibbo/aggregate/common/binding/BindingException.h"
#include <com/tibbo/aggregate/common/binding/BindingProvider.h"
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor_EvaluationTimerTask_run_1.h"
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor.h"
#include <com/tibbo/aggregate/common/binding/EvaluationOptions.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
////#include <java/lang/Exception.h"
////#include <java/lang/NullPointerException.h"
////#include <java/lang/Object.h"
////#include <java/lang/String.h"
////#include <java/lang/Throwable.h"
////#include <java/util/ResourceBundle.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::binding::DefaultBindingProcessor_EvaluationTimerTask::DefaultBindingProcessor_EvaluationTimerTask(DefaultBindingProcessor *DefaultBindingProcessor_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , DefaultBindingProcessor_this(DefaultBindingProcessor_this)
{
    
}

com::tibbo::aggregate::common::binding::DefaultBindingProcessor_EvaluationTimerTask::DefaultBindingProcessor_EvaluationTimerTask(DefaultBindingProcessor *DefaultBindingProcessor_this, Binding* binding, EvaluationOptions* options) 
    : DefaultBindingProcessor_EvaluationTimerTask(DefaultBindingProcessor_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(binding,options);
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor_EvaluationTimerTask::ctor(Binding* binding, EvaluationOptions* options)
{
    super::ctor();
    this->binding = binding;
    this->options = options;
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor_EvaluationTimerTask::run()
{
    ::java::util::concurrent::Callable* const task = new DefaultBindingProcessor_EvaluationTimerTask_run_1(this);
    try {
        DefaultBindingProcessor_this->submit(task);
    } catch (::java::lang::Throwable* ex) {
        DefaultBindingProcessor_this->provider)->processError(binding, EvaluationOptions::PERIODIC, 0, new BindingException(Cres::get())->getString(u"binBindingQueueOverflow"_j), ex));
    }
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor_EvaluationTimerTask::executeEvaluationTask()
{
    try {
        if(DefaultBindingProcessor_this->stopped || !DefaultBindingProcessor_this->enabled) {
            return;
        }
        if(DefaultBindingProcessor_this->checkCondition(options, 0)) {
            auto result = DefaultBindingProcessor_this->evaluator)->evaluate(binding)->getExpression());
            DefaultBindingProcessor_this->provider)->processExecution(EvaluationOptions::PERIODIC, binding, options, 0, result);
            DefaultBindingProcessor_this->writeReference(EvaluationOptions::PERIODIC, binding)->getReference(), 0, result, 0);
        }
    } catch (::java::lang::Exception* ex) {
        DefaultBindingProcessor_this->provider)->processError(binding, EvaluationOptions::PERIODIC, 0, ex);
    }
}



java::lang::Class* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_EvaluationTimerTask::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.binding.DefaultBindingProcessor.EvaluationTimerTask", 78);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::binding::DefaultBindingProcessor_EvaluationTimerTask::getClass0()
{
    return class_();
}

