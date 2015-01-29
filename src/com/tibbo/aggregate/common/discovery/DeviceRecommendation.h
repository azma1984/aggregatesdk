#ifndef _DeviceRecommendation_H_
#define _DeviceRecommendation_H_

#include <string>
#include <boost/shared_ptr.hpp>
 #include "util/pointers.h"
class DeviceRecommendation
{
private:
    std::string name;
    std::string description;

public:
    //static DeviceRecommendationPtr getBlank();  todo
    std::string getName();
    std::string getDescription();
    std::string toString(); 

	DeviceRecommendation();
    DeviceRecommendation(const std::string& name, const std::string& description);
};
#endif  //_DeviceRecommendation_H_
