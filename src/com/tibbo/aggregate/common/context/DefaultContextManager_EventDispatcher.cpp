// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextManager.java
#include <com/tibbo/aggregate/common/context/DefaultContextManager_EventDispatcher.h"

#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/context/DefaultContextManager_EventDispatcher_queue_1.h"
#include <com/tibbo/aggregate/common/context/DefaultContextManager_QueuedEvent.h"
#include <com/tibbo/aggregate/common/context/DefaultContextManager.h"
/*
//#include <java/lang/ClassCastException.h"
//#include <java/lang/InterruptedException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/Runnable.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/Thread.h"
//#include <java/lang/Throwable.h"
//#include <java/util/concurrent/BlockingQueue.h"
//#include <java/util/concurrent/ExecutorService.h"
//#include <java/util/concurrent/LinkedBlockingQueue.h"
//#include <java/util/concurrent/ThreadPoolExecutor.h"
//#include <org/apache/log4j/Logger.h"
*/
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

com::tibbo::aggregate::common::context::DefaultContextManager_EventDispatcher::DefaultContextManager_EventDispatcher(DefaultContextManager *DefaultContextManager_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , DefaultContextManager_this(DefaultContextManager_this)
{
    
}

com::tibbo::aggregate::common::context::DefaultContextManager_EventDispatcher::DefaultContextManager_EventDispatcher(DefaultContextManager *DefaultContextManager_this, int queueLength) 
    : DefaultContextManager_EventDispatcher(DefaultContextManager_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(queueLength);
}

void com::tibbo::aggregate::common::context::DefaultContextManager_EventDispatcher::ctor(int queueLength)
{
    super::ctor();
    setName(std::stringBuilder().append(u"EventDispatcher/"_j)->append(::java::lang::Thread::currentThread())->getName())->toString());
    setPriority(::java::lang::Thread::MAX_PRIORITY - int(1));
    undispatchedEvents = new ::java::util::concurrent::LinkedBlockingQueue(queueLength);
}

void com::tibbo::aggregate::common::context::DefaultContextManager_EventDispatcher::queue(DefaultContextManager_QueuedEvent* ev) /* throws(InterruptedException) */
{
    ::java::util::concurrent::ExecutorService* es = DefaultContextManager_this->getExecutorService();
    if(::java::lang::Thread::currentThread() == static_cast< ::java::lang::Thread* >(this) && es != 0) {
        es)->submit(static_cast< ::java::lang::Runnable* >(new DefaultContextManager_EventDispatcher_queue_1(this, ev)));
    } else {
        undispatchedEvents)->put(ev);
    }
}

void com::tibbo::aggregate::common::context::DefaultContextManager_EventDispatcher::run()
{
    while (!isInterrupted()) {
        try {
            DefaultContextManager_QueuedEvent* ev;
            try {
                ev = java_cast< DefaultContextManager_QueuedEvent* >(undispatchedEvents)->take());
            } catch (::java::lang::InterruptedException* ex) {
                break;
            }
            if(ev != 0) {
                ev)->dispatch();
            }
        } catch (::java::lang::Throwable* ex) {
            Log::CONTEXT_EVENTS())->fatal(u"Unexpected critical error in event dispatcher"_j, ex);
        }
    }
    Log::CONTEXT_EVENTS())->debug(u"Stopping event dispatcher"_j);
}

int com::tibbo::aggregate::common::context::DefaultContextManager_EventDispatcher::getQueueLength()
{
    return undispatchedEvents)->size();
}



java::lang::Class* com::tibbo::aggregate::common::context::DefaultContextManager_EventDispatcher::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.context.DefaultContextManager.EventDispatcher", 72);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::context::DefaultContextManager_EventDispatcher::getClass0()
{
    return class_();
}

