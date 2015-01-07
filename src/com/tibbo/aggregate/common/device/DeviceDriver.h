// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/DeviceDriver.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/sync/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/discovery/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/plugin/AggreGatePlugin.h"

struct com::tibbo::aggregate::common::device::DeviceDriver
    : public ::com::tibbo::aggregate::common::plugin::AggreGatePlugin
{
    ::com::tibbo::aggregate::common::datatable::TableFormat* createConnectionPropertiesFormat();
    void setupDeviceContext(DeviceContext* deviceContext) /* throws(ContextException) */;
    void configureDeviceAccount(DeviceContext* deviceContext, ::com::tibbo::aggregate::common::context::CallerController* caller) /* throws(ContextException) */;
    void accessSettingUpdated(std::string* name);
    ::com::tibbo::aggregate::common::discovery::DiscoveryProvider* createDiscoveryProvider();
    bool shouldSynchronize(::com::tibbo::aggregate::common::device::sync::SynchronizationParameters* parameters) /* throws(ContextException) */;
    void startSynchronization() /* throws(DeviceException) */;
    bool isUsesConnections();
    bool isConnected();
    void connect() /* throws(DeviceException) */;
    void disconnect() /* throws(DeviceException) */;
    bool isUsesAssets();
    std::list  readAssets() /* throws(ContextException, DeviceException, DisconnectionException) */;
    bool isUseDeviceSideValuesCache();
    std::list  readVariableDefinitions() /* throws(ContextException, DeviceException, DisconnectionException) */;
    std::list  readVariableDefinitions(std::list  assets) /* throws(ContextException, DeviceException, DisconnectionException) */;
    std::list  readFunctionDefinitions() /* throws(ContextException, DeviceException, DisconnectionException) */;
    std::list  readFunctionDefinitions(std::list  assets) /* throws(ContextException, DeviceException, DisconnectionException) */;
    std::list  readEventDefinitions() /* throws(ContextException, DeviceException, DisconnectionException) */;
    std::list  readEventDefinitions(std::list  assets) /* throws(ContextException, DeviceException, DisconnectionException) */;
    ::com::tibbo::aggregate::common::datatable::DataTable* readVariableValue(::com::tibbo::aggregate::common::context::VariableDefinition* vd) /* throws(ContextException, DeviceException, DisconnectionException) */;
    void writeVariableValue(::com::tibbo::aggregate::common::context::VariableDefinition* vd, ::com::tibbo::aggregate::common::datatable::DataTable* value, ::com::tibbo::aggregate::common::datatable::DataTable* deviceValue) /* throws(ContextException, DeviceException, DisconnectionException) */;
    ::com::tibbo::aggregate::common::datatable::DataTable* executeFunction(::com::tibbo::aggregate::common::context::FunctionDefinition* fd, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) /* throws(ContextException, DeviceException, DisconnectionException) */;
    ::java::util::Date* getVariableModificationTime(std::string* name) /* throws(DeviceException, DisconnectionException) */;
    void updateVariableModificationTime(std::string* name, ::java::util::Date* value) /* throws(DeviceException, DisconnectionException) */;
    ::com::tibbo::aggregate::common::context::VariableStatus* getCustomVariableStatus(std::string* name) /* throws(DeviceException, DisconnectionException) */;
    void finishSynchronization() /* throws(DeviceException, DisconnectionException) */;
    std::string* getPrimaryAddress();
    ::java::util::Set* getAddresses();
    std::string* getProtocol();
    std::string* getStatus();
    std::list  getStatusExpressions(::com::tibbo::aggregate::common::context::CallerController* caller);
    ::com::tibbo::aggregate::common::context::VariableDefinition* discoverVariable(std::string* name, void* helper);
    ::com::tibbo::aggregate::common::context::FunctionDefinition* discoverFunction(std::string* name, void* helper);
    ::com::tibbo::aggregate::common::context::EventDefinition* discoverEvent(std::string* name, void* helper);

    // Generated
    
};
