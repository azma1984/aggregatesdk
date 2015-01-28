// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AggreGateNetworkDevice.java

#include "AggreGateNetworkDevice.h"


AggreGateNetworkDevice::AggreGateNetworkDevice()
{
  connectionTimeout = AggreGateNetworkDevice::DEFAULT_CONNECTION_TIMEOUT;

  DEFAULT_ADDRESS = "localhost";

  this->address = address;
  this->port = port;
}

std::string AggreGateNetworkDevice::getAddress()
{
    return address;
}

int AggreGateNetworkDevice::getPort()
{
    return port;
}

void AggreGateNetworkDevice::setPort(int port)
{
    this->port = port;
}

void AggreGateNetworkDevice::setAddress(std::string address)
{
  this->address = address;
}

long AggreGateNetworkDevice::getConnectionTimeout()
{
    return connectionTimeout;
}

void AggreGateNetworkDevice::setConnectionTimeout(long connectionTimeout)
{
    this->connectionTimeout = connectionTimeout;
}

std::string AggreGateNetworkDevice::getInfo()
{
   ///	return std::stringBuilder().append(address)->append(u":"_j)
	//    ->append(port)->toString();
}

int AggreGateNetworkDevice::hashCode()
{
	/*
	auto const prime = int(31);
	auto result = super::hashCode();
    result = prime * result + ((address == 0) ? int(0) : address)->hashCode());
	result = prime * result + port;
	return result; */
	return 0;
}

bool AggreGateNetworkDevice::equals(AgObjectPtr obj)
{

	if(this == obj) {
        return true;
    }

	/*
	AggreGateNetworkDevice* other = (AggreGateNetworkDevice*)obj;
	if(address == 0) {
        if(other)->address != 0) {
            return false;
        }
    } else if(!address)->equals(other)->address))) {
        return false;
    }
    if(port != other)->port) {
        return false;
	}
	  */
	return true;
}



