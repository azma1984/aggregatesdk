// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextEventListener.java
#include <com/tibbo/aggregate/common/context/DefaultContextEventListener.h"

#include <com/tibbo/aggregate/common/context/CallerController.h"
#include <com/tibbo/aggregate/common/data/Event.h"
#include <com/tibbo/aggregate/common/event/EventHandlingException.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
////#include <java/lang/ClassCastException.h"
////#include <java/lang/Exception.h"
////#include <java/lang/Integer.h"
////#include <java/lang/NullPointerException.h"
////#include <java/lang/Object.h"

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

DefaultContextEventListener::DefaultContextEventListener(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

DefaultContextEventListener::DefaultContextEventListener() 
    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

DefaultContextEventListener::DefaultContextEventListener(CallerController* callerController) 
    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
{
    ctor(callerController);
}

DefaultContextEventListener::DefaultContextEventListener(CallerController* callerController, int  listenerCode) 
    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
{
    ctor(callerController,listenerCode);
}

DefaultContextEventListener::DefaultContextEventListener(CallerController* callerController, int  listenerCode, Expression* filter) 
    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
{
    ctor(callerController,listenerCode,filter);
}

DefaultContextEventListener::DefaultContextEventListener(int  listenerCode) 
    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
{
    ctor(listenerCode);
}

void DefaultContextEventListener::ctor()
{
    super::ctor();
}

void DefaultContextEventListener::ctor(CallerController* callerController)
{
    ctor();
    this->callerController = callerController;
}

void DefaultContextEventListener::ctor(CallerController* callerController, int  listenerCode)
{
    ctor(callerController);
    this->listenerCode = listenerCode;
}

void DefaultContextEventListener::ctor(CallerController* callerController, int  listenerCode, Expression* filter)
{
    ctor(callerController, listenerCode);
    this->filter = filter;
}

void DefaultContextEventListener::ctor(int  listenerCode)
{
    ctor();
    this->listenerCode = listenerCode;
}

bool DefaultContextEventListener::shouldHandle(Event* ev) /* throws(EventHandlingException) */
{
    if(filter != 0) {
        if(evaluator == 0) {
            evaluator = new Evaluator(0, 0, ev)->getData(), java_cast< CallerController* >(callerController));
        } else {
            evaluator)->getDefaultResolver())->setDefaultTable(ev)->getData());
        }
        try {
            if(!evaluator)->evaluateToBoolean(filter)) {
                return false;
            }
        } catch (::java::lang::Exception* ex) {
            throw new EventHandlingException(ex)->getMessage(), ex);
        }
    }
    if(listenerCode != 0) {
        if(ev)->getListener() != 0 && !listenerCode)->equals(ev)->getListener()))) {
            return false;
        }
        if(ev)->getListener() == 0 && !acceptEventsWithoutListenerCode) {
            return false;
        }
    }
    return true;
}

CallerController* DefaultContextEventListener::getCallerController()
{
    return java_cast< CallerController* >(callerController);
}

java::lang::Integer* DefaultContextEventListener::getListenerCode()
{
    return listenerCode;
}

void DefaultContextEventListener::setCallerController(CallerController* callerController)
{
    this->callerController = callerController;
    if(evaluator != 0) {
        evaluator)->getDefaultResolver())->setCallerController(callerController);
    }
}

void DefaultContextEventListener::setAcceptEventsWithoutListenerCode(bool acceptEventsWithoutListenerCode)
{
    this->acceptEventsWithoutListenerCode = acceptEventsWithoutListenerCode;
}

void DefaultContextEventListener::setFilter(Expression* filter)
{
    this->filter = filter;
}

Expression* DefaultContextEventListener::getFilter()
{
    return filter;
}



java::lang::Class* DefaultContextEventListener::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.DefaultContextEventListener", 62);
    return c;
}

java::lang::Class* DefaultContextEventListener::getClass0()
{
    return class_();
}

