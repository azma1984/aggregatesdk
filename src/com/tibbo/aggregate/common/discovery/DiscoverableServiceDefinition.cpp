#include "discovery/DiscoverableServiceDefinition.h"



DiscoverableServiceDefinition::DiscoverableServiceDefinition(
        boost::shared_ptr<DiscoveryProvider> discoveryProvider,
        const std::string& name,
        const std::string& description,
        boost::shared_ptr<DataTable> connectionOptions,
        int defaultDiscoveryTimeout,
        int defaultDiscoveryRetries,
        bool isEnabledByDefault1
){
    this->discoveryProvider = discoveryProvider;
    this->name = name;
    this->description = description;
    setConnectionOptions(connectionOptions);
    setDiscoveryTimeout(defaultDiscoveryTimeout);
    setDiscoveryRetries(defaultDiscoveryRetries);
    this->isEnabledByDefault_ = isEnabledByDefault1;
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

boost::shared_ptr<DiscoverableServiceDefinition> DiscoverableServiceDefinition::clone()
{

   try
    {
      return (boost::shared_ptr<DiscoverableServiceDefinition>)(new DiscoverableServiceDefinition(*this));
    }
    catch (...)
    {
      std::cout <<"Unable to clone DiscoverableServiceDescription";
      return 0;
    }

}
//copy constructor
DiscoverableServiceDefinition::DiscoverableServiceDefinition(DiscoverableServiceDefinition &dsd)
{
  this->discoveryProvider = dsd.discoveryProvider;
  this->name        = dsd.name;
  this->description = dsd.description;

  this->connectionOptions   = dsd.connectionOptions;
  this->discoveryTimeout    = dsd.discoveryTimeout;
  this->discoveryRetries    = dsd.discoveryRetries;
  this->useService          = dsd.useService;
  this->isEnabledByDefault_ = dsd.isEnabledByDefault_;
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
	//todo - Where the virtual function is defined createServiceInstance()?
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
