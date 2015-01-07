// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController.java

#pragma once

#include <com/tibbo/aggregate/common/protocol/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/util/concurrent/ThreadFactory.h"



class com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController_setCommandParser_2
    
    , public ::java::util::concurrent::ThreadFactory
{

public:
    typedef void super;
    ::java::lang::Thread* newThread(::java::lang::Runnable* r);

    // Generated
    AbstractAggreGateDeviceController_setCommandParser_2(AbstractAggreGateDeviceController *AbstractAggreGateDeviceController_this);
    
    AbstractAggreGateDeviceController *AbstractAggreGateDeviceController_this;

private:
    ::java::lang::Class* getClass0();
    friend class AbstractAggreGateDeviceController;
    friend class AbstractAggreGateDeviceController_processEvent_1;
};
