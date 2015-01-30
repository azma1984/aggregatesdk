#include "device/sync/SynchronizationHandler.h"



SynchronizationHandler::SynchronizationHandler()
{
  synchronizationEnabled = true;   
}

void SynchronizationHandler::initialize(DeviceContextPtr deviceContext, const std::string & variable, SettingSynchronizationOptionsPtr synchronizationOptions, bool check) 
{
    this->deviceContext = deviceContext;
    this->variable = variable;
    this->synchronizationOptions = synchronizationOptions;
}

void SynchronizationHandler::deinitialize()
{
}

void SynchronizationHandler::startSynchronization() 
{
}

bool SynchronizationHandler::isSynchronizationEnabled()
{
    return synchronizationEnabled;
}

void SynchronizationHandler::setSynchronizationEnabled(bool synchronizationEnabled)
{
    this->synchronizationEnabled = synchronizationEnabled;
}

DataTablePtr SynchronizationHandler::readFromCache(CallerControllerPtr caller, RequestControllerPtr request)
{
	return DataTablePtr();
}

void SynchronizationHandler::writeToCache(CallerControllerPtr caller, RequestControllerPtr request, DataTablePtr value) 
{
}

ValueWriter* SynchronizationHandler::createServerWriter()
{

return 0; 
//	return  new AbstractValueWriter(Cres::get()->getString("server"));	
 //todo - public void write() what is it?
   // {
   //   public void write(DataTable value, CallerController callerController, RequestController requestController) throws ContextException, DeviceException, DisconnectionException
   //   {
   //     deviceContext.setVariable(getVariable(), callerController, requestController, value);
  //    }
   // };
}

ValueReader* SynchronizationHandler::createServerReader()
{
	return 0;
  //  return new AbstractValueReader(Cres::get()->getString("server"));
	  //todo - public DataTable read() what is it?
  //  {
  //    public DataTable read(CallerController callerController, RequestController requestController) throws ContextException, DeviceException, DisconnectionException
  //    {
  //      return deviceContext.getVariable(getVariable(), callerController, requestController);
  //    }
  //  };
}

DatePtr SynchronizationHandler::getServerModificationTime() 
{
  return deviceContext->getSettingStatus(variable)->getTime();
}

DatePtr SynchronizationHandler::getDeviceModificationTime()
{
  //	return deviceContext->getDriver()->getVariableModificationTime(getVariable());
 return DatePtr();
}

bool SynchronizationHandler::isUpdatedOnTheServer(CallerControllerPtr caller) 
{
    return deviceContext->getSettingStatus(variable)->isUpdated();
}

int SynchronizationHandler::getDirectionOverride()
{
    return DeviceContext::DIRECTION_AUTO;
}

VariableDefinitionPtr SynchronizationHandler::getPersistentDefinition(VariableDefinitionPtr vd)
{
	//todo - Clone() is undefined
   // return vd->clone();
	return VariableDefinitionPtr();
}

SettingSynchronizationOptionsPtr SynchronizationHandler::getSynchronizationOptions()
{
    return synchronizationOptions;
}

DeviceContextPtr SynchronizationHandler::getDeviceContext()
{
    return deviceContext;
}

std::string SynchronizationHandler::getVariable()
{
    return variable;
}

VariableStatusPtr SynchronizationHandler::getCustomStatus()
{
    return customStatus;
}

void SynchronizationHandler::setCustomStatus(VariableStatusPtr customStatus)
{
    this->customStatus = customStatus;
}




