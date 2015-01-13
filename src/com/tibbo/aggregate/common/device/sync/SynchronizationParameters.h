#pragma once

#include "util/Cloneable.h"

#include <string>
#include <set>

class SynchronizationParameters : public Cloneable
{
private:
    bool connectOnly;
    bool shouldReadMetadata;
    bool shouldPersistStatus;
    bool shouldUseExtendedStatus;
    std::set<std::string> variables;
    int directionOverride;

protected:
    void ctor();
    void ctor(const std::string& setting);

public:
    bool isShouldReadMetadata();
    bool isShouldPersistStatus();
    bool isConnectOnly();
    bool isFull();
    void addVariable(const std::string& variable);
    void removeVariable(const std::string& variable);
    std::set<std::string> getVariables();
    bool isShouldUseExtendedStatus();
    int getDirectionOverride();
    std::string toString();
    //TODO: is need?
//    int hashCode();
    bool equals(SynchronizationParameters* obj);
    SynchronizationParameters* clone();

    // Generated
    SynchronizationParameters();
    SynchronizationParameters(const std::string& setting);
    SynchronizationParameters(bool connectOnly);
    SynchronizationParameters(const std::string& setting, int directionOverride);
    SynchronizationParameters(bool connectOnly, bool shouldReadMetadata, bool shouldPersistStatus, bool shouldUseExtendedStatus);
};
