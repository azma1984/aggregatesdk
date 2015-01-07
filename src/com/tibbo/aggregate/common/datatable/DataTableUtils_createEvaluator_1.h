// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableUtils.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/DefaultReferenceResolver.h"



class com::tibbo::aggregate::common::datatable::DataTableUtils_createEvaluator_1
    : public ::com::tibbo::aggregate::common::expression::DefaultReferenceResolver
{

public:
    typedef ::com::tibbo::aggregate::common::expression::DefaultReferenceResolver super;
    DataTable* getDefaultTable();

    // Generated
    DataTableUtils_createEvaluator_1(DataTable* dataTable);
    DataTableUtils_createEvaluator_1(DataTable* dataTable, DataTable* defaultTable);
    
    DataTable* dataTable;

private:
    ::java::lang::Class* getClass0();
    friend class DataTableUtils;
    friend class DataTableUtils_FilterMode;
};
