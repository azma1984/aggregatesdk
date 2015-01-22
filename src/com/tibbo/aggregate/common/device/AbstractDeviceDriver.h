#ifndef _AbstractDeviceDriver_H_
#define _AbstractDeviceDriver_H_

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
    boost::shared_ptr<DeviceContext> deviceContext;
    bool connected;
    std::string protocol;
    boost::shared_ptr<TableFormat> connectionPropertiesFormat;

public:
	AbstractDeviceDriver();
    AbstractDeviceDriver(const std::string& description, boost::shared_ptr<TableFormat> connectionPropertiesFormat);
    AbstractDeviceDriver(const std::string& description, const std::string& protocol, boost::shared_ptr<TableFormat> connectionProperties);

    std::string getPrimaryAddress();
   // std::set<std::string> getAddresses(); //Function is not used!
    std::string getStatus();
   // std::list<Expression>  getStatusExpressions(CallerController* aCallerController);//Function is not used!
    void setupDeviceContext(boost::shared_ptr<DeviceContext> deviceContext) ;
    void configureDeviceAccount(boost::shared_ptr<DeviceContext> deviceContext, CallerController* caller) ;
    void accessSettingUpdated(const std::string& name);
    bool shouldSynchronize(SynchronizationParameters* parameters) ;
    void startSynchronization() ;
    bool isUsesConnections();
    bool isConnected();
    void connect() ;
    bool isUsesAssets();
   // std::list<DeviceAssetDefinition>  readAssets();//Function is not used!
    bool isUseDeviceSideValuesCache();

    virtual VariableDefinition*  readVariableDefinitions()=0;
   // std::list<VariableDefinition>  readVariableDefinitions(std::list<DeviceAssetDefinition>  groups) ;

    virtual FunctionDefinition*  readFunctionDefinitions()=0;
    //virtual std::list<FunctionDefinition>  readFunctionDefinitions(std::list<DeviceAssetDefinition>  groups)=0;

    virtual EventDefinition*     readEventDefinitions()=0;
    //virtual std::list<EventDefinition>     readEventDefinitions(std::list<DeviceAssetDefinition>  groups)=0;

    virtual DataTable* readVariableValue(VariableDefinition* vd)=0;
    virtual void writeVariableValue(VariableDefinition* vd, DataTable* value, DataTable* deviceValue)=0;
    virtual DataTable* executeFunction(FunctionDefinition* fd, DataTable* parameters)=0;
    boost::shared_ptr<Date> getVariableModificationTime(const std::string& name) ;
    void updateVariableModificationTime(const std::string& name, Date* value) ;
    VariableStatus* getCustomVariableStatus(const std::string& name) ;
    void disconnect();
    virtual void finishSynchronization()=0 ;
    void setConnected(bool connected);
    DeviceContext* getDeviceContext();
    DiscoveryProvider* createDiscoveryProvider();
    std::string getProtocol();
    TableFormat* getConnectionPropertiesFormat();
	//todo - functions is not used
   // TableFormat* createConnectionPropertiesFormat();
    //VariableDefinition* discoverVariable(const std::string& name, void* helper);
   // FunctionDefinition* discoverFunction(const std::string& name, void* helper);
   // EventDefinition* discoverEvent(const std::string& name, void* helper);
    
  ////  Context* createGlobalConfigContext(Context* rootContext, bool requestReboot, VariableDefinitionArray* properties);
  // // Context* createUserConfigContext(Context* userContext, bool requestReboot, VariableDefinitionArray* properties);
  ////  std::string getDescription();
  //  Context* getGlobalConfigContext();
  // // std::string getId();
  ////  std::string getShortId();
  //  int getSortIndex();
  //  Context* getUserConfigContext(const std::string& username);
  //  void globalDeinit(Context* rootContext);
  //  void globalInit(Context* rootContext);
  //  void globalStart();
  //  void globalStop();
  //  void userDeinit(Context* userContext);
  //  void userInit(Context* userContext);
};
#endif  //_AbstractDeviceDriver_H_
