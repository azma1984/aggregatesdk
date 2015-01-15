// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/tests/CommonsFixture.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/tests/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::tests::CommonsFixture
    
{

public:
    typedef void super;

private:
    static bool STARTED_;
protected:
    void ctor();
    void ctor(void* obj);

public:
    void setUp() /* throws(Exception) */;
    void tearDown() /* throws(Exception) */;
    static ::com::tibbo::aggregate::common::expression::Evaluator* createTestEvaluator();
    static DataTable* createTestTable();

    // Generated
    CommonsFixture();
    CommonsFixture(void* obj);
protected:
    CommonsFixture(const ::default_init_tag&);


public:
    

private:
    static bool& STARTED();
    ::java::lang::Class* getClass0();
};
