#include "discovery/DiscoverableServiceDefinition.h"


DiscoverableServiceDefinition::DiscoverableServiceDefinition(
        boost::shared_ptr<DiscoveryProvider> discoveryProvider,
        const std::string& name,
        const std::string& description,
        boost::shared_ptr<DataTable> connectionOptions,
        int defaultDiscoveryTimeout,
        int defaultDiscoveryRetries,
        bool isEnabledByDefault
){

}

boost::shared_ptr<DiscoverableService> DiscoverableServiceDefinition::createServiceInstance()
{

}

std::string DiscoverableServiceDefinition::getName()
{

}

boost::shared_ptr<DataTable> DiscoverableServiceDefinition::getConnectionOptions()
{

}

void DiscoverableServiceDefinition::setConnectionOptions(boost::shared_ptr<DataTable> connectionOptions)
{

}

std::string DiscoverableServiceDefinition::getDescription()
{

}

long DiscoverableServiceDefinition::getDiscoveryTimeout()
{

}

void DiscoverableServiceDefinition::setDiscoveryTimeout(long defaultDiscoveryTimeoutInt)
{

}

int DiscoverableServiceDefinition::getDiscoveryRetries()
{

}

void DiscoverableServiceDefinition::setDiscoveryRetries(int defaultDiscoveryRetries)
{

}

boost::shared_ptr<DiscoveryProvider> DiscoverableServiceDefinition::getDiscoveryProvider()
{

}

std::string DiscoverableServiceDefinition::deviceType(const std::string& addressStrings)
{

}

int DiscoverableServiceDefinition::priority()
{

}

boost::shared_ptr<DiscoverableServiceDefinition> DiscoverableServiceDefinition::clone()
{

}

void DiscoverableServiceDefinition::setUseService(bool useService)
{

}

bool DiscoverableServiceDefinition::isUseService()
{

}

bool DiscoverableServiceDefinition::isEnabledByDefault()
{

}

std::list<DiscoveryResultItem>  DiscoverableServiceDefinition::check(const std::string& addressString, long timeoutMilliseconds, int triesCountInt)
{

}

std::string DiscoverableServiceDefinition::toString()
{

}
