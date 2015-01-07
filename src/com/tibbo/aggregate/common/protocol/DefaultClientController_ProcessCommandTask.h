// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/DefaultClientController.java

#pragma once

#include <com/tibbo/aggregate/common/protocol/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/util/concurrent/Callable.h"



class com::tibbo::aggregate::common::protocol::DefaultClientController_ProcessCommandTask
    
    , public ::java::util::concurrent::Callable
{

public:
    typedef void super;

private:
    IncomingAggreGateCommand* cmd;
protected:
    void ctor(IncomingAggreGateCommand* cmd);

public:
    void* call() /* throws(Exception) */;

    // Generated
    DefaultClientController_ProcessCommandTask(DefaultClientController *DefaultClientController_this, IncomingAggreGateCommand* cmd);
protected:
    DefaultClientController_ProcessCommandTask(DefaultClientController *DefaultClientController_this, const ::default_init_tag&);


public:
    
    DefaultClientController *DefaultClientController_this;

private:
    ::java::lang::Class* getClass0();
    friend class DefaultClientController;
    friend class DefaultClientController_ForwardingEventListener;
    friend class DefaultClientController_PendingEventProcessingTask;
};
