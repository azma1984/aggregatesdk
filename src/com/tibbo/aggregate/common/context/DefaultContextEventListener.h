#ifndef DefaultContextEventListenerH
#define DefaultContextEventListenerH

//#include "event/ContextEventListener.h"
//#include "context/CallerController.h"
//#include "expression/Expression.h"
//#include "expression/Evaluator.h"
//#include "context/CallerController.h"
//#include "data/Event.h"
//#include "event/EventHandlingException.h"
//#include "expression/Evaluator.h"
//#include "expression/Expression.h"
//#include "expression/ReferenceResolver.h"

//todo - class stub
class DefaultContextEventListener //: public ContextEventListener
{
private:
    CallerControllerPtr callerController;
    int  listenerCode;
    ExpressionPtr filter;
    bool acceptEventsWithoutListenerCode;
    EvaluatorPtr evaluator;

public:
    bool shouldHandle(EventPtr ev);
    CallerControllerPtr getCallerController();
    int  getListenerCode();
    void setCallerController(CallerControllerPtr callerController);

protected:
    void setAcceptEventsWithoutListenerCode(bool acceptEventsWithoutListenerCode);

public:
    void setFilter(ExpressionPtr filter);
    ExpressionPtr getFilter();

    DefaultContextEventListener();
    DefaultContextEventListener(CallerControllerPtr callerController);
    DefaultContextEventListener(CallerControllerPtr callerController, int  listenerCode);
	DefaultContextEventListener(CallerControllerPtr callerController, int  listenerCode, ExpressionPtr filter);
	DefaultContextEventListener(int  listenerCode);
};
#endif