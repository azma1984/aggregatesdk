// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/DefaultClientController.java

#ifndef DefaultClientControllerH
#define DefaultClientControllerH

#include "AbstractClientController.h"


/*
#include <com/tibbo/aggregate/common/AggreGateException.h"
#include <com/tibbo/aggregate/common/Constants.h"
#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/communication/Command.h"
#include <com/tibbo/aggregate/common/communication/CommandParser.h"
#include <com/tibbo/aggregate/common/context/AbstractContext.h"
#include <com/tibbo/aggregate/common/context/CallerController.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextException.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
#include <com/tibbo/aggregate/common/context/ContextSecurityException.h"
#include <com/tibbo/aggregate/common/context/FunctionDefinition.h"
#include <com/tibbo/aggregate/common/context/VariableDefinition.h"
#include <com/tibbo/aggregate/common/data/Event.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.h"
#include <com/tibbo/aggregate/common/datatable/encoding/TransferEncodingHelper.h"
#include <com/tibbo/aggregate/common/device/DisconnectionException.h"
#include <com/tibbo/aggregate/common/event/ContextEventListener.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommand.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommandParser.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommandUtils.h"
#include <com/tibbo/aggregate/common/protocol/DefaultClientController_ForwardingEventListener.h"
#include <com/tibbo/aggregate/common/protocol/DefaultClientController_ProcessCommandTask.h"
#include <com/tibbo/aggregate/common/protocol/IncomingAggreGateCommand.h"
#include <com/tibbo/aggregate/common/protocol/OutgoingAggreGateCommand.h"
#include <com/tibbo/aggregate/common/server/RootContextConstants.h"
#include <com/tibbo/aggregate/common/util/BlockingChannel.h"
#include <com/tibbo/aggregate/common/util/SyntaxErrorException.h"*/

class DefaultClientController : public AbstractClientController
{

/*
private:
    ::com::tibbo::aggregate::common::util::BlockingChannel* dataChannel;
    ::com::tibbo::aggregate::common::communication::CommandParser* commandParser;
    bool startMessageReceived;
    bool shutDown;
    ::com::tibbo::aggregate::common::event::ContextEventListener* defaultEventListener;
    ::java::util::concurrent::ExecutorService* commandExecutionService;
    ::java::util::concurrent::BlockingQueue* pendingCommandsQueue;
protected:
    void ctor(::com::tibbo::aggregate::common::util::BlockingChannel* dataChannel, ::com::tibbo::aggregate::common::context::ContextManager* contextManager, ::java::util::concurrent::ExecutorService* commandExecutionService, int maxEventQueueLength);

public:
    void processOperationGetVar(std::string* id, ::com::tibbo::aggregate::common::context::Context* con, std::string* name, OutgoingAggreGateCommand* ans) ;

public: 
    ::com::tibbo::aggregate::common::datatable::DataTable* getVariable(::com::tibbo::aggregate::common::context::Context* con, std::string* name) ;

public:
    void processOperationSetVar(std::string* id, ::com::tibbo::aggregate::common::context::Context* con, std::string* name, std::string* encodedValue, OutgoingAggreGateCommand* ans) ;

public:
    ::com::tibbo::aggregate::common::context::VariableDefinition* getVariableDefinition(::com::tibbo::aggregate::common::context::Context* con, std::string* name);
    void setVariable(::com::tibbo::aggregate::common::context::Context* con, std::string* name, ::com::tibbo::aggregate::common::datatable::DataTable* value) ;

public:
    void processOperationCallFunction(std::string* id, ::com::tibbo::aggregate::common::context::Context* con, std::string* name, std::string* encodedParameters, OutgoingAggreGateCommand* ans) ;

public: 
    ::com::tibbo::aggregate::common::context::FunctionDefinition* getFunctionDefinition(::com::tibbo::aggregate::common::context::Context* con, std::string* name);
    ::com::tibbo::aggregate::common::datatable::DataTable* callFunction(::com::tibbo::aggregate::common::context::Context* con, std::string* name, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) ;
    bool addNormalListener(std::string* context, std::string* name, ::com::tibbo::aggregate::common::event::ContextEventListener* cel);

public:
    void processOperationAddEventListener(std::string* id, std::string* context, std::string* name, ::java::lang::Integer* listener, std::string* filter, OutgoingAggreGateCommand* ans) ;
    void processOperationRemoveEventListener(std::string* id, std::string* context, std::string* name, ::java::lang::Integer* listenerHashCode, std::string* filter, OutgoingAggreGateCommand* ans) ;
    void processMessageStart(IncomingAggreGateCommand* cmd, OutgoingAggreGateCommand* ans);

public: 
    void processMessageOperation(IncomingAggreGateCommand* cmd, OutgoingAggreGateCommand* ans) ;
    void addCustomListeners(::com::tibbo::aggregate::common::context::Context* con);
    void processMessage(IncomingAggreGateCommand* cmd, OutgoingAggreGateCommand* ans);

public:
    OutgoingAggreGateCommand* processCommand(IncomingAggreGateCommand* cmd) ;
    void shutdown();
    bool run();
    void runImpl() ;

public: 
    std::string* getErrorDetails(::java::lang::Throwable* error);

public:
    void sendCommand(OutgoingAggreGateCommand* cmd) ;
    ::com::tibbo::aggregate::common::event::ContextEventListener* createListener(::java::lang::Integer* listenerHashCode, ::com::tibbo::aggregate::common::expression::Expression* filter);

private:
    void processPendingEvents();

public: 
    ::com::tibbo::aggregate::common::context::Context* getContext(std::string* path);

public:
    bool controllerShouldHandle(::com::tibbo::aggregate::common::data::Event* ev, ::com::tibbo::aggregate::common::event::ContextEventListener* listener);
    ::com::tibbo::aggregate::common::event::ContextEventListener* getDefaultEventListener();

public: 
    ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* createClassicEncodingSettings(bool useFormatCache);

public:
    OutgoingAggreGateCommand* constructEventCommand(::com::tibbo::aggregate::common::data::Event* event, ::java::lang::Integer* listenerCode);
    bool isConnected();
    std::string* getAddress();

    // Generated
    DefaultClientController(::com::tibbo::aggregate::common::util::BlockingChannel* dataChannel, ::com::tibbo::aggregate::common::context::ContextManager* contextManager, ::java::util::concurrent::ExecutorService* commandExecutionService, int maxEventQueueLength);
protected:
    DefaultClientController(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
    friend class DefaultClientController_ForwardingEventListener;
    friend class DefaultClientController_ProcessCommandTask;
    friend class DefaultClientController_PendingEventProcessingTask;*/
};
#endif