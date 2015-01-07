// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/discovery/DiscoverableServiceDefinition.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/discovery/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Cloneable.h"



class com::tibbo::aggregate::common::discovery::DiscoverableServiceDefinition
    
    , public ::java::lang::Cloneable
{

public:
    typedef void super;

private:
    DiscoveryProvider* discoveryProvider;
    std::string* name;
    std::string* description;
    ::com::tibbo::aggregate::common::datatable::DataTable* connectionOptions;
    long discoveryTimeout;
    int discoveryRetries;
    bool useService;
    bool isEnabledByDefault_;
protected:
    void ctor(DiscoveryProvider* discoveryProvider, std::string* name, std::string* description, ::com::tibbo::aggregate::common::datatable::DataTable* connectionOptions, int defaultDiscoveryTimeout, int defaultDiscoveryRetries, bool isEnabledByDefault);

public:
    DiscoverableService* createServiceInstance();
    std::string* getName();
    ::com::tibbo::aggregate::common::datatable::DataTable* getConnectionOptions();
    void setConnectionOptions(::com::tibbo::aggregate::common::datatable::DataTable* connectionOptions);
    std::string* getDescription();
    long getDiscoveryTimeout();
    void setDiscoveryTimeout(long defaultDiscoveryTimeoutInt);
    int getDiscoveryRetries();
    void setDiscoveryRetries(int defaultDiscoveryRetries);
    DiscoveryProvider* getDiscoveryProvider();
    std::string* deviceType(std::string* addressStrings);
    ::java::lang::Integer* priority();
    DiscoverableServiceDefinition* clone();
    void setUseService(::java::lang::Boolean* useService);
    bool isUseService();
    bool isEnabledByDefault();
    std::list  check(std::string* addressString, long timeoutMilliseconds, int triesCountInt);
    std::string* toString();

    // Generated
    DiscoverableServiceDefinition(DiscoveryProvider* discoveryProvider, std::string* name, std::string* description, ::com::tibbo::aggregate::common::datatable::DataTable* connectionOptions, int defaultDiscoveryTimeout, int defaultDiscoveryRetries, bool isEnabledByDefault);
protected:
    DiscoverableServiceDefinition(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
