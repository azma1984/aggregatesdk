// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTable.java
#include <com/tibbo/aggregate/common/datatable/DataTable_DataTableReferenceResolver.h"

#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableUtils.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

DateDataTable_DataTableReferenceResolver::DataTable_DataTableReferenceResolver(DataTable *DataTable_this, const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
    , DataTable_this(DataTable_this)
{
    
}

DateDataTable_DataTableReferenceResolver::DataTable_DataTableReferenceResolver(DataTable *DataTable_this)
    : DataTable_DataTableReferenceResolver(DataTable_this, *static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void* DateDataTable_DataTableReferenceResolver::resolveReference(Reference* ref, EvaluationEnvironment* resolvingEnvironment) /* throws(SyntaxErrorException, ContextException) */
{
    if(DataTableUtils::NAMING_ENVIRONMENT_SHORT_DATA())->equals(ref)->getField()))) {
        return DataTable_this->dataAsString(false, false);
    }
    if(DataTableUtils::NAMING_ENVIRONMENT_FULL_DATA())->equals(ref)->getField()))) {
        return DataTable_this->dataAsString(true, false);
    }
    return 0;
}



java::lang::Class* DateDataTable_DataTableReferenceResolver::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.datatable.DataTable.DataTableReferenceResolver", 73);
    return c;
}

java::lang::Class* DateDataTable_DataTableReferenceResolver::getClass0()
{
    return class_();
}

