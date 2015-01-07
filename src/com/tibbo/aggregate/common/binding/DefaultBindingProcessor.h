// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/DefaultBindingProcessor.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/binding/BindingProcessor.h"



class com::tibbo::aggregate::common::binding::DefaultBindingProcessor
    
    , public BindingProcessor
{

public:
    typedef void super;

private:
    BindingProvider* provider;
    ::com::tibbo::aggregate::common::expression::Evaluator* evaluator;
    ::java::util::Timer* timer;
    ::java::util::concurrent::ExecutorService* executionService;
    bool disableStartupConcurrency;
    bool shareConcurrency;
    std::list  listeners;
    std::list  timerTasks;
    ::java::util::Set* tasks;
    bool stopped;
    bool enabled;
protected:
    void ctor(BindingProvider* provider, ::com::tibbo::aggregate::common::expression::Evaluator* evaluator);
    void ctor(BindingProvider* provider, ::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::java::util::concurrent::ExecutorService* executionService);
    void ctor(BindingProvider* provider, ::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::java::util::Timer* timer, ::java::util::concurrent::ExecutorService* executionService);

public:
    bool start();

public: /* protected */
    void start(bool concurrentProcessing);

private:
    void startImpl(bool concurrentProcessing);

public:
    void stop();

private:
    void initBinding(Binding* binding, EvaluationOptions* options);
    void ensureTimer();
    void addReferenceListener(Binding* binding, EvaluationOptions* options, ::com::tibbo::aggregate::common::expression::Reference* reference) /* throws(BindingException) */;
    void writeReference(int method, ::com::tibbo::aggregate::common::expression::Reference* destination, ::com::tibbo::aggregate::common::expression::Reference* cause, void* value, ChangeCache* cache) /* throws(BindingException) */;
    bool checkCondition(EvaluationOptions* options, ::com::tibbo::aggregate::common::expression::EvaluationEnvironment* evaluationEnvironment) /* throws(BindingException) */;

public:
    bool isStopped();
    void submit(::java::util::concurrent::Callable* task);
    void setExecutionService(::java::util::concurrent::ExecutorService* service);
    void setEnabled(bool enabled);

public: /* protected */
    ::java::util::concurrent::ExecutorService* getExecutorService();

public:
    BindingProvider* getProvider();
    ::com::tibbo::aggregate::common::expression::Evaluator* getEvaluator();
    bool isDisableStartupConcurrency();
    void setDisableStartupConcurrency(bool disableStartupConcurrency);

    // Generated
    DefaultBindingProcessor(BindingProvider* provider, ::com::tibbo::aggregate::common::expression::Evaluator* evaluator);
    DefaultBindingProcessor(BindingProvider* provider, ::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::java::util::concurrent::ExecutorService* executionService);
    DefaultBindingProcessor(BindingProvider* provider, ::com::tibbo::aggregate::common::expression::Evaluator* evaluator, ::java::util::Timer* timer, ::java::util::concurrent::ExecutorService* executionService);
protected:
    DefaultBindingProcessor(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
    friend class DefaultBindingProcessor_start_1;
    friend class DefaultBindingProcessor_startImpl_2;
    friend class DefaultBindingProcessor_EvaluationTimerTask;
    friend class DefaultBindingProcessor_EvaluationTimerTask_run_1;
    friend class DefaultBindingProcessor_BindingReferenceListener;
    friend class DefaultBindingProcessor_BindingReferenceListener_referenceChanged_1;
};
