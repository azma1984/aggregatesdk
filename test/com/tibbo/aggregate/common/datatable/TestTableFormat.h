// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/datatable/TestTableFormat.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/tests/CommonsTestCase.h"



class com::tibbo::aggregate::common::datatable::TestTableFormat
    : public ::com::tibbo::aggregate::common::tests::CommonsTestCase
{

public:
    typedef ::com::tibbo::aggregate::common::tests::CommonsTestCase super;

protected:
    void ctor();
    /*TableFormat* createFormat(::std::string format); (private) */

public:
    virtual void testEmptyFieldLookup();
    virtual void testTableFormat();

    // Generated
    TestTableFormat();
protected:
    TestTableFormat(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

private:
    virtual ::java::lang::Class* getClass0();
};
