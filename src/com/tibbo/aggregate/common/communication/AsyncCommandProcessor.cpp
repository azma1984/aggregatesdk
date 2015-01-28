#include "communication/AsyncCommandProcessor.h"



//AsyncCommandProcessor::AsyncCommandProcessor(const ::default_init_tag&)
//    : super(*static_cast< ::default_init_tag* >(0))
//{
//
//}
//
//AsyncCommandProcessor::AsyncCommandProcessor(AbstractDeviceController* controller)
//    : AsyncCommandProcessor(*static_cast< ::default_init_tag* >(0))
//{
//    ctor(controller);
//}
//
//void AsyncCommandProcessor::init()
//{
//    sentCommandsQueue = ::java::util::Collections::synchronizedList(new ::java::util::LinkedList());
//    statistics = new CommandProcessorStatistics();
//}
//
//const long AsyncCommandProcessor::PENDING_COMMAND_TIMEOUT;
//
//java::util::concurrent::ThreadPoolExecutor*& AsyncCommandProcessor::SENDERS_POOL()
//{
//
//    return SENDERS_POOL_;
//}
//java::util::concurrent::ThreadPoolExecutor* AsyncCommandProcessor::SENDERS_POOL_;
//
//void AsyncCommandProcessor::ctor(AbstractDeviceController* controller)
//{
//    super::ctor();
//    init();
//    this->controller = controller;
//    setName(std::stringBuilder().append(u"AsyncCommandProcessor/"_j)->append(controller)->toString())
//        ->append(u"/"_j)
//        ->append(getName())->toString());
//}
//
//CommandPtr AsyncCommandProcessor::sendSyncCommand(CommandPtr cmd) /* throws(DisconnectionException, IOException, InterruptedException) */
//{
//    if(::javax::swing::SwingUtilities::isEventDispatchThread()) {
//        Log::COMMANDS())->debug(u"Device I/O from event dispatch thread"_j, new ::java::lang::Exception());
//    }
//    auto mon = sendCommand(cmd);
//    auto reply = java_cast< CommandPtr >(waitReplyMonitor(mon));
//    statistics)->update(mon);
//    return reply;
//}
//
//void AsyncCommandProcessor::sendUnrepliedCommand(CommandPtr cmd) /* throws(DisconnectionException, IOException) */
//{
//    sendCommandImplementation(cmd);
//    if(java_cast< AbstractDeviceController* >(controller))->getLogger() != 0 && java_cast< AbstractDeviceController* >(controller))->getLogger())->isDebugEnabled()) {
//        java_cast< AbstractDeviceController* >(controller))->getLogger())->debug(std::stringBuilder().append(u"Sent command: "_j)->append(cmd)->toString())->toString());
//    }
//}
//
//void AsyncCommandProcessor::resetSentCommandTimeouts()
//{
//    {
//        synchronized synchronized_0(sentCommandsQueue);
//        {
//            for (auto _i = sentCommandsQueue)->iterator(); _i->hasNext(); ) {
//                ReplyMonitor* cur = java_cast< ReplyMonitor* >(_i->next());
//                {
//                    cur)->reset();
//                }
//            }
//        }
//    }
//}
//
//void AsyncCommandProcessor::sendCommandImplementation(CommandPtr cmd) /* throws(DisconnectionException, IOException) */
//{
//    try {
//        java_cast< AbstractDeviceController* >(controller))->send(cmd);
//    } catch (::java::lang::InterruptedException* ex) {
//        throw new std::exception(static_cast< ::java::lang::Throwable* >(ex));
//    }
//}
//
//ReplyMonitor* AsyncCommandProcessor::sendCommand(CommandPtr cmd) /* throws(DisconnectionException, IOException, InterruptedException) */
//{
//    if(!isAlive()) {
//        {
//            synchronized synchronized_1(sentCommandsQueue);
//            {
//                for (auto _i = sentCommandsQueue)->iterator(); _i->hasNext(); ) {
//                    ReplyMonitor* cur = java_cast< ReplyMonitor* >(_i->next());
//                    {
//                        cur)->setReply(0);
//                    }
//                }
//            }
//        }
//        throw new DisconnectionException(Cres::get())->getString(u"disconnected"_j));
//    }
//    auto const mon = new ReplyMonitor(cmd);
//    auto future = SENDERS_POOL())->submit(static_cast< ::java::util::concurrent::Callable* >(new AsyncCommandProcessor_sendCommand_1(this, mon, cmd)));
//    try {
//        auto th = java_cast< ::java::lang::Throwable* >(future)->get());
//        if(th == 0) {
//            return mon;
//        } else if(dynamic_cast< DisconnectionException* >(th) != 0) {
//            throw java_cast< DisconnectionException* >(th);
//        } else if(dynamic_cast< std::exception* >(th) != 0) {
//            throw java_cast< std::exception* >(th);
//        } else if(dynamic_cast< ::java::lang::InterruptedException* >(th) != 0) {
//            throw java_cast< ::java::lang::InterruptedException* >(th);
//        } else {
//            throw new std::exception(th)->getMessage(), th);
//        }
//    } catch (::java::util::concurrent::ExecutionException* ex) {
//        throw new std::exception(ex)->getMessage(), ex);
//    }
//}
//
//CommandPtr AsyncCommandProcessor::waitReplyMonitor(ReplyMonitor* mon) /* throws(IOException, InterruptedException) */
//{
//    if(java_cast< CommandPtr >(mon)->getReply()) == 0) {
//        auto timeout = java_cast< CommandPtr >(mon)->getCommand()))->getTimeout() != 0 ? (java_cast< CommandPtr >(mon)->getCommand()))->getTimeout()))->longValue() : java_cast< AbstractDeviceController* >(controller))->getCommandTimeout();
//        mon)->waitReply(timeout);
//    }
//    sentCommandsQueue)->remove(mon));
//    if(java_cast< CommandPtr >(mon)->getReply()) != 0) {
//        return java_cast< CommandPtr >(mon)->getReply());
//    } else {
//        throw new std::exception(::java::text::MessageFormat::format(Cres::get())->getString(u"cmdTimeout"_j), new voidArray({java_cast< CommandPtr >(mon)->getCommand()))})));
//    }
//}
//
//void AsyncCommandProcessor::addSentCommand(ReplyMonitor* mon)
//{
//    sentCommandsQueue)->add(mon));
//}
//
//void AsyncCommandProcessor::run()
//{
//    CommandPtr cmd;
//    {
//        auto finally0 = finally([&] {
//            {
//                synchronized synchronized_2(sentCommandsQueue);
//                {
//                    for (auto _i = sentCommandsQueue)->iterator(); _i->hasNext(); ) {
//                        ReplyMonitor* rm = java_cast< ReplyMonitor* >(_i->next());
//                        {
//                            rm)->terminate();
//                        }
//                    }
//                    sentCommandsQueue)->clear();
//                }
//            }
//        });
//        try {
//            while (!isInterrupted()) {
//                cmd = java_cast< CommandPtr >(java_cast< AbstractDeviceController* >(controller))->getCommandParser())->readCommand());
//                if(cmd != 0) {
//                    if(java_cast< AbstractDeviceController* >(controller))->getLogger() != 0 && java_cast< AbstractDeviceController* >(controller))->getLogger())->isDebugEnabled()) {
//                        java_cast< AbstractDeviceController* >(controller))->getLogger())->debug(std::stringBuilder().append(u"Received command: "_j)->append(cmd)->toString())->toString());
//                    }
//                    if(cmd)->isAsync()) {
//                        java_cast< AbstractDeviceController* >(controller))->processAsyncCommand(cmd);
//                    } else {
//                        {
//                            synchronized synchronized_3(sentCommandsQueue);
//                            {
//                                auto found = false;
//                                auto thisTime = ::java::lang::System::currentTimeMillis();
//                                for (auto *iter = sentCommandsQueue)->iterator(); iter)->hasNext(); ) {
//                                    auto cur = java_cast< ReplyMonitor* >(java_cast< AgObjectPtr >(iter)->next()));
//                                    if(Util::equals(java_cast< CommandPtr >(cur)->getCommand()))->getId(), cmd)->getId())) {
//                                        {
//                                            synchronized synchronized_3(cur);
//                                            {
//                                                cur)->setReply(cmd);
//                                                iter)->remove();
//                                                found = true;
//                                            }
//                                        }
//                                    }
//                                    if(thisTime - cur)->getTime() > PENDING_COMMAND_TIMEOUT) {
//                                        if(java_cast< AbstractDeviceController* >(controller))->getLogger() != 0 && java_cast< AbstractDeviceController* >(controller))->getLogger())->isInfoEnabled()) {
//                                            java_cast< AbstractDeviceController* >(controller))->getLogger())->info(std::stringBuilder().append(u"Removing expired reply monitor from queue: "_j)->append(cur))->toString());
//                                        }
//                                        iter)->remove();
//                                    }
//                                }
//                                if(!found) {
//                                    if(java_cast< AbstractDeviceController* >(controller))->getLogger() != 0) {
//                                        java_cast< AbstractDeviceController* >(controller))->getLogger())->warn(std::stringBuilder().append(u"Reply cannot be matched to a sent command: "_j)->append(cmd))
//                                            ->append(u", commands in progress: "_j)
//                                            ->append(sentCommandsQueue))->toString());
//                                    }
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//            java_cast< AbstractDeviceController* >(controller))->disconnectImpl();
//        } catch (DisconnectionException* ex) {
//            processError(::org::apache::log4j::Level::DEBUG(), u"Disconnection of peer detected in async processor"_j, ex);
//        } catch (::java::nio::channels::ClosedByInterruptException* ex) {
//            processError(::org::apache::log4j::Level::DEBUG(), u"Async processor interrupted"_j, ex);
//        } catch (::java::net::SocketException* ex) {
//            processError(::org::apache::log4j::Level::DEBUG(), u"Socket error in async processor"_j, ex);
//        } catch (::javax::net::ssl::SSLException* ex) {
//            processError(::org::apache::log4j::Level::DEBUG(), u"SSL error in async processor"_j, ex);
//        } catch (::java::lang::Exception* ex) {
//            processError(::org::apache::log4j::Level::ERROR(), u"Error in async processor"_j, ex);
//        }
//    }
//}
//
//void AsyncCommandProcessor::processError(::org::apache::log4j::Level* priority, const std::string & message, ::java::lang::Exception* ex)
//{
//    if(java_cast< AbstractDeviceController* >(controller))->getLogger() != 0) {
//        java_cast< AbstractDeviceController* >(controller))->getLogger())->log(priority, std::stringBuilder().append(message)->append(u": "_j)
//            ->append(ex))->toString());
//    }
//    try {
//        java_cast< AbstractDeviceController* >(controller))->disconnectImpl();
//    } catch (::java::lang::Exception* ex1) {
//        java_cast< AbstractDeviceController* >(controller))->getLogger())->error(u"Disconnection error"_j, ex1);
//    }
//}
//
//bool AsyncCommandProcessor::isActive()
//{
//    return !sentCommandsQueue)->isEmpty();
//}
//
//std::list  AsyncCommandProcessor::getActiveCommands()
//{
//    std::list  res = new ::java::util::LinkedList();
//    {
//        synchronized synchronized_5(sentCommandsQueue);
//        {
//            for (auto _i = sentCommandsQueue)->iterator(); _i->hasNext(); ) {
//                ReplyMonitor* rm = java_cast< ReplyMonitor* >(_i->next());
//                {
//                    res)->add(rm));
//                }
//            }
//        }
//    }
//    return res;
//}
//
//void AsyncCommandProcessor::interrupt()
//{
//    Log::CORE_THREAD())->debug(std::stringBuilder().append(u"Thread '"_j)->append(getName())
//        ->append(u"' is interrupted by '"_j)
//        ->append(::java::lang::Thread::currentThread())->getName())
//        ->append(u"'"_j)->toString());
//    super::interrupt();
//}
//
//AbstractDeviceController* AsyncCommandProcessor::getController()
//{
//    return java_cast< AbstractDeviceController* >(controller);
//}
//
//CommandProcessorStatisticsPtr AsyncCommandProcessor::getStatistics()
//{
//    return statistics;
//}
//
//java::util::concurrent::ThreadPoolExecutor* AsyncCommandProcessor::getSendersPool()
//{
//
//    return SENDERS_POOL();
//}
//
//
//
//
//void AsyncCommandProcessor::clinit()
//{
//    super::
//    static bool in_cl_init = false;
//struct clinit_ {
//    clinit_() {
//        in_cl_init = true;
//        SENDERS_POOL_ = new ::java::util::concurrent::ThreadPoolExecutor(int(0), int(1000), long(60LL), ::java::util::concurrent::TimeUnit::SECONDS, static_cast< ::java::util::concurrent::BlockingQueue* >(new ::java::util::concurrent::SynchronousQueue()), static_cast< ::java::util::concurrent::ThreadFactory* >(new NamedThreadFactory(u"AsyncCommandSender"_j)));
//        {
//            SENDERS_POOL())->allowCoreThreadTimeOut(true);
//        }
//    }
//};
//
//    if(!in_cl_init) {
//        static clinit_ clinit_instance;
//    }
//}
//

