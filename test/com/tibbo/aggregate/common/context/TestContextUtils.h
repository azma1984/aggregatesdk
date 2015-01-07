// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/context/TestContextUtils.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/tests/CommonsTestCase.h"



class com::tibbo::aggregate::common::context::TestContextUtils
    : public ::com::tibbo::aggregate::common::tests::CommonsTestCase
{

public:
    typedef ::com::tibbo::aggregate::common::tests::CommonsTestCase super;

protected:
    void ctor();

public:
    virtual void testDefaultDeviceContextName();
    virtual void testMatchesToMask();

    // Generated
    TestContextUtils();
protected:
    TestContextUtils(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
