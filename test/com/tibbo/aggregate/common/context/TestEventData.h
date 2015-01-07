// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/context/TestEventData.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/tests/CommonsTestCase.h"



class com::tibbo::aggregate::common::context::TestEventData
    : public ::com::tibbo::aggregate::common::tests::CommonsTestCase
{

public:
    typedef ::com::tibbo::aggregate::common::tests::CommonsTestCase super;

private:
    TestEventData_TestListener* strong1;
    TestEventData_TestListener* strong2;
    TestEventData_TestListener* strong3;
    TestEventData_TestListener* weak1;
    TestEventData_TestListener* weak2;
    TestEventData_TestListener* weak3;

protected:
    void ctor();

public:
    virtual void testWeakAndStrongListeners();

    // Generated
    TestEventData();
protected:
    TestEventData(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
