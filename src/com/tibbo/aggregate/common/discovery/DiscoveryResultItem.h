// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/discovery/DiscoveryResultItem.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/discovery/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::discovery::DiscoveryResultItem
    
{

public:
    typedef void super;

private:
    DiscoverableServiceDefinition* serviceDefinition;
    DeviceRecommendation* deviceRecommendation;
    ::com::tibbo::aggregate::common::datatable::DataRecord* parameters;
protected:
    void ctor(DiscoverableServiceDefinition* aDiscoverableServiceDefinition, ::com::tibbo::aggregate::common::datatable::DataRecord* parametersDataRecord);
    void ctor(DiscoverableServiceDefinition* aDiscoverableServiceDefinition, ::com::tibbo::aggregate::common::datatable::DataRecord* parametersDataRecord, DeviceRecommendation* aDeviceRecommendation);

public:
    DiscoverableServiceDefinition* getServiceDefinition();
    ::com::tibbo::aggregate::common::datatable::DataRecord* getParameters();
    void setParameters(::com::tibbo::aggregate::common::datatable::DataRecord* parametersDataRecord);
    std::string* getDeviceName();
    std::string* getDeviceDescription();
    DiscoveryProvider* getDiscoveryProvider();
    std::string* getServiceName();
    std::string* getServiceDescription();
    bool isEnabledByDefault();
    ::com::tibbo::aggregate::common::datatable::DataTable* getParametersTable();
    DeviceRecommendation* getDeviceRecommendation();
    std::string* toString();

    // Generated
    DiscoveryResultItem(DiscoverableServiceDefinition* aDiscoverableServiceDefinition, ::com::tibbo::aggregate::common::datatable::DataRecord* parametersDataRecord);
    DiscoveryResultItem(DiscoverableServiceDefinition* aDiscoverableServiceDefinition, ::com::tibbo::aggregate::common::datatable::DataRecord* parametersDataRecord, DeviceRecommendation* aDeviceRecommendation);
protected:
    DiscoveryResultItem(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
