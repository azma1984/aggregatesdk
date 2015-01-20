#ifndef SynchronizationParametersH
#define SynchronizationParametersH

#include "util/Cloneable.h"
//#include "device/DeviceContext.h"
#include <string>
#include <set>

//todo Class stub
class SynchronizationParameters : public Cloneable
{
//private:
//    bool connectOnly;
//    bool shouldReadMetadata;
//    bool shouldPersistStatus;
//    bool shouldUseExtendedStatus;
//    std::set<std::string> variables;
//    int directionOverride;

public:
//    bool isShouldReadMetadata();
//    bool isShouldPersistStatus();
//    bool isConnectOnly();
//    bool isFull();
//    void addVariable(const std::string& variable);
//    void removeVariable(const std::string& variable);
//    std::set<std::string> getVariables();
//    bool isShouldUseExtendedStatus();
//    int getDirectionOverride();
//    std::string toString();
//    //TODO: is need?
////    int hashCode();
//    bool equals(SynchronizationParameters* obj);
    SynchronizationParameters* clone();

    SynchronizationParameters();
    SynchronizationParameters(const std::string& setting);
    SynchronizationParameters(bool connectOnly);
    SynchronizationParameters(const std::string& setting, int directionOverride);
    SynchronizationParameters(bool connectOnly, bool shouldReadMetadata, bool shouldPersistStatus, bool shouldUseExtendedStatus);
};

#endif 