#include "discovery/DiscoveryResultItem.h"


//todo
//DiscoveryResultItem::DiscoveryResultItem(
//		DiscoverableServiceDefinitionPtr aDiscoverableServiceDefinition,
//		DataRecordPtr parametersDataRecord
//)
//{
//	this->serviceDefinition = aDiscoverableServiceDefinition;
//	setParameters(parametersDataRecord);
//}

//todo
//DiscoveryResultItem::DiscoveryResultItem(
//		DiscoverableServiceDefinitionPtr aDiscoverableServiceDefinition,
//		DataRecordPtr parametersDataRecord,
//		DeviceRecommendationPtr aDeviceRecommendation
//){
//	this->deviceRecommendation = aDeviceRecommendation;
//	this->serviceDefinition = aDiscoverableServiceDefinition;
//	setParameters(parametersDataRecord);
//}

//DiscoverableServiceDefinitionPtr DiscoveryResultItem::getServiceDefinition()
//{
//	return serviceDefinition;
//}

DataRecordPtr DiscoveryResultItem::getParameters()
{
    return parameters;
}

void DiscoveryResultItem::setParameters(DataRecordPtr parametersDataRecord)
{
    this->parameters = parametersDataRecord;
}
//
//std::string DiscoveryResultItem::getDeviceName()
//{
//	if (deviceRecommendation != NULL)
//		return deviceRecommendation->getName();
//
//	return "";
//}

//std::string DiscoveryResultItem::getDeviceDescription()
//{
//	if (deviceRecommendation != NULL)
//		return deviceRecommendation->getDescription();
//
//	return "";
//}

//DiscoveryProviderPtr DiscoveryResultItem::getDiscoveryProvider()
//{
//	return serviceDefinition->getDiscoveryProvider();
//}

//std::string DiscoveryResultItem::getServiceName()
//{
//	return serviceDefinition->getName();
//}

//std::string DiscoveryResultItem::getServiceDescription()
//{
//	return serviceDefinition->getDescription();
//}

//bool DiscoveryResultItem::isEnabledByDefault()
//{
//	return serviceDefinition->isEnabledByDefault();
//}

DataTablePtr DiscoveryResultItem::getParametersTable()
{
    return (DataTablePtr)parameters->wrap();
}

//DeviceRecommendationPtr DiscoveryResultItem::getDeviceRecommendation()
//{
//	return deviceRecommendation;
//}

//std::string DiscoveryResultItem::toString()
//{
//	return std::string("DiscoveryResultItem [recommendation= ").append(deviceRecommendation->toString())
//			.append(", parameters= ").append(parameters->toString()).append("]");
//}

