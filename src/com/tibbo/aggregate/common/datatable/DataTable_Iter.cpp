// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTable.java
#include <com/tibbo/aggregate/common/datatable/DataTable_Iter.h"

#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/util/Iterator.h"
//#include <java/util/List.h"

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::datatable::DataTable_Iter::DataTable_Iter(DataTable *DataTable_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , DataTable_this(DataTable_this)
{
    
}

com::tibbo::aggregate::common::datatable::DataTable_Iter::DataTable_Iter(DataTable *DataTable_this)
    : DataTable_Iter(DataTable_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::datatable::DataTable_Iter::ctor()
{
    super::ctor();
    init();
}

void com::tibbo::aggregate::common::datatable::DataTable_Iter::init()
{
    recsIter = DataTable_this->records)->iterator();
}

bool com::tibbo::aggregate::common::datatable::DataTable_Iter::hasNext()
{
    return recsIter)->hasNext();
}

void* com::tibbo::aggregate::common::datatable::DataTable_Iter::next()
{
    rec = java_cast< DataRecord* >(recsIter)->next());
    return rec;
}

void com::tibbo::aggregate::common::datatable::DataTable_Iter::remove()
{
    recsIter)->remove();
    if(rec != 0) {
        rec)->setTable(0);
    }
}



java::lang::Class* com::tibbo::aggregate::common::datatable::DataTable_Iter::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.DataTable.Iter", 51);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::DataTable_Iter::getClass0()
{
    return class_();
}

