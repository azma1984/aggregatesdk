#ifndef _DiscoveryProvider_H_
#define _DiscoveryProvider_H_

#include "discovery/DiscoverableServiceDefinition.h"
#include "context/CallerController.h"
#include "device/DeviceContext.h"
#include "datatable/DataTable.h"
#include "util/Interface.h"
#include <string>
#include <list>

class DiscoveryProvider : public Interface
{
	virtual std::string getName() = 0;
    virtual std::string getDescription() = 0;
    virtual std::string getDriver() = 0;
	virtual std::list getDiscoverySettingsVariableDefinitions();
    virtual DataTablePtr getDiscoverySettings(const std::string& settingsVariable) = 0;
	virtual std::list<DiscoverableServiceDefinition*>  getAvailableServices() = 0;
    virtual DeviceContextPtr createDevice(const std::string& username, const std::string& deviceName,
                                        const std::string& description, const std::string& address,
                                        CallerControllerPtr caller)  = 0;
    virtual DiscoverableServiceDefinition* getDiscoverableServiceDefinition(const std::string& name) = 0;
    virtual void configureService(const std::string & name, bool enable, DeviceContextPtr deviceContext,
								  DataTablePtr parameters, CallerControllerPtr callerController)=0; ;
};
#endif 