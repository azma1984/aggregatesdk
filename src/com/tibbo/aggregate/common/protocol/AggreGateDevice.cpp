// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AggreGateDevice.java
#include "AggreGateDevice.h"
#include <string>

const long AggreGateDevice::DEFAULT_COMMAND_TIMEOUT = TimeHelper::HOUR_IN_MS;

AggreGateDevice::AggreGateDevice()
{
    id = "generic";
    type = "Generic AggreGate Device";

    commandTimeout = DEFAULT_COMMAND_TIMEOUT;
    disabled = false;
    name = id;
    description = type;
}

AggreGateDevice::AggreGateDevice(std::string name)
{
    disabled = false;
    this->name = name;
}


std::string AggreGateDevice::getName()
{
    return name;
}

void AggreGateDevice::setName(std::string name)
{
    this->name = name;
}

void AggreGateDevice::setDescription(std::string description)
{
    this->description = description;
}

std::string AggreGateDevice::getType()
{
    return type;
}

std::string AggreGateDevice::getId()
{
    return id;
}

std::string AggreGateDevice::getDescription()
{
    return description;
}

bool AggreGateDevice::isDisabled()
{
    return disabled;
}

void AggreGateDevice::setDisabled(bool disabled)
{
    this->disabled = disabled;
}

long AggreGateDevice::getCommandTimeout()
{
    return commandTimeout;
}

void AggreGateDevice::setCommandTimeout(long commandTimeout)
{
    this->commandTimeout = commandTimeout;
}

std::string AggreGateDevice::getInfo()
{
    return type;
}

std::string AggreGateDevice::toString()
{
/*
  std::string res = (getDescription() != 0 && getDescription()->length() > 0) ? getDescription() : getType();

  return res + " (" + getInfo() + ")";  */
}

int AggreGateDevice::hashCode()
{
	/*
	const int prime = int(31);
    auto result = int(1);
    result = prime * result + ((description == 0) ? int(0) : description->hashCode());
    result = prime * result + (disabled ? int(1231) : int(1237));
    result = prime * result + (name == 0) ? int(0) : name->hashCode();
	return result;     */
}

bool AggreGateDevice::equals(AgObjectPtr obj)
{
/*
	if(this == obj)
    {
        return true;
    }
    if(obj == 0)
    {
     return false;
    }

     AggreGateDevicePtrother = (AggreGateDevice)obj;
    if(description == 0) {
        if(other->description != 0) {
            return false;
        }
    } else if(!description->equals(other->description))
    {
        return false;
    }
    if(disabled != other->disabled) {
        return false;
    }
    if(name == 0) {
        if(other->name != 0) {
            return false;
        }
    } else if(!name->equals(other->name))
    {
        return false;
    }
	return true;   */
}





