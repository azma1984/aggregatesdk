// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/datatable/TestDataTableNaming.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/tests/CommonsTestCase.h"



class com::tibbo::aggregate::common::datatable::TestDataTableNaming
    : public ::com::tibbo::aggregate::common::tests::CommonsTestCase
{

public:
    typedef ::com::tibbo::aggregate::common::tests::CommonsTestCase super;

private:
    DataTable* dataTable;

protected:
    void ctor();

public: /* protected */
    void setUp() override;
    void tearDown() override;

public:
    virtual void testGetDescription();

    // Generated
    TestDataTableNaming();
protected:
    TestDataTableNaming(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
