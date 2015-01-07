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
    std::string* comment;
protected:
    void ctor();
    void ctor(int status, std::string* comment);

public:
    std::string* getComment();
    int getStatus();
    void setComment(std::string* comment);
    void setStatus(int status);

    // Generated
    ContextStatus();
    ContextStatus(int status, std::string* comment);
protected:
    ContextStatus(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
