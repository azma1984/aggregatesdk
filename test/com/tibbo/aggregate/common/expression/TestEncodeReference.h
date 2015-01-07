// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/expression/TestEncodeReference.java

#pragma once

#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/tests/CommonsTestCase.h"



class com::tibbo::aggregate::common::expression::TestEncodeReference
    : public ::com::tibbo::aggregate::common::tests::CommonsTestCase
{

public:
    typedef ::com::tibbo::aggregate::common::tests::CommonsTestCase super;

protected:
    void ctor();

public:
    virtual void testAction();
    virtual void testContextVariable();
    virtual void testEvent();
    virtual void testFunctionWithParameters();
    virtual void testSchemaVariable();
    virtual void testVariable();

    // Generated
    TestEncodeReference();
protected:
    TestEncodeReference(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
