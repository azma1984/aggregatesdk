// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextManager.java
#include <com/tibbo/aggregate/common/context/DefaultContextManager_EventDispatcher_queue_1.h"

#include <com/tibbo/aggregate/common/context/DefaultContextManager_EventDispatcher.h"
#include <com/tibbo/aggregate/common/context/DefaultContextManager_QueuedEvent.h"
////#include <java/lang/InterruptedException.h"
////#include <java/lang/NullPointerException.h"
////#include <java/util/concurrent/BlockingQueue.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::context::DefaultContextManager_EventDispatcher_queue_1::DefaultContextManager_EventDispatcher_queue_1(DefaultContextManager_EventDispatcher *DefaultContextManager_EventDispatcher_this, DefaultContextManager_QueuedEvent* ev)
    : super(*static_cast< ::default_init_tag* >(0))
    , DefaultContextManager_EventDispatcher_this(DefaultContextManager_EventDispatcher_this)
    , ev(ev)
{
    
    ctor();
}

void com::tibbo::aggregate::common::context::DefaultContextManager_EventDispatcher_queue_1::run()
{
    try {
        DefaultContextManager_EventDispatcher_this->undispatchedEvents)->put(ev);
    } catch (::java::lang::InterruptedException* ex) {
    }
}



java::lang::Class* com::tibbo::aggregate::common::context::DefaultContextManager_EventDispatcher_queue_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::DefaultContextManager_EventDispatcher_queue_1::getClass0()
{
    return class_();
}

