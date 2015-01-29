// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableSorter.java

#pragma once

#include "datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Iterable.h"

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



class DateDataTableSorter
    
    , public ::java::lang::Iterable
{

public:
    typedef void super;

private:
    std::list  orders;
protected:
    void ctor(SortOrderArray*/*...*/ orders);

public:
    std::list  getOrders();
    void addOrder(SortOrder* order);
    ::java::util::Iterator* iterator();

    // Generated
    DataTableSorter(SortOrderArray* orders);
protected:
    DataTableSorter(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
