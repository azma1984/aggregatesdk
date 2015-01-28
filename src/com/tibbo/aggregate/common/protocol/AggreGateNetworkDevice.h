
#ifndef AggreGateNetworkDeviceH
#define AggreGateNetworkDeviceH

#include "AggreGateDevice.h"

class AggreGateNetworkDevice: public AggreGateDevice
{

private:
	std::string DEFAULT_ADDRESS;
	std::string address;
	int port;
	long connectionTimeout;
public:
	static long DEFAULT_CONNECTION_TIMEOUT;

	std::string getAddress();
    int getPort();
    void setPort(int port);
	void setAddress(std::string address);
    long getConnectionTimeout();
    void setConnectionTimeout(long connectionTimeout);
	std::string getInfo();
    int hashCode();
	bool equals(AgObjectPtr obj);

	AggreGateNetworkDevice();
	AggreGateNetworkDevice(std::string address, int port);

};

#endif
