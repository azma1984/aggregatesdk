// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableSorter.java
//#include <com/tibbo/aggregate/common/datatable/DataTableSorter.h"

#include <com/tibbo/aggregate/common/datatable/SortOrder.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/util/Arrays.h"
//#include <java/util/Collection.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
#include <SubArray.h"
#include <ObjectArray.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace com
{
    namespace tibbo
    {
        namespace aggregate
        {
            namespace common
            {
                namespace datatable
                {
typedef ::SubArray< SortOrder, voidArray > SortOrderArray;
                } // datatable
            } // common
        } // aggregate
    } // tibbo
} // com

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

DateDataTableSorter::DataTableSorter(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

DateDataTableSorter::DataTableSorter(SortOrderArray*/*...*/ orders) 
    : DataTableSorter(*static_cast< ::default_init_tag* >(0))
{
    ctor(orders);
}

void DateDataTableSorter::init()
{
    orders = new ::java::util::LinkedList();
}

void DateDataTableSorter::ctor(SortOrderArray*/*...*/ orders)
{
    super::ctor();
    init();
    java_cast< std::list  >(this->orders))->addAll(static_cast< ::java::util::Collection* >(::java::util::Arrays::asList(orders)));
}

std::list  DateDataTableSorter::getOrders()
{
    return orders;
}

void DateDataTableSorter::addOrder(SortOrder* order)
{
    orders)->add(order));
}

java::util::Iterator* DateDataTableSorter::iterator()
{
    return orders)->iterator();
}



java::lang::Class* DateDataTableSorter::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.DataTableSorter", 52);
    return c;
}

java::lang::Class* DateDataTableSorter::getClass0()
{
    return class_();
}

