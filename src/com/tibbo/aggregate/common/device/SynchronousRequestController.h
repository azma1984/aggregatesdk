// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/device/SynchronousRequestController.java

#pragma once

#include <com/tibbo/aggregate/common/device/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/context/DefaultRequestController.h"



class com::tibbo::aggregate::common::device::SynchronousRequestController
    : public ::com::tibbo::aggregate::common::context::DefaultRequestController
{

public:
    typedef ::com::tibbo::aggregate::common::context::DefaultRequestController super;
protected:
    void ctor(::java::lang::Long* lockTimeout);

    // Generated

public:
    SynchronousRequestController(::java::lang::Long* lockTimeout);
protected:
    SynchronousRequestController(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
