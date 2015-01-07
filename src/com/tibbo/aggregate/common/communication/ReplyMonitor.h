// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/communication/ReplyMonitor.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/communication/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/locks/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::communication::ReplyMonitor
    
{

public:
    typedef void super;

private:
    Command* command;
    Command* reply;
    long startTime;
    long time;
    ::java::util::concurrent::locks::Lock* lock;
    ::java::util::concurrent::locks::Condition* commandReceivedCondition;
    bool timeoutReset;
    bool terminated;
protected:
    void ctor(Command* command);

public:
    Command* getCommand();
    Command* getReply();
    void setReply(Command* reply);
    void terminate();
    void reset();
    bool waitReply(long timeout) /* throws(InterruptedException) */;
    long getTime();
    long getStartTime();
    std::string* toString();

    // Generated
    ReplyMonitor(Command* command);
protected:
    ReplyMonitor(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
