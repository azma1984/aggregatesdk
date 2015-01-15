// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/RemoteContextManager.java

#pragma once

#include "DefaultContextManager.h"
#include "AbstractAggreGateDeviceController.h"
#include "ProxyContext.h"
#include "AggreGateDevice.h"

class RemoteContextManager : public DefaultContextManager< ProxyContext< Context/*<Context>*/ > >
{

private:
	bool initialized;
	bool initializing;

public:
	RemoteContextManager(AggreGateDevice* server, bool async);
  /*

	void initialize();

public:
    void stop();
    AbstractAggreGateDeviceController* getController();

private:
    void sendAddListener(const std::string & context, const std::string & event, ContextEventListener* listener);
    void sendRemoveListener(const std::string & context, const std::string & event, ContextEventListener* listener);

public:
    void addListenerToContext(ProxyContext* con, const std::string & event, ContextEventListener* listener, bool mask, bool weak);
    void removeListenerFromContext(ProxyContext* con, const std::string & event, ContextEventListener* listener, bool mask);

public:
    void addMaskEventListener(const std::string & mask, const std::string & event, ContextEventListener* listener);
    void removeMaskEventListener(const std::string & mask, const std::string & event, ContextEventListener* listener);
    void contextRemoved(ProxyContext* con);


	RemoteContextManager(AbstractAggreGateDeviceController* controller, AggreGateDevice* server, bool async);



private:
    void init();

public:
    void addListenerToContext(::com::tibbo::aggregate::common::context::Context* con, const std::string & event, ContextEventListener* listener, bool mask, bool weak);

public:
    void contextRemoved(::com::tibbo::aggregate::common::context::Context* con);

public:
    void removeListenerFromContext(::com::tibbo::aggregate::common::context::Context* con, const std::string & event, ContextEventListener* listener, bool mask);

public:
    void addMaskEventListener(const std::string & mask, const std::string & event, ContextEventListener* listener, bool weak);

   */
};
