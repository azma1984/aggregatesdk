// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/DefaultContextManager.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/DefaultContextVisitor.h"



class com::tibbo::aggregate::common::context::DefaultContextManager_contextRemoved_2
    : public DefaultContextVisitor
{

public:
    typedef DefaultContextVisitor super;
    void visit(Context* vc);

    // Generated
    DefaultContextManager_contextRemoved_2(DefaultContextManager *DefaultContextManager_this);
    
    DefaultContextManager *DefaultContextManager_this;

private:
    ::java::lang::Class* getClass0();
    friend class DefaultContextManager;
    friend class DefaultContextManager_contextRemoved_1;
    friend class DefaultContextManager_EventDispatcher;
    friend class DefaultContextManager_EventDispatcher_queue_1;
    friend class DefaultContextManager_QueuedEvent;
};
