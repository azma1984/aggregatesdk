// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/communication/AsyncCommandProcessor.java
#include <com/tibbo/aggregate/common/communication/AsyncCommandProcessor.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/communication/AbstractDeviceController.h"
#include <com/tibbo/aggregate/common/communication/AsyncCommandProcessor_sendCommand_1.h"
#include <com/tibbo/aggregate/common/communication/Command.h"
#include <com/tibbo/aggregate/common/communication/CommandParser.h"
#include <com/tibbo/aggregate/common/communication/CommandProcessorStatistics.h"
#include <com/tibbo/aggregate/common/communication/ReplyMonitor.h"
#include <com/tibbo/aggregate/common/device/DisconnectionException.h"
#include <com/tibbo/aggregate/common/util/NamedThreadFactory.h"
#include <com/tibbo/aggregate/common/util/Util.h"
/*
//#include <java/io/IOException.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/InterruptedException.h"
//#include <java/lang/Long.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/System.h"
//#include <java/lang/Thread.h"
//#include <java/lang/Throwable.h"
//#include <java/net/SocketException.h"
//#include <java/nio/channels/ClosedByInterruptException.h"
//#include <java/text/MessageFormat.h"
//#include <java/util/Collections.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/ResourceBundle.h"
//#include <java/util/concurrent/BlockingQueue.h"
//#include <java/util/concurrent/Callable.h"
//#include <java/util/concurrent/ExecutionException.h"
//#include <java/util/concurrent/Future.h"
//#include <java/util/concurrent/SynchronousQueue.h"
//#include <java/util/concurrent/ThreadFactory.h"
//#include <java/util/concurrent/ThreadPoolExecutor.h"
//#include <java/util/concurrent/TimeUnit.h"
#include <javax/net/ssl/SSLException.h"
#include <javax/swing/SwingUtilities.h"
//#include <org/apache/log4j/Level.h"
//#include <org/apache/log4j/Logger.h"
#include <ObjectArray.h"
*/
template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
extern void lock(void *);
extern void unlock(void *);

namespace
{
    struct synchronized
    {
        synchronized(void *o) : o(o) { ::lock(o); }
        ~synchronized() { ::unlock(o); }
    private:
        synchronized(const synchronized&); synchronized& operator=(const synchronized&);
        void *o;
    };
}
com::tibbo::aggregate::common::communication::AsyncCommandProcessor::AsyncCommandProcessor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::communication::AsyncCommandProcessor::AsyncCommandProcessor(AbstractDeviceController* controller) 
    : AsyncCommandProcessor(*static_cast< ::default_init_tag* >(0))
{
    ctor(controller);
}

void com::tibbo::aggregate::common::communication::AsyncCommandProcessor::init()
{
    sentCommandsQueue = ::java::util::Collections::synchronizedList(new ::java::util::LinkedList());
    statistics = new CommandProcessorStatistics();
}

const long com::tibbo::aggregate::common::communication::AsyncCommandProcessor::PENDING_COMMAND_TIMEOUT;

java::util::concurrent::ThreadPoolExecutor*& com::tibbo::aggregate::common::communication::AsyncCommandProcessor::SENDERS_POOL()
{
    
    return SENDERS_POOL_;
}
java::util::concurrent::ThreadPoolExecutor* com::tibbo::aggregate::common::communication::AsyncCommandProcessor::SENDERS_POOL_;

void com::tibbo::aggregate::common::communication::AsyncCommandProcessor::ctor(AbstractDeviceController* controller)
{
    super::ctor();
    init();
    this->controller = controller;
    setName(std::stringBuilder().append(u"AsyncCommandProcessor/"_j)->append(controller)->toString())
        ->append(u"/"_j)
        ->append(getName())->toString());
}

