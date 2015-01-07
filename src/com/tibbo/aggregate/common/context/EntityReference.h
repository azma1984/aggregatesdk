// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/EntityReference.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/io/Serializable.h"
//#include <java/lang/Cloneable.h"
//#include <java/lang/Comparable.h"



class com::tibbo::aggregate::common::context::EntityReference
    
    , public ::java::io::Serializable
    , public ::java::lang::Cloneable
    , public ::java::lang::Comparable
{

public:
    typedef void super;

private:
    std::string* context;
    std::string* entity;
protected:
    void ctor();
    void ctor(std::string* context, std::string* entity);

public:
    std::string* getContext();
    std::string* getEntity();
    std::string* getProperty();
    void setContext(std::string* context);
    void setEntity(std::string* entity);
    void setProperty(std::string* property);
    int hashCode();
    bool equals(void* obj);
    int compareTo(EntityReference* ref);
    std::string* toString();
    EntityReference* clone();

    // Generated
    EntityReference();
    EntityReference(std::string* context, std::string* entity);
protected:
    EntityReference(const ::default_init_tag&);


public:
    
    int compareTo(void* arg0);

private:
    ::java::lang::Class* getClass0();
};
