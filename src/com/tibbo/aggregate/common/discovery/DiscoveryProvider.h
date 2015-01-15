// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/discovery/DiscoveryProvider.java

#pragma once

#include "discovery/DiscoverableServiceDefinition.h"
#include "context/CallerController.h"
#include "device/DeviceContext.h"
#include "datatable/DataTable.h"
#include "util/Interface.h"
#include <string>
#include <list>

class DiscoveryProvider : public Interface
{
//TODO: not usage ?
//    virtual std::string getName() = 0;
//    virtual std::string getDescription() = 0;
//    virtual std::string getDriver() = 0;
////    virtual ::java::util::Collection* getDiscoverySettingsVariableDefinitions();
//    virtual DataTable* getDiscoverySettings(const std::string& settingsVariable) = 0;
//    virtual std::list<DiscoverableServiceDefinition>  getAvailableServices() = 0;
//    virtual DeviceContext* createDevice(const std::string& username, const std::string& deviceName,
//                                        const std::string& description, const std::string& address,
//                                        CallerController* caller) /* throws(ContextException) */ = 0;
//    virtual DiscoverableServiceDefinition* getDiscoverableServiceDefinition(const std::string& name) = 0;
//    virtual void configureService(const std::string & name, bool enable, DeviceContext* deviceContext,
//                                  DataTable* parameters, CallerController* callerController)=0; /* throws(ContextException) */;
};
