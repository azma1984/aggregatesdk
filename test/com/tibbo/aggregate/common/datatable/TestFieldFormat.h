// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/datatable/TestFieldFormat.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/tests/CommonsTestCase.h"



class com::tibbo::aggregate::common::datatable::TestFieldFormat
    : public ::com::tibbo::aggregate::common::tests::CommonsTestCase
{

public:
    typedef ::com::tibbo::aggregate::common::tests::CommonsTestCase super;

protected:
    void ctor();

public:
    virtual void testClone();
    virtual void testDefaultDescription();
    virtual void testDefaultValue();
    virtual void testDoubleStorage();
    virtual void testFieldFormat();
    virtual void testFloatStorage();
    virtual void testHashCode();

    // Generated
    TestFieldFormat();
protected:
    TestFieldFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
