// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/DefaultClientController.java

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
/*

    ::com::tibbo::aggregate::common::util::BlockingChannel* dataChannel;
    ::com::tibbo::aggregate::common::communication::CommandParser* commandParser;
    bool startMessageReceived;
    bool shutDown;
    */
    ContextEventListener* defaultEventListener;
    /*
    ::java::util::concurrent::ExecutorService* commandExecutionService;
    ::java::util::concurrent::BlockingQueue* pendingCommandsQueue;
protected:
    void ctor(::com::tibbo::aggregate::common::util::BlockingChannel* dataChannel, ::com::tibbo::aggregate::common::context::ContextManager* contextManager, ::java::util::concurrent::ExecutorService* commandExecutionService, int maxEventQueueLength);
*/
public:
   ContextEventListener *getDefaultEventListener();

 /*
  void processOperationGetVar(const std::string & id, ::com::tibbo::aggregate::common::context::Context* con, const std::string & name, OutgoingAggreGateCommand* ans) ;

public: 
    DataTable* getVariable(::com::tibbo::aggregate::common::context::Context* con, const std::string & name) ;

public:
    void processOperationSetVar(const std::string & id, ::com::tibbo::aggregate::common::context::Context* con, const std::string & name, const std::string & encodedValue, OutgoingAggreGateCommand* ans) ;

public:
    ::com::tibbo::aggregate::common::context::VariableDefinition* getVariableDefinition(::com::tibbo::aggregate::common::context::Context* con, const std::string & name);
    void setVariable(::com::tibbo::aggregate::common::context::Context* con, const std::string & name, DataTable* value) ;

public:
    void processOperationCallFunction(const std::string & id, ::com::tibbo::aggregate::common::context::Context* con, const std::string & name, const std::string & encodedParameters, OutgoingAggreGateCommand* ans) ;

public: 
    ::com::tibbo::aggregate::common::context::FunctionDefinition* getFunctionDefinition(::com::tibbo::aggregate::common::context::Context* con, const std::string & name);
    DataTable* callFunction(::com::tibbo::aggregate::common::context::Context* con, const std::string & name, DataTable* parameters) ;
  */
    bool addNormalListener(const std::string &context,const std::string &name, ContextEventListener* cel);
/*
public:
    void processOperationAddEventListener(const std::string & id, const std::string & context, const std::string & name, int  listener, const std::string & filter, OutgoingAggreGateCommand* ans) ;
    void processOperationRemoveEventListener(const std::string & id, const std::string & context, const std::string & name, int  listenerHashCode, const std::string & filter, OutgoingAggreGateCommand* ans) ;
    void processMessageStart(IncomingAggreGateCommand* cmd, OutgoingAggreGateCommand* ans);
*/
	void shutdown();
	bool run();
    void runImpl() ;

protected: 
    static void processMessageOperation(IncomingAggreGateCommand* cmd, OutgoingAggreGateCommand* ans) ;
 /*
	void addCustomListeners(::com::tibbo::aggregate::common::context::Context* con);
    void processMessage(IncomingAggreGateCommand* cmd, OutgoingAggreGateCommand* ans);

public:
    OutgoingAggreGateCommand* processCommand(IncomingAggreGateCommand* cmd) ;
	*/
    
	
   
/*
public: 
    const std::string & getErrorDetails(::java::lang::Throwable* error);

public:
    void sendCommand(OutgoingAggreGateCommand* cmd) ;
    ContextEventListener* createListener(int  listenerHashCode, ::com::tibbo::aggregate::common::expression::Expression* filter);

private:
    void processPendingEvents();
 */

   Context* getContext(const std::string &path);
/*

    bool controllerShouldHandle(Event* ev, ContextEventListener* listener);
    ContextEventListener* getDefaultEventListener();

public: 
    encoding::ClassicEncodingSettings* createClassicEncodingSettings(bool useFormatCache);

public:
    OutgoingAggreGateCommand* constructEventCommand(Event* event, int  listenerCode);
    bool isConnected();
    const std::string & getAddress();


    

private:
    void init();
    ::java::lang::Class* getClass0();
    friend class DefaultClientController_ForwardingEventListener;
    friend class DefaultClientController_ProcessCommandTask;
    friend class DefaultClientController_PendingEventProcessingTask;*/


    DefaultClientController(BlockingChannel* dataChannel, ContextManager<Context>* contextManager,/*ExecutorService* */void* commandExecutionService, int maxEventQueueLength);


};
#endif