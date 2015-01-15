// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableUtils.java
#include <com/tibbo/aggregate/common/datatable/DataTableUtils_createEvaluator_1.h"

#include <com/tibbo/aggregate/common/datatable/DataTable.h"

com::tibbo::aggregate::common::datatable::DataTableUtils_createEvaluator_1::DataTableUtils_createEvaluator_1(DataTable* dataTable)
    : super(*static_cast< ::default_init_tag* >(0))
    , dataTable(dataTable)
{
    
    ctor();
}

com::tibbo::aggregate::common::datatable::DataTableUtils_createEvaluator_1::DataTableUtils_createEvaluator_1(DataTable* dataTable, DataTable* defaultTable)
    : super(*static_cast< ::default_init_tag* >(0))
    , dataTable(dataTable)
{
    
    ctor(defaultTable);
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::datatable::DataTableUtils_createEvaluator_1::getDefaultTable()
{
    return dataTable;
}



java::lang::Class* com::tibbo::aggregate::common::datatable::DataTableUtils_createEvaluator_1::class_()
{
    static ::java::lang::Class* c = ::class_(u"", 0);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::datatable::DataTableUtils_createEvaluator_1::getClass0()
{
    return class_();
}

