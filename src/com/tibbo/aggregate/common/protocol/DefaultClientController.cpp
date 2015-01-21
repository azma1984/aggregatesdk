// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/DefaultClientController.java
#include "DefaultClientController.h"

DefaultClientController::DefaultClientController(BlockingChannel* dataChannel, ContextManager<Context>* contextManager,/*ExecutorService* */void* commandExecutionService, int maxEventQueueLength)
{
  /*
    super::ctor(contextManager);
    init();
    this->dataChannel = dataChannel;
    this->commandExecutionService = commandExecutionService;
    commandParser = new AggreGateCommandParser(dataChannel, AggreGateCommand::START_CHAR, AggreGateCommand::END_CHAR);
    pendingCommandsQueue = new ::java::util::concurrent::LinkedBlockingQueue(maxEventQueueLength);*/
}
/*
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
DefaultClientController::DefaultClientController(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}



void DefaultClientController::init()
{
    startMessageReceived = false;
    shutDown = false;
    defaultEventListener = new DefaultClientController_ForwardingEventListener(this, 0, 0);
}


void DefaultClientController::processOperationGetVar(const std::string & id, Context* con, const std::string & name, OutgoingAggreGateCommand* ans)
{
    DataTable* result;
    if(Log::CLIENTS())->isDebugEnabled()) {
        Log::CLIENTS())->debug(std::stringBuilder().append(u"Getting variable '"_j)->append(name)
            ->append(u"' from context '"_j)
            ->append(con)->getPath())
            ->append(u"'"_j)->toString());
    }
    auto vd = getVariableDefinition(con, name);
    if(vd == 0) {
        ans)->constructReply(id, AggreGateCommand::REPLY_CODE_DENIED(), std::stringBuilder().append(Cres::get())->getString(u"conVarNotAvail"_j))->append(name)->toString());
        return;
    }
    result = getVariable(con, name);
    ans)->constructReply(id, AggreGateCommand::REPLY_CODE_OK());
    ans)->addParam(result)->encode(createClassicEncodingSettings(vd)->getFormat() != 0)));
}

DateDataTable* DefaultClientController::getVariable(Context* con, const std::string & name) 
{
    return con)->getVariable(name, getCallerController());
}

void DefaultClientController::processOperationSetVar(const std::string & id, Context* con, const std::string & name, const std::string & encodedValue, OutgoingAggreGateCommand* ans) 
{
    if(Log::CLIENTS())->isDebugEnabled()) {
        Log::CLIENTS())->debug(std::stringBuilder().append(u"Setting variable '"_j)->append(name)
            ->append(u"' of context '"_j)
            ->append(con)->getPath())
            ->append(u"'"_j)->toString());
    }
    auto vd = getVariableDefinition(con, name);
    if(vd == 0) {
        ans)->constructReply(id, AggreGateCommand::REPLY_CODE_DENIED(), std::stringBuilder().append(Cres::get())->getString(u"conVarNotAvail"_j))->append(name)->toString());
        return;
    }
    auto settings = new encoding::ClassicEncodingSettings(false, vd)->getFormat());
    auto value = new DataTable(encodedValue, settings, true);
    setVariable(con, name, value);
    ans)->constructReply(id, AggreGateCommand::REPLY_CODE_OK());
}

VariableDefinition* DefaultClientController::getVariableDefinition(Context* con, const std::string & name)
{
    return con)->getVariableDefinition(name);
}

void DefaultClientController::setVariable(Context* con, const std::string & name, DataTable* value) 
{
    con)->setVariable(name, static_cast< CallerController* >(getCallerController()), value);
}

void DefaultClientController::processOperationCallFunction(const std::string & id, Context* con, const std::string & name, const std::string & encodedParameters, OutgoingAggreGateCommand* ans) 
{
    DataTable* result;
    if(Log::CLIENTS())->isDebugEnabled()) {
        Log::CLIENTS())->debug(std::stringBuilder().append(u"Calling function '"_j)->append(name)
            ->append(u"' of context '"_j)
            ->append(con)->getPath())
            ->append(u"'"_j)->toString());
    }
    auto fd = getFunctionDefinition(con, name);
    if(fd == 0) {
        ans)->constructReply(id, AggreGateCommand::REPLY_CODE_DENIED(), std::stringBuilder().append(Cres::get())->getString(u"conFuncNotAvail"_j))->append(name)->toString());
        return;
    }
    auto settings = new encoding::ClassicEncodingSettings(false, fd)->getInputFormat());
    auto parameters = new DataTable(encodedParameters, settings, true);
    result = callFunction(con, name, parameters);
    ans)->constructReply(id, AggreGateCommand::REPLY_CODE_OK());
    ans)->addParam(result)->encode(createClassicEncodingSettings(fd)->getOutputFormat() != 0)));
}

FunctionDefinition* DefaultClientController::getFunctionDefinition(Context* con, const std::string & name)
{
    return con)->getFunctionDefinition(name);
}

DateDataTable* DefaultClientController::callFunction(Context* con, const std::string & name, DataTable* parameters) 
{
    return con)->callFunction(name, static_cast< CallerController* >(getCallerController()), parameters);
}
*/

   ContextEventListener *DefaultClientController::getDefaultEventListener()
  {
    return defaultEventListener;
  }
