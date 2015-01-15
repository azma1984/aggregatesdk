#include "discovery/DiscoveryResultItem.h"


DiscoveryResultItem::DiscoveryResultItem(
        boost::shared_ptr<DiscoverableServiceDefinition> aDiscoverableServiceDefinition,
        boost::shared_ptr<DataRecord> parametersDataRecord
){
    this->serviceDefinition = aDiscoverableServiceDefinition;
    setParameters(parametersDataRecord);
}

DiscoveryResultItem::DiscoveryResultItem(
        boost::shared_ptr<DiscoverableServiceDefinition> aDiscoverableServiceDefinition,
        boost::shared_ptr<DataRecord> parametersDataRecord,
        boost::shared_ptr<DeviceRecommendation> aDeviceRecommendation
){
    this->deviceRecommendation = aDeviceRecommendation;
    this->serviceDefinition = aDiscoverableServiceDefinition;
    setParameters(parametersDataRecord);
}

boost::shared_ptr<DiscoverableServiceDefinition> DiscoveryResultItem::getServiceDefinition()
{
    return serviceDefinition;
}

boost::shared_ptr<DataRecord> DiscoveryResultItem::getParameters()
{
    return parameters;
}

void DiscoveryResultItem::setParameters(boost::shared_ptr<DataRecord> parametersDataRecord)
{
    this->parameters = parametersDataRecord;
}

std::string DiscoveryResultItem::getDeviceName()
{
    if (deviceRecommendation != NULL)
        return deviceRecommendation->getName();

    return "";
}

std::string DiscoveryResultItem::getDeviceDescription()
{
    if (deviceRecommendation != NULL)
        return deviceRecommendation->getDescription();

    return "";
}

boost::shared_ptr<DiscoveryProvider> DiscoveryResultItem::getDiscoveryProvider()
{
    return serviceDefinition->getDiscoveryProvider();
}

std::string DiscoveryResultItem::getServiceName()
{
    return serviceDefinition->getName();
}

std::string DiscoveryResultItem::getServiceDescription()
{
    return serviceDefinition->getDescription();
}

bool DiscoveryResultItem::isEnabledByDefault()
{
    return serviceDefinition->isEnabledByDefault();
}

boost::shared_ptr<DataTable> DiscoveryResultItem::getParametersTable()
{
    return (boost::shared_ptr<DataTable>)parameters->wrap();
}

boost::shared_ptr<DeviceRecommendation> DiscoveryResultItem::getDeviceRecommendation()
{
    return deviceRecommendation;
}

std::string DiscoveryResultItem::toString()
{
    return std::string("DiscoveryResultItem [recommendation= ").append(deviceRecommendation->toString())
            .append(", parameters= ").append(parameters->toString()).append("]");
}

