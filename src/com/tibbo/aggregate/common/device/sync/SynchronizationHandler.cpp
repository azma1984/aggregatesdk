#include "device/sync/SynchronizationHandler.h"

#include "device/sync/AbstractValueReader.h"
#include "device/sync/AbstractValueWriter.h"
#include "device/sync/SettingSynchronizationOptions.h"


SynchronizationHandler::SynchronizationHandler()
{
    synchronizationEnabled = true;
}

void SynchronizationHandler::initialize(
    boost::shared_ptr<DeviceContext> deviceContext,
    const std::string& variable,
    boost::shared_ptr<SettingSynchronizationOptions> synchronizationOptions,
    bool check
){
    this->deviceContext = deviceContext;
    this->variable = variable;
    this->synchronizationOptions = synchronizationOptions;
}

void SynchronizationHandler::deinitialize()
{

}

void SynchronizationHandler::startSynchronization() /* throws(DeviceException, ContextException) */
{

}

bool SynchronizationHandler::isSynchronizationEnabled()
{
    return synchronizationEnabled;
}


void SynchronizationHandler::setSynchronizationEnabled(bool synchronizationEnabled)
{
    this->setSynchronizationEnabled = synchronizationEnabled;
}

boost::shared_ptr<DataTable> SynchronizationHandler::readFromCache(
    boost::shared_ptr<CallerController> caller,
    boost::shared_ptr<RequestController> request) /* throws(ContextException) */
{
    return NULL;
}

void SynchronizationHandler::writeToCache(
    boost::shared_ptr<CallerController> caller,
    boost::shared_ptr<RequestController> request,
    boost::shared_ptr<DataTable> value) /* throws(ContextException) */
{

}

boost::shared_ptr<ValueWriter> SynchronizationHandler::createServerWriter()
{
    return new AbstractValueWriter(Cres::get()->getString("server"));
    //TODO:
//    {
//      public void write(DataTable value, CallerController callerController, RequestController requestController) throws ContextException, DeviceException, DisconnectionException
//      {
//        deviceContext.setVariable(getVariable(), callerController, requestController, value);
//      }
//    };
}

boost::shared_ptr<ValueReader> SynchronizationHandler::createServerReader()
{
    return new AbstractValueReader(Cres::get()->getString("server"));
    //TODO:
//    {
//      public DataTable read(CallerController callerController, RequestController requestController) throws ContextException, DeviceException, DisconnectionException
//      {
//        return deviceContext.getVariable(getVariable(), callerController, requestController);
//      }
//    };
}

boost::shared_ptr<Date> SynchronizationHandler::getServerModificationTime() /* throws(ContextException) */
{
     return deviceContext->getSettingStatus(variable)->getTime();
}

boost::shared_ptr<Date> SynchronizationHandler::getDeviceModificationTime() /* throws(ContextException, DeviceException, DisconnectionException) */
{
    return deviceContext->getDriver()->getVariableModificationTime(getVariable());
}

bool SynchronizationHandler::isUpdatedOnTheServer(boost::shared_ptr<CallerController> caller) /* throws(ContextException) */
{
    return deviceContext->getSettingStatus(variable)->isUpdated();
}

int SynchronizationHandler::getDirectionOverride()
{
    return DeviceContext::DIRECTION_AUTO;
}

boost::shared_ptr<VariableDefinition> SynchronizationHandler::getPersistentDefinition(boost::shared_ptr<VariableDefinition> vd)
{
    return vd->clone();
}

boost::shared_ptr<SettingSynchronizationOptions> SynchronizationHandler::getSynchronizationOptions()
{
    return synchronizationOptions;
}

boost::shared_ptr<VariableStatus> SynchronizationHandler::getCustomStatus()
{
    return customStatus;
}

void SynchronizationHandler::setCustomStatus(boost::shared_ptr<VariableStatus> customStatus)
{
    this->customStatus = customStatus;
}

boost::shared_ptr<DeviceContext> SynchronizationHandler::getDeviceContext()
{
    return deviceContext;
}

std::string SynchronizationHandler::getVariable()
{
    return variable;
}
