// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/DataTableFieldFormat.java

#pragma once

#include "datatable/field/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include "datatable/validator/AbstractFieldValidator.h"



class Datefield::DataTableFieldFormat_DataTableFieldFormat_1
    : public validator::AbstractFieldValidator
{

public:
    typedef validator::AbstractFieldValidator super;
    void* validate(void* value) /* throws(ValidationException) */;

    // Generated
    DataTableFieldFormat_DataTableFieldFormat_1(DataTableFieldFormat *DataTableFieldFormat_this);
    
    DataTableFieldFormat *DataTableFieldFormat_this;

private:
    ::java::lang::Class* getClass0();
    friend class DataTableFieldFormat;
};
