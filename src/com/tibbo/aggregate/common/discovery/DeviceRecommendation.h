// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/discovery/DeviceRecommendation.java

#pragma once

#include <com/tibbo/aggregate/common/discovery/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::discovery::DeviceRecommendation
    
{

public:
    typedef void super;

private:
    std::string* name;
    std::string* description;
protected:
    void ctor();
    void ctor(std::string* name, std::string* description);

public:
    static DeviceRecommendation* getBlank();
    std::string* getName();
    std::string* getDescription();
    std::string* toString();

    // Generated
    DeviceRecommendation();
    DeviceRecommendation(std::string* name, std::string* description);
protected:
    DeviceRecommendation(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
