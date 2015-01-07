// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/expression/TestExpressionEvaluation.java

#pragma once

#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/tests/CommonsTestCase.h"



class com::tibbo::aggregate::common::expression::TestExpressionEvaluation
    : public ::com::tibbo::aggregate::common::tests::CommonsTestCase
{

public:
    typedef ::com::tibbo::aggregate::common::tests::CommonsTestCase super;

protected:
    void ctor();

public:
    virtual void testColorFunctions();
    virtual void testComments();
    virtual void testComplexExpressions();
    virtual void testConstants();
    virtual void testDateFunctions();
    virtual void testMathFunctions();
    virtual void testOperators();
    virtual void testOtherFunctions();
    virtual void testPrecedence();
    virtual void testReferenceResolving();
    virtual void testStringFunctions();

    // Generated
    TestExpressionEvaluation();
protected:
    TestExpressionEvaluation(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
