// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/event/ContextEventListener.java

#ifndef ContextEventListenerH
#define ContextEventListenerH

#include "util/Interface.h"
#include "data/Event.h"
#include "expression/Expression.h"

class ContextEventListener : public Interface
{
    virtual bool shouldHandle(Event* ev) = 0;
    virtual void handle(Event* event) = 0;
    virtual CallerController* getCallerController() = 0;
    virtual int getListenerCode() = 0;
    virtual Expression* getFilter() = 0;
};
#endif
