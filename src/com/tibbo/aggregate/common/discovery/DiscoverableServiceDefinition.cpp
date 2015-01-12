#include "discovery/DiscoverableServiceDefinition.h"

#include "device/ServerDeviceController.h"
#include "discovery/DiscoverableService.h"

DiscoverableServiceDefinition::DiscoverableServiceDefinition(
        boost::shared_ptr<DiscoveryProvider> discoveryProvider,
        const std::string& name,
        const std::string& description,
        boost::shared_ptr<DataTable> connectionOptions,
        int defaultDiscoveryTimeout,
        int defaultDiscoveryRetries,
        bool isEnabledByDefault
){
    this->discoveryProvider = discoveryProvider;
    this->name = name;
    this->description = description;
    setConnectionOptions(connectionOptions);
    setDiscoveryTimeout(defaultDiscoveryTimeout);
    setDiscoveryRetries(defaultDiscoveryRetries);
    this->isEnabledByDefault = isEnabledByDefault;
}

// TODO: abstarct?
boost::shared_ptr<DiscoverableService> DiscoverableServiceDefinition::createServiceInstance()
{
    return NULL;
}

std::string DiscoverableServiceDefinition::getName()
{
    return name;
}

boost::shared_ptr<DataTable> DiscoverableServiceDefinition::getConnectionOptions()
{
    return connectionOptions;
}

void DiscoverableServiceDefinition::setConnectionOptions(boost::shared_ptr<DataTable> connectionOptions)
{
    this->connectionOptions =connectionOptions;
}

std::string DiscoverableServiceDefinition::getDescription()
{
    return description;
}

long DiscoverableServiceDefinition::getDiscoveryTimeout()
{
    return discoveryTimeout;
}

void DiscoverableServiceDefinition::setDiscoveryTimeout(long defaultDiscoveryTimeoutInt)
{
    this->discoveryTimeout = defaultDiscoveryTimeoutInt;
}

int DiscoverableServiceDefinition::getDiscoveryRetries()
{
    return discoveryRetries;
}

void DiscoverableServiceDefinition::setDiscoveryRetries(int defaultDiscoveryRetries)
{
    this->discoveryRetries = defaultDiscoveryRetries;
}

boost::shared_ptr<DiscoveryProvider> DiscoverableServiceDefinition::getDiscoveryProvider()
{
    return discoveryProvider;
}

std::string DiscoverableServiceDefinition::deviceType(const std::string& addressStrings)
{
    return ServerDeviceController::TYPE_GENERIC;
}

int DiscoverableServiceDefinition::priority()
{
    return 0;
}

//TODO:
boost::shared_ptr<DiscoverableServiceDefinition> DiscoverableServiceDefinition::clone()
{
//    try
//    {
//      return (DiscoverableServiceDefinition) super.clone();
//    }
//    catch (CloneNotSupportedException ex)
//    {
//      Log.CORE.error("Unable to clone DiscoverableServiceDescription", ex);
//      return null;
//    }
}

void DiscoverableServiceDefinition::setUseService(bool useService)
{
    this->useService = useService;
}

bool DiscoverableServiceDefinition::isUseService()
{
    return useService;
}

bool DiscoverableServiceDefinition::isEnabledByDefault()
{
    return isEnabledByDefault_;
}

std::list<DiscoveryResultItem>  DiscoverableServiceDefinition::check(const std::string& addressString, long timeoutMilliseconds, int triesCountInt)
{
    std::list<DiscoveryResultItem> res = createServiceInstance()->check(this, addressString, timeoutMilliseconds, triesCountInt);
    return res;
}

std::string DiscoverableServiceDefinition::toString()
{
    std::stringstream ss;
    ss <<"DiscoverableServiceDefinition " <<name <<" [" <<discoveryProvider <<", " <<", timeout=" <<discoveryTimeout
       <<", retries=" <<discoveryRetries <<", options=" <<connectionOptions <<"]";

    return ss.str();
}
