
#ifndef DefaultClientControllerH
#define DefaultClientControllerH

#include "AbstractClientController.h"

#include "context/Context.h"
//#include "BlockingChannel.h"

/*
#include "AggreGateException.h"
#include "Constants.h"
#include "Cres.h"
#include "Log.h"
#include "communication/Command.h"
#include "communication/CommandParser.h"
#include "context/AbstractContext.h"
#include "context/CallerController.h"

#include "context/ContextException.h"

#include "context/ContextSecurityException.h"
#include "context/FunctionDefinition.h"
#include "context/VariableDefinition.h"
#include "data/Event.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "datatable/encoding/ClassicEncodingSettings.h"
#include "datatable/encoding/TransferEncodingHelper.h"
#include "device/DisconnectionException.h"

#include "expression/Expression.h"
#include "protocol/AggreGateCommand.h"
#include "protocol/AggreGateCommandParser.h"
#include "protocol/AggreGateCommandUtils.h"
#include "protocol/DefaultClientController_ForwardingEventListener.h"
#include "protocol/DefaultClientController_ProcessCommandTask.h"

#include "server/RootContextConstants.h"

#include "util/SyntaxErrorException.h"*/
//#include "BlockingChannel.h"
#include "context/ContextManager.h"
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


	void init();
	void processPendingEvents();

	ContextPtr getContext(const std::string &path);

	bool controllerShouldHandle(EventPtr ev, ContextEventListenerPtr listener);
protected:
    void processMessageOperation(IncomingAggreGateCommandPtr cmd, OutgoingAggreGateCommandPtr ans) ;

	void addCustomListeners(ContextPtr con);
	void processMessage(IncomingAggreGateCommandPtr cmd, OutgoingAggreGateCommandPtr ans);

public:
   ContextEventListenerPtr getDefaultEventListener();

	void processOperationGetVar(const std::string & id, ContextPtr con, const std::string & name, OutgoingAggreGateCommandPtr ans) ;

	DataTablePtr getVariable(ContextPtr con, const std::string & name) ;

	void processOperationSetVar(const std::string & id, ContextPtr con, const std::string & name, const std::string & encodedValue, OutgoingAggreGateCommandPtr ans) ;

	VariableDefinitionPtr getVariableDefinition(ContextPtr con, const std::string & name);
	void setVariable(ContextPtr con, const std::string & name, DataTablePtr value) ;

	void processOperationCallFunction(const std::string & id, ContextPtr con, const std::string & name, const std::string & encodedParameters, OutgoingAggreGateCommandPtr ans) ;

	FunctionDefinitionPtr getFunctionDefinition(ContextPtr con, const std::string & name);
	DataTablePtr callFunction(ContextPtr con, const std::string & name, DataTablePtr parameters) ;

	bool addNormalListener(const std::string &context,const std::string &name, ContextEventListenerPtr cel);

	void processOperationAddEventListener(const std::string & id, const std::string & context, const std::string & name, int  listener, const std::string & filter, OutgoingAggreGateCommandPtr ans) ;
	void processOperationRemoveEventListener(const std::string & id, const std::string & context, const std::string & name, int  listenerHashCode, const std::string & filter, OutgoingAggreGateCommandPtr ans) ;
    void processMessageStart(IncomingAggreGateCommandPtr cmd, OutgoingAggreGateCommandPtr ans);

	void shutdown();
	bool run();
	void runImpl() ;

	OutgoingAggreGateCommandPtr processCommand(IncomingAggreGateCommandPtr cmd) ;


   //	std::string getErrorDetails(::java::lang::Throwable* error);  todo

	void sendCommand(OutgoingAggreGateCommandPtr cmd) ;
    ContextEventListenerPtr createListener(int  listenerHashCode, ExpressionPtr filter);


	ClassicEncodingSettingsPtr createClassicEncodingSettings(bool useFormatCache);


    OutgoingAggreGateCommandPtr constructEventCommand(EventPtr event, int  listenerCode);
    bool isConnected();
	std::string getAddress();


    DefaultClientController(BlockingChannelPtr dataChannel, ContextManagerPtr contextManager,/*ExecutorService* */AgObjectPtr commandExecutionService, int maxEventQueueLength);


};
#endif
