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
#include <list>

class DefaultBindingProcessor : public BindingProcessor
{
private:
    BindingProviderPtr provider;
    EvaluatorPtr evaluator;
	//Timer* timer;  todo
   // ExecutorServicePtr executionService;  todo
    bool disableStartupConcurrency;
    bool shareConcurrency;
	std::list<ReferenceListenerPtr>  listeners;
  //  std::list<TimerTask>  timerTasks;  todo
	//std::set  tasks;   todo
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
