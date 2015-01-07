// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTable.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/util/Iterator.h"



class com::tibbo::aggregate::common::datatable::DataTable_Iter
    
    , public ::java::util::Iterator
{

public:
    typedef void super;

private:
    ::java::util::Iterator* recsIter;
    DataRecord* rec;

public:
    bool hasNext();
    void* next();
    void remove();

    // Generated
    DataTable_Iter(DataTable *DataTable_this);
protected:
    void ctor();
    DataTable_Iter(DataTable *DataTable_this, const ::default_init_tag&);


public:
    

private:
    void init();
    DataTable *DataTable_this;
    ::java::lang::Class* getClass0();
    friend class DataTable;
    friend class DataTable_sort_1;
    friend class DataTable_DataTableReferenceResolver;
};
