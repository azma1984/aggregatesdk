// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/security/PermissionType.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/security/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::security::PermissionType
    
{

public:
    typedef void super;

private:
    int pattern;
    std::string* name;
    std::string* description;
protected:
    void ctor(int pattern, std::string* name, std::string* description);

public:
    int getPattern();
    void setPattern(int pattern);
    std::string* getName();
    void setName(std::string* name);
    std::string* getDescription();
    void setDescription(std::string* description);

    // Generated
    PermissionType(int pattern, std::string* name, std::string* description);
protected:
    PermissionType(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
