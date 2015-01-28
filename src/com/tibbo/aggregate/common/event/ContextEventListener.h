#ifndef ContextEventListenerH
#define ContextEventListenerH

#include "util/Interface.h"
#include "data/Event.h"
#include "expression/Expression.h"


//todo - class stub
class ContextEventListener : public Interface
{
  /**
   * Should return true if event should be handled.
   */
    virtual bool shouldHandle(EventPtr ev) = 0;

  /**
   * Handles the event
   */
    virtual void handle(EventPtr event) = 0;
    virtual CallerControllerPtr getCallerController() = 0;
    virtual int getListenerCode() = 0;
	virtual ExpressionPtr getFilter() = 0;
};
#endif
