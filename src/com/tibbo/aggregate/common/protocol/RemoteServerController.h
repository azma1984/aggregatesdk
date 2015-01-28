// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/RemoteServerController.java

#ifndef H
#define H

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
  //	void send(OutgoingAggreGateCommandPtr cmd);
 //	void setDataChannel(BlockingChannel* socketChannel);
  //	BlockingChannel* getDataChannel();

	bool isConnected();
	std::string getAddress();

	RemoteServerController(RemoteServerPtr device, bool async, bool useContextManager);

   // void send(CommandPtr cmd);

 /* AbstractAggreGateDeviceControllerPtr/
   public:
   /*
private:
	AggreGateDevicePtr device;
	*/
	RemoteContextManagerPtrcontextManager;
	/*
	CallerControllerPtr callerController;
	UserSettingsPtr userSettings;
	bool avoidSendingFormats;
	encoding::FormatCachePtr formatCache;
	::java::util::concurrent::ExecutorService* eventPreprocessor;
protected:
	void ctor(AggreGateDevicePtr device, ::org::apache::log4j::Logger* logger);


	RemoteContextManagerPtr getContextManager();
	*/
	void setContextManager(RemoteContextManagerPtr contextManager);
	/*
	void setDevice(AggreGateDevicePtr device);
    AggreGateDevicePtr getDevice();
    CallerControllerPtr getCallerController();

public:
    void setCallerController(CallerControllerPtr callerController);

public:
    encoding::FormatCachePtr getFormatCache();
    UserSettingsPtr getSettings();
    encoding::ClassicEncodingSettingsPtr createClassicEncodingSettings(bool forSending);

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
	IncomingAggreGateCommandPtr sendCommandAndCheckReplyCode(OutgoingAggreGateCommandPtr cmd);

public:
    void processAsyncCommand(IncomingAggreGateCommandPtr cmd);

private:
    void processEvent(IncomingAggreGateCommandPtr cmd);

public:
	void confirmEvent(ContextPtr con, EventDefinitionPtr def, EventPtr event);
    void setCommandParser(::com::tibbo::aggregate::common::communication::CommandParserPtr commandBuffer);

public:
    const std::string & toString();
	DataTablePtr callRemoteFunction(const std::string & context, const std::string & name, TableFormatPtr outputFormat, DataTablePtr parameters);

public:
    DataTablePtr decodeRemoteDataTable(TableFormatPtr format, const std::string & encodedReply);




public:


private:
	void init();
		*/
public:
	void connect();
  /*	void disconnect();

	std::list  getActiveCommands();
	::com::tibbo::aggregate::common::communication::CommandProcessorStatisticsPtr getStatistics();
	bool isActive();
	void login();
	IncomingAggreGateCommandPtr sendCommand(::com::tibbo::aggregate::common::communication::CommandPtr cmd);

public:
	void processAsyncCommand(::com::tibbo::aggregate::common::communication::CommandPtr cmd);

private:
	AgClassPtr getClass0();
	friend class AbstractAggreGateDeviceController_processEvent_1;
	friend class AbstractAggreGateDeviceController_setCommandParser_2;

   //	AbstractAggreGateDeviceController(AggreGateDevicePtr device);
   public: */
};