bool DefaultClientController::addNormalListener(const std::string &context,const std::string &name, ContextEventListener* cel)
{
  //  auto con = getContext(context);
  //  if(con != 0) 
 //   {
     //   return con->addEventListener(name, cel, true);
 //   } 
  //  else 
  //  {
        return false;
  //  }
}
/*
void DefaultClientController::processOperationAddEventListener(const std::string & id, const std::string & context, const std::string & name, int  listener, const std::string & filter, OutgoingAggreGateCommand* ans) 
{
    if(Log::CLIENTS())->isDebugEnabled()) {
        Log::CLIENTS())->debug(std::stringBuilder().append(u"Adding listener for event '"_j)->append(name)
            ->append(u"' of context '"_j)
            ->append(context)
            ->append(u"'"_j)->toString());
    }
    auto cel = createListener(listener, filter != 0 ? new Expression(filter) : static_cast< Expression* >(0));
    addMaskListener(context, name, cel, true);
    ans)->constructReply(id, AggreGateCommand::REPLY_CODE_OK());
}

void DefaultClientController::processOperationRemoveEventListener(const std::string & id, const std::string & context, const std::string & name, int  listenerHashCode, const std::string & filter, OutgoingAggreGateCommand* ans) 
{
    if(Log::CLIENTS())->isDebugEnabled()) {
        Log::CLIENTS())->debug(std::stringBuilder().append(u"Removing listener for event '"_j)->append(name)
            ->append(u"' of context '"_j)
            ->append(context)
            ->append(u"'"_j)->toString());
    }
    auto cel = createListener(listenerHashCode, filter != 0 ? new Expression(filter) : static_cast< Expression* >(0));
    removeMaskListener(context, name, cel);
    ans)->constructReply(id, AggreGateCommand::REPLY_CODE_OK());
}

void DefaultClientController::processMessageStart(IncomingAggreGateCommand* cmd, OutgoingAggreGateCommand* ans) 
{
    int version = (cmd)->getParameter(AggreGateCommand::INDEX_PROTOCOL_VERSION))))->intValue();
    Log::CLIENTS())->debug(std::stringBuilder().append(u"Processing start command, client protocol version: "_j)->append(version)->toString());
    if(version == AggreGateCommandUtils::CLIENT_PROTOCOL_VERSION) {
        ans)->constructReply(cmd)->getId(), AggreGateCommand::REPLY_CODE_OK());
        startMessageReceived = true;
    } else {
        ans)->constructReply(cmd)->getId(), AggreGateCommand::REPLY_CODE_DENIED());
    }
}
*/
void DefaultClientController::processMessageOperation(IncomingAggreGateCommand* cmd, OutgoingAggreGateCommand* ans) 
{
//todo - It is not defined
	/*
    auto operation = cmd)->getParameter(AggreGateCommand::INDEX_OPERATION_CODE);
    auto context = cmd)->getParameter(AggreGateCommand::INDEX_OPERATION_CONTEXT);
    auto target = cmd)->getParameter(AggreGateCommand::INDEX_OPERATION_TARGET);
    auto originalThreadName = ::java::lang::Thread::currentThread())->getName();
    ::java::lang::Thread::currentThread())->setName(std::stringBuilder().append(originalThreadName)->append(u": "_j)
        ->append(operation)
        ->append(u"/"_j)
        ->append(context)
        ->append(u"/"_j)
        ->append(target)->toString());
    {
        auto finally0 = finally([&] {
            ::java::lang::Thread::currentThread())->setName(originalThreadName);
        });
        {
            if(operation)->length() > 1) {
                throw new ::com::tibbo::aggregate::common::util::SyntaxErrorException(std::stringBuilder().append(Cres::get())->getString(u"clInvalidOpcode"_j))->append(operation)->toString());
            }
            if(Log::CLIENTS())->isDebugEnabled()) {
                Log::CLIENTS())->debug(std::stringBuilder().append(u"Processing message, context '"_j)->append(context)
                    ->append(u"', target '"_j)
                    ->append(target)
                    ->append(u"', operation '"_j)
                    ->append(operation)
                    ->append(u"'"_j)->toString());
            }
            {
                const std::string & listenerStr;
                int  listener;
                const std::string & filter;
                switch (operation)->charAt(int(0))) {
                case AggreGateCommand::COMMAND_OPERATION_ADD_EVENT_LISTENER:
                    listenerStr = cmd)->getParameter(AggreGateCommand::INDEX_OPERATION_LISTENER_CODE);
                    listener = listenerStr)->length() > 0 ? new ::java::lang::Integer(listenerStr) : static_cast< int  >(0);
                    filter = cmd)->hasParameter(AggreGateCommand::INDEX_OPERATION_FILTER) ? encoding::TransferEncodingHelper::decode(cmd)->getParameter(AggreGateCommand::INDEX_OPERATION_FILTER)) : static_cast< const std::string & >(0);
                    processOperationAddEventListener(cmd)->getId(), context, target, listener, filter, ans);
                    return;
                case AggreGateCommand::COMMAND_OPERATION_REMOVE_EVENT_LISTENER:
                    listenerStr = cmd)->getParameter(AggreGateCommand::INDEX_OPERATION_LISTENER_CODE);
                    listener = listenerStr)->length() > 0 ? new ::java::lang::Integer(listenerStr) : static_cast< int  >(0);
                    filter = cmd)->hasParameter(AggreGateCommand::INDEX_OPERATION_FILTER) ? encoding::TransferEncodingHelper::decode(cmd)->getParameter(AggreGateCommand::INDEX_OPERATION_FILTER)) : static_cast< const std::string & >(0);
                    processOperationRemoveEventListener(cmd)->getId(), context, target, listener, filter, ans);
                    return;
                }
            }

            auto con = getContext(context);
            if(con == 0) {
                throw new ContextException(std::stringBuilder().append(Cres::get())->getString(u"conNotAvail"_j))->append(context)->toString());
            }
            if(addNormalListener(con)->getPath(), AbstractContext::E_DESTROYED(), defaultEventListener)) {
                addNormalListener(con)->getPath(), AbstractContext::E_CHILD_ADDED(), defaultEventListener);
                addNormalListener(con)->getPath(), AbstractContext::E_CHILD_REMOVED(), defaultEventListener);
                addNormalListener(con)->getPath(), AbstractContext::E_VARIABLE_ADDED(), defaultEventListener);
                addNormalListener(con)->getPath(), AbstractContext::E_VARIABLE_REMOVED(), defaultEventListener);
                addNormalListener(con)->getPath(), AbstractContext::E_FUNCTION_ADDED(), defaultEventListener);
                addNormalListener(con)->getPath(), AbstractContext::E_FUNCTION_REMOVED(), defaultEventListener);
                addNormalListener(con)->getPath(), AbstractContext::E_EVENT_ADDED(), defaultEventListener);
                addNormalListener(con)->getPath(), AbstractContext::E_EVENT_REMOVED(), defaultEventListener);
                addNormalListener(con)->getPath(), AbstractContext::E_INFO_CHANGED(), defaultEventListener);
                addNormalListener(con)->getPath(), AbstractContext::E_ACTION_ADDED(), defaultEventListener);
                addNormalListener(con)->getPath(), AbstractContext::E_ACTION_REMOVED(), defaultEventListener);
                addNormalListener(con)->getPath(), AbstractContext::E_ACTION_STATE_CHANGED(), defaultEventListener);
                addCustomListeners(con);
            }
            switch (operation)->charAt(int(0))) {
            case AggreGateCommand::COMMAND_OPERATION_GET_VAR:
                processOperationGetVar(cmd)->getId(), con, target, ans);
                break;
            case AggreGateCommand::COMMAND_OPERATION_SET_VAR:
                processOperationSetVar(cmd)->getId(), con, target, cmd)->getEncodedDataTableFromOperationMessage(), ans);
                break;
            case AggreGateCommand::COMMAND_OPERATION_CALL_FUNCTION:
                processOperationCallFunction(cmd)->getId(), con, target, cmd)->getEncodedDataTableFromOperationMessage(), ans);
                break;
            default:
                throw new ::com::tibbo::aggregate::common::util::SyntaxErrorException(std::stringBuilder().append(Cres::get())->getString(u"clInvalidOpcode"_j))->append(operation)->charAt(int(0)))->toString());
            }

        }
    }
	*/
}
/*
void DefaultClientController::addCustomListeners(Context* con)
{
}

void DefaultClientController::processMessage(IncomingAggreGateCommand* cmd, OutgoingAggreGateCommand* ans) 
{
    auto messageCode = cmd)->getMessageCode();
    if(messageCode)->length() > 1) {
        throw new ::com::tibbo::aggregate::common::util::SyntaxErrorException(std::stringBuilder().append(Cres::get())->getString(u"clInvalidMsgCode"_j))->append(messageCode)->toString());
    }
    auto code = messageCode)->charAt(int(0));
    if((code != AggreGateCommand::MESSAGE_CODE_START) && (!startMessageReceived)) {
        Log::CLIENTS())->debug(u"Can't process message: start message was not received yet"_j);
        ans)->constructReply(cmd)->getId(), AggreGateCommand::REPLY_CODE_DENIED());
        return;
    }
    switch (code) {
    case AggreGateCommand::MESSAGE_CODE_START:
        processMessageStart(cmd, ans);
        break;
    case AggreGateCommand::MESSAGE_CODE_OPERATION:
        processMessageOperation(cmd, ans);
        break;
    default:
        throw new ::com::tibbo::aggregate::common::util::SyntaxErrorException(std::stringBuilder().append(Cres::get())->getString(u"clInvalidMsgCode"_j))->append(messageCode)->charAt(int(0)))->toString());
    }

}

OutgoingAggreGateCommand* DefaultClientController::processCommand(IncomingAggreGateCommand* cmd) 
{
    auto ans = new OutgoingAggreGateCommand();
    try {
        auto commandCode = cmd)->getParameter(AggreGateCommand::INDEX_COMMAND_CODE);
        if(commandCode)->length() > 1) {
            throw new ::com::tibbo::aggregate::common::AggreGateException(std::stringBuilder().append(Cres::get())->getString(u"clInvalidCmdCode"_j))->append(commandCode)->toString());
        }
        switch (commandCode)->charAt(int(0))) {
        case AggreGateCommand::COMMAND_CODE_MESSAGE:
            processMessage(cmd, ans);
            break;
        default:
            throw new ::com::tibbo::aggregate::common::AggreGateException(std::stringBuilder().append(Cres::get())->getString(u"clInvalidCmdCode"_j))->append(commandCode)->charAt(int(0)))->toString());
        }

    } catch (ContextSecurityException* ex) {
        if(Log::CLIENTS())->isDebugEnabled()) {
            Log::CLIENTS())->debug(std::stringBuilder().append(u"Access denied while processing command '"_j)->append(cmd))
                ->append(u"': "_j)->toString(), ex);
        }
        ans)->constructReply(cmd)->getId(), AggreGateCommand::REPLY_CODE_DENIED(), ex)->getMessage() != 0 ? ex)->getMessage() : ex)->toString());
    } catch (::java::lang::Throwable* ex) {
        if(Log::CLIENTS())->isDebugEnabled()) {
            Log::CLIENTS())->debug(std::stringBuilder().append(u"Error processing command '"_j)->append(cmd))
                ->append(u"': "_j)->toString(), ex);
        }
        ans)->constructReply(cmd)->getId(), AggreGateCommand::REPLY_CODE_ERROR(), ex)->getMessage() != 0 ? ex)->getMessage() : ex)->toString(), getErrorDetails(ex));
    }
    return ans;
}
*/
void DefaultClientController::shutdown()
{
    //try {
    //    Log::CLIENTS())->debug(u"Shutting down client controller"_j);
    //    shutDown = true;
    //    if(dataChannel != 0) {
    //        dataChannel)->close();
    //    }
    //    if(java_cast< Context* >(getContextManager())->getRoot()))->getFunctionDefinition(::com::tibbo::aggregate::common::server::RootContextConstants::F_LOGOUT()) != 0) {
    //        java_cast< Context* >(getContextManager())->getRoot()))->callFunction(::com::tibbo::aggregate::common::server::RootContextConstants::F_LOGOUT(), static_cast< CallerController* >(getCallerController()));
    //    }
    //    super::shutdown();
    //} catch (::java::lang::Exception* ex) {
    //    Log::CLIENTS())->warn(u"Error shutting down client controller: "_j, ex);
    //}
}

