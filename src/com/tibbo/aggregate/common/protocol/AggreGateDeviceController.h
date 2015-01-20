// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AggreGateDeviceController.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/communication/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/protocol/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/util/RemoteConnector.h"

struct com::tibbo::aggregate::common::protocol::AggreGateDeviceController
    : public ::com::tibbo::aggregate::common::util::RemoteConnector
{
    AggreGateDevice* getDevice();
    void connect() /* throws(DisconnectionException, IOException, InterruptedException, RemoteDeviceErrorException, ContextException) */;
    void disconnect() /* throws(IOException, InterruptedException, RemoteDeviceErrorException) */;
    void login() ;
    void start() /* throws(IOException, InterruptedException, ContextException, RemoteDeviceErrorException) */;
    bool isActive();
    ::com::tibbo::aggregate::common::communication::CommandProcessorStatistics* getStatistics();
    ::com::tibbo::aggregate::common::communication::Command* sendCommand(::com::tibbo::aggregate::common::communication::Command* cmd) /* throws(DisconnectionException, IOException, InterruptedException, RemoteDeviceErrorException, ContextException) */;
    std::list  getActiveCommands();

    // Generated
    
};
