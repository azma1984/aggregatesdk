#include "device/sync/SynchronizationParameters.h"


SynchronizationParameters::SynchronizationParameters()
{  
	this->connectOnly = false;
	this->shouldReadMetadata = true;
    this->shouldPersistStatus = true;
    this->shouldUseExtendedStatus = false;
}
//
//
SynchronizationParameters::SynchronizationParameters(const std::string& setting)
{
	this->connectOnly = false;
	this->shouldReadMetadata = false;
    this->shouldPersistStatus = false;
    this->shouldUseExtendedStatus = false;
	this->directionOverride = DeviceContext::DIRECTION_AUTO;
    variables.insert(setting);  
}
//
//
SynchronizationParameters::SynchronizationParameters(bool connectOnly)
{
    	this->connectOnly = false;
	this->shouldReadMetadata = true;
    this->shouldPersistStatus = true;
    this->shouldUseExtendedStatus = false;
    this->connectOnly = connectOnly;
}

SynchronizationParameters::SynchronizationParameters(const std::string& setting, int directionOverride)
{
    this->connectOnly = false;
	this->shouldReadMetadata = false;
    this->shouldPersistStatus = false;
    this->shouldUseExtendedStatus = false;
	this->directionOverride = DeviceContext::DIRECTION_AUTO;
    variables.insert(setting);  
    this->directionOverride = directionOverride;
}

SynchronizationParameters::SynchronizationParameters(bool connectOnly, bool shouldReadMetadata, bool shouldPersistStatus, bool shouldUseExtendedStatus)
{
  this->connectOnly = false;
	this->shouldReadMetadata = true;
    this->shouldPersistStatus = true;
    this->shouldUseExtendedStatus = false;

  this->connectOnly = connectOnly;
  this->shouldReadMetadata = shouldReadMetadata;
  this->shouldPersistStatus = shouldPersistStatus;
  this->shouldUseExtendedStatus = shouldUseExtendedStatus;
}

bool SynchronizationParameters::isShouldReadMetadata()
{
    return shouldReadMetadata;
}

bool SynchronizationParameters::isShouldPersistStatus()
{
    return shouldPersistStatus;
}

bool SynchronizationParameters::isConnectOnly()
{
    return connectOnly;
}

bool SynchronizationParameters::isFull()
{
    return !variables.empty();
}

void SynchronizationParameters::addVariable(const std::string &variable)
{
    variables.insert(variable);
}

void SynchronizationParameters::removeVariable(const std::string &variable)
{
    variables.erase(variable);
}

std::set<std::string> SynchronizationParameters::getVariables()
{
    return variables;
}

bool SynchronizationParameters::isShouldUseExtendedStatus()
{
    return shouldUseExtendedStatus;
}

int SynchronizationParameters::getDirectionOverride()
{
    return directionOverride;
}

std::string SynchronizationParameters::toString()
{
 std::string str = (isShouldReadMetadata() ? "yes" : "no");
 return "read metadata: "+ str+", settings: ";//TODO: + StringUtils.print(variables);
}


int SynchronizationParameters::hashCode()
{
  const int prime = 31;
  int result = 1;
  result = prime * result + (connectOnly ? 1231 : 1237);
  result = prime * result + directionOverride;//todo - std::set<std::string>  hashCode()?  
  result = prime * result + ((variables.empty() == true) ? 0 : 0xFF/*variables.hashCode()*/);
  result = prime * result + (shouldPersistStatus ? 1231 : 1237);
  result = prime * result + (shouldReadMetadata ? 1231 : 1237);
  result = prime * result + (shouldUseExtendedStatus ? 1231 : 1237);
  return result;
}


bool SynchronizationParameters::equals(SynchronizationParametersPtr obj)
{
	if (SynchronizationParametersPtr(this) == obj)
		return true;

    if (obj == NULL)
		return false;
		//todo
	//SynchronizationParametersPtr other = dynamic_cast<SynchronizationParameters*>(obj);
  //  if (other == NULL)
  //		return false;

//	if (connectOnly != other->connectOnly)
//		return false;
//
//	if (directionOverride != other->directionOverride)
//        return false;
//	//TODO: сравнить каждый эелемент set с other->variables
////   if (!variables.equals(other.variables))
// //       return false;
//
//	if (shouldPersistStatus != other->shouldPersistStatus)
//		return false;
//	if (shouldReadMetadata != other->shouldReadMetadata)
//		return false;
//	if (shouldUseExtendedStatus != other->shouldUseExtendedStatus)
//		return false;

    return true;
}

//SynchronizationParametersPtr SynchronizationParameters::clone() const
//{
//	SynchronizationParametersPtr cl = new SynchronizationParameters(this);
//
//	cl->connectOnly=connectOnly;
//	cl->shouldReadMetadata=shouldReadMetadata;
//	cl->shouldPersistStatus=shouldPersistStatus;
//	cl->shouldUseExtendedStatus=shouldUseExtendedStatus;
//	//todo - copy elements std::set<>
//   // cl->variables = variables;
//
//	cl->directionOverride=directionOverride;
//
//
//	return cl;
//}

