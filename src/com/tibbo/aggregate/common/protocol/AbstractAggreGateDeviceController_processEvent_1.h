// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController.java

#pragma once

#include <com/tibbo/aggregate/common/protocol/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Runnable.h"



class com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceController_processEvent_1
    
    , public ::java::lang::Runnable
{

public:
    typedef void super;
    void run();

    // Generated
    AbstractAggreGateDeviceController_processEvent_1(AbstractAggreGateDeviceController *AbstractAggreGateDeviceController_this, IncomingAggreGateCommand* cmd);
    
    AbstractAggreGateDeviceController *AbstractAggreGateDeviceController_this;
    IncomingAggreGateCommand* cmd;

private:
    ::java::lang::Class* getClass0();
    friend class AbstractAggreGateDeviceController;
    friend class AbstractAggreGateDeviceController_setCommandParser_2;
};
