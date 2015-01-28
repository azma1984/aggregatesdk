// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/RemoteContextManager.java

#include <RemoteContextManager.h>
/*
#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/event/ContextEventListener.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/protocol/AbstractAggreGateDeviceController.h"
#include <com/tibbo/aggregate/common/protocol/AggreGateCommandUtils.h"
#include <com/tibbo/aggregate/common/protocol/ProxyContext.h"
 */


RemoteContextManager::RemoteContextManager(AggreGateDevicePtr server, bool async)
{

 initialized = false;
 initializing = false;
}
/*

void com::tibbo::aggregate::common::protocol::RemoteContextManager::initialize()
{
	if(initialized || initializing) {
        return;
    }
    initializing = true;
    {
		auto finally0 = finally([&] {
            initializing = false;
        });
        {
            controller)->connect();
		}
    }

    initialized = true;
}

void com::tibbo::aggregate::common::protocol::RemoteContextManager::stop()
{
    initialized = false;
    super::stop();
}

com::tibbo::aggregate::common::protocol::AbstractAggreGateDeviceControllerPtr com::tibbo::aggregate::common::protocol::RemoteContextManager::getController()
{
    return controller;
}

void com::tibbo::aggregate::common::protocol::RemoteContextManager::sendAddListener(const std::string & context, const std::string & event, ContextEventListenerPtr listener)
{
    try {
		auto filterText = listener)->getFilter() != 0 ? listener)->getFilter())->getText() : static_cast< const std::string & >(0);
        getController())->sendCommandAndCheckReplyCode(AggreGateCommandUtils::addEventListenerOperation(context, event, listener)->getListenerCode(), filterText));
    } catch (::java::lang::Exception* ex) {
        auto msg = ::java::text::MessageFormat::format(Cres::get())->getString(u"conErrAddingListener"_j), new voidArray({event), context)}));
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(msg)->append(u": "_j)
			->append(ex)->getMessage())->toString(), ex);
    }
}

void com::tibbo::aggregate::common::protocol::RemoteContextManager::sendRemoveListener(const std::string & context, const std::string & event, ContextEventListenerPtr listener)
{
    try {
        auto filter = listener)->getFilter() != 0 ? listener)->getFilter())->getText() : static_cast< const std::string & >(0);
        getController())->sendCommandAndCheckReplyCode(AggreGateCommandUtils::removeEventListenerOperation(context, event, listener)->getListenerCode(), filter));
    } catch (::java::lang::Exception* ex) {
		auto msg = ::java::text::MessageFormat::format(Cres::get())->getString(u"conErrRemovingListener"_j), new voidArray({event), context)}));
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(msg)->append(u": "_j)
            ->append(ex)->getMessage())->toString(), ex);
    }
}

void com::tibbo::aggregate::common::protocol::RemoteContextManager::addListenerToContext(ProxyContextPtr con, const std::string & event, ContextEventListenerPtr listener, bool mask, bool weak)
{
    con)->addEventListener(event, listener, false, !mask);
}

void com::tibbo::aggregate::common::protocol::RemoteContextManager::addListenerToContext(ContextPtr con, const std::string & event, ContextEventListenerPtr listener, bool mask, bool weak)
{ 
    addListenerToContext(dynamic_cast< ProxyContextPtr >(con), event, listener, mask, weak);
}

void com::tibbo::aggregate::common::protocol::RemoteContextManager::removeListenerFromContext(ProxyContextPtr con, const std::string & event, ContextEventListenerPtr listener, bool mask)
{
    con)->removeEventListener(event, listener, !mask);
}

void com::tibbo::aggregate::common::protocol::RemoteContextManager::removeListenerFromContext(ContextPtr con, const std::string & event, ContextEventListenerPtr listener, bool mask)
{ 
    removeListenerFromContext(dynamic_cast< ProxyContextPtr >(con), event, listener, mask);
}

void com::tibbo::aggregate::common::protocol::RemoteContextManager::addMaskEventListener(const std::string & mask, const std::string & event, ContextEventListenerPtr listener)
{
    super::addMaskEventListener(mask, event, listener);
    sendAddListener(mask, event, listener);
}

void com::tibbo::aggregate::common::protocol::RemoteContextManager::removeMaskEventListener(const std::string & mask, const std::string & event, ContextEventListenerPtr listener)
{
    super::removeMaskEventListener(mask, event, listener);
	sendRemoveListener(mask, event, listener);
}

void com::tibbo::aggregate::common::protocol::RemoteContextManager::contextRemoved(ProxyContextPtr con)
{
}

void com::tibbo::aggregate::common::protocol::RemoteContextManager::contextRemoved(ContextPtr con)
{ 
    contextRemoved(dynamic_cast< ProxyContextPtr >(con));
}



java::lang::Class* com::tibbo::aggregate::common::protocol::RemoteContextManager::class_()
{
    static AgClassPtr c = ::class_(u"com.tibbo.aggregate.common.protocol.RemoteContextManager", 56);
    return c;
}

void com::tibbo::aggregate::common::protocol::RemoteContextManager::addMaskEventListener(const std::string & mask, const std::string & event, ContextEventListenerPtr listener, bool weak)
{
    super::addMaskEventListener(mask, event, listener, weak);
}

java::lang::Class* com::tibbo::aggregate::common::protocol::RemoteContextManager::getClass0()
{
    return class_();
}
  */
