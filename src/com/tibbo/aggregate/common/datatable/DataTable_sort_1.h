// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTable.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/util/Comparator.h"



class com::tibbo::aggregate::common::datatable::DataTable_sort_1
    
    , public ::java::util::Comparator
{

public:
    typedef void super;
    int compare(DataRecord* r1, DataRecord* r2);

    // Generated
    DataTable_sort_1(DataTable *DataTable_this, DataTableSorter* sorter);
    
    bool equals(void* arg0);
    int compare(void* arg0, void* arg1);
    DataTable *DataTable_this;
    DataTableSorter* sorter;

private:
    ::java::lang::Class* getClass0();
    friend class DataTable;
    friend class DataTable_Iter;
    friend class DataTable_DataTableReferenceResolver;
};
