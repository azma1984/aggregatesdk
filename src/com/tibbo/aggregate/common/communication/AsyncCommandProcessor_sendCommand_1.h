// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/communication/AsyncCommandProcessor.java

#pragma once

#include <com/tibbo/aggregate/common/communication/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/util/concurrent/Callable.h"
//#include <java/lang/Throwable.h"



class com::tibbo::aggregate::common::communication::AsyncCommandProcessor_sendCommand_1
    
    , public ::java::util::concurrent::Callable
{

public:
    typedef void super;
    ::java::lang::Throwable* call() /* throws(Exception) */;

    // Generated
    AsyncCommandProcessor_sendCommand_1(AsyncCommandProcessor *AsyncCommandProcessor_this, ReplyMonitor* mon, Command* cmd);
    
    AsyncCommandProcessor *AsyncCommandProcessor_this;
    ReplyMonitor* mon;
    Command* cmd;

private:
    ::java::lang::Class* getClass0();
    friend class AsyncCommandProcessor;
};
