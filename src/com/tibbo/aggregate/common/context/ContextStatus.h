// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ContextStatus.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::context::ContextStatus
    
{

public:
    typedef void super;

private:
    int status;
    const std::string & comment;
protected:
    void ctor();
    void ctor(int status, const std::string & comment);

public:
    const std::string & getComment();
    int getStatus();
    void setComment(const std::string & comment);
    void setStatus(int status);

    // Generated
    ContextStatus();
    ContextStatus(int status, const std::string & comment);
protected:
    ContextStatus(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
