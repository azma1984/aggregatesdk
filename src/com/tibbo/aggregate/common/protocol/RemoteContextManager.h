#ifndef RemoteContextManagerH
#define RemoteContextManagerH

#include "context/DefaultContextManager.h"
#include "AbstractAggreGateDeviceController.h"
#include "ProxyContext.h"
#include "AggreGateDevice.h"

#include "Cres.h"
#include "event/ContextEventListener.h"
#include "expression/Expression.h"
#include "protocol/AbstractAggreGateDeviceController.h"
#include "protocol/AggreGateCommandUtils.h"
#include "protocol/ProxyContext.h"


class RemoteContextManager : public DefaultContextManager< ProxyContext< Context/*<Context>*/ > >
{

private:
	bool initialized;
	bool initializing;

	void init();

	void sendAddListener(const std::string & context, const std::string & event, ContextEventListenerPtr listener);
	void sendRemoveListener(const std::string & context, const std::string & event, ContextEventListenerPtr listener);

public:
	RemoteContextManager(AggreGateDevicePtr server, bool async);

	void initialize();


	void stop();
	AbstractAggreGateDeviceControllerPtr getController();


	void addListenerToContext(ProxyContextPtr con, const std::string & event, ContextEventListenerPtr listener, bool mask, bool weak);
	void removeListenerFromContext(ProxyContextPtr con, const std::string & event, ContextEventListenerPtr listener, bool mask);


	void addMaskEventListener(const std::string & mask, const std::string & event, ContextEventListenerPtr listener);
    void removeMaskEventListener(const std::string & mask, const std::string & event, ContextEventListenerPtr listener);
	void contextRemoved(ProxyContextPtr con);


	RemoteContextManager(AbstractAggreGateDeviceControllerPtr controller, AggreGateDevicePtr server, bool async);

	void addListenerToContext(ContextPtr con, const std::string & event, ContextEventListenerPtr listener, bool mask, bool weak);


    void contextRemoved(ContextPtr con);


    void removeListenerFromContext(ContextPtr con, const std::string & event, ContextEventListenerPtr listener, bool mask);


    void addMaskEventListener(const std::string & mask, const std::string & event, ContextEventListenerPtr listener, bool weak);

};

#endif
