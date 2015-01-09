#ifndef _LOCATION_H_
#define _LOCATION_H_

#include <string>

class Location
{
private:
    float latitude;
    float longitude;

public:
    float getLatitude() {
        return latitude;
    }

    void setLatitude(float latitude) {
        this->latitude = latitude;
    }

    float getLongitude() {
        return longitude;
    }

    void setLongitude(float longitude) {
        this->longitude = longitude;
    }

    std::string toString() {
        std::stringstream ss;
        ss <<"[Lat=" <<latitude <<", Lon=" <<longitude <<"]";

        return ss.str();
    }

    Location(float latitude, float longitude) {
        this->latitude = latitude;
        this->longitude = longitude;
    }

    Location(double latitude, double longitude) {
        this->latitude = static_cast<float>(latitude);
        this->longitude = sttaic_cast<float>(longitude);
    }
};
#endif  //_LOCATION_H_