com::tibbo::aggregate::common::communication::Command* com::tibbo::aggregate::common::communication::AsyncCommandProcessor::sendSyncCommand(Command* cmd) /* throws(DisconnectionException, IOException, InterruptedException) */
{
    if(::javax::swing::SwingUtilities::isEventDispatchThread()) {
        Log::COMMANDS())->debug(u"Device I/O from event dispatch thread"_j, new ::java::lang::Exception());
    }
    auto mon = sendCommand(cmd);
    auto reply = java_cast< Command* >(waitReplyMonitor(mon));
    statistics)->update(mon);
    return reply;
}

void com::tibbo::aggregate::common::communication::AsyncCommandProcessor::sendUnrepliedCommand(Command* cmd) /* throws(DisconnectionException, IOException) */
{
    sendCommandImplementation(cmd);
    if(java_cast< AbstractDeviceController* >(controller))->getLogger() != 0 && java_cast< AbstractDeviceController* >(controller))->getLogger())->isDebugEnabled()) {
        java_cast< AbstractDeviceController* >(controller))->getLogger())->debug(std::stringBuilder().append(u"Sent command: "_j)->append(cmd)->toString())->toString());
    }
}

void com::tibbo::aggregate::common::communication::AsyncCommandProcessor::resetSentCommandTimeouts()
{
    {
        synchronized synchronized_0(sentCommandsQueue);
        {
            for (auto _i = sentCommandsQueue)->iterator(); _i->hasNext(); ) {
                ReplyMonitor* cur = java_cast< ReplyMonitor* >(_i->next());
                {
                    cur)->reset();
                }
            }
        }
    }
}

void com::tibbo::aggregate::common::communication::AsyncCommandProcessor::sendCommandImplementation(Command* cmd) /* throws(DisconnectionException, IOException) */
{
    try {
        java_cast< AbstractDeviceController* >(controller))->send(cmd);
    } catch (::java::lang::InterruptedException* ex) {
        throw new std::exception(static_cast< ::java::lang::Throwable* >(ex));
    }
}

com::tibbo::aggregate::common::communication::ReplyMonitor* com::tibbo::aggregate::common::communication::AsyncCommandProcessor::sendCommand(Command* cmd) /* throws(DisconnectionException, IOException, InterruptedException) */
{
    if(!isAlive()) {
        {
            synchronized synchronized_1(sentCommandsQueue);
            {
                for (auto _i = sentCommandsQueue)->iterator(); _i->hasNext(); ) {
                    ReplyMonitor* cur = java_cast< ReplyMonitor* >(_i->next());
                    {
                        cur)->setReply(0);
                    }
                }
            }
        }
        throw new ::com::tibbo::aggregate::common::device::DisconnectionException(Cres::get())->getString(u"disconnected"_j));
    }
    auto const mon = new ReplyMonitor(cmd);
    auto future = SENDERS_POOL())->submit(static_cast< ::java::util::concurrent::Callable* >(new AsyncCommandProcessor_sendCommand_1(this, mon, cmd)));
    try {
        auto th = java_cast< ::java::lang::Throwable* >(future)->get());
        if(th == 0) {
            return mon;
        } else if(dynamic_cast< ::com::tibbo::aggregate::common::device::DisconnectionException* >(th) != 0) {
            throw java_cast< ::com::tibbo::aggregate::common::device::DisconnectionException* >(th);
        } else if(dynamic_cast< std::exception* >(th) != 0) {
            throw java_cast< std::exception* >(th);
        } else if(dynamic_cast< ::java::lang::InterruptedException* >(th) != 0) {
            throw java_cast< ::java::lang::InterruptedException* >(th);
        } else {
            throw new std::exception(th)->getMessage(), th);
        }
    } catch (::java::util::concurrent::ExecutionException* ex) {
        throw new std::exception(ex)->getMessage(), ex);
    }
}

