// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/DefaultBindingProcessor.java
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/binding/Binding.h"
#include <com/tibbo/aggregate/common/binding/BindingException.h"
#include <com/tibbo/aggregate/common/binding/BindingProvider.h"
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor_start_1.h"
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor_startImpl_2.h"
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor_BindingReferenceListener.h"
#include <com/tibbo/aggregate/common/binding/DefaultBindingProcessor_EvaluationTimerTask.h"
#include <com/tibbo/aggregate/common/binding/EvaluationOptions.h"
#include <com/tibbo/aggregate/common/binding/ReferenceListener.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/expression/ExpressionUtils.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
#include <com/tibbo/aggregate/common/util/Util.h"
/*
//#include <java/lang/Boolean.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/InterruptedException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/Collections.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/Map.h"
//#include <java/util/ResourceBundle.h"
//#include <java/util/Set.h"
//#include <java/util/Timer.h"
//#include <java/util/TimerTask.h"
//#include <java/util/WeakHashMap.h"
//#include <java/util/concurrent/Callable.h"
//#include <java/util/concurrent/ExecutorService.h"
//#include <java/util/concurrent/Future.h"
//#include <java/util/concurrent/TimeUnit.h"
//#include <org/apache/log4j/Logger.h"
*/
template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

extern void lock(void *);
extern void unlock(void *);

namespace
{
    struct synchronized
    {
        synchronized(void *o) : o(o) { ::lock(o); }
        ~synchronized() { ::unlock(o); }
    private:
        synchronized(const synchronized&); synchronized& operator=(const synchronized&);
        void *o;
    };
}
com::tibbo::aggregate::common::binding::DefaultBindingProcessor::DefaultBindingProcessor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::binding::DefaultBindingProcessor::DefaultBindingProcessor(BindingProvider* provider, Evaluator* evaluator) 
    : DefaultBindingProcessor(*static_cast< ::default_init_tag* >(0))
{
    ctor(provider,evaluator);
}

com::tibbo::aggregate::common::binding::DefaultBindingProcessor::DefaultBindingProcessor(BindingProvider* provider, Evaluator* evaluator, ::java::util::concurrent::ExecutorService* executionService) 
    : DefaultBindingProcessor(*static_cast< ::default_init_tag* >(0))
{
    ctor(provider,evaluator,executionService);
}

