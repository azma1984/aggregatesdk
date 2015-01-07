// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/datatable/TestDataTable.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/tests/CommonsTestCase.h"



class com::tibbo::aggregate::common::datatable::TestDataTable
    : public ::com::tibbo::aggregate::common::tests::CommonsTestCase
{

public:
    typedef ::com::tibbo::aggregate::common::tests::CommonsTestCase super;

private:
    DataTable* dt;

protected:
    void ctor();
    /*TableFormat* createFormat(::std::string format); (private) */

public: /* protected */
    void setUp() override;
    void tearDown() override;

public:
    virtual void testClone();
    virtual void testDataTable();
    virtual void testInnerTableRecordsAreFilledProperly();
    virtual void testParameterizedReportThatWorksIncorrectly();

    // Generated
    TestDataTable();
protected:
    TestDataTable(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
