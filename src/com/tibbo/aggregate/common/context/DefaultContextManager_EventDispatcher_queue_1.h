// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextManager.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Runnable.h"



class com::tibbo::aggregate::common::context::DefaultContextManager_EventDispatcher_queue_1
    
    , public ::java::lang::Runnable
{

public:
    typedef void super;
    void run();

    // Generated
    DefaultContextManager_EventDispatcher_queue_1(DefaultContextManager_EventDispatcher *DefaultContextManager_EventDispatcher_this, DefaultContextManager_QueuedEvent* ev);
    
    DefaultContextManager_EventDispatcher *DefaultContextManager_EventDispatcher_this;
    DefaultContextManager_QueuedEvent* ev;

private:
    ::java::lang::Class* getClass0();
    friend class DefaultContextManager;
    friend class DefaultContextManager_contextRemoved_1;
    friend class DefaultContextManager_contextRemoved_2;
    friend class DefaultContextManager_EventDispatcher;
    friend class DefaultContextManager_QueuedEvent;
};
