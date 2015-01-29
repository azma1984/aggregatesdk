#ifndef RemoteServerH
#define RemoteServerH

#include "protocol/AggreGateNetworkDevice.h"
#include <string>

class RemoteServer: public AggreGateNetworkDevice
{
private:
	std::string username;
	std::string password;

public:
    static const int DEFAULT_PORT;
	std::string DEFAULT_USERNAME;
	std::string DEFAULT_PASSWORD;
	std::string getPassword();
	std::string getUsername();
	void setUsername(std::string username);
	void setPassword(std::string password);
	std::string getInfo();
	int hashCode();
	bool equals(AgObjectPtr obj);

	RemoteServer();
	RemoteServer(std::string address, int port, std::string username, std::string password);
};

#endif
