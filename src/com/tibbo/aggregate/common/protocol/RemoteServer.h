// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/RemoteServer.java

#pragma once

#include <AggreGateNetworkDevice.h>

class RemoteServer: public AggreGateNetworkDevice
{
private:
	std::string username;
	std::string password;
protected:
	void ctor();
	void ctor(std::string* address, int port, std::string* username, std::string* password);

public:
	typedef AggreGateNetworkDevice super;
	static const int DEFAULT_PORT = 6460;
	std::string DEFAULT_USERNAME;
	std::string DEFAULT_PASSWORD;
	std::string getPassword();
	std::string getUsername();
	void setUsername(std::string username);
	void setPassword(std::string password);
	std::string getInfo();
	int hashCode();
	bool equals(void* obj);

    // Generated
    RemoteServer();
	RemoteServer(std::string address, int port, std::string username, std::string password);
};
