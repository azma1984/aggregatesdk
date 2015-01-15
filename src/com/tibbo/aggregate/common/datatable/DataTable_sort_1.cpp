// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTable.java
#include <com/tibbo/aggregate/common/datatable/DataTable_sort_1.h"

#include <com/tibbo/aggregate/common/datatable/DataRecord.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableSorter.h"
#include <com/tibbo/aggregate/common/datatable/SortOrder.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/util/Iterator.h"

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

com::tibbo::aggregate::common::datatable::DataTable_sort_1::DataTable_sort_1(DataTable *DataTable_this, DataTableSorter* sorter)
    : super(*static_cast< ::default_init_tag* >(0))
    , DataTable_this(DataTable_this)
    , sorter(sorter)
{
    
    ctor();
}

int com::tibbo::aggregate::common::datatable::DataTable_sort_1::compare(DataRecord* r1, DataRecord* r2)
{
    for (auto _i = sorter)->iterator(); _i->hasNext(); ) {
        SortOrder* order = java_cast< SortOrder* >(_i->next());
        {
            auto v1 = r1)->getValue(order)->getField());
            auto v2 = r2)->getValue(order)->getField());
            if(dynamic_cast< ::java::lang::Comparable* >(v1) != 0 && dynamic_cast< ::java::lang::Comparable* >(v2) != 0) {
                auto res = (java_cast< ::java::lang::Comparable* >(v1)))->compareTo(v2);
                if(res != 0) {
                    return order)->isAscending() ? res : -res;
                }
            }
        }
    }
    return 0;
}

int com::tibbo::aggregate::common::datatable::DataTable_sort_1::compare(void* arg0, void* arg1)
{ 
    return compare(dynamic_cast< DataRecord* >(arg0), dynamic_cast< DataRecord* >(arg1));
}



java::lang::Class* com::tibbo::aggregate::common::datatable::DataTable_sort_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

bool com::tibbo::aggregate::common::datatable::DataTable_sort_1::equals(void* arg0)
{
    return Object::equals(arg0);
}

java::lang::Class* com::tibbo::aggregate::common::datatable::DataTable_sort_1::getClass0()
{
    return class_();
}

