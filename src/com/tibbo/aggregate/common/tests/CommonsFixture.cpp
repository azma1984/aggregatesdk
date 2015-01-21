// Generated from /aggregate_sdk_5.11.00/test/com/tibbo/aggregate/common/tests/CommonsFixture.java
#include <com/tibbo/aggregate/common/tests/CommonsFixture.h"

#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/expression/DefaultReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
#include <ObjectArray.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::tests::CommonsFixture::CommonsFixture(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::tests::CommonsFixture::CommonsFixture() 
    : CommonsFixture(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::tests::CommonsFixture::CommonsFixture(void* obj) 
    : CommonsFixture(*static_cast< ::default_init_tag* >(0))
{
    ctor(obj);
}

bool& com::tibbo::aggregate::common::tests::CommonsFixture::STARTED()
{
    
    return STARTED_;
}
bool com::tibbo::aggregate::common::tests::CommonsFixture::STARTED_;

void com::tibbo::aggregate::common::tests::CommonsFixture::ctor()
{
    super::ctor();
}

void com::tibbo::aggregate::common::tests::CommonsFixture::ctor(void* obj)
{
    super::ctor();
}

void com::tibbo::aggregate::common::tests::CommonsFixture::setUp() /* throws(Exception) */
{
    if(!STARTED_) {
        ::com::tibbo::aggregate::common::Log::start();
        STARTED_ = true;
    }
}

void com::tibbo::aggregate::common::tests::CommonsFixture::tearDown() /* throws(Exception) */
{
}

Evaluator* com::tibbo::aggregate::common::tests::CommonsFixture::createTestEvaluator()
{
    
    ReferenceResolver* rr = new DefaultReferenceResolver();
    rr)->setDefaultTable(createTestTable());
    auto ev = new Evaluator(rr);
    return ev;
}

DateDataTable* com::tibbo::aggregate::common::tests::CommonsFixture::createTestTable()
{
    
    auto rf = new TableFormat(int(5), int(10));
    rf)->addField(u"<str><S><A=test>"_j);
    rf)->addField(u"<int><I><A=123>"_j);
    rf)->addField(u"<bool><B><A=1>"_j);
    auto table = new DataTable(rf);
    table)->addRecord(new voidArray({u"test"_j), int(123))), ::java::lang::Boolean::valueOf(true))}));
    table)->addRecord(new voidArray({u"second"_j), int(222))), ::java::lang::Boolean::valueOf(true))}));
    table)->addRecord(new voidArray({u"third"_j), -int(111))), ::java::lang::Boolean::valueOf(false))}));
    table)->addRecord(new voidArray({u"fourth"_j), int(444))), ::java::lang::Boolean::valueOf(false))}));
    table)->addRecord(new voidArray({u"fifth"_j), int(666))), ::java::lang::Boolean::valueOf(true))}));
    table)->addRecord(new voidArray({u"sixth"_j), -int(7))), ::java::lang::Boolean::valueOf(true))}));
    table)->addRecord(new voidArray({u"seventh"_j), int(7))), ::java::lang::Boolean::valueOf(false))}));
    return table;
}



java::lang::Class* com::tibbo::aggregate::common::tests::CommonsFixture::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.tests.CommonsFixture", 47);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::tests::CommonsFixture::getClass0()
{
    return class_();
}

