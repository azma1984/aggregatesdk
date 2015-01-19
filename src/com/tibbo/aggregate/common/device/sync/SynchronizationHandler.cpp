#include "device/sync/SynchronizationHandler.h"



SynchronizationHandler::SynchronizationHandler()
{
 synchronizationEnabled = true;   
}
//
//void SynchronizationHandler::initialize(DeviceContext* deviceContext, const std::string & variable, SettingSynchronizationOptions* synchronizationOptions, bool check) 
//{
//    this->deviceContext = deviceContext;
//    this->variable = variable;
//    this->synchronizationOptions = synchronizationOptions;
//}
//
//void SynchronizationHandler::deinitialize()
//{
//}
//
//void SynchronizationHandler::startSynchronization() 
//{
//}
//
//bool SynchronizationHandler::isSynchronizationEnabled()
//{
//    return synchronizationEnabled;
//}
//
//void SynchronizationHandler::setSynchronizationEnabled(bool synchronizationEnabled)
//{
//    this->synchronizationEnabled = synchronizationEnabled;
//}
//
//DateDataTable* SynchronizationHandler::readFromCache(CallerController* caller, RequestController* request)
//{
//    return 0;
//}
//
//void SynchronizationHandler::writeToCache(CallerController* caller, RequestController* request, DataTable* value) 
//{
//}
//
//ValueWriter* SynchronizationHandler::createServerWriter()
//{
//  //  return new SynchronizationHandler_createServerWriter_1(this, Cres::get())->getString(u"server"_j));
//}
//
//ValueReader* SynchronizationHandler::createServerReader()
//{
//   // return new SynchronizationHandler_createServerReader_2(this, Cres::get())->getString(u"server"_j));
//}
//
//Date* SynchronizationHandler::getServerModificationTime() 
//{
//    return deviceContext->getSettingStatus(variable)->getTime();
//}
//
//Date* SynchronizationHandler::getDeviceModificationTime() 
//{
//    return deviceContext->getDriver()->getVariableModificationTime(getVariable());
//}
//
//bool SynchronizationHandler::isUpdatedOnTheServer(CallerController* caller) 
//{
//    return deviceContext->getSettingStatus(variable)->isUpdated();
//}
//
//int SynchronizationHandler::getDirectionOverride()
//{
//    return DIRECTION_AUTO;
//}
//
//VariableDefinition* SynchronizationHandler::getPersistentDefinition(VariableDefinition* vd)
//{
//    return vd->clone();
//}
//
//SettingSynchronizationOptions* SynchronizationHandler::getSynchronizationOptions()
//{
//    return synchronizationOptions;
//}
//
//DeviceContext* SynchronizationHandler::getDeviceContext()
//{
//    return deviceContext;
//}
//
//std::string SynchronizationHandler::getVariable()
//{
//    return variable;
//}
//
//VariableStatus* SynchronizationHandler::getCustomStatus()
//{
//    return customStatus;
//}
//
//void SynchronizationHandler::setCustomStatus(VariableStatus* customStatus)
//{
//    this->customStatus = customStatus;
//}
//
//
//
//
