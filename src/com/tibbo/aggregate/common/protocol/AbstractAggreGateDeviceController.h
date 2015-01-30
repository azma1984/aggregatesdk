#ifndef AbstractAggreGateDeviceControllerH
#define AbstractAggreGateDeviceControllerH

#include "AbstractDeviceController.h"
#include "IncomingAggreGateCommand.h"
#include "OutgoingAggreGateCommand.h"

template <class D,class C> class AbstractAggreGateDeviceController//: public AbstractDeviceController<IncomingAggreGateCommand, OutgoingAggreGateCommand>, public AggreGateDeviceController<IncomingAggreGateCommand, OutgoingAggreGateCommand>
{
 private:
	AggreGateDevicePtr device;
	/*RemoteContextManagerPtr */ C *contextManager;

	CallerControllerPtr callerController;
	UserSettingsPtr userSettings;
	bool avoidSendingFormats;
	FormatCachePtr formatCache;
	//::java::util::concurrent::ExecutorService* eventPreprocessor; //todo

	void processEvent(IncomingAggreGateCommandPtr cmd);

	void init();

	AgClassPtr getClass0();
	friend class AbstractAggreGateDeviceController_processEvent_1;
	friend class AbstractAggreGateDeviceController_setCommandParser_2;

protected:
	RemoteContextManagerPtr getContextManager();

	virtual void setContextManager(C* contextManager);

	void setDevice(AggreGateDevicePtr device);
    AggreGateDevicePtr getDevice();
    CallerControllerPtr getCallerController();

public:
    void setCallerController(CallerControllerPtr callerController);


	FormatCachePtr getFormatCache();
    UserSettingsPtr getSettings();
    ClassicEncodingSettingsPtr createClassicEncodingSettings(bool forSending);


    void setAvoidSendingFormats(bool avoidSendingFormats);


    bool isAvoidSendingFormats();


	bool connectImpl();


    void destroy();

	void disconnectImpl();
   // std::list  getProxyContexts(const std::string & path);
   // ::java::util::concurrent::ExecutorService* getEventPreprocessor(); todo

	IncomingAggreGateCommandPtr sendCommandAndCheckReplyCode(OutgoingAggreGateCommandPtr cmd);

	void processAsyncCommand(IncomingAggreGateCommandPtr cmd);

	void confirmEvent(ContextPtr con, EventDefinitionPtr def, EventPtr event);
    void setCommandParser(CommandParserPtr commandBuffer);

	const std::string & toString();
	DataTablePtr callRemoteFunction(const std::string & context, const std::string & name, TableFormatPtr outputFormat, DataTablePtr parameters);

	DataTablePtr decodeRemoteDataTable(TableFormatPtr format, const std::string & encodedReply);


	void connect();
	void disconnect();
   //	std::list  getActiveCommands();
	CommandProcessorStatisticsPtr getStatistics();
	bool isActive();
	void login();
	IncomingAggreGateCommandPtr sendCommand(CommandPtr cmd);

	void processAsyncCommand(CommandPtr cmd);


	AbstractAggreGateDeviceController(AggreGateDevicePtr device);
	AbstractAggreGateDeviceController();

};

#endif
