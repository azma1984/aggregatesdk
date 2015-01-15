// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/sync/AbstractValueReader.java

#pragma once

#include <com/tibbo/aggregate/common/device/sync/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/device/sync/ValueReader.h"



class com::tibbo::aggregate::common::device::sync::AbstractValueReader
    
    , public ValueReader
{

public:
    typedef void super;

private:
    const std::string & name;
protected:
    void ctor();
    void ctor(const std::string & name);

public:
    const std::string & toString();

    // Generated
    AbstractValueReader();
    AbstractValueReader(const std::string & name);
protected:
    AbstractValueReader(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
