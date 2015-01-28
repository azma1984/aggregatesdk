
#ifndef DefaultClientControllerH
#define DefaultClientControllerH

#include "AbstractClientController.h"

#include "Context.h"
#include "BlockingChannel.h"

/*
#include <com/tibbo/aggregate/common/AggreGateException.h"
#include <com/tibbo/aggregate/common/Constants.h"
#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/communication/Command.h"
#include <com/tibbo/aggregate/common/communication/CommandParser.h"
#include <com/tibbo/aggregate/common/context/AbstractContext.h"
#include <com/tibbo/aggregate/common/context/CallerController.h"

#include <com/tibbo/aggregate/common/context/ContextException.h"

#include <com/tibbo/aggregate/common/context/ContextSecurityException.h"
#include <com/tibbo/aggregate/common/context/FunctionDefinition.h"
#include <com/tibbo/aggregate/common/context/VariableDefinition.h"
#include <com/tibbo/aggregate/common/data/Event.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.h"
#include <com/tibbo/aggregate/common/datatable/encoding/TransferEncodingHelper.h"
#include <com/tibbo/aggregate/common/device/DisconnectionException.h"

#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommand.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommandParser.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommandUtils.h"
#include <com/tibbo/aggregate/common/protocol/DefaultClientController_ForwardingEventListener.h"
#include <com/tibbo/aggregate/common/protocol/DefaultClientController_ProcessCommandTask.h"

#include <com/tibbo/aggregate/common/server/RootContextConstants.h"

#include <com/tibbo/aggregate/common/util/SyntaxErrorException.h"*/
#include "BlockingChannel.h"
#include "ContextManager.h"
#include "event/ContextEventListener.h"
#include "protocol/IncomingAggreGateCommand.h"
#include "protocol/OutgoingAggreGateCommand.h"
#include <string>

class DefaultClientController : public AbstractClientController
{
private:

    BlockingChannel* dataChannel;
	CommandParserPtr commandParser;
	bool startMessageReceived;
    bool shutDown;

    ContextEventListenerPtr defaultEventListener;

   // ::java::util::concurrent::ExecutorService* commandExecutionService; todo
  //  ::java::util::concurrent::BlockingQueue* pendingCommandsQueue;      todo
protected:
    void ctor(BlockingChannel* dataChannel, ContextManagerPtr contextManager, ::java::util::concurrent::ExecutorService* commandExecutionService, int maxEventQueueLength);

public:
   ContextEventListenerPtrgetDefaultEventListener();


  void processOperationGetVar(const std::string & id, ContextPtr con, const std::string & name, OutgoingAggreGateCommandPtr ans) ;

public: 
    DataTablePtr getVariable(ContextPtr con, const std::string & name) ;

public:
    void processOperationSetVar(const std::string & id, ContextPtr con, const std::string & name, const std::string & encodedValue, OutgoingAggreGateCommandPtr ans) ;

public:
    VariableDefinitionPtr getVariableDefinition(ContextPtr con, const std::string & name);
    void setVariable(ContextPtr con, const std::string & name, DataTablePtr value) ;

public:
    void processOperationCallFunction(const std::string & id, ContextPtr con, const std::string & name, const std::string & encodedParameters, OutgoingAggreGateCommandPtr ans) ;

public: 
    FunctionDefinitionPtr getFunctionDefinition(ContextPtr con, const std::string & name);
    DataTablePtr callFunction(ContextPtr con, const std::string & name, DataTablePtr parameters) ;

    bool addNormalListener(const std::string &context,const std::string &name, ContextEventListenerPtr cel);

public:
    void processOperationAddEventListener(const std::string & id, const std::string & context, const std::string & name, int  listener, const std::string & filter, OutgoingAggreGateCommandPtr ans) ;
    void processOperationRemoveEventListener(const std::string & id, const std::string & context, const std::string & name, int  listenerHashCode, const std::string & filter, OutgoingAggreGateCommandPtr ans) ;
    void processMessageStart(IncomingAggreGateCommandPtr cmd, OutgoingAggreGateCommandPtr ans);

	void shutdown();
	bool run();
    void runImpl() ;

protected: 
    static void processMessageOperation(IncomingAggreGateCommandPtr cmd, OutgoingAggreGateCommandPtr ans) ;

	void addCustomListeners(ContextPtr con);
    void processMessage(IncomingAggreGateCommandPtr cmd, OutgoingAggreGateCommandPtr ans);

public:
    OutgoingAggreGateCommandPtr processCommand(IncomingAggreGateCommandPtr cmd) ;

	
   

public: 
    const std::string & getErrorDetails(::java::lang::Throwable* error);

public:
    void sendCommand(OutgoingAggreGateCommandPtr cmd) ;
    ContextEventListenerPtr createListener(int  listenerHashCode, ExpressionPtr filter);

private:
    void processPendingEvents();


   ContextPtr getContext(const std::string &path);


    bool controllerShouldHandle(EventPtr ev, ContextEventListenerPtr listener);
    ContextEventListenerPtr getDefaultEventListener();

public: 
    encoding::ClassicEncodingSettingsPtr createClassicEncodingSettings(bool useFormatCache);

public:
    OutgoingAggreGateCommandPtr constructEventCommand(EventPtr event, int  listenerCode);
    bool isConnected();
    const std::string & getAddress();


    

private:
    void init();
    AgClassPtr getClass0();
    friend class DefaultClientController_ForwardingEventListener;
    friend class DefaultClientController_ProcessCommandTask;
	friend class DefaultClientController_PendingEventProcessingTask;


    DefaultClientController(BlockingChannel* dataChannel, ContextManager<Context>* contextManager,/*ExecutorService* */AgObjectPtr commandExecutionService, int maxEventQueueLength);


};
#endif