// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/DefaultBindingProcessor.java

#pragma once

#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/util/concurrent/Callable.h"



class com::tibbo::aggregate::common::binding::DefaultBindingProcessor_startImpl_2
    
    , public ::java::util::concurrent::Callable
{

public:
    typedef void super;
    void* call() /* throws(Exception) */;

    // Generated
    DefaultBindingProcessor_startImpl_2(DefaultBindingProcessor *DefaultBindingProcessor_this, Binding* binding, std::map bindings);
    
    DefaultBindingProcessor *DefaultBindingProcessor_this;
    Binding* binding;
    std::map bindings;

private:
    ::java::lang::Class* getClass0();
    friend class DefaultBindingProcessor;
    friend class DefaultBindingProcessor_start_1;
    friend class DefaultBindingProcessor_EvaluationTimerTask;
    friend class DefaultBindingProcessor_EvaluationTimerTask_run_1;
    friend class DefaultBindingProcessor_BindingReferenceListener;
    friend class DefaultBindingProcessor_BindingReferenceListener_referenceChanged_1;
};
