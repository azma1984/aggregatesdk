
#include "binding/DefaultBindingProcessor.h"



//DefaultBindingProcessor::DefaultBindingProcessor(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//DefaultBindingProcessor::DefaultBindingProcessor(BindingProviderPtr provider, EvaluatorPtr evaluator)
//    : DefaultBindingProcessor(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(provider,evaluator);
//}
//
//DefaultBindingProcessor::DefaultBindingProcessor(BindingProviderPtr provider, EvaluatorPtr evaluator, ::java::util::concurrent::ExecutorService* executionService)
//    : DefaultBindingProcessor(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(provider,evaluator,executionService);
//}
//
//DefaultBindingProcessor::DefaultBindingProcessor(BindingProviderPtr provider, EvaluatorPtr evaluator, ::java::util::Timer* timer, ::java::util::concurrent::ExecutorService* executionService)
//    : DefaultBindingProcessor(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(provider,evaluator,timer,executionService);
//}
//
//void DefaultBindingProcessor::init()
//{
//    listeners = new ::java::util::LinkedList();
//    timerTasks = new ::java::util::LinkedList();
//    tasks = ::java::util::Collections::newSetFromMap(new ::java::util::WeakHashMap());
//    enabled = true;
//}
//
//void DefaultBindingProcessor::ctor(BindingProviderPtr provider, EvaluatorPtr evaluator)
//{
//    super::ctor();
//    init();
//    this->provider = provider;
//    this->evaluator = evaluator;
//}
//
//void DefaultBindingProcessor::ctor(BindingProviderPtr provider, EvaluatorPtr evaluator, ::java::util::concurrent::ExecutorService* executionService)
//{
//    ctor(provider, evaluator);
//    this->executionService = executionService;
//}
//
//void DefaultBindingProcessor::ctor(BindingProviderPtr provider, EvaluatorPtr evaluator, ::java::util::Timer* timer, ::java::util::concurrent::ExecutorService* executionService)
//{
//    ctor(provider, evaluator);
//    this->executionService = executionService;
//    this->timer = timer;
//    shareConcurrency = true;
//}
//
//bool DefaultBindingProcessor::start()
//{
//    start(executionService != 0 && !disableStartupConcurrency);
//    return !stopped;
//}
//
//void DefaultBindingProcessor::start(bool concurrentProcessing)
//{
//    if(stopped) {
//        throw new ::java::lang::IllegalStateException(u"Cannot reuse binding processor"_j);
//    }
//    ::java::util::concurrent::Callable* const task = new DefaultBindingProcessor_start_1(this, concurrentProcessing);
//    if(!concurrentProcessing) {
//        try {
//            task)->call();
//        } catch (::java::lang::Exception* ex) {
//            throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
//        }
//    } else {
//        submit(task);
//    }
//}
//
//void DefaultBindingProcessor::startImpl(bool concurrentProcessing)
//{
//    auto const bindings = provider)->createBindings();
//    if(executionService != 0 && concurrentProcessing) {
//        for (auto _i = bindings)->keySet())->iterator(); _i->hasNext(); ) {
//            BindingPtr binding = java_cast< BindingPtr >(_i->next());
//            {
//                ::java::util::concurrent::Callable* task = new DefaultBindingProcessor_startImpl_2(this, binding, bindings);
//                try {
//                    submit(task);
//                } catch (::java::lang::Exception* ex) {
//                    provider)->processError(binding, EvaluationOptions::STARTUP, 0, new BindingException(Cres::get())->getString(u"binBindingQueueOverflow"_j), ex));
//                }
//            }
//        }
//    } else {
//        for (auto _i = bindings)->keySet())->iterator(); _i->hasNext(); ) {
//            BindingPtr bin = java_cast< BindingPtr >(_i->next());
//            {
//                initBinding(bin, java_cast< EvaluationOptionsPtr >(bindings)->get(bin)));
//            }
//        }
//    }
//    if(stopped) {
//        return;
//    }
//    provider)->start();
//}
//
//void DefaultBindingProcessor::stop()
//{
//    stopped = true;
//    if(shareConcurrency) {
//        {
//            synchronized synchronized_0(timerTasks);
//            {
//                for (auto _i = timerTasks)->iterator(); _i->hasNext(); ) {
//                    ::java::util::TimerTask* task = java_cast< ::java::util::TimerTask* >(_i->next());
//                    {
//                        task)->cancel();
//                    }
//                }
//            }
//        }
//        for (auto _i = tasks)->iterator(); _i->hasNext(); ) {
//            ::java::util::concurrent::Future* future = java_cast< ::java::util::concurrent::Future* >(_i->next());
//            {
//                future)->cancel(true);
//            }
//        }
//    } else {
//        if(executionService != 0) {
//            executionService)->shutdownNow();
//            try {
//                if(!executionService)->awaitTermination(10000, ::java::util::concurrent::TimeUnit::MILLISECONDS)) {
//                    Log::BINDINGS())->warn(u"Execution service didn't terminate in time"_j);
//                }
//            } catch (::java::lang::InterruptedException* ex) {
//                Log::BINDINGS())->warn(u"Interrupted during execution service termination"_j);
//                executionService)->shutdown();
//            }
//        }
//        if(timer != 0) {
//            timer)->cancel();
//        }
//    }
//    for (auto _i = listeners)->iterator(); _i->hasNext(); ) {
//        ReferenceListener* listener = java_cast< ReferenceListener* >(_i->next());
//        {
//            provider)->removeReferenceListener(listener);
//        }
//    }
//    provider)->stop();
//}
//
//void DefaultBindingProcessor::initBinding(BindingPtr binding, EvaluationOptionsPtr options)
//{
//    try {
//        if(stopped) {
//            return;
//        }
//        Log::BINDINGS())->debug(std::stringBuilder().append(u"Adding binding: "_j)->append(binding))
//            ->append(u", evaluation options: "_j)
//            ->append(options))->toString());
//        if(enabled && (options)->getPattern() & EvaluationOptions::STARTUP) != 0) {
//            try {
//                if(checkCondition(options, 0)) {
//                    auto result = evaluator)->evaluate(binding)->getExpression(), 0);
//                    provider)->processExecution(EvaluationOptions::STARTUP, binding, options, 0, result);
//                    writeReference(EvaluationOptions::STARTUP, binding)->getReference(), 0, result, 0);
//                } else {
//                    Log::BINDINGS())->debug(std::stringBuilder().append(u"Condition '"_j)->append(options)->getCondition()))
//                        ->append(u"' is false for binding: "_j)
//                        ->append(binding))->toString());
//                }
//            } catch (::java::lang::Exception* ex) {
//                provider)->processError(binding, EvaluationOptions::STARTUP, 0, ex);
//            }
//        }
//        if((options)->getPattern() & EvaluationOptions::EVENT) != 0) {
//            if(options)->getActivator() != 0) {
//                try {
//                    addReferenceListener(binding, options, options)->getActivator());
//                } catch (::java::lang::Exception* ex) {
//                    provider)->processError(binding, EvaluationOptions::EVENT, options)->getActivator(), ex);
//                }
//            } else {
//                auto identifiers = ExpressionUtils::findReferences(binding)->getExpression());
//                for (auto _i = identifiers)->iterator(); _i->hasNext(); ) {
//                    ReferencePtr ref = java_cast< ReferencePtr >(_i->next());
//                    {
//                        try {
//                            addReferenceListener(binding, options, ref);
//                        } catch (::java::lang::Exception* ex) {
//                            provider)->processError(binding, EvaluationOptions::EVENT, ref, ex);
//                        }
//                    }
//                }
//            }
//        }
//        if((options)->getPattern() & EvaluationOptions::PERIODIC) != 0 && options)->getPeriod() > 0) {
//            ensureTimer();
//            if(!stopped) {
//                auto const task = new DefaultBindingProcessor_EvaluationTimerTask(this, binding, options);
//                timer)->schedule(static_cast< ::java::util::TimerTask* >(task), options)->getPeriod(), options)->getPeriod());
//                if(shareConcurrency) {
//                    {
//                        synchronized synchronized_1(this);
//                        {
//                            timerTasks)->add(task));
//                        }
//                    }
//                }
//            }
//        }
//    } catch (::java::lang::Exception* ex) {
//        Log::BINDINGS())->warn(std::stringBuilder().append(u"Error initializing binding: "_j)->append(binding))->toString(), ex);
//    }
//}
//
//void DefaultBindingProcessor::ensureTimer()
//{
//    if(timer == 0) {
//        timer = new ::java::util::Timer(u"Timer/DefaultBindingProcessor"_j);
//    }
//}
//
//void DefaultBindingProcessor::addReferenceListener(BindingPtr binding, EvaluationOptionsPtr options, ReferencePtr reference) /* throws(BindingException) */
//{
//    if(stopped) {
//        return;
//    }
//    ReferenceListener* listener = new DefaultBindingProcessor_BindingReferenceListener(this, binding, options);
//    provider)->addReferenceListener(reference, listener);
//    listeners)->add(listener));
//}
//
//void DefaultBindingProcessor::writeReference(int method, ReferencePtr destination, ReferencePtr cause, AgObjectPtr value, ChangeCache* cache) /* throws(BindingException) */
//{
//    if(stopped || !enabled) {
//        return;
//    }
//    provider)->writeReference(method, destination, cause, value, cache);
//}
//
//bool DefaultBindingProcessor::checkCondition(EvaluationOptionsPtr options, EvaluationEnvironment* evaluationEnvironment) /* throws(BindingException) */
//{
//    try {
//        auto const conditionIsAbsent = options == 0 || options)->getCondition() == 0 || options)->getCondition())->getText() == 0 || options)->getCondition())->getText())->isEmpty();
//        if(conditionIsAbsent) {
//            return true;
//        }
//        auto condition = evaluator)->evaluate(options)->getCondition(), evaluationEnvironment);
//        return (util::Util::convertToBoolean(condition, true, false)))->booleanValue();
//    } catch (::java::lang::Exception* e) {
//        throw new BindingException(e)->getMessage(), e);
//    }
//}
//
//bool DefaultBindingProcessor::isStopped()
//{
//    return stopped;
//}
//
//void DefaultBindingProcessor::submit(::java::util::concurrent::Callable* task)
//{
//    if(executionService != 0) {
//        if(executionService)->isShutdown()) {
//            return;
//        }
//        auto future = executionService)->submit(static_cast< ::java::util::concurrent::Callable* >(task));
//        if(shareConcurrency) {
//            tasks)->add(future));
//        }
//    } else {
//        try {
//            task)->call();
//        } catch (::java::lang::Exception* ex) {
//            throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
//        }
//    }
//}
//
//void DefaultBindingProcessor::setExecutionService(::java::util::concurrent::ExecutorService* service)
//{
//    if(executionService != 0) {
//        executionService)->shutdown();
//        try {
//            executionService)->awaitTermination(10000, ::java::util::concurrent::TimeUnit::MILLISECONDS);
//        } catch (::java::lang::InterruptedException* e) {
//            Log::BINDINGS())->warn(std::stringBuilder().append(u"Error terminating bindings execution service: "_j)->append(e)->getMessage())->toString(), e);
//        }
//    }
//    executionService = service;
//}
//
//void DefaultBindingProcessor::setEnabled(bool enabled)
//{
//    this->enabled = enabled;
//}
//
//java::util::concurrent::ExecutorService* DefaultBindingProcessor::getExecutorService()
//{
//    return executionService;
//}
//
//BindingProviderPtr DefaultBindingProcessor::getProvider()
//{
//    return provider;
//}
//
//EvaluatorPtr DefaultBindingProcessor::getEvaluator()
//{
//    return evaluator;
//}
//
//bool DefaultBindingProcessor::isDisableStartupConcurrency()
//{
//    return disableStartupConcurrency;
//}
//
//void DefaultBindingProcessor::setDisableStartupConcurrency(bool disableStartupConcurrency)
//{
//    this->disableStartupConcurrency = disableStartupConcurrency;
//}
//

