#include "protocol/RemoteServer.h>
#include "Cres.h"

const int RemoteServer::DEFAULT_PORT = 6460;

RemoteServer::RemoteServer()
{
  DEFAULT_USERNAME = "admin";
  DEFAULT_PASSWORD = "admin";
  setPort(DEFAULT_PORT);
}

RemoteServer::RemoteServer(std::string address, int port, std::string username, std::string password)
{
	this->username = username;
	this->password = password;
}


std::string RemoteServer::getPassword()
{
    return password;
}

std::string RemoteServer::getUsername()
{
    return username;
}

void RemoteServer::setUsername(std::string username)
{
    this->username = username;
}

void RemoteServer::setPassword(std::string password)
{
    this->password = password;
}

std::string RemoteServer::getInfo()
{
 //return this->getInfo() + (username.empty() == false ? ", " + username : "");
 return 0;
}

int RemoteServer::hashCode()
{
/*
    auto const prime = int(31);
    auto result = super::hashCode();
	result = prime * result + (password == 0) ? 0 : password->hashCode());
	result = prime * result + (username == 0) ? 0 : username->hashCode());
	return result;  */
	return  0;
}

bool RemoteServer::equals(AgObjectPtr obj)
{
   /*
	if(this == obj)
	{
        return true;
    }

	RemoteServerPtr other = (RemoteServerPtr) obj;
    if(password == 0) {
        if(other)->password != 0) {
            return false;
        }
    } else if(!password)->equals(other)->password))) {
        return false;
    }
    if(username == 0) {
        if(other)->username != 0) {
            return false;
        }
    } else if(!username)->equals(other)->username))) {
        return false;
    }
     */

	return true;
}



