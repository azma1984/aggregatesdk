#include "device/AbstractDeviceDriver.h"


AbstractDeviceDriver::AbstractDeviceDriver()
{

}

AbstractDeviceDriver::AbstractDeviceDriver(const std::string & description, TableFormatPtr connectionPropertiesFormat):BasePlugin(description) 
{
    this->connectionPropertiesFormat = connectionPropertiesFormat;
}

AbstractDeviceDriver::AbstractDeviceDriver(const std::string & description, const std::string & protocol, TableFormatPtr connectionProperties) 
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
//std::list<Expression>  AbstractDeviceDriver::getStatusExpressions(CallerControllerPtr aCallerController)
//{
//	std::list<Expression> list;
//  return list;
//}
//
void AbstractDeviceDriver::setupDeviceContext(DeviceContextPtr deviceContext) 
{
    this->deviceContext = deviceContext;
}

void AbstractDeviceDriver::configureDeviceAccount(DeviceContextPtr deviceContext, CallerControllerPtr caller) 
{
}

void AbstractDeviceDriver::accessSettingUpdated(const std::string & name)
{
}

bool AbstractDeviceDriver::shouldSynchronize(::SynchronizationParametersPtr parameters) 
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
std::list<DeviceAssetDefinition>  AbstractDeviceDriver::readAssets()
{
    std::list<DeviceAssetDefinition> list;
    return list;
}

bool AbstractDeviceDriver::isUseDeviceSideValuesCache()
{
    return false;
}

/*std::list<VariableDefinition>  AbstractDeviceDriver::readVariableDefinitions()
{
    return 0;
}


std::list<VariableDefinition>   AbstractDeviceDriver::readVariableDefinitions(std::list<DeviceAssetDefinition>  groups)
{
    return readVariableDefinitions();
}


std::list<FunctionDefinition>   AbstractDeviceDriver::readFunctionDefinitions()
{
   return 0;
}

std::list<FunctionDefinition>   AbstractDeviceDriver::readFunctionDefinitions(std::list<DeviceAssetDefinition>  groups)
{
    return 0;
}

std::list<EventDefinition>   AbstractDeviceDriver::readEventDefinitions()
{
    return 0;
}*/

/*std::list<EventDefinition>   AbstractDeviceDriver::readEventDefinitions(std::list<DeviceAssetDefinition>   groups)
{
    return 0;
}*/

DataTablePtr AbstractDeviceDriver::readVariableValue(VariableDefinitionPtr vd)
{
    return 0;
}

void AbstractDeviceDriver::writeVariableValue(VariableDefinitionPtr vd, DataTablePtr value, DataTablePtr deviceValue) 
{
}

//todo - functions is not used
DataTablePtr AbstractDeviceDriver::executeFunction(FunctionDefinitionPtr fd, DataTablePtr parameters)
{
    //TODO:
    //throw new ::java::lang::UnsupportedOperationException();
    return 0;
}

DatePtr AbstractDeviceDriver::getVariableModificationTime(const std::string & name) 
{
    return DatePtr();
}

void AbstractDeviceDriver::updateVariableModificationTime(const std::string & name, DatePtr value)
{
}

VariableStatusPtr AbstractDeviceDriver::getCustomVariableStatus(const std::string & name)
{
    return 0;
}

void AbstractDeviceDriver::disconnect()
{
    setConnected(false);
}

void AbstractDeviceDriver::finishSynchronization()
{
}

void AbstractDeviceDriver::setConnected(bool connected)
{
    this->connected = connected;
}


//
//DeviceContextPtr AbstractDeviceDriver::getDeviceContext()
//{
//    return deviceContext;
//}
//
//DiscoveryProviderPtr AbstractDeviceDriver::createDiscoveryProvider()
//{
//    return 0;
//}
//
//std::string AbstractDeviceDriver::getProtocol()
//{
//    return protocol;
//}
//
//DateTableFormatPtr AbstractDeviceDriver::getConnectionPropertiesFormat()
//{
//    return connectionPropertiesFormat;
//}
//
//DateTableFormatPtr AbstractDeviceDriver::createConnectionPropertiesFormat()
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
//VariableDefinitionPtr AbstractDeviceDriver::discoverVariable(const std::string & name, AgObjectPtr helper)
//{
//    return 0;
//}
//
//FunctionDefinitionPtr AbstractDeviceDriver::discoverFunction(const std::string & name, AgObjectPtr helper)
//{
//    return 0;
//}
//
//EventDefinitionPtr AbstractDeviceDriver::discoverEvent(const std::string & name, AgObjectPtr helper)
//{
//    return 0;
//}
//
//
//
//ContextPtr AbstractDeviceDriver::createGlobalConfigContext(ContextPtr rootContext, bool requestReboot, VariableDefinitionPtr properties)
//{
//    return (ContextPtr)BasePlugin::createGlobalConfigContext(rootContext, requestReboot, properties);
//}
//
//ContextPtr AbstractDeviceDriver::createUserConfigContext(ContextPtr userContext, bool requestReboot, VariableDefinitionPtr properties)
//{
//    return (ContextPtr )BasePlugin::createUserConfigContext(userContext, requestReboot, properties);
//}
//
//std::string AbstractDeviceDriver::getDescription()
//{
//    return BasePlugin::getDescription();
//}
//
//ContextPtr AbstractDeviceDriver::getGlobalConfigContext()
//{
//    return (ContextPtr)(BasePlugin::getGlobalConfigContext());
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
//ContextPtr AbstractDeviceDriver::getUserConfigContext(const std::string & username)
//{
//    return (ContextPtr)BasePlugin::getUserConfigContext(username);
//}
//
//void AbstractDeviceDriver::globalDeinit(ContextPtr rootContext)
//{
//    BasePlugin::globalDeinit(rootContext);
//}
//
//void AbstractDeviceDriver::globalInit(ContextPtr rootContext)
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
//void AbstractDeviceDriver::userDeinit(ContextPtr userContext)
//{
//    BasePlugin::userDeinit(userContext);
//}
//
//void AbstractDeviceDriver::userInit(ContextPtr userContext)
//{
//    BasePlugin::userInit(userContext);
//}
//
