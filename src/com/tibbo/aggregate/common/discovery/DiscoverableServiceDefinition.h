#ifndef _DiscoverableServiceDefinition_H_
#define _DiscoverableServiceDefinition_H_

#include "util/Cloneable.h"
//#include "discovery/DiscoveryProvider.h"
#include "discovery/DiscoveryResultItem.h"
#include "device/ServerDeviceController.h"
#include "discovery/DiscoverableService.h"
#include <string>
#include <list>
#include <boost/shared_ptr.hpp>
#include "datatable.h"


class DiscoveryProvider;

class DiscoverableServiceDefinition //: public Cloneable
{
private:
    boost::shared_ptr<DiscoveryProvider> discoveryProvider;
    std::string name;
    std::string description;

 /**
   * In most cases, every record in this table defines an instance of connection and authentication "credentials".
   * 
   * Some services, such as TCP port checker, use the whole table for a single check.
   */

    boost::shared_ptr<DataTable> connectionOptions;
    long discoveryTimeout;
    int discoveryRetries;
    bool useService;
    bool isEnabledByDefault_;

public:
    virtual boost::shared_ptr<DiscoverableService> createServiceInstance();
    std::string getName();
    boost::shared_ptr<DataTable> getConnectionOptions();
    void setConnectionOptions(boost::shared_ptr<DataTable> connectionOptions);
    std::string getDescription();
    long getDiscoveryTimeout();
    void setDiscoveryTimeout(long defaultDiscoveryTimeoutInt);
    int getDiscoveryRetries();
    void setDiscoveryRetries(int defaultDiscoveryRetries);
    boost::shared_ptr<DiscoveryProvider> getDiscoveryProvider();
    std::string deviceType(const std::string& addressStrings);
    int priority();
    boost::shared_ptr<DiscoverableServiceDefinition> clone();
	DiscoverableServiceDefinition(DiscoverableServiceDefinition&); //copy constructor

    void setUseService(bool useService);
    bool isUseService();
    bool isEnabledByDefault();
    std::list<DiscoveryResultItem>  check(const std::string& addressString, long timeoutMilliseconds, int triesCountInt);
    std::string toString();

    DiscoverableServiceDefinition(boost::shared_ptr<DiscoveryProvider> discoveryProvider, const std::string& name, const std::string& description,
                                  boost::shared_ptr<DataTable> connectionOptions, int defaultDiscoveryTimeout, int defaultDiscoveryRetries,
                                  bool isEnabledByDefault1);
	
};
#endif  //DiscoverableServiceDefinition
