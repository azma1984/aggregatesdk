// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/DefaultBindingProcessor.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/util/concurrent/Callable.h"



class com::tibbo::aggregate::common::binding::DefaultBindingProcessor_start_1
    
    , public ::java::util::concurrent::Callable
{

public:
    typedef void super;
    void* call();

    // Generated
    DefaultBindingProcessor_start_1(DefaultBindingProcessor *DefaultBindingProcessor_this, bool concurrentProcessing);
    
    DefaultBindingProcessor *DefaultBindingProcessor_this;
    bool concurrentProcessing;

private:
    ::java::lang::Class* getClass0();
    friend class DefaultBindingProcessor;
    friend class DefaultBindingProcessor_startImpl_2;
    friend class DefaultBindingProcessor_EvaluationTimerTask;
    friend class DefaultBindingProcessor_EvaluationTimerTask_run_1;
    friend class DefaultBindingProcessor_BindingReferenceListener;
    friend class DefaultBindingProcessor_BindingReferenceListener_referenceChanged_1;
};
