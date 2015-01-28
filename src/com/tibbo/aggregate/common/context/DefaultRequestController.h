#ifndef DefaultRequestControllerH
#define DefaultRequestControllerH

#include "context/RequestController.h"
//#include "expression/Evaluator.h"


//todo - class stub
class DefaultRequestController: public RequestController
{
 private:
    AgObjectPtr originator;
    long  lockTimeout;
    EvaluatorPtr evaluator;

public:
    AgObjectPtr getOriginator();
    void setOriginator(AgObjectPtr originator);
    long  getLockTimeout();
    void setLockTimeout(long  lockTimeout);
    EvaluatorPtr getEvaluator();
    void setEvaluator(EvaluatorPtr evaluator);


    DefaultRequestController();
    DefaultRequestController(long  lockTimeout);
    DefaultRequestController(AgObjectPtr originator);
	DefaultRequestController(EvaluatorPtr evaluator);

};

#endif
