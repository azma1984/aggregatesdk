// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/expression/function/TestCalendarFunctions.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/function/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/tests/CommonsTestCase.h"



class com::tibbo::aggregate::common::expression::function::TestCalendarFunctions
    : public ::com::tibbo::aggregate::common::tests::CommonsTestCase
{

public:
    typedef ::com::tibbo::aggregate::common::tests::CommonsTestCase super;

public: /* package */
    static const int day = 18) };

private:
    static ::java::util::GregorianCalendar* gc_;

public: /* package */
    static const int hour = 14) };
    static const int minuts = 55) };
    static const int month = 9) };
    static const int seconds = 0) };

private:
    static ::std::string ts_;
    static ::java::util::TimeZone* tz_;

public: /* package */
    static const int year = 2014) };

protected:
    void ctor();

public:
    virtual void testDateAddFunction();
    virtual void testDateCreateFunction();
    virtual void testDateFunction();

    // Generated
    TestCalendarFunctions();
protected:
    TestCalendarFunctions(const ::default_init_tag&);


public:
    static ::java::lang::Class *class_();

public: /* package */
    static ::java::util::GregorianCalendar*& gc();
    static ::std::string& ts();
    static ::java::util::TimeZone*& tz();

private:
    virtual ::java::lang::Class* getClass0();
};
