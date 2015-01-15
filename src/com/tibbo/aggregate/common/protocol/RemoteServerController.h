// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/RemoteServerController.java

#pragma once

#include <AbstractAggreGateDeviceController.h>
#include <string>
/*
#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/communication/CommandParser.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/Contexts.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/device/RemoteDeviceErrorException.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommand.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommandParser.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateDevice.h"
#include <com/tibbo/aggregate/common/protocol/OutgoingAggreGateCommand.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext.h"
 */
#include <RemoteContextManager.h>
#include <RemoteServer.h>
/*
#include <com/tibbo/aggregate/common/protocol/SslHelper.h"
#include <com/tibbo/aggregate/common/server/CommonServerFormats.h"
#include <com/tibbo/aggregate/common/server/RootContextConstants.h"
#include <com/tibbo/aggregate/common/util/BlockingChannel.h"
 */


class RemoteServerController
{
 private:
   //	BlockingChannel* dataChannel;

 public:
	bool connectImpl();
	std::string getConnectionErrorMessage();
	bool loginImpl();

	void start();

	void disconnectImpl();
  //	void send(OutgoingAggreGateCommand* cmd);
 //	void setDataChannel(BlockingChannel* socketChannel);
  //	BlockingChannel* getDataChannel();

	bool isConnected();
	std::string getAddress();

	RemoteServerController(RemoteServer* device, bool async, bool useContextManager);

   // void send(Command* cmd);

 /* AbstractAggreGateDeviceController*/
   public:
   /*
private:
	AggreGateDevice* device;
	*/
	RemoteContextManager *contextManager;
	/*
	::com::tibbo::aggregate::common::context::CallerController* callerController;
	::com::tibbo::aggregate::common::util::UserSettings* userSettings;
	bool avoidSendingFormats;
	encoding::FormatCache* formatCache;
	::java::util::concurrent::ExecutorService* eventPreprocessor;
protected:
	void ctor(AggreGateDevice* device, ::org::apache::log4j::Logger* logger);


	RemoteContextManager* getContextManager();
	*/
	void setContextManager(RemoteContextManager* contextManager);
	/*
	void setDevice(AggreGateDevice* device);
    AggreGateDevice* getDevice();
    ::com::tibbo::aggregate::common::context::CallerController* getCallerController();

public:
    void setCallerController(::com::tibbo::aggregate::common::context::CallerController* callerController);

public:
    encoding::FormatCache* getFormatCache();
    ::com::tibbo::aggregate::common::util::UserSettings* getSettings();
    encoding::ClassicEncodingSettings* createClassicEncodingSettings(bool forSending);

public:
    void setAvoidSendingFormats(bool avoidSendingFormats);

public:
    bool isAvoidSendingFormats();

public:
	bool connectImpl();

public:
    void destroy();

public:
    void disconnectImpl();
    std::list  getProxyContexts(const std::string & path);
    ::java::util::concurrent::ExecutorService* getEventPreprocessor();

public:
	IncomingAggreGateCommand* sendCommandAndCheckReplyCode(OutgoingAggreGateCommand* cmd);

public:
    void processAsyncCommand(IncomingAggreGateCommand* cmd);

private:
    void processEvent(IncomingAggreGateCommand* cmd);

public:
	void confirmEvent(::com::tibbo::aggregate::common::context::Context* con, ::com::tibbo::aggregate::common::context::EventDefinition* def, Event* event);
    void setCommandParser(::com::tibbo::aggregate::common::communication::CommandParser* commandBuffer);

public:
    const std::string & toString();
	DataTable* callRemoteFunction(const std::string & context, const std::string & name, TableFormat* outputFormat, DataTable* parameters);

public:
    DataTable* decodeRemoteDataTable(TableFormat* format, const std::string & encodedReply);




public:


private:
	void init();
		*/
public:
	void connect();
  /*	void disconnect();

	std::list  getActiveCommands();
	::com::tibbo::aggregate::common::communication::CommandProcessorStatistics* getStatistics();
	bool isActive();
	void login();
	IncomingAggreGateCommand* sendCommand(::com::tibbo::aggregate::common::communication::Command* cmd);

public:
	void processAsyncCommand(::com::tibbo::aggregate::common::communication::Command* cmd);

private:
	::java::lang::Class* getClass0();
	friend class AbstractAggreGateDeviceController_processEvent_1;
	friend class AbstractAggreGateDeviceController_setCommandParser_2;

   //	AbstractAggreGateDeviceController(AggreGateDevice* device);
   public: */
};
