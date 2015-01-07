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
    void sendAddListener(std::string* context, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener);
    void sendRemoveListener(std::string* context, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener);

public:
    void addListenerToContext(ProxyContext* con, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool mask, bool weak);
    void removeListenerFromContext(ProxyContext* con, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool mask);

public:
    void addMaskEventListener(std::string* mask, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener);
    void removeMaskEventListener(std::string* mask, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener);
    void contextRemoved(ProxyContext* con);


	RemoteContextManager(AbstractAggreGateDeviceController* controller, AggreGateDevice* server, bool async);



private:
    void init();

public:
    void addListenerToContext(::com::tibbo::aggregate::common::context::Context* con, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool mask, bool weak);

public:
    void contextRemoved(::com::tibbo::aggregate::common::context::Context* con);

public:
    void removeListenerFromContext(::com::tibbo::aggregate::common::context::Context* con, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool mask);

public:
    void addMaskEventListener(std::string* mask, std::string* event, ::com::tibbo::aggregate::common::event::ContextEventListener* listener, bool weak);

   */
};
