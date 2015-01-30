#include "discovery/DiscoverableServiceDefinition.h"



DiscoverableServiceDefinition::DiscoverableServiceDefinition(
        DiscoveryProviderPtr discoveryProvider,
        const std::string& name,
        const std::string& description,
        DataTablePtr connectionOptions,
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
DiscoverableServicePtr DiscoverableServiceDefinition::createServiceInstance()
{
	return DiscoverableServicePtr();//NULL;
}

std::string DiscoverableServiceDefinition::getName()
{
    return name;
}

DataTablePtr DiscoverableServiceDefinition::getConnectionOptions()
{
    return connectionOptions;
}

void DiscoverableServiceDefinition::setConnectionOptions(DataTablePtr connectionOptions)
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

DiscoveryProviderPtr DiscoverableServiceDefinition::getDiscoveryProvider()
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

DiscoverableServiceDefinitionPtr DiscoverableServiceDefinition::clone()
{

   try
    {
      return (DiscoverableServiceDefinitionPtr)(new DiscoverableServiceDefinition(*this));
    }
    catch (...)
    {
      std::cout <<"Unable to clone DiscoverableServiceDescription";
	  return DiscoverableServiceDefinitionPtr();//0;
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

std::list<DiscoveryResultItemPtr>  DiscoverableServiceDefinition::check(const std::string& addressString, long timeoutMilliseconds, int triesCountInt)
{
	//todo - Where the virtual function is defined createServiceInstance()?
  //  std::list<DiscoveryResultItem> res = createServiceInstance()->check(this, addressString, timeoutMilliseconds, triesCountInt);
  //  return res;
  std::list<DiscoveryResultItemPtr>  ret;
  return ret;
}

std::string DiscoverableServiceDefinition::toString()
{
    std::stringstream ss;
    ss <<"DiscoverableServiceDefinition " <<name <<" [" <<discoveryProvider <<", " <<", timeout=" <<discoveryTimeout
       <<", retries=" <<discoveryRetries <<", options=" <<connectionOptions <<"]";

    return ss.str();
}
