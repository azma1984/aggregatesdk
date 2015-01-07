// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/expression/TestDecodeReference.java

#pragma once

#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/tests/CommonsTestCase.h"



class com::tibbo::aggregate::common::expression::TestDecodeReference
    : public ::com::tibbo::aggregate::common::tests::CommonsTestCase
{

public:
    typedef ::com::tibbo::aggregate::common::tests::CommonsTestCase super;

protected:
    void ctor();

public:
    virtual void testComplex();
    virtual void testContext();
    virtual void testContextAction();
    virtual void testContextActionWithField();
    virtual void testContextEntityProperty();
    virtual void testContextEvent();
    virtual void testContextWithEntity();
    virtual void testEntityProperty();
    virtual void testEntityWithoutField();
    virtual void testEvent();
    virtual void testField();
    virtual void testFunction();
    virtual void testFunctionWithDifferentParameters();
    virtual void testFunctionWithEmptyParameters();
    virtual void testFunctionWithExpressionParameters();
    virtual void testFunctionWithQuotedParameters();
    virtual void testShemaWithContext();

    // Generated
    TestDecodeReference();
protected:
    TestDecodeReference(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
