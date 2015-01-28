#ifndef DefaultBindingProcessorH
#define DefaultBindingProcessorH

#include "binding/BindingProcessor.h"
#include "binding/BindingProvider.h"

class DefaultBindingProcessor : public BindingProcessor
{
private:
    BindingProviderPtr provider;
    EvaluatorPtr evaluator;
    Timer* timer;
    ExecutorService* executionService;
    bool disableStartupConcurrency;
    bool shareConcurrency;
    std::list<ReferenceListener>  listeners;
    std::list<TimerTask>  timerTasks;
    std::set  tasks;
	bool stopped;
	bool enabled;
	void startImpl(bool concurrentProcessing);

	void initBinding(BindingPtr binding, EvaluationOptionsPtr options);
	void ensureTimer();
	void addReferenceListener(BindingPtr binding, EvaluationOptionsPtr options, ReferencePtr reference);
	void writeReference(int method, ReferencePtr destination, ReferencePtr cause, AgObjectPtr value, ChangeCache* cache);
	bool checkCondition(EvaluationOptionsPtr options, EvaluationEnvironment* evaluationEnvironment);

public:
	bool start();

	void start(bool concurrentProcessing);

	void stop();
	bool isStopped();
   //	void submit(::java::util::concurrent::Callable* task); todo
   //	void setExecutionService(::java::util::concurrent::ExecutorService* service);   todo
	void setEnabled(bool enabled);

 //	::java::util::concurrent::ExecutorService* getExecutorService(); todo

	BindingProviderPtr getProvider();
	EvaluatorPtr getEvaluator();
	bool isDisableStartupConcurrency();
	void setDisableStartupConcurrency(bool disableStartupConcurrency);

	DefaultBindingProcessor(BindingProviderPtr provider, EvaluatorPtr evaluator);
  //	DefaultBindingProcessor(BindingProviderPtr provider, EvaluatorPtr evaluator, ::java::util::concurrent::ExecutorService* executionService);   todo
  //	DefaultBindingProcessor(BindingProviderPtr provider, EvaluatorPtr evaluator, ::java::util::Timer* timer, ::java::util::concurrent::ExecutorService* executionService);

};

#endif
