#include "device/sync/SynchronizationHandler.h"



SynchronizationHandler::SynchronizationHandler()
{
  synchronizationEnabled = true;   
}

void SynchronizationHandler::initialize(DeviceContext* deviceContext, const std::string & variable, SettingSynchronizationOptions* synchronizationOptions, bool check) 
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

DataTable* SynchronizationHandler::readFromCache(CallerController* caller, RequestController* request)
{
    return 0;
}

void SynchronizationHandler::writeToCache(CallerController* caller, RequestController* request, DataTable* value) 
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

boost::shared_ptr<Date> SynchronizationHandler::getServerModificationTime() 
{
  return deviceContext->getSettingStatus(variable)->getTime();
}

boost::shared_ptr<Date> SynchronizationHandler::getDeviceModificationTime() 
{
    return deviceContext->getDriver()->getVariableModificationTime(getVariable());
}

bool SynchronizationHandler::isUpdatedOnTheServer(CallerController* caller) 
{
    return deviceContext->getSettingStatus(variable)->isUpdated();
}

int SynchronizationHandler::getDirectionOverride()
{
    return DeviceContext::DIRECTION_AUTO;
}

VariableDefinition* SynchronizationHandler::getPersistentDefinition(VariableDefinition* vd)
{
	//todo - Clone() is undefined
   // return vd->clone();
	return 0;
}

SettingSynchronizationOptions* SynchronizationHandler::getSynchronizationOptions()
{
    return synchronizationOptions;
}

DeviceContext* SynchronizationHandler::getDeviceContext()
{
    return deviceContext;
}

std::string SynchronizationHandler::getVariable()
{
    return variable;
}

VariableStatus* SynchronizationHandler::getCustomStatus()
{
    return customStatus;
}

void SynchronizationHandler::setCustomStatus(VariableStatus* customStatus)
{
    this->customStatus = customStatus;
}




