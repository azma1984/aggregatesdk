// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/AbstractValueWriter.java

#pragma once

#include <com/tibbo/aggregate/common/device/sync/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/device/sync/ValueWriter.h"



class com::tibbo::aggregate::common::device::sync::AbstractValueWriter
    
    , public ValueWriter
{

public:
    typedef void super;

private:
    std::string* name;
protected:
    void ctor(std::string* name);
    void ctor();

public:
    std::string* toString();

    // Generated
    AbstractValueWriter(std::string* name);
    AbstractValueWriter();
protected:
    AbstractValueWriter(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
