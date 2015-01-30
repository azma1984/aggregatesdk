#ifndef DeviceRecommendationH
#define DeviceRecommendationH

#include <string>
 #include "util/pointers.h"
class DeviceRecommendation
{
private:
    std::string name;
    std::string description;

public:
	static DeviceRecommendationPtr getBlank();
    std::string getName();
    std::string getDescription();
    std::string toString(); 

	DeviceRecommendation();
    DeviceRecommendation(const std::string& name, const std::string& description);
};
#endif  //DeviceRecommendationH
