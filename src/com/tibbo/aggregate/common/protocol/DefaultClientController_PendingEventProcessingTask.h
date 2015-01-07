// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/DefaultClientController.java

#pragma once

#include <com/tibbo/aggregate/common/protocol/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Runnable.h"



class com::tibbo::aggregate::common::protocol::DefaultClientController_PendingEventProcessingTask
    
    , public ::java::lang::Runnable
{

public:
    typedef void super;
    void run();

    // Generated
    DefaultClientController_PendingEventProcessingTask(DefaultClientController *DefaultClientController_this);
protected:
    DefaultClientController_PendingEventProcessingTask(DefaultClientController *DefaultClientController_this, const ::default_init_tag&);


public:
    
    DefaultClientController *DefaultClientController_this;

private:
    ::java::lang::Class* getClass0();
    friend class DefaultClientController;
    friend class DefaultClientController_ForwardingEventListener;
    friend class DefaultClientController_ProcessCommandTask;
};
