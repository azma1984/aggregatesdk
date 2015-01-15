// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextManager.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::context::DefaultContextManager_QueuedEvent
    
{

public:
    typedef void super;

private:
    EventData* ed;
    Event* ev;
protected:
    void ctor(EventData* ed, Event* ev);

public:
    void dispatch();

    // Generated
    DefaultContextManager_QueuedEvent(DefaultContextManager *DefaultContextManager_this, EventData* ed, Event* ev);
protected:
    DefaultContextManager_QueuedEvent(DefaultContextManager *DefaultContextManager_this, const ::default_init_tag&);


public:
    
    DefaultContextManager *DefaultContextManager_this;

private:
    ::java::lang::Class* getClass0();
    friend class DefaultContextManager;
    friend class DefaultContextManager_contextRemoved_1;
    friend class DefaultContextManager_contextRemoved_2;
    friend class DefaultContextManager_EventDispatcher;
    friend class DefaultContextManager_EventDispatcher_queue_1;
};
