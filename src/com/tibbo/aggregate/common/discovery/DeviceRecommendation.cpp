// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/discovery/DeviceRecommendation.java
#include "discovery/DeviceRecommendation.h"

    
DeviceRecommendation::DeviceRecommendation() 
{

}

DeviceRecommendation::DeviceRecommendation(const std::string& name, const std::string& description) 
{
 this->name = name;
 this->description = description;
}


DeviceRecommendationPtr DeviceRecommendation::getBlank() 
{
 DeviceRecommendationPtr blank = DeviceRecommendationPtr(new DeviceRecommendation());
 return blank;
}

std::string DeviceRecommendation::getName() 
{
 return name;
}

std::string DeviceRecommendation::getDescription() 
{
 return description;
}

std::string DeviceRecommendation::toString() 
{
 return std::string("DeviceRecommendation [").append(name).append(", ").append(description).append("]");
}