com::tibbo::aggregate::common::communication::Command* com::tibbo::aggregate::common::communication::AsyncCommandProcessor::waitReplyMonitor(ReplyMonitor* mon) /* throws(IOException, InterruptedException) */
{
    if(java_cast< Command* >(mon)->getReply()) == 0) {
        auto timeout = java_cast< Command* >(mon)->getCommand()))->getTimeout() != 0 ? (java_cast< Command* >(mon)->getCommand()))->getTimeout()))->longValue() : java_cast< AbstractDeviceController* >(controller))->getCommandTimeout();
        mon)->waitReply(timeout);
    }
    sentCommandsQueue)->remove(mon));
    if(java_cast< Command* >(mon)->getReply()) != 0) {
        return java_cast< Command* >(mon)->getReply());
    } else {
        throw new std::exception(::java::text::MessageFormat::format(Cres::get())->getString(u"cmdTimeout"_j), new voidArray({java_cast< Command* >(mon)->getCommand()))})));
    }
}

void com::tibbo::aggregate::common::communication::AsyncCommandProcessor::addSentCommand(ReplyMonitor* mon)
{
    sentCommandsQueue)->add(mon));
}

void com::tibbo::aggregate::common::communication::AsyncCommandProcessor::run()
{
    Command* cmd;
    {
        auto finally0 = finally([&] {
            {
                synchronized synchronized_2(sentCommandsQueue);
                {
                    for (auto _i = sentCommandsQueue)->iterator(); _i->hasNext(); ) {
                        ReplyMonitor* rm = java_cast< ReplyMonitor* >(_i->next());
                        {
                            rm)->terminate();
                        }
                    }
                    sentCommandsQueue)->clear();
                }
            }
        });
        try {
            while (!isInterrupted()) {
                cmd = java_cast< Command* >(java_cast< AbstractDeviceController* >(controller))->getCommandParser())->readCommand());
                if(cmd != 0) {
                    if(java_cast< AbstractDeviceController* >(controller))->getLogger() != 0 && java_cast< AbstractDeviceController* >(controller))->getLogger())->isDebugEnabled()) {
                        java_cast< AbstractDeviceController* >(controller))->getLogger())->debug(std::stringBuilder().append(u"Received command: "_j)->append(cmd)->toString())->toString());
                    }
                    if(cmd)->isAsync()) {
                        java_cast< AbstractDeviceController* >(controller))->processAsyncCommand(cmd);
                    } else {
                        {
                            synchronized synchronized_3(sentCommandsQueue);
                            {
                                auto found = false;
                                auto thisTime = ::java::lang::System::currentTimeMillis();
                                for (auto *iter = sentCommandsQueue)->iterator(); iter)->hasNext(); ) {
                                    auto cur = java_cast< ReplyMonitor* >(java_cast< void* >(iter)->next()));
                                    if(::com::tibbo::aggregate::common::util::Util::equals(java_cast< Command* >(cur)->getCommand()))->getId(), cmd)->getId())) {
                                        {
                                            synchronized synchronized_3(cur);
                                            {
                                                cur)->setReply(cmd);
                                                iter)->remove();
                                                found = true;
                                            }
                                        }
                                    }
                                    if(thisTime - cur)->getTime() > PENDING_COMMAND_TIMEOUT) {
                                        if(java_cast< AbstractDeviceController* >(controller))->getLogger() != 0 && java_cast< AbstractDeviceController* >(controller))->getLogger())->isInfoEnabled()) {
                                            java_cast< AbstractDeviceController* >(controller))->getLogger())->info(std::stringBuilder().append(u"Removing expired reply monitor from queue: "_j)->append(cur))->toString());
                                        }
                                        iter)->remove();
                                    }
                                }
                                if(!found) {
                                    if(java_cast< AbstractDeviceController* >(controller))->getLogger() != 0) {
                                        java_cast< AbstractDeviceController* >(controller))->getLogger())->warn(std::stringBuilder().append(u"Reply cannot be matched to a sent command: "_j)->append(cmd))
                                            ->append(u", commands in progress: "_j)
                                            ->append(sentCommandsQueue))->toString());
                                    }
                                }
                            }
                        }
                    }
                }
            }
            java_cast< AbstractDeviceController* >(controller))->disconnectImpl();
        } catch (::com::tibbo::aggregate::common::device::DisconnectionException* ex) {
            processError(::org::apache::log4j::Level::DEBUG(), u"Disconnection of peer detected in async processor"_j, ex);
        } catch (::java::nio::channels::ClosedByInterruptException* ex) {
            processError(::org::apache::log4j::Level::DEBUG(), u"Async processor interrupted"_j, ex);
        } catch (::java::net::SocketException* ex) {
            processError(::org::apache::log4j::Level::DEBUG(), u"Socket error in async processor"_j, ex);
        } catch (::javax::net::ssl::SSLException* ex) {
            processError(::org::apache::log4j::Level::DEBUG(), u"SSL error in async processor"_j, ex);
        } catch (::java::lang::Exception* ex) {
            processError(::org::apache::log4j::Level::ERROR(), u"Error in async processor"_j, ex);
        }
    }
}

