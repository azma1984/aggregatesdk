// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/datatable/field/TestDataFieldFormat.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/field/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/tests/CommonsTestCase.h"



class com::tibbo::aggregate::common::datatable::field::TestDataFieldFormat
    : public ::com::tibbo::aggregate::common::tests::CommonsTestCase
{

public:
    typedef ::com::tibbo::aggregate::common::tests::CommonsTestCase super;

protected:
    void ctor();

public:
    virtual void testValueToAndFromString();

    // Generated
    TestDataFieldFormat();
protected:
    TestDataFieldFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
