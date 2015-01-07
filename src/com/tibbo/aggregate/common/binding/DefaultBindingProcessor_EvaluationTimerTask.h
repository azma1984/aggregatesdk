// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/DefaultBindingProcessor.java

#pragma once

#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/TimerTask.h"



class com::tibbo::aggregate::common::binding::DefaultBindingProcessor_EvaluationTimerTask
    : public ::java::util::TimerTask
{

public:
    typedef ::java::util::TimerTask super;

private:
    Binding* binding;
    EvaluationOptions* options;
protected:
    void ctor(Binding* binding, EvaluationOptions* options);

public:
    void run();
    void executeEvaluationTask();

    // Generated
    DefaultBindingProcessor_EvaluationTimerTask(DefaultBindingProcessor *DefaultBindingProcessor_this, Binding* binding, EvaluationOptions* options);
protected:
    DefaultBindingProcessor_EvaluationTimerTask(DefaultBindingProcessor *DefaultBindingProcessor_this, const ::default_init_tag&);


public:
    
    DefaultBindingProcessor *DefaultBindingProcessor_this;

private:
    ::java::lang::Class* getClass0();
    friend class DefaultBindingProcessor;
    friend class DefaultBindingProcessor_start_1;
    friend class DefaultBindingProcessor_startImpl_2;
    friend class DefaultBindingProcessor_EvaluationTimerTask_run_1;
    friend class DefaultBindingProcessor_BindingReferenceListener;
    friend class DefaultBindingProcessor_BindingReferenceListener_referenceChanged_1;
};
