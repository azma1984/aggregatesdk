// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/binding/TestBindingUtils.java

#pragma once

#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/tests/CommonsTestCase.h"



class com::tibbo::aggregate::common::binding::TestBindingUtils
    : public ::com::tibbo::aggregate::common::tests::CommonsTestCase
{

public:
    typedef ::com::tibbo::aggregate::common::tests::CommonsTestCase super;

protected:
    void ctor();

public:
    virtual void testFindReferences();

    // Generated
    TestBindingUtils();
protected:
    TestBindingUtils(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
