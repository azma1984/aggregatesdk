// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/VariableStatus.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::context::VariableStatus
    
{

public:
    typedef void super;

private:
    std::string* status;
    std::string* comment;
protected:
    void ctor(std::string* status, std::string* comment);

public:
    std::string* getComment();
    std::string* getStatus();
    void setComment(std::string* comment);
    void setStatus(std::string* status);

    // Generated
    VariableStatus(std::string* status, std::string* comment);
protected:
    VariableStatus(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
