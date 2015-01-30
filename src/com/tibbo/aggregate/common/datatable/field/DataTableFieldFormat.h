#pragma once

#include "datatable/FieldFormat.h"
#include "datatable/DataTable.h"

class DataTableFieldFormat
    : public FieldFormat
{
public:
    char getType();
//    ::java::lang::Class* getFieldClass();
//    ::java::lang::Class* getFieldWrappedClass();
    DataTable* getNotNullDefault();
    DataTable* valueFromString(const std::string& value, ClassicEncodingSettingsPtr settings, bool validate);
    const std::string & valueToString(DataTablePtr value, ClassicEncodingSettingsPtr settings);
    static const std::string encodeEditorOptions(bool showTableData);

    DataTableFieldFormat(const std::string & name);
};
