#include "device/AbstractDeviceDriver.h"


AbstractDeviceDriver::AbstractDeviceDriver()
{

}

AbstractDeviceDriver::AbstractDeviceDriver(const std::string & description, boost::shared_ptr<TableFormat> connectionPropertiesFormat):BasePlugin(description) 
{
    this->connectionPropertiesFormat = connectionPropertiesFormat;
}

AbstractDeviceDriver::AbstractDeviceDriver(const std::string & description, const std::string & protocol, boost::shared_ptr<TableFormat> connectionProperties) 
{
	//todo - cannot instantiate abstract class
//	AbstractDeviceDriver(description, connectionProperties);
   this->protocol = protocol;
}


std::string AbstractDeviceDriver::getPrimaryAddress()
{
    return 0;
}

//Function is not used!
//std::set<std::string>  AbstractDeviceDriver::getAddresses()
//{ 
//	
//   //Java
//  //   final String primaryAddress = getPrimaryAddress();
//  //  return primaryAddress != null ? Collections.singleton(primaryAddress) : Collections.<String> emptySet();
//	//Collections.singleton(primaryAddress) - Возвращает объект как неизменяемый набор. Простейший способ преобразовать отдельный объект в набор.
//
////C++
//   std::string primaryAddress = getPrimaryAddress();
//   std::set<std::string> primaryAddressSet;
//
//   return primaryAddress;//.empty() == false ? primaryAddressSet : 0;
//}

std::string AbstractDeviceDriver::getStatus()
{
    return 0;
}

//Function is not used!
//std::list<Expression>  AbstractDeviceDriver::getStatusExpressions(CallerController* aCallerController)
//{
//	std::list<Expression> list;
//  return list;
//}
//
void AbstractDeviceDriver::setupDeviceContext(boost::shared_ptr<DeviceContext> deviceContext) 
{
    this->deviceContext = deviceContext;
}

void AbstractDeviceDriver::configureDeviceAccount(boost::shared_ptr<DeviceContext> deviceContext, CallerController* caller) 
{
}

void AbstractDeviceDriver::accessSettingUpdated(const std::string & name)
{
}

bool AbstractDeviceDriver::shouldSynchronize(::SynchronizationParameters* parameters) 
{
    return true;
}

void AbstractDeviceDriver::startSynchronization() 
{
}

bool AbstractDeviceDriver::isUsesConnections()
{
    return true;
}

bool AbstractDeviceDriver::isConnected()
{
    return connected;
}

void AbstractDeviceDriver::connect() 
{
    setConnected(true);
}

bool AbstractDeviceDriver::isUsesAssets()
{
    return false;
}

//Function is not used!
//std::list<DeviceAssetDefinition>  AbstractDeviceDriver::readAssets() 
//{
//  std::list<DeviceAssetDefinition> list;
//    return list;
//}

bool AbstractDeviceDriver::isUseDeviceSideValuesCache()
{
    return false;
}
//
//std::list<VariableDefinition>  AbstractDeviceDriver::readVariableDefinitions() 
//{
//    return 0;
//}

//
//std::list<VariableDefinition>   AbstractDeviceDriver::readVariableDefinitions(std::list<DeviceAssetDefinition>  groups) 
//{
//    return readVariableDefinitions();
//}

//
//std::list<FunctionDefinition>   AbstractDeviceDriver::readFunctionDefinitions() 
//{
//   return 0;
//}
//
//std::list<FunctionDefinition>   AbstractDeviceDriver::readFunctionDefinitions(std::list<DeviceAssetDefinition>  groups) 
//{
//    return 0;
//}
//
//std::list<EventDefinition>   AbstractDeviceDriver::readEventDefinitions() 
//{
//    return 0;
//}
//
//std::list<EventDefinition>   AbstractDeviceDriver::readEventDefinitions(std::list<DeviceAssetDefinition>   groups) 
//{
//    return 0;
//}

//DataTable* AbstractDeviceDriver::readVariableValue(VariableDefinition* vd) 
//{
//  //  return 0;
//}

void AbstractDeviceDriver::writeVariableValue(VariableDefinition* vd, DataTable* value, DataTable* deviceValue) 
{
}
	//todo - functions is not used
//DataTable* AbstractDeviceDriver::executeFunction(FunctionDefinition* fd, DataTable* parameters) 
//{
 //   throw new ::java::lang::UnsupportedOperationException();
