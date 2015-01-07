// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/tests/CommonsTestCase.java

#pragma once

#include <com/tibbo/aggregate/common/tests/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::tests::CommonsTestCase
    : public virtual ::java::lang::Object
{

private:
    CommonsFixture* commonsFixture;

protected:
    void ctor();

public:
    virtual CommonsFixture* getCommonsFixture();

public: /* protected */
    virtual void setUp();
    virtual void tearDown();

public:
    virtual void testNone();

    // Generated
    CommonsTestCase();
protected:
    CommonsTestCase(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
