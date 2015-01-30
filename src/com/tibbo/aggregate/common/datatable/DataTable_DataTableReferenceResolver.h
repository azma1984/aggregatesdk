#pragma once

#include "expression/AbstractReferenceResolver.h"



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
