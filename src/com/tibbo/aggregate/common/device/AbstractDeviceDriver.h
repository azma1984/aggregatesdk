#ifndef _AbstractDeviceDriver_H_
#define _AbstractDeviceDriver_H_

#include "plugin/BasePlugin.h"
#include "device/DeviceDriver.h"
#include "context/CallerController.h"
#include <string>

class AbstractDeviceDriver : public BasePlugin , public DeviceDriver
{

private:
    DeviceContext* deviceContext;
    bool connected;
    std::string protocol;
    TableFormat* connectionPropertiesFormat;
//protected:
//    void ctor(std::string* description, ::com::tibbo::aggregate::common::datatable::TableFormat* connectionPropertiesFormat);
//    void ctor(std::string* description, std::string* protocol, ::com::tibbo::aggregate::common::datatable::TableFormat* connectionProperties);

public:
    AbstractDeviceDriver(const std::string& description, TableFormat* connectionPropertiesFormat);
    AbstractDeviceDriver(const std::string& description, const std::string& protocol, TableFormat* connectionProperties);

    std::string getPrimaryAddress();
    Set* getAddresses();
    std::string getStatus();
    std::list  getStatusExpressions(CallerController* aCallerController);
    void setupDeviceContext(DeviceContext* deviceContext) /* throws(ContextException) */;
    void configureDeviceAccount(DeviceContext* deviceContext, CallerController* caller) /* throws(ContextException) */;
    void accessSettingUpdated(const std::string& name);
    bool shouldSynchronize(SynchronizationParameters* parameters) /* throws(ContextException) */;
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
    DataTable* readVariableValue(VariableDefinition* vd) /* throws(ContextException, DeviceException, DisconnectionException) */;
    void writeVariableValue(VariableDefinition* vd, DataTable* value, DataTable* deviceValue) /* throws(ContextException, DeviceException, DisconnectionException) */;
    DataTable* executeFunction(FunctionDefinition* fd, DataTable* parameters) /* throws(ContextException, DeviceException, DisconnectionException) */;
    Date* getVariableModificationTime(const std::string& name) /* throws(DeviceException, DisconnectionException) */;
    void updateVariableModificationTime(const std::string& name, Date* value) /* throws(DeviceException, DisconnectionException) */;
    VariableStatus* getCustomVariableStatus(const std::string& name) /* throws(DeviceException, DisconnectionException) */;
    void disconnect() /* throws(DeviceException) */;
    void finishSynchronization() /* throws(DeviceException, DisconnectionException) */;
    void setConnected(bool connected);
    DeviceContext* getDeviceContext();
    DiscoveryProvider* createDiscoveryProvider();
    std::string getProtocol();
    TableFormat* getConnectionPropertiesFormat();
    TableFormat* createConnectionPropertiesFormat();
    VariableDefinition* discoverVariable(const std::string& name, void* helper);
    FunctionDefinition* discoverFunction(const std::string& name, void* helper);
    EventDefinition* discoverEvent(const std::string& name, void* helper);
    
    Context* createGlobalConfigContext(Context* rootContext, bool requestReboot, VariableDefinitionArray* properties);
    context::Context* createUserConfigContext(Context* userContext, bool requestReboot, VariableDefinitionArray* properties);
    std::string getDescription();
    Context* getGlobalConfigContext();
    std::string getId();
    std::string getShortId();
    int getSortIndex();
    Context* getUserConfigContext(const std::string& username);
    void globalDeinit(Context* rootContext);
    void globalInit(Context* rootContext);
    void globalStart();
    void globalStop();
    void userDeinit(Context* userContext);
    void userInit(Context* userContext);
};
#endif  //_AbstractDeviceDriver_H_
