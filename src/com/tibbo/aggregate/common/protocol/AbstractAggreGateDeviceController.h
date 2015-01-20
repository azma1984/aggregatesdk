// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController.java

#pragma once

#include "AbstractDeviceController.h"
#include "IncomingAggreGateCommand.h"
#include "OutgoingAggreGateCommand.h"

template <class D,class C> class AbstractAggreGateDeviceController//: public AbstractDeviceController<IncomingAggreGateCommand, OutgoingAggreGateCommand>, public AggreGateDeviceController<IncomingAggreGateCommand, OutgoingAggreGateCommand>
{
 public:
   /*
private:
	AggreGateDevice* device;
	*/
	/*RemoteContextManager* */ C *contextManager;
	/*
	CallerController* callerController;
	::com::tibbo::aggregate::common::util::UserSettings* userSettings;
	bool avoidSendingFormats;
	encoding::FormatCache* formatCache;
	::java::util::concurrent::ExecutorService* eventPreprocessor;
protected:
	void ctor(AggreGateDevice* device, ::org::apache::log4j::Logger* logger);


	RemoteContextManager* getContextManager();
	*/
	virtual void setContextManager(C* contextManager);
	/*
	void setDevice(AggreGateDevice* device);
    AggreGateDevice* getDevice();
    CallerController* getCallerController();

public:
    void setCallerController(CallerController* callerController);

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
	void confirmEvent(Context* con, EventDefinition* def, Event* event);
    void setCommandParser(::com::tibbo::aggregate::common::communication::CommandParser* commandBuffer);

public:
    const std::string & toString();
	DataTable* callRemoteFunction(const std::string & context, const std::string & name, TableFormat* outputFormat, DataTable* parameters);

public:
    DataTable* decodeRemoteDataTable(TableFormat* format, const std::string & encodedReply);




public:


private:
	void init();

public:
	void connect();
	void disconnect();
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
	AbstractAggreGateDeviceController();

};
