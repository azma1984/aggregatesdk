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

com::tibbo::aggregate::common::context::DefaultContextEventListener::DefaultContextEventListener(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::context::DefaultContextEventListener::DefaultContextEventListener() 
    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::context::DefaultContextEventListener::DefaultContextEventListener(CallerController* callerController) 
    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
{
    ctor(callerController);
}

com::tibbo::aggregate::common::context::DefaultContextEventListener::DefaultContextEventListener(CallerController* callerController, int  listenerCode) 
    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
{
    ctor(callerController,listenerCode);
}

com::tibbo::aggregate::common::context::DefaultContextEventListener::DefaultContextEventListener(CallerController* callerController, int  listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter) 
    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
{
    ctor(callerController,listenerCode,filter);
}

com::tibbo::aggregate::common::context::DefaultContextEventListener::DefaultContextEventListener(int  listenerCode) 
    : DefaultContextEventListener(*static_cast< ::default_init_tag* >(0))
{
    ctor(listenerCode);
}

void com::tibbo::aggregate::common::context::DefaultContextEventListener::ctor()
{
    super::ctor();
}

void com::tibbo::aggregate::common::context::DefaultContextEventListener::ctor(CallerController* callerController)
{
    ctor();
    this->callerController = callerController;
}

void com::tibbo::aggregate::common::context::DefaultContextEventListener::ctor(CallerController* callerController, int  listenerCode)
{
    ctor(callerController);
    this->listenerCode = listenerCode;
}

void com::tibbo::aggregate::common::context::DefaultContextEventListener::ctor(CallerController* callerController, int  listenerCode, ::com::tibbo::aggregate::common::expression::Expression* filter)
{
    ctor(callerController, listenerCode);
    this->filter = filter;
}

void com::tibbo::aggregate::common::context::DefaultContextEventListener::ctor(int  listenerCode)
{
    ctor();
    this->listenerCode = listenerCode;
}

bool com::tibbo::aggregate::common::context::DefaultContextEventListener::shouldHandle(Event* ev) /* throws(EventHandlingException) */
{
    if(filter != 0) {
        if(evaluator == 0) {
            evaluator = new ::com::tibbo::aggregate::common::expression::Evaluator(0, 0, ev)->getData(), java_cast< CallerController* >(callerController));
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

com::tibbo::aggregate::common::context::CallerController* com::tibbo::aggregate::common::context::DefaultContextEventListener::getCallerController()
{
    return java_cast< CallerController* >(callerController);
}

java::lang::Integer* com::tibbo::aggregate::common::context::DefaultContextEventListener::getListenerCode()
{
    return listenerCode;
}

void com::tibbo::aggregate::common::context::DefaultContextEventListener::setCallerController(CallerController* callerController)
{
    this->callerController = callerController;
    if(evaluator != 0) {
        evaluator)->getDefaultResolver())->setCallerController(callerController);
    }
}

void com::tibbo::aggregate::common::context::DefaultContextEventListener::setAcceptEventsWithoutListenerCode(bool acceptEventsWithoutListenerCode)
{
    this->acceptEventsWithoutListenerCode = acceptEventsWithoutListenerCode;
}

void com::tibbo::aggregate::common::context::DefaultContextEventListener::setFilter(::com::tibbo::aggregate::common::expression::Expression* filter)
{
    this->filter = filter;
}

com::tibbo::aggregate::common::expression::Expression* com::tibbo::aggregate::common::context::DefaultContextEventListener::getFilter()
{
    return filter;
}



java::lang::Class* com::tibbo::aggregate::common::context::DefaultContextEventListener::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.DefaultContextEventListener", 62);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::DefaultContextEventListener::getClass0()
{
    return class_();
}

