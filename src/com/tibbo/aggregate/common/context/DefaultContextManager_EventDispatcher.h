// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextManager.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Thread.h"



class com::tibbo::aggregate::common::context::DefaultContextManager_EventDispatcher
    : public ::java::lang::Thread
{

public:
    typedef ::java::lang::Thread super;

private:
    ::java::util::concurrent::BlockingQueue* undispatchedEvents;
protected:
    void ctor(int queueLength);

public:
    void queue(DefaultContextManager_QueuedEvent* ev) /* throws(InterruptedException) */;
    void run();
    int getQueueLength();

    // Generated
    DefaultContextManager_EventDispatcher(DefaultContextManager *DefaultContextManager_this, int queueLength);
protected:
    DefaultContextManager_EventDispatcher(DefaultContextManager *DefaultContextManager_this, const ::default_init_tag&);


public:
    
    DefaultContextManager *DefaultContextManager_this;

private:
    ::java::lang::Class* getClass0();
    friend class DefaultContextManager;
    friend class DefaultContextManager_contextRemoved_1;
    friend class DefaultContextManager_contextRemoved_2;
    friend class DefaultContextManager_EventDispatcher_queue_1;
    friend class DefaultContextManager_QueuedEvent;
};
