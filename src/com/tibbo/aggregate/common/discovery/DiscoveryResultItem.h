#ifndef _DiscoveryResultItem_H_
#define _DiscoveryResultItem_H_

#include <boost/shared_ptr.hpp>
//#include "discovery/DiscoverableServiceDefinition.h"
#include "discovery/DeviceRecommendation.h"
#include "discovery/DiscoveryProvider.h"
#include "datatable/DataRecord.h"

class DiscoverableServiceDefinition;

class DiscoveryResultItem
{
private:
    boost::shared_ptr<DiscoverableServiceDefinition> serviceDefinition;
    boost::shared_ptr<DeviceRecommendation> deviceRecommendation;
    boost::shared_ptr<DataRecord> parameters;

public:
    boost::shared_ptr<DiscoverableServiceDefinition> getServiceDefinition();
    boost::shared_ptr<DataRecord> getParameters();
    void setParameters(boost::shared_ptr<DataRecord> parametersDataRecord);
    std::string getDeviceName();
    std::string getDeviceDescription();
    boost::shared_ptr<DiscoveryProvider> getDiscoveryProvider();
    std::string getServiceName();
    std::string getServiceDescription();
    bool isEnabledByDefault();
    boost::shared_ptr<DataTable> getParametersTable();
    boost::shared_ptr<DeviceRecommendation> getDeviceRecommendation();
    std::string toString();

    // Generated
    DiscoveryResultItem(boost::shared_ptr<DiscoverableServiceDefinition> aDiscoverableServiceDefinition,
                        boost::shared_ptr<DataRecord> parametersDataRecord);
    DiscoveryResultItem(boost::shared_ptr<DiscoverableServiceDefinition> aDiscoverableServiceDefinition,
                        boost::shared_ptr<DataRecord> parametersDataRecord, boost::shared_ptr<DeviceRecommendation> aDeviceRecommendation);
};

#endif 