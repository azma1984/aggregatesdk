#ifndef _DiscoveryResultItem_H_
#define _DiscoveryResultItem_H_

#include <boost/shared_ptr.hpp>
#include "discovery/DiscoverableServiceDefinition.h"
#include "discovery/DeviceRecommendation.h"
#include "discovery/DiscoveryProvider.h"
#include "datatable/DataRecord.h"
#include "util/pointers.h"

class DiscoverableServiceDefinition;

class DiscoveryResultItem
{
private:
    DiscoverableServiceDefinitionPtr serviceDefinition;
    DeviceRecommendationPtr deviceRecommendation;
	DataRecordPtr parameters;

public:
    DiscoverableServiceDefinitionPtr getServiceDefinition();
	DataRecordPtr getParameters();
    void setParameters(DataRecordPtr parametersDataRecord);
    std::string getDeviceName();
    std::string getDeviceDescription();
    DiscoveryProviderPtr getDiscoveryProvider();
    std::string getServiceName();
    std::string getServiceDescription();
    bool isEnabledByDefault();
    DataTablePtr getParametersTable();
    DeviceRecommendationPtr getDeviceRecommendation();
    std::string toString();

   //todo
   // DiscoveryResultItem(DiscoverableServiceDefinitionPtr aDiscoverableServiceDefinition,
  //                      DataRecordPtr parametersDataRecord);
  //  DiscoveryResultItem(DiscoverableServiceDefinitionPtr aDiscoverableServiceDefinition,
  //                      DataRecordPtr parametersDataRecord, DeviceRecommendationPtr aDeviceRecommendation);
};

#endif 
