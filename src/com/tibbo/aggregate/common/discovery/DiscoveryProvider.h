// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/discovery/DiscoveryProvider.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/device/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/discovery/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::discovery::DiscoveryProvider
    
{
    std::string* getName();
    std::string* getDescription();
    std::string* getDriver();
    ::java::util::Collection* getDiscoverySettingsVariableDefinitions();
    ::com::tibbo::aggregate::common::datatable::DataTable* getDiscoverySettings(std::string* settingsVariable);
    std::list  getAvailableServices();
    ::com::tibbo::aggregate::common::device::DeviceContext* createDevice(std::string* username, std::string* deviceName, std::string* description, std::string* address, ::com::tibbo::aggregate::common::context::CallerController* caller) /* throws(ContextException) */;
    DiscoverableServiceDefinition* getDiscoverableServiceDefinition(std::string* name);
    void configureService(std::string* name, bool enable, ::com::tibbo::aggregate::common::device::DeviceContext* deviceContext, ::com::tibbo::aggregate::common::datatable::DataTable* parameters, ::com::tibbo::aggregate::common::context::CallerController* callerController) /* throws(ContextException) */;

    // Generated
    
};
