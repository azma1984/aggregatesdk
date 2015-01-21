#pragma once

#include "event/ContextEventListener.h"
#include "context/CallerController.h"
#include "expression/Expression.h"
#include "expression/Evaluator.h"


<<<<<<< Updated upstream
class DefaultContextEventListener : public ContextEventListener
=======
class DefaultContextEventListener
    
    , public ContextEventListener
>>>>>>> Stashed changes
{
private:
    CallerController* callerController;
    int  listenerCode;
    Expression* filter;
    bool acceptEventsWithoutListenerCode;
    Evaluator* evaluator;
<<<<<<< Updated upstream

=======
>>>>>>> Stashed changes
protected:
    void ctor();
    void ctor(CallerController* callerController);
    void ctor(CallerController* callerController, int  listenerCode);
    void ctor(CallerController* callerController, int  listenerCode, Expression* filter);
    void ctor(int  listenerCode);

public:
    bool shouldHandle(Event* ev) /* throws(EventHandlingException) */;
    CallerController* getCallerController();
    int  getListenerCode();
    void setCallerController(CallerController* callerController);

protected:
    void setAcceptEventsWithoutListenerCode(bool acceptEventsWithoutListenerCode);

public:
    void setFilter(Expression* filter);
    Expression* getFilter();

    // Generated
    DefaultContextEventListener();
    DefaultContextEventListener(CallerController* callerController);
    DefaultContextEventListener(CallerController* callerController, int  listenerCode);
    DefaultContextEventListener(CallerController* callerController, int  listenerCode, Expression* filter);
    DefaultContextEventListener(int  listenerCode);
};
