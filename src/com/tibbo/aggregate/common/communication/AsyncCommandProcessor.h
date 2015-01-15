// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/communication/AsyncCommandProcessor.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/communication/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/concurrent/fwd-aggregate_sdk_5.11.00.h"
//#include <org/apache/log4j/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Thread.h"



class com::tibbo::aggregate::common::communication::AsyncCommandProcessor
    : public ::java::lang::Thread
{

public:
    typedef ::java::lang::Thread super;

private:
    static const long PENDING_COMMAND_TIMEOUT { long(86400000LL) };
    static ::java::util::concurrent::ThreadPoolExecutor* SENDERS_POOL_;
    AbstractDeviceController* controller;
    std::list  sentCommandsQueue;
    CommandProcessorStatistics* statistics;
protected:
    void ctor(AbstractDeviceController* controller);

public:
    Command* sendSyncCommand(Command* cmd) /* throws(DisconnectionException, IOException, InterruptedException) */;
    void sendUnrepliedCommand(Command* cmd) /* throws(DisconnectionException, IOException) */;
    void resetSentCommandTimeouts();

private:
    void sendCommandImplementation(Command* cmd) /* throws(DisconnectionException, IOException) */;
    ReplyMonitor* sendCommand(Command* cmd) /* throws(DisconnectionException, IOException, InterruptedException) */;
    Command* waitReplyMonitor(ReplyMonitor* mon) /* throws(IOException, InterruptedException) */;
    void addSentCommand(ReplyMonitor* mon);

public:
    void run();

private:
    void processError(::org::apache::log4j::Level* priority, const std::string & message, ::java::lang::Exception* ex);

public:
    bool isActive();
    std::list  getActiveCommands();
    void interrupt();
    AbstractDeviceController* getController();
    CommandProcessorStatistics* getStatistics();
    static ::java::util::concurrent::ThreadPoolExecutor* getSendersPool();

    // Generated
    AsyncCommandProcessor(AbstractDeviceController* controller);
protected:
    AsyncCommandProcessor(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();
    static ::java::util::concurrent::ThreadPoolExecutor*& SENDERS_POOL();
    ::java::lang::Class* getClass0();
    friend class AsyncCommandProcessor_sendCommand_1;
};
