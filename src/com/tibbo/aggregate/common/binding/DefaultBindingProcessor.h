#pragma once

#include "binding/BindingProcessor.h"
#include "binding/BindingProvider.h"

class DefaultBindingProcessor : public BindingProcessor
{
private:
    BindingProvider* provider;
    Evaluator* evaluator;
    Timer* timer;
    ExecutorService* executionService;
    bool disableStartupConcurrency;
    bool shareConcurrency;
    std::list<ReferenceListener>  listeners;
    std::list<TimerTask>  timerTasks;
    ::std::set  tasks;
    bool stopped;
    bool enabled;
protected:
    void ctor(BindingProvider* provider, Evaluator* evaluator);
    void ctor(BindingProvider* provider, Evaluator* evaluator, ::java::util::concurrent::ExecutorService* executionService);
    void ctor(BindingProvider* provider, Evaluator* evaluator, ::java::util::Timer* timer, ::java::util::concurrent::ExecutorService* executionService);

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
    void addReferenceListener(Binding* binding, EvaluationOptions* options, Reference* reference) /* throws(BindingException) */;
    void writeReference(int method, Reference* destination, Reference* cause, void* value, ChangeCache* cache) /* throws(BindingException) */;
    bool checkCondition(EvaluationOptions* options, EvaluationEnvironment* evaluationEnvironment) /* throws(BindingException) */;

public:
    bool isStopped();
    void submit(::java::util::concurrent::Callable* task);
    void setExecutionService(::java::util::concurrent::ExecutorService* service);
    void setEnabled(bool enabled);

public: /* protected */
    ::java::util::concurrent::ExecutorService* getExecutorService();

public:
    BindingProvider* getProvider();
    Evaluator* getEvaluator();
    bool isDisableStartupConcurrency();
    void setDisableStartupConcurrency(bool disableStartupConcurrency);

    // Generated
    DefaultBindingProcessor(BindingProvider* provider, Evaluator* evaluator);
    DefaultBindingProcessor(BindingProvider* provider, Evaluator* evaluator, ::java::util::concurrent::ExecutorService* executionService);
    DefaultBindingProcessor(BindingProvider* provider, Evaluator* evaluator, ::java::util::Timer* timer, ::java::util::concurrent::ExecutorService* executionService);
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
