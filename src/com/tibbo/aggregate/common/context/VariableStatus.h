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
    const std::string & status;
    const std::string & comment;
protected:
    void ctor(const std::string & status, const std::string & comment);

public:
    const std::string & getComment();
    const std::string & getStatus();
    void setComment(const std::string & comment);
    void setStatus(const std::string & status);

    // Generated
    VariableStatus(const std::string & status, const std::string & comment);
protected:
    VariableStatus(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
