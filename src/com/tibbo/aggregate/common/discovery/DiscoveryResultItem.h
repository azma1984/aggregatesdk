#ifndef _DiscoveryResultItem_H_
#define _DiscoveryResultItem_H_

#include <boost/shared_ptr.hpp>
//#include "discovery/DiscoverableServiceDefinition.h"
#include "discovery/DeviceRecommendation.h"
#include "discovery/DiscoveryProvider.h"
#include "datatable/DataRecord.h"
#include "util/pointers.h"

class DiscoverableServiceDefinition;

class DiscoveryResultItem
{
private:
  //	DiscoverableServiceDefinitionPtr serviceDefinition;  todo
   // DeviceRecommendationPtr deviceRecommendation;todo
	DataRecordPtr parameters;

public:
  //	DiscoverableServiceDefinitionPtr getServiceDefinition(); todo
	DataRecordPtr getParameters();
    void setParameters(DataRecordPtr parametersDataRecord);
    std::string getDeviceName();
    std::string getDeviceDescription();
   //	DiscoveryProviderPtr getDiscoveryProvider(); todo
    std::string getServiceName();
    std::string getServiceDescription();
    bool isEnabledByDefault();
    DataTablePtr getParametersTable();
	//DeviceRecommendationPtr getDeviceRecommendation(); todo
    std::string toString();

   //todo
   // DiscoveryResultItem(DiscoverableServiceDefinitionPtr aDiscoverableServiceDefinition,
  //                      DataRecordPtr parametersDataRecord);
  //  DiscoveryResultItem(DiscoverableServiceDefinitionPtr aDiscoverableServiceDefinition,
  //                      DataRecordPtr parametersDataRecord, DeviceRecommendationPtr aDeviceRecommendation);
};

#endif 