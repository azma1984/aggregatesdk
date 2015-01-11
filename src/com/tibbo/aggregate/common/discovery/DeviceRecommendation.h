#ifndef _DeviceRecommendation_H_
#define _DeviceRecommendation_H_

#include <string>
#include <boost/shared_ptr.hpp>

class DeviceRecommendation
{
private:
    std::string name;
    std::string description;

public:
    // Generated
    DeviceRecommendation() {

    }

    DeviceRecommendation(const std::string& name, const std::string& description) {
        this->name = name;
        this->description = description;
    }

    static boost::shared_ptr<DeviceRecommendation> getBlank() {
        boost::shared_ptr<DeviceRecommendation> blank = new DeviceRecommendation();
        return blank;
    }

    std::string getName() {
        return name;
    }

    std::string getDescription() {
        return description;
    }

    std::string toString() {
        return std::string("DeviceRecommendation [").append(name).append(", ").append(description).append("]");
    }
};
#endif  //_DeviceRecommendation_H_
