// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/plugin/PluginException.java

#pragma once


//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/AggreGateException.h"



class com::tibbo::aggregate::common::plugin::PluginException
    : public ::com::tibbo::aggregate::common::AggreGateException
{

public:
    typedef ::com::tibbo::aggregate::common::AggreGateException super;
protected:
    void ctor(std::string* message);
    void ctor(::java::lang::Throwable* cause);
    void ctor(std::string* message, ::java::lang::Throwable* cause);

    // Generated

public:
    PluginException(std::string* message);
    PluginException(::java::lang::Throwable* cause);
    PluginException(std::string* message, ::java::lang::Throwable* cause);
protected:
    PluginException(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