bool DefaultClientController::run()
{
    //try {
    //    runImpl();
    //    return true;
    //} catch (std::exception* ex) {
    //    auto msg = u"I/O error while communicating with client"_j;
    //    Log::CLIENTS())->debug(msg, ex);
    //    Log::CLIENTS())->info(std::stringBuilder().append(msg)->append(u": "_j)
    //        ->append(ex))->toString());
    //    return false;
    //} catch (DisconnectionException* ex) {
    //    Log::CLIENTS())->info(std::stringBuilder().append(u"Client disconnected: "_j)->append(ex)->getMessage())->toString());
    //    return false;
    //} catch (::java::lang::Exception* ex) {
    //    Log::CLIENTS())->warn(u"Error in client controller"_j, ex);
    //    return false;
    //}


	return false;
}

void DefaultClientController::runImpl() 
{
    //auto command = java_cast< IncomingAggreGateCommand* >(commandParser)->readCommand());
    //if(command != 0) {
    //    if(Log::COMMANDS_CLIENT())->isDebugEnabled()) {
    //        Log::COMMANDS_CLIENT())->debug(std::stringBuilder().append(u"Received: "_j)->append(command))->toString());
    //    }
    //    try {
    //        commandExecutionService)->submit(static_cast< ::java::util::concurrent::Callable* >(new DefaultClientController_ProcessCommandTask(this, command)));
    //    } catch (::java::util::concurrent::RejectedExecutionException* ex) {
    //        auto reply = new OutgoingAggreGateCommand();
    //        reply)->constructReply(command)->getId(), AggreGateCommand::REPLY_CODE_ERROR(), Cres::get())->getString(u"devServerOverloaded"_j));
    //        sendCommand(reply);
    //    }
    //}
}
/*

std::string DefaultClientController::getErrorDetails(::java::lang::Throwable* error)
{
    auto buf = new std::stringBuffer();
    buf)->append(std::stringBuilder().append(Cres::get())->getString(u"version"_j))->append(u": "_j)
        ->append(::com::tibbo::aggregate::common::Constants::VERSION())
        ->append(u"\n"_j)->toString());
    buf)->append(std::stringBuilder().append(Cres::get())->getString(u"clServerTime"_j))->append(u": "_j)
        ->append(new Date()))
        ->append(u"\n"_j)->toString());
    auto baos = new ::java::io::ByteArrayOutputStream();
    error)->printStackTrace(new ::java::io::PrintStream(static_cast< ::java::io::OutputStream* >(baos)));
    buf)->append(baos)->toString());
    return buf)->toString();
}

void DefaultClientController::sendCommand(OutgoingAggreGateCommand* cmd) 
{
    cmd)->send(static_cast< ::java::nio::channels::ByteChannel* >(dataChannel));
    if(Log::COMMANDS_CLIENT())->isDebugEnabled()) {
        Log::COMMANDS_CLIENT())->debug(std::stringBuilder().append(u"Sent: "_j)->append(cmd))->toString());
    }
}

com::tibbo::aggregate::common::event::ContextEventListener* DefaultClientController::createListener(int  listenerHashCode, Expression* filter)
{
    if(listenerHashCode == 0) {
        return defaultEventListener;
    }
    return new DefaultClientController_ForwardingEventListener(this, listenerHashCode, filter);
}

void DefaultClientController::processPendingEvents()
{
    while (true) {
        OutgoingAggreGateCommand* current;
        {
            synchronized synchronized_0(pendingCommandsQueue);
            {
                current = java_cast< OutgoingAggreGateCommand* >(pendingCommandsQueue)->poll());
                if(current == 0) {
                    return;
                }
            }
        }
        try {
            sendCommand(current);
        } catch (DisconnectionException* ex) {
            Log::CLIENTS())->debug(std::stringBuilder().append(u"Disconnection detected while forwarding event to client: "_j)->append(ex)->getMessage())->toString(), ex);
        } catch (::java::lang::Throwable* ex) {
            auto msg = u"Exception while forwarding event to client: "_j;
            Log::CLIENTS())->info(std::stringBuilder().append(msg)->append(ex)->toString())->toString());
            Log::CLIENTS())->debug(std::stringBuilder().append(msg)->append(ex)->getMessage())->toString(), ex);
        }
    }
}
*/
Context* DefaultClientController::getContext(const std::string &path)
{
   
  //return getContextManager()->get(path, getCallerController();
  
  Context* con=NULL;
  return con;
}
/*
com::tibbo::aggregate::common::event::ContextEventListener* DefaultClientController::getDefaultEventListener()
{
    return defaultEventListener;
}

Dateencoding::ClassicEncodingSettings* DefaultClientController::createClassicEncodingSettings(bool useFormatCache)
{
    return new encoding::ClassicEncodingSettings(false);
}

OutgoingAggreGateCommand* DefaultClientController::constructEventCommand(Event* event, int  listenerCode)
{
    auto cmd = new OutgoingAggreGateCommand();
    cmd)->constructEvent(event)->getContext(), event)->getName(), event)->getLevel(), event)->getData())->encode(createClassicEncodingSettings(true)), event)->getId(), event)->getCreationtime(), listenerCode);
    return cmd;
}

bool DefaultClientController::isConnected()
{
    return dataChannel)->isOpen();
}

std::string DefaultClientController::getAddress()
{
    return dataChannel != 0 ? dataChannel)->getSocket())->getInetAddress())->getHostAddress() : static_cast< const std::string & >(0);
}



*/