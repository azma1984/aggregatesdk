// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/data/Location.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/data/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::data::Location
    
{

public:
    typedef void super;

private:
    float latitude;
    float longitude;
protected:
    void ctor(float latitude, float longitude);
    void ctor(double latitude, double longitude);

public:
    float getLatitude();
    void setLatitude(float latitude);
    float getLongitude();
    void setLongitude(float longitude);
    std::string* toString();

    // Generated
    Location(float latitude, float longitude);
    Location(double latitude, double longitude);
protected:
    Location(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
