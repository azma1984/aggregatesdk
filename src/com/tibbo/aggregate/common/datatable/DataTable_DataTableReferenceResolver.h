// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTable.java

#pragma once

#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/AbstractReferenceResolver.h"



class DateDataTable_DataTableReferenceResolver
    : public AbstractReferenceResolver
{

public:
    typedef AbstractReferenceResolver super;
    void* resolveReference(Reference* ref, EvaluationEnvironment* resolvingEnvironment) /* throws(SyntaxErrorException, ContextException) */;

    // Generated
    DataTable_DataTableReferenceResolver(DataTable *DataTable_this);
protected:
    DataTable_DataTableReferenceResolver(DataTable *DataTable_this, const ::default_init_tag&);


public:
    
    DataTable *DataTable_this;

private:
    ::java::lang::Class* getClass0();
    friend class DataTable;
    friend class DataTable_sort_1;
    friend class DataTable_Iter;
};
