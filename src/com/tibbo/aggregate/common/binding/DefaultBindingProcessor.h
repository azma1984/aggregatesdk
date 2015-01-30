#ifndef DefaultBindingProcessorH
#define DefaultBindingProcessorH

 #include "Cres.h"
//#include "Log.h"
#include "binding/Binding.h"
#include "binding/BindingException.h"
#include "binding/BindingProvider.h"
#include "binding/EvaluationOptions.h"
#include "binding/ReferenceListener.h"
//#include "expression/Evaluator.h"
//#include "expression/Expression.h"
//#include "expression/ExpressionUtils.h"
//#include "expression/Reference.h"
#include "util/Util.h"
#include "binding/BindingProcessor.h"
#include "binding/BindingProvider.h"
#include "util/TimerTask.h"
#include "util/Future.h"
#include "util/ExecutorService.h"
#include "util/Timer.h"
#include "util/Callable.h"
#include <list>
#include <set>



class DefaultBindingProcessor : public BindingProcessor
{
private:
    BindingProviderPtr provider;
    EvaluatorPtr evaluator;
	Timer* timer;
	ExecutorServicePtr executionService;
	bool disableStartupConcurrency;
    bool shareConcurrency;
	std::list<ReferenceListenerPtr>  listeners;
	std::list<TimerTask*>  timerTasks;
	std::set<Future*>  tasks;
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
	void submit(Callable* task);
	void setExecutionService(ExecutorServicePtr service);
	void setEnabled(bool enabled);

	ExecutorServicePtr getExecutorService();

	BindingProviderPtr getProvider();
	EvaluatorPtr getEvaluator();
	bool isDisableStartupConcurrency();
	void setDisableStartupConcurrency(bool disableStartupConcurrency);

	DefaultBindingProcessor(BindingProviderPtr provider, EvaluatorPtr evaluator);
	DefaultBindingProcessor(BindingProviderPtr provider, EvaluatorPtr evaluator, ExecutorServicePtr executionService);
	DefaultBindingProcessor(BindingProviderPtr provider, EvaluatorPtr evaluator, Timer* timer, ExecutorServicePtr executionService);

};

#endif