void com::tibbo::aggregate::common::communication::AsyncCommandProcessor::processError(::org::apache::log4j::Level* priority, const std::string & message, ::java::lang::Exception* ex)
{
    if(java_cast< AbstractDeviceController* >(controller))->getLogger() != 0) {
        java_cast< AbstractDeviceController* >(controller))->getLogger())->log(priority, std::stringBuilder().append(message)->append(u": "_j)
            ->append(ex))->toString());
    }
    try {
        java_cast< AbstractDeviceController* >(controller))->disconnectImpl();
    } catch (::java::lang::Exception* ex1) {
        java_cast< AbstractDeviceController* >(controller))->getLogger())->error(u"Disconnection error"_j, ex1);
    }
}

bool com::tibbo::aggregate::common::communication::AsyncCommandProcessor::isActive()
{
    return !sentCommandsQueue)->isEmpty();
}

java::util::List* com::tibbo::aggregate::common::communication::AsyncCommandProcessor::getActiveCommands()
{
    std::list  res = new ::java::util::LinkedList();
    {
        synchronized synchronized_5(sentCommandsQueue);
        {
            for (auto _i = sentCommandsQueue)->iterator(); _i->hasNext(); ) {
                ReplyMonitor* rm = java_cast< ReplyMonitor* >(_i->next());
                {
                    res)->add(rm));
                }
            }
        }
    }
    return res;
}

void com::tibbo::aggregate::common::communication::AsyncCommandProcessor::interrupt()
{
    Log::CORE_THREAD())->debug(std::stringBuilder().append(u"Thread '"_j)->append(getName())
        ->append(u"' is interrupted by '"_j)
        ->append(::java::lang::Thread::currentThread())->getName())
        ->append(u"'"_j)->toString());
    super::interrupt();
}

com::tibbo::aggregate::common::communication::AbstractDeviceController* com::tibbo::aggregate::common::communication::AsyncCommandProcessor::getController()
{
    return java_cast< AbstractDeviceController* >(controller);
}

com::tibbo::aggregate::common::communication::CommandProcessorStatistics* com::tibbo::aggregate::common::communication::AsyncCommandProcessor::getStatistics()
{
    return statistics;
}

java::util::concurrent::ThreadPoolExecutor* com::tibbo::aggregate::common::communication::AsyncCommandProcessor::getSendersPool()
{
    
    return SENDERS_POOL();
}



java::lang::Class* com::tibbo::aggregate::common::communication::AsyncCommandProcessor::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.communication.AsyncCommandProcessor", 62);
    return c;
}

void com::tibbo::aggregate::common::communication::AsyncCommandProcessor::clinit()
{
    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        SENDERS_POOL_ = new ::java::util::concurrent::ThreadPoolExecutor(int(0), int(1000), long(60LL), ::java::util::concurrent::TimeUnit::SECONDS, static_cast< ::java::util::concurrent::BlockingQueue* >(new ::java::util::concurrent::SynchronousQueue()), static_cast< ::java::util::concurrent::ThreadFactory* >(new ::com::tibbo::aggregate::common::util::NamedThreadFactory(u"AsyncCommandSender"_j)));
        {
            SENDERS_POOL())->allowCoreThreadTimeOut(true);
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* com::tibbo::aggregate::common::communication::AsyncCommandProcessor::getClass0()
{
    return class_();
}