com::tibbo::aggregate::common::binding::DefaultBindingProcessor::DefaultBindingProcessor(BindingProvider* provider, Evaluator* evaluator, ::java::util::Timer* timer, ::java::util::concurrent::ExecutorService* executionService) 
    : DefaultBindingProcessor(*static_cast< ::default_init_tag* >(0))
{
    ctor(provider,evaluator,timer,executionService);
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::init()
{
    listeners = new ::java::util::LinkedList();
    timerTasks = new ::java::util::LinkedList();
    tasks = ::java::util::Collections::newSetFromMap(new ::java::util::WeakHashMap());
    enabled = true;
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::ctor(BindingProvider* provider, Evaluator* evaluator)
{
    super::ctor();
    init();
    this->provider = provider;
    this->evaluator = evaluator;
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::ctor(BindingProvider* provider, Evaluator* evaluator, ::java::util::concurrent::ExecutorService* executionService)
{
    ctor(provider, evaluator);
    this->executionService = executionService;
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::ctor(BindingProvider* provider, Evaluator* evaluator, ::java::util::Timer* timer, ::java::util::concurrent::ExecutorService* executionService)
{
    ctor(provider, evaluator);
    this->executionService = executionService;
    this->timer = timer;
    shareConcurrency = true;
}

bool com::tibbo::aggregate::common::binding::DefaultBindingProcessor::start()
{
    start(executionService != 0 && !disableStartupConcurrency);
    return !stopped;
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::start(bool concurrentProcessing)
{
    if(stopped) {
        throw new ::java::lang::IllegalStateException(u"Cannot reuse binding processor"_j);
    }
    ::java::util::concurrent::Callable* const task = new DefaultBindingProcessor_start_1(this, concurrentProcessing);
    if(!concurrentProcessing) {
        try {
            task)->call();
        } catch (::java::lang::Exception* ex) {
            throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
        }
    } else {
        submit(task);
    }
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::startImpl(bool concurrentProcessing)
{
    auto const bindings = provider)->createBindings();
    if(executionService != 0 && concurrentProcessing) {
        for (auto _i = bindings)->keySet())->iterator(); _i->hasNext(); ) {
            Binding* binding = java_cast< Binding* >(_i->next());
            {
                ::java::util::concurrent::Callable* task = new DefaultBindingProcessor_startImpl_2(this, binding, bindings);
                try {
                    submit(task);
                } catch (::java::lang::Exception* ex) {
                    provider)->processError(binding, EvaluationOptions::STARTUP, 0, new BindingException(Cres::get())->getString(u"binBindingQueueOverflow"_j), ex));
                }
            }
        }
    } else {
        for (auto _i = bindings)->keySet())->iterator(); _i->hasNext(); ) {
            Binding* bin = java_cast< Binding* >(_i->next());
            {
                initBinding(bin, java_cast< EvaluationOptions* >(bindings)->get(bin)));
            }
        }
    }
    if(stopped) {
        return;
    }
    provider)->start();
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::stop()
{
    stopped = true;
    if(shareConcurrency) {
        {
            synchronized synchronized_0(timerTasks);
            {
                for (auto _i = timerTasks)->iterator(); _i->hasNext(); ) {
                    ::java::util::TimerTask* task = java_cast< ::java::util::TimerTask* >(_i->next());
                    {
                        task)->cancel();
                    }
                }
            }
        }
        for (auto _i = tasks)->iterator(); _i->hasNext(); ) {
            ::java::util::concurrent::Future* future = java_cast< ::java::util::concurrent::Future* >(_i->next());
            {
                future)->cancel(true);
            }
        }
    } else {
        if(executionService != 0) {
            executionService)->shutdownNow();
            try {
                if(!executionService)->awaitTermination(10000, ::java::util::concurrent::TimeUnit::MILLISECONDS)) {
                    Log::BINDINGS())->warn(u"Execution service didn't terminate in time"_j);
                }
            } catch (::java::lang::InterruptedException* ex) {
                Log::BINDINGS())->warn(u"Interrupted during execution service termination"_j);
                executionService)->shutdown();
            }
        }
        if(timer != 0) {
            timer)->cancel();
        }
    }
    for (auto _i = listeners)->iterator(); _i->hasNext(); ) {
        ReferenceListener* listener = java_cast< ReferenceListener* >(_i->next());
        {
            provider)->removeReferenceListener(listener);
        }
    }
    provider)->stop();
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::initBinding(Binding* binding, EvaluationOptions* options)
{
    try {
        if(stopped) {
            return;
        }
        Log::BINDINGS())->debug(std::stringBuilder().append(u"Adding binding: "_j)->append(binding))
            ->append(u", evaluation options: "_j)
            ->append(options))->toString());
        if(enabled && (options)->getPattern() & EvaluationOptions::STARTUP) != 0) {
            try {
                if(checkCondition(options, 0)) {
                    auto result = evaluator)->evaluate(binding)->getExpression(), 0);
                    provider)->processExecution(EvaluationOptions::STARTUP, binding, options, 0, result);
                    writeReference(EvaluationOptions::STARTUP, binding)->getReference(), 0, result, 0);
                } else {
                    Log::BINDINGS())->debug(std::stringBuilder().append(u"Condition '"_j)->append(options)->getCondition()))
                        ->append(u"' is false for binding: "_j)
                        ->append(binding))->toString());
                }
            } catch (::java::lang::Exception* ex) {
                provider)->processError(binding, EvaluationOptions::STARTUP, 0, ex);
            }
        }
        if((options)->getPattern() & EvaluationOptions::EVENT) != 0) {
            if(options)->getActivator() != 0) {
                try {
                    addReferenceListener(binding, options, options)->getActivator());
                } catch (::java::lang::Exception* ex) {
                    provider)->processError(binding, EvaluationOptions::EVENT, options)->getActivator(), ex);
                }
            } else {
                auto identifiers = ExpressionUtils::findReferences(binding)->getExpression());
                for (auto _i = identifiers)->iterator(); _i->hasNext(); ) {
                    Reference* ref = java_cast< Reference* >(_i->next());
                    {
                        try {
                            addReferenceListener(binding, options, ref);
                        } catch (::java::lang::Exception* ex) {
                            provider)->processError(binding, EvaluationOptions::EVENT, ref, ex);
                        }
                    }
                }
            }
        }
        if((options)->getPattern() & EvaluationOptions::PERIODIC) != 0 && options)->getPeriod() > 0) {
            ensureTimer();
            if(!stopped) {
                auto const task = new DefaultBindingProcessor_EvaluationTimerTask(this, binding, options);
                timer)->schedule(static_cast< ::java::util::TimerTask* >(task), options)->getPeriod(), options)->getPeriod());
                if(shareConcurrency) {
                    {
                        synchronized synchronized_1(this);
                        {
                            timerTasks)->add(task));
                        }
                    }
                }
            }
        }
    } catch (::java::lang::Exception* ex) {
        Log::BINDINGS())->warn(std::stringBuilder().append(u"Error initializing binding: "_j)->append(binding))->toString(), ex);
    }
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::ensureTimer()
{
    if(timer == 0) {
        timer = new ::java::util::Timer(u"Timer/DefaultBindingProcessor"_j);
    }
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::addReferenceListener(Binding* binding, EvaluationOptions* options, Reference* reference) /* throws(BindingException) */
{
    if(stopped) {
        return;
    }
    ReferenceListener* listener = new DefaultBindingProcessor_BindingReferenceListener(this, binding, options);
    provider)->addReferenceListener(reference, listener);
    listeners)->add(listener));
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::writeReference(int method, Reference* destination, Reference* cause, void* value, ChangeCache* cache) /* throws(BindingException) */
{
    if(stopped || !enabled) {
        return;
    }
    provider)->writeReference(method, destination, cause, value, cache);
}

