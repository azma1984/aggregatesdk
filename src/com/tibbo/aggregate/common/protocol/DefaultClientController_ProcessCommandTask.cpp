// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/DefaultClientController.java
#include <com/tibbo/aggregate/common/protocol/DefaultClientController_ProcessCommandTask.h"

#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/device/DisconnectionException.h"
#include <com/tibbo/aggregate/common/protocol/DefaultClientController.h"
#include <com/tibbo/aggregate/common/protocol/IncomingAggreGateCommand.h"
#include <com/tibbo/aggregate/common/protocol/OutgoingAggreGateCommand.h"
//#include <java/lang/Exception.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/net/SocketException.h"
//#include <org/apache/log4j/Logger.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::protocol::DefaultClientController_ProcessCommandTask::DefaultClientController_ProcessCommandTask(DefaultClientController *DefaultClientController_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , DefaultClientController_this(DefaultClientController_this)
{
    
}

com::tibbo::aggregate::common::protocol::DefaultClientController_ProcessCommandTask::DefaultClientController_ProcessCommandTask(DefaultClientController *DefaultClientController_this, IncomingAggreGateCommand* cmd) 
    : DefaultClientController_ProcessCommandTask(DefaultClientController_this, *static_cast< ::default_init_tag* >(0))
{
    ctor(cmd);
}

void com::tibbo::aggregate::common::protocol::DefaultClientController_ProcessCommandTask::ctor(IncomingAggreGateCommand* cmd)
{
    super::ctor();
    this->cmd = cmd;
}

void* com::tibbo::aggregate::common::protocol::DefaultClientController_ProcessCommandTask::call() /* throws(Exception) */
{
    try {
        if(!DefaultClientController_this->shutDown) {
            auto const reply = DefaultClientController_this->processCommand(cmd);
            DefaultClientController_this->processPendingEvents();
            DefaultClientController_this->sendCommand(reply);
        }
    } catch (::com::tibbo::aggregate::common::device::DisconnectionException* ex) {
        Log::CLIENTS())->info(std::stringBuilder().append(u"Disconnection exception while processing command: "_j)->append(ex)->getMessage())->toString());
        Log::CLIENTS())->debug(std::stringBuilder().append(u"Disconnection exception while processing command: "_j)->append(ex)->getMessage())->toString(), ex);
    } catch (::java::net::SocketException* ex) {
        Log::CLIENTS())->info(std::stringBuilder().append(u"Socket exception while processing command: "_j)->append(ex)->getMessage())->toString());
        Log::CLIENTS())->debug(std::stringBuilder().append(u"Socket exception while processing command: "_j)->append(ex)->getMessage())->toString(), ex);
    } catch (::java::lang::Exception* ex) {
        Log::CLIENTS())->warn(std::stringBuilder().append(u"Error processing command: "_j)->append(ex)->getMessage())->toString(), ex);
    }
    return 0;
}



java::lang::Class* com::tibbo::aggregate::common::protocol::DefaultClientController_ProcessCommandTask::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.protocol.DefaultClientController.ProcessCommandTask", 78);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::protocol::DefaultClientController_ProcessCommandTask::getClass0()
{
    return class_();
}

