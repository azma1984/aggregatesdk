// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/expression/function/TestDataTableFunctions.java

#pragma once

#include <com/tibbo/aggregate/common/expression/function/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/tests/CommonsTestCase.h"



class com::tibbo::aggregate::common::expression::function::TestDataTableFunctions
    : public ::com::tibbo::aggregate::common::tests::CommonsTestCase
{

public:
    typedef ::com::tibbo::aggregate::common::tests::CommonsTestCase super;

protected:
    void ctor();

public:
    virtual void testAddRecordsFunction();
    virtual void testAggregateFunction();
    virtual void testConvertFunction();
    virtual void testFilter();
    virtual void testJoinFunction();
    virtual void testRecords();
    virtual void testRemoveColumnsFunction();
    virtual void testSortFunction();
    virtual void testTableFunction();
    virtual void testUnionFunction();

    // Generated
    TestDataTableFunctions();
protected:
    TestDataTableFunctions(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
