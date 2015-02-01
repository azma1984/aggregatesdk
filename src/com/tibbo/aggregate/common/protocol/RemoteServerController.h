#ifndef RemoteServerControllerH
#define RemoteServerControllerH

#include "protocol/AbstractAggreGateDeviceController.h"
#include <string>
/*
#include "Cres.h"
#include "Log.h"
#include "communication/CommandParser.h"
#include "context/Context.h"
#include "context/Contexts.h"
#include "datatable/DataTable.h"
#include "device/RemoteDeviceErrorException.h"
#include "protocol/AggreGateCommand.h"
#include "protocol/AggreGateCommandParser.h"
#include "protocol/AggreGateDevice.h"
#include "protocol/OutgoingAggreGateCommand.h"
#include "protocol/ProxyContext.h"
 */
#include "protocol/RemoteContextManager.h"
#include "protocol/RemoteServer.h"
/*
#include "protocol/SslHelper.h"
#include "server/CommonServerFormats.h"
#include "server/RootContextConstants.h"
#include "util/BlockingChannel.h"
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
	RemoteContextManagerPtr contextManager;
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
    void setCommandParser(CommandParserPtr commandBuffer);

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
	CommandProcessorStatisticsPtr getStatistics();
	bool isActive();
	void login();
	IncomingAggreGateCommandPtr sendCommand(CommandPtr cmd);

public:
	void processAsyncCommand(CommandPtr cmd);

private:
	AgClassPtr getClass0();
	friend class AbstractAggreGateDeviceController_processEvent_1;
	friend class AbstractAggreGateDeviceController_setCommandParser_2;

   //	AbstractAggreGateDeviceController(AggreGateDevicePtr device);
   public: */
};


#endif
