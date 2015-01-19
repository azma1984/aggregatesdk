#include "device/sync/SynchronizationParameters.h"


SynchronizationParameters::SynchronizationParameters()
{  
//	this->connectOnly = false;
//	this->shouldReadMetadata = true;
//    this->shouldPersistStatus = true;
//    this->shouldUseExtendedStatus = false;
//	this->directionOverride = DeviceContext::DIRECTION_AUTO;
//    variables = new LinkedHashSet();
//    variables.insert(setting);  
}
//
//
SynchronizationParameters::SynchronizationParameters(const std::string& setting)
{
//   SynchronizationParameters();
//  
//   shouldReadMetadata = false;
//   shouldPersistStatus = false;
}
//
//
SynchronizationParameters::SynchronizationParameters(bool connectOnly)
{
//    SynchronizationParameters();
//    this->connectOnly = connectOnly;
}

//SynchronizationParameters::SynchronizationParameters(const std::string& setting, int directionOverride)
//{
//    SynchronizationParameters(setting);
//    this->directionOverride = directionOverride;
//}
//
//SynchronizationParameters::SynchronizationParameters(bool connectOnly, bool shouldReadMetadata, bool shouldPersistStatus, bool shouldUseExtendedStatus)
//{
//  SynchronizationParameters();
//  this->connectOnly = connectOnly;
//  this->shouldReadMetadata = shouldReadMetadata;
//  this->shouldPersistStatus = shouldPersistStatus;
//  this->shouldUseExtendedStatus = shouldUseExtendedStatus;
//}
//
//bool SynchronizationParameters::isShouldReadMetadata()
//{
//    return shouldReadMetadata;
//}
//
//bool SynchronizationParameters::isShouldPersistStatus()
//{
//    return shouldPersistStatus;
//}
//
//bool SynchronizationParameters::isConnectOnly()
//{
//    return connectOnly;
//}
//
//bool SynchronizationParameters::isFull()
//{
//    return !variables.empty();
//}
//
//void SynchronizationParameters::addVariable(const std::string &variable)
//{
//    variables.insert(variable);
//}
//
//void SynchronizationParameters::removeVariable(const std::string &variable)
//{
//    variables.remove(variable);
//}
//
//std::set<std::string> SynchronizationParameters::getVariables()
//{
//    return variables;
//}
//
//bool SynchronizationParameters::isShouldUseExtendedStatus()
//{
//    return shouldUseExtendedStatus;
//}
//
//int SynchronizationParameters::getDirectionOverride()
//{
//    return directionOverride;
//}
//
//std::string SynchronizationParameters::toString()
//{
//    return "read metadata: "+ (isShouldReadMetadata() ? "yes" : "no")+", settings: ";//TODO: + StringUtils.print(variables);
//}
//
///*
//int SynchronizationParameters::hashCode()
//{
//    inal int prime = 31;
//        int result = 1;
//        result = prime * result + (connectOnly ? 1231 : 1237);
//        result = prime * result + directionOverride;
//        result = prime * result + ((variables == null) ? 0 : variables.hashCode());
//        result = prime * result + (shouldPersistStatus ? 1231 : 1237);
//        result = prime * result + (shouldReadMetadata ? 1231 : 1237);
//        result = prime * result + (shouldUseExtendedStatus ? 1231 : 1237);
//        return result;
//}
//*/
//
//bool SynchronizationParameters::equals(SynchronizationParameters* obj)
//{
//    if (this == obj)
//        return true;
//
//    if (obj == NULL)
//        return false;
//
//    SynchronizationParameters* other = dynamic_cast<SynchronizationParameters*>(obj);
//    if (other == NULL)
//        return false;
//
//    if (connectOnly != other->connectOnly)
//        return false;
//
//    if (directionOverride != other->directionOverride)
//        return false;
//    //TODO: срвнить каждый эелемент set с other->variables
//    if (!variables.equals(other.variables))
//        return false;
//
//    if (shouldPersistStatus != other->shouldPersistStatus)
//        return false;
//    if (shouldReadMetadata != other->shouldReadMetadata)
//        return false;
//    if (shouldUseExtendedStatus != other->shouldUseExtendedStatus)
//        return false;
//
//    return true;
//}
//
//SynchronizationParameters* SynchronizationParameters::clone()
//{
//    SynchronizationParameters* cl = new SynchronizationParameters(this);
//
//    cl->variables = variables;
//
//    return cl;
//}
//
