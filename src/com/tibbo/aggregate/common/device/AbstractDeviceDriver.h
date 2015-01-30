#ifndef AbstractDeviceDriverH
#define AbstractDeviceDriverH
 #define BOOST_THREAD_USE_LIB
#include "plugin/BasePlugin.h"
#include "device/DeviceDriver.h"
#include "context/CallerController.h"
//#include "datatable/TableFormat.h"
#include "context/Context.h"
#include "datatable/TableFormat.h"
#include "device/DeviceContext.h"
//#include "device/DeviceUtils.h"
#include "device/sync/SynchronizationParameters.h"

#include "context/VariableStatus.h"
#include "context/EventDefinition.h"
#include "context/FunctionDefinition.h"
#include "context/VariableDefinition.h"
#include <string>

class AbstractDeviceDriver : public BasePlugin , public DeviceDriver
{

private:
    DeviceContextPtr deviceContext;
    bool connected;
    std::string protocol;
    TableFormatPtr connectionPropertiesFormat;

public:
	AbstractDeviceDriver();
    AbstractDeviceDriver(const std::string& description, TableFormatPtr connectionPropertiesFormat);
    AbstractDeviceDriver(const std::string& description, const std::string& protocol, TableFormatPtr connectionProperties);

    std::string getPrimaryAddress();
	std::set<std::string> getAddresses();
	std::string getStatus();
	std::list<Expression>  getStatusExpressions(CallerControllerPtr aCallerController);
    void setupDeviceContext(DeviceContextPtr deviceContext) ;
    void configureDeviceAccount(DeviceContextPtr deviceContext, CallerControllerPtr caller) ;
    void accessSettingUpdated(const std::string& name);
    bool shouldSynchronize(SynchronizationParametersPtr parameters) ;
    void startSynchronization() ;
    bool isUsesConnections();
    bool isConnected();
    void connect() ;
    bool isUsesAssets();
	std::list<DeviceAssetDefinition>  readAssets();
    bool isUseDeviceSideValuesCache();

    virtual VariableDefinitionPtr  readVariableDefinitions()=0;
	std::list<VariableDefinition>  readVariableDefinitions(std::list<DeviceAssetDefinition>  groups) ;

    virtual FunctionDefinitionPtr  readFunctionDefinitions()=0;
	virtual std::list<FunctionDefinition>  readFunctionDefinitions(std::list<DeviceAssetDefinition>  groups)=0;

    virtual EventDefinitionPtr     readEventDefinitions()=0;
	virtual std::list<EventDefinition>     readEventDefinitions(std::list<DeviceAssetDefinition>  groups)=0;

    virtual DataTablePtr readVariableValue(VariableDefinitionPtr vd)=0;
    virtual void writeVariableValue(VariableDefinitionPtr vd, DataTablePtr value, DataTablePtr deviceValue)=0;
    virtual DataTablePtr executeFunction(FunctionDefinitionPtr fd, DataTablePtr parameters)=0;
    DatePtr getVariableModificationTime(const std::string& name) ;
    void updateVariableModificationTime(const std::string& name, DatePtr value) ;
    VariableStatusPtr getCustomVariableStatus(const std::string& name) ;
    void disconnect();
    virtual void finishSynchronization()=0 ;
    void setConnected(bool connected);
    DeviceContextPtr getDeviceContext();
	DiscoveryProviderPtr createDiscoveryProvider();
	std::string getProtocol();
	TableFormatPtr getConnectionPropertiesFormat();

    TableFormatPtr createConnectionPropertiesFormat();
    VariableDefinitionPtr discoverVariable(const std::string& name, AgObjectPtr helper);
	FunctionDefinitionPtr discoverFunction(const std::string& name, AgObjectPtr helper);
    EventDefinitionPtr discoverEvent(const std::string& name, AgObjectPtr helper);

	ContextPtr createGlobalConfigContext(ContextPtr rootContext, bool requestReboot, VariableDefinitionPtr properties);
	ContextPtr createUserConfigContext(ContextPtr userContext, bool requestReboot, VariableDefinitionPtr properties);
	std::string getDescription();
    ContextPtr getGlobalConfigContext();
	std::string getId();
	std::string getShortId();
    int getSortIndex();
    ContextPtr getUserConfigContext(const std::string& username);
    void globalDeinit(ContextPtr rootContext);
    void globalInit(ContextPtr rootContext);
    void globalStart();
    void globalStop();
	void userDeinit(ContextPtr userContext);
	void userInit(ContextPtr userContext);
};
#endif  //AbstractDeviceDriverH
