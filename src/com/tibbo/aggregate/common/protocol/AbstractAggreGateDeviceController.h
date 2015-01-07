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
	::com::tibbo::aggregate::common::context::CallerController* callerController;
	::com::tibbo::aggregate::common::util::UserSettings* userSettings;
	bool avoidSendingFormats;
	::com::tibbo::aggregate::common::datatable::encoding::FormatCache* formatCache;
	::java::util::concurrent::ExecutorService* eventPreprocessor;
protected:
	void ctor(AggreGateDevice* device, ::org::apache::log4j::Logger* logger);


	RemoteContextManager* getContextManager();
	*/
	virtual void setContextManager(C* contextManager);
	/*
	void setDevice(AggreGateDevice* device);
    AggreGateDevice* getDevice();
    ::com::tibbo::aggregate::common::context::CallerController* getCallerController();

public:
    void setCallerController(::com::tibbo::aggregate::common::context::CallerController* callerController);

public:
    ::com::tibbo::aggregate::common::datatable::encoding::FormatCache* getFormatCache();
    ::com::tibbo::aggregate::common::util::UserSettings* getSettings();
    ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* createClassicEncodingSettings(bool forSending);

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
    std::list  getProxyContexts(std::string* path);
    ::java::util::concurrent::ExecutorService* getEventPreprocessor();

public:
	IncomingAggreGateCommand* sendCommandAndCheckReplyCode(OutgoingAggreGateCommand* cmd);

public:
    void processAsyncCommand(IncomingAggreGateCommand* cmd);

private:
    void processEvent(IncomingAggreGateCommand* cmd);

public:
	void confirmEvent(::com::tibbo::aggregate::common::context::Context* con, ::com::tibbo::aggregate::common::context::EventDefinition* def, ::com::tibbo::aggregate::common::data::Event* event);
    void setCommandParser(::com::tibbo::aggregate::common::communication::CommandParser* commandBuffer);

public:
    std::string* toString();
	::com::tibbo::aggregate::common::datatable::DataTable* callRemoteFunction(std::string* context, std::string* name, ::com::tibbo::aggregate::common::datatable::TableFormat* outputFormat, ::com::tibbo::aggregate::common::datatable::DataTable* parameters);

public:
    ::com::tibbo::aggregate::common::datatable::DataTable* decodeRemoteDataTable(::com::tibbo::aggregate::common::datatable::TableFormat* format, std::string* encodedReply);




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
