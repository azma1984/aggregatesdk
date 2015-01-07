// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/DefaultBindingProcessor.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/binding/ReferenceListener.h"



class com::tibbo::aggregate::common::binding::DefaultBindingProcessor_BindingReferenceListener
    
    , public ReferenceListener
{

public:
    typedef void super;

private:
    Binding* binding;
    void* content;
    EvaluationOptions* options;
protected:
    void ctor(Binding* binding, EvaluationOptions* options);

public:
    void referenceChanged(::com::tibbo::aggregate::common::expression::Reference* cause, std::map environment, ChangeCache* cache) /* throws(BindingException) */;
    void referenceChanged(::com::tibbo::aggregate::common::expression::Reference* cause, std::map environment, ChangeCache* cache, bool asynchronousProcessing) /* throws(BindingException) */;

private:
    void referenceChanged(::com::tibbo::aggregate::common::expression::Reference* cause, std::map environment, ChangeCache* cache, ::java::lang::Boolean* asynchronousProcessing) /* throws(BindingException) */;
    void processReferenceChange(::com::tibbo::aggregate::common::expression::Reference* cause, std::map environment, ChangeCache* cache) /* throws(BindingException) */;

public:
    Binding* getBinding();
    void setContent(void* content);
    void* getContent();
    BindingProcessor* getBindingProcessor();
    EvaluationOptions* getEvaluationOptions();
    std::string* toString();

    // Generated
    DefaultBindingProcessor_BindingReferenceListener(DefaultBindingProcessor *DefaultBindingProcessor_this, Binding* binding, EvaluationOptions* options);
protected:
    DefaultBindingProcessor_BindingReferenceListener(DefaultBindingProcessor *DefaultBindingProcessor_this, const ::default_init_tag&);


public:
    
    DefaultBindingProcessor *DefaultBindingProcessor_this;

private:
    ::java::lang::Class* getClass0();
    friend class DefaultBindingProcessor;
    friend class DefaultBindingProcessor_start_1;
    friend class DefaultBindingProcessor_startImpl_2;
    friend class DefaultBindingProcessor_EvaluationTimerTask;
    friend class DefaultBindingProcessor_EvaluationTimerTask_run_1;
    friend class DefaultBindingProcessor_BindingReferenceListener_referenceChanged_1;
};