//}

boost::shared_ptr<Date> AbstractDeviceDriver::getVariableModificationTime(const std::string & name) 
{
    return 0;
}
//
//void AbstractDeviceDriver::updateVariableModificationTime(const std::string & name, Date* value) 
//{
//}
//
//VariableStatus* AbstractDeviceDriver::getCustomVariableStatus(const std::string & name) 
//{
//    return 0;
//}
//
//void AbstractDeviceDriver::disconnect() 
//{
//    setConnected(false);
//}
//
//void AbstractDeviceDriver::finishSynchronization() 
//{
//}
//
void AbstractDeviceDriver::setConnected(bool connected)
{
    this->connected = connected;
}


	//todo - functions is not used
//
//DeviceContext* AbstractDeviceDriver::getDeviceContext()
//{
//    return deviceContext;
//}
//
//DiscoveryProvider* AbstractDeviceDriver::createDiscoveryProvider()
//{
//    return 0;
//}
//
//std::string AbstractDeviceDriver::getProtocol()
//{
//    return protocol;
//}
//
//DateTableFormat* AbstractDeviceDriver::getConnectionPropertiesFormat()
//{
//    return connectionPropertiesFormat;
//}
//
//DateTableFormat* AbstractDeviceDriver::createConnectionPropertiesFormat()
//{
//    auto format = getConnectionPropertiesFormat();
//    if(format == 0) {
//        format = new TableFormat(int(1), int(1));
//    } else {
//        format = format->clone();
//    }
//    format->addField(DeviceUtils::DESCRIPTION_FIELD(), int(0));
//    format->addField(DeviceUtils::NAME_FIELD(), int(0));
//    return format;
//}
//
//VariableDefinition* AbstractDeviceDriver::discoverVariable(const std::string & name, void* helper)
//{
//    return 0;
//}
//
//FunctionDefinition* AbstractDeviceDriver::discoverFunction(const std::string & name, void* helper)
//{
//    return 0;
//}
//
//EventDefinition* AbstractDeviceDriver::discoverEvent(const std::string & name, void* helper)
//{
//    return 0;
//}
//
//
//
//Context* AbstractDeviceDriver::createGlobalConfigContext(Context* rootContext, bool requestReboot, VariableDefinitionArray* properties)
//{
//    return (Context*)BasePlugin::createGlobalConfigContext(rootContext, requestReboot, properties);
//}
//
//Context* AbstractDeviceDriver::createUserConfigContext(Context* userContext, bool requestReboot, VariableDefinitionArray* properties)
//{
//    return (Context* )BasePlugin::createUserConfigContext(userContext, requestReboot, properties);
//}
//
//std::string AbstractDeviceDriver::getDescription()
//{
//    return BasePlugin::getDescription();
//}
//
//Context* AbstractDeviceDriver::getGlobalConfigContext()
//{
//    return (Context*)(BasePlugin::getGlobalConfigContext());
//}
//
//std::string AbstractDeviceDriver::getId()
//{
//    return BasePlugin::getId();
//}
//
//std::string AbstractDeviceDriver::getShortId()
//{
//    return BasePlugin::getShortId();
//}
//
//int AbstractDeviceDriver::getSortIndex()
//{
//    return BasePlugin::getSortIndex();
//}
//
//Context* AbstractDeviceDriver::getUserConfigContext(const std::string & username)
//{
//    return (Context*)BasePlugin::getUserConfigContext(username);
//}
//
//void AbstractDeviceDriver::globalDeinit(Context* rootContext)
//{
//    BasePlugin::globalDeinit(rootContext);
//}
//
//void AbstractDeviceDriver::globalInit(Context* rootContext)
//{
//    BasePlugin::globalInit(rootContext);
//}
//
//void AbstractDeviceDriver::globalStart()
//{
//    BasePlugin::globalStart();
//}
//
//void AbstractDeviceDriver::globalStop()
//{
//    BasePlugin::globalStop();
//}
//
//void AbstractDeviceDriver::userDeinit(Context* userContext)
//{
//    BasePlugin::userDeinit(userContext);
//}
//
//void AbstractDeviceDriver::userInit(Context* userContext)
//{
//    BasePlugin::userInit(userContext);
//}
//