bool com::tibbo::aggregate::common::binding::DefaultBindingProcessor::checkCondition(EvaluationOptions* options, EvaluationEnvironment* evaluationEnvironment) /* throws(BindingException) */
{
    try {
        auto const conditionIsAbsent = options == 0 || options)->getCondition() == 0 || options)->getCondition())->getText() == 0 || options)->getCondition())->getText())->isEmpty();
        if(conditionIsAbsent) {
            return true;
        }
        auto condition = evaluator)->evaluate(options)->getCondition(), evaluationEnvironment);
        return (util::Util::convertToBoolean(condition, true, false)))->booleanValue();
    } catch (::java::lang::Exception* e) {
        throw new BindingException(e)->getMessage(), e);
    }
}

bool com::tibbo::aggregate::common::binding::DefaultBindingProcessor::isStopped()
{
    return stopped;
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::submit(::java::util::concurrent::Callable* task)
{
    if(executionService != 0) {
        if(executionService)->isShutdown()) {
            return;
        }
        auto future = executionService)->submit(static_cast< ::java::util::concurrent::Callable* >(task));
        if(shareConcurrency) {
            tasks)->add(future));
        }
    } else {
        try {
            task)->call();
        } catch (::java::lang::Exception* ex) {
            throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
        }
    }
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::setExecutionService(::java::util::concurrent::ExecutorService* service)
{
    if(executionService != 0) {
        executionService)->shutdown();
        try {
            executionService)->awaitTermination(10000, ::java::util::concurrent::TimeUnit::MILLISECONDS);
        } catch (::java::lang::InterruptedException* e) {
            Log::BINDINGS())->warn(std::stringBuilder().append(u"Error terminating bindings execution service: "_j)->append(e)->getMessage())->toString(), e);
        }
    }
    executionService = service;
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::setEnabled(bool enabled)
{
    this->enabled = enabled;
}

java::util::concurrent::ExecutorService* com::tibbo::aggregate::common::binding::DefaultBindingProcessor::getExecutorService()
{
    return executionService;
}

com::tibbo::aggregate::common::binding::BindingProvider* com::tibbo::aggregate::common::binding::DefaultBindingProcessor::getProvider()
{
    return provider;
}

Evaluator* com::tibbo::aggregate::common::binding::DefaultBindingProcessor::getEvaluator()
{
    return evaluator;
}

bool com::tibbo::aggregate::common::binding::DefaultBindingProcessor::isDisableStartupConcurrency()
{
    return disableStartupConcurrency;
}

void com::tibbo::aggregate::common::binding::DefaultBindingProcessor::setDisableStartupConcurrency(bool disableStartupConcurrency)
{
    this->disableStartupConcurrency = disableStartupConcurrency;
}



java::lang::Class* com::tibbo::aggregate::common::binding::DefaultBindingProcessor::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.binding.DefaultBindingProcessor", 58);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::binding::DefaultBindingProcessor::getClass0()
{
    return class_();
}

