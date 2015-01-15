// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/context/ContextSecurityException.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/ContextException.h"



class com::tibbo::aggregate::common::context::ContextSecurityException
    : public ContextException
{

public:
    typedef ContextException super;
protected:
    void ctor(const std::string & message);
    void ctor(const std::string & message, ::java::lang::Throwable* cause);

    // Generated

public:
    ContextSecurityException(const std::string & message);
    ContextSecurityException(const std::string & message, ::java::lang::Throwable* cause);
protected:
    ContextSecurityException(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
