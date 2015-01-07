// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/AbstractDeviceDriver.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/sync/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/discovery/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/plugin/BasePlugin.h"
#include <com/tibbo/aggregate/common/device/DeviceDriver.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace com
{
    namespace tibbo
    {
        namespace aggregate
        {
            namespace common
            {
                namespace context
                {
typedef ::SubArray< ::com::tibbo::aggregate::common::context::EntityDefinition, voidArray > EntityDefinitionArray;
typedef ::SubArray< ::com::tibbo::aggregate::common::context::AbstractEntityDefinition, voidArray, EntityDefinitionArray > AbstractEntityDefinitionArray;
                } // context
            } // common
        } // aggregate
    } // tibbo
} // com

namespace java
{
    namespace lang
    {
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
    } // lang
} // java

namespace com
{
    namespace tibbo
    {
        namespace aggregate
        {
            namespace common
            {
                namespace context
                {
typedef ::SubArray< ::com::tibbo::aggregate::common::context::VariableDefinition, AbstractEntityDefinitionArray, ::java::lang::CloneableArray, ::java::lang::ComparableArray > VariableDefinitionArray;
                } // context
            } // common
        } // aggregate
    } // tibbo
} // com



class com::tibbo::aggregate::common::device::AbstractDeviceDriver
    : public ::com::tibbo::aggregate::common::plugin::BasePlugin
    , public DeviceDriver
{

public:
    typedef ::com::tibbo::aggregate::common::plugin::BasePlugin super;

private:
    DeviceContext* deviceContext;
    bool connected;
    std::string* protocol;
    ::com::tibbo::aggregate::common::datatable::TableFormat* connectionPropertiesFormat;
protected:
    void ctor(std::string* description, ::com::tibbo::aggregate::common::datatable::TableFormat* connectionPropertiesFormat);
    void ctor(std::string* description, std::string* protocol, ::com::tibbo::aggregate::common::datatable::TableFormat* connectionProperties);

public:
    std::string* getPrimaryAddress();
    ::java::util::Set* getAddresses();
    std::string* getStatus();
    std::list  getStatusExpressions(::com::tibbo::aggregate::common::context::CallerController* aCallerController);
    void setupDeviceContext(DeviceContext* deviceContext) /* throws(ContextException) */;
    void configureDeviceAccount(DeviceContext* deviceContext, ::com::tibbo::aggregate::common::context::CallerController* caller) /* throws(ContextException) */;
    void accessSettingUpdated(std::string* name);
    bool shouldSynchronize(::com::tibbo::aggregate::common::device::sync::SynchronizationParameters* parameters) /* throws(ContextException) */;
    void startSynchronization() /* throws(DeviceException) */;
    bool isUsesConnections();
    bool isConnected();
    void connect() /* throws(DeviceException) */;
    bool isUsesAssets();
    std::list  readAssets() /* throws(ContextException, DeviceException, DisconnectionException) */;
    bool isUseDeviceSideValuesCache();
    std::list  readVariableDefinitions() /* throws(ContextException, DeviceException, DisconnectionException) */;
    std::list  readVariableDefinitions(std::list  groups) /* throws(ContextException, DeviceException, DisconnectionException) */;
    std::list  readFunctionDefinitions() /* throws(ContextException, DeviceException, DisconnectionException) */;
    std::list  readFunctionDefinitions(std::list  groups) /* throws(ContextException, DeviceException, DisconnectionException) */;
    std::list  readEventDefinitions() /* throws(ContextException, DeviceException, DisconnectionException) */;
    std::list  readEventDefinitions(std::list  groups) /* throws(ContextException, DeviceException, DisconnectionException) */;
    ::com::tibbo::aggregate::common::datatable::DataTable* readVariableValue(::com::tibbo::aggregate::common::context::VariableDefinition* vd) /* throws(ContextException, DeviceException, DisconnectionException) */;
    void writeVariableValue(::com::tibbo::aggregate::common::context::VariableDefinition* vd, ::com::tibbo::aggregate::common::datatable::DataTable* value, ::com::tibbo::aggregate::common::datatable::DataTable* deviceValue) /* throws(ContextException, DeviceException, DisconnectionException) */;
    ::com::tibbo::aggregate::common::datatable::DataTable* executeFunction(::com::tibbo::aggregate::common::context::FunctionDefinition* fd, ::com::tibbo::aggregate::common::datatable::DataTable* parameters) /* throws(ContextException, DeviceException, DisconnectionException) */;
    ::java::util::Date* getVariableModificationTime(std::string* name) /* throws(DeviceException, DisconnectionException) */;
    void updateVariableModificationTime(std::string* name, ::java::util::Date* value) /* throws(DeviceException, DisconnectionException) */;
    ::com::tibbo::aggregate::common::context::VariableStatus* getCustomVariableStatus(std::string* name) /* throws(DeviceException, DisconnectionException) */;
    void disconnect() /* throws(DeviceException) */;
    void finishSynchronization() /* throws(DeviceException, DisconnectionException) */;
    void setConnected(bool connected);
    DeviceContext* getDeviceContext();
    ::com::tibbo::aggregate::common::discovery::DiscoveryProvider* createDiscoveryProvider();
    std::string* getProtocol();
    ::com::tibbo::aggregate::common::datatable::TableFormat* getConnectionPropertiesFormat();
    ::com::tibbo::aggregate::common::datatable::TableFormat* createConnectionPropertiesFormat();
    ::com::tibbo::aggregate::common::context::VariableDefinition* discoverVariable(std::string* name, void* helper);
    ::com::tibbo::aggregate::common::context::FunctionDefinition* discoverFunction(std::string* name, void* helper);
    ::com::tibbo::aggregate::common::context::EventDefinition* discoverEvent(std::string* name, void* helper);

    // Generated
    AbstractDeviceDriver(std::string* description, ::com::tibbo::aggregate::common::datatable::TableFormat* connectionPropertiesFormat);
    AbstractDeviceDriver(std::string* description, std::string* protocol, ::com::tibbo::aggregate::common::datatable::TableFormat* connectionProperties);
protected:
    AbstractDeviceDriver(const ::default_init_tag&);


public:
    
    ::com::tibbo::aggregate::common::context::Context* createGlobalConfigContext(::com::tibbo::aggregate::common::context::Context* rootContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray* properties);
    ::com::tibbo::aggregate::common::context::Context* createUserConfigContext(::com::tibbo::aggregate::common::context::Context* userContext, bool requestReboot, ::com::tibbo::aggregate::common::context::VariableDefinitionArray* properties);
    std::string* getDescription();
    ::com::tibbo::aggregate::common::context::Context* getGlobalConfigContext();
    std::string* getId();
    std::string* getShortId();
    int getSortIndex();
    ::com::tibbo::aggregate::common::context::Context* getUserConfigContext(std::string* username);
    void globalDeinit(::com::tibbo::aggregate::common::context::Context* rootContext);
    void globalInit(::com::tibbo::aggregate::common::context::Context* rootContext);
    void globalStart();
    void globalStop();
    void userDeinit(::com::tibbo::aggregate::common::context::Context* userContext);
    void userInit(::com::tibbo::aggregate::common::context::Context* userContext);

private:
    ::java::lang::Class* getClass0();
};
