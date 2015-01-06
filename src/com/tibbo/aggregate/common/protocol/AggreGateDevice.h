// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/protocol/AggreGateDevice.java

#pragma once

#include "TimeHelper.h";

class AggreGateDevice
{
 protected:
	std::string id;
	std::string type;

 private:
    std::string name;
    std::string description;
    bool disabled;
    long commandTimeout;

public:

    static const long DEFAULT_COMMAND_TIMEOUT = TimeHelper::HOUR_IN_MS;

    std::string getName();
    void setName(std::string name);
    void setDescription(std::string description);
    std::string getType();
    std::string getId();
    std::string getDescription();
    bool isDisabled();
    void setDisabled(bool disabled);
    long getCommandTimeout();
    void setCommandTimeout(long commandTimeout);
    std::string getInfo();
    std::string toString();
    int hashCode();
    bool equals(void* obj);

    // Generated
    AggreGateDevice();
    AggreGateDevice(std::string name);

};
