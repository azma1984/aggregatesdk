// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AggreGateNetworkDevice.java

#pragma once

#include "AggreGateDevice.h"



class AggreGateNetworkDevice: public AggreGateDevice
{


private:
	std::string DEFAULT_ADDRESS;
	std::string address;
	int port;
	long connectionTimeout;
public:
	static const long DEFAULT_CONNECTION_TIMEOUT = 20* TimeHelper::SECOND_IN_MS;

	std::string getAddress();
    int getPort();
    void setPort(int port);
	void setAddress(std::string address);
    long getConnectionTimeout();
    void setConnectionTimeout(long connectionTimeout);
	std::string getInfo();
    int hashCode();
	bool equals(void* obj);

	AggreGateNetworkDevice();
	AggreGateNetworkDevice(std::string address, int port);

};
