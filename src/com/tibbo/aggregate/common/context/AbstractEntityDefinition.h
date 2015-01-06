// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/AbstractEntityDefinition.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/context/EntityDefinition.h"



class com::tibbo::aggregate::common::context::AbstractEntityDefinition
    
    , public EntityDefinition
{

public:
    typedef void super;

private:
    std::string* name;
    std::string* description;
    std::string* help;
    std::string* group;
    ::java::lang::Integer* index;
    std::string* iconId;
    void* owner;

public:
    std::string* getName();
    void setName(std::string* name);
    void setDescription(std::string* description);
    void setHelp(std::string* help);
    void setGroup(std::string* group);
    std::string* getDescription();
    std::string* getHelp();
    std::string* getGroup();
    ::java::lang::Integer* getIndex();
    void setIndex(::java::lang::Integer* index);
    void setIconId(std::string* iconId);
    std::string* getIconId();
    void* getOwner();
    void setOwner(void* owner);
    std::string* toString();
    std::string* toDetailedString();

    // Generated
    AbstractEntityDefinition();
protected:
    AbstractEntityDefinition(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
