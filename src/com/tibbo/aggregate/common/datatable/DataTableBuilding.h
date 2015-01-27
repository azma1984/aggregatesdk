#pragma once

#include <string>
#include "util/Pointers.h"

class DateDataTableBuilding
{

public:
    static const std::string FIELD_TABLE_FORMAT_MIN_RECORDS;
    static const std::string FIELD_TABLE_FORMAT_MAX_RECORDS;
    static const std::string FIELD_TABLE_FORMAT_FIELDS;
    static const std::string FIELD_TABLE_FORMAT_REORDERABLE;
    static const std::string FIELD_TABLE_FORMAT_UNRESIZABLE;
    static const std::string FIELD_TABLE_FORMAT_BINDINGS;
    static const std::string FIELD_FIELDS_FORMAT_OLDNAME;
    static const std::string FIELD_FIELDS_FORMAT_NAME;
    static const std::string FIELD_FIELDS_FORMAT_TYPE;
    static const std::string FIELD_FIELDS_FORMAT_DESCRIPTION;
    static const std::string FIELD_FIELDS_FORMAT_DEFAULT_VALUE;
    static const std::string FIELD_FIELDS_FORMAT_HIDDEN;
    static const std::string FIELD_FIELDS_FORMAT_INLINE;
    static const std::string FIELD_FIELDS_FORMAT_READONLY;
    static const std::string FIELD_FIELDS_FORMAT_NULLABLE;
    static const std::string FIELD_FIELDS_FORMAT_KEY;
    static const std::string FIELD_FIELDS_FORMAT_SELVALS;
    static const std::string FIELD_FIELDS_FORMAT_EXTSELVALS;
    static const std::string FIELD_FIELDS_FORMAT_HELP;
    static const std::string FIELD_FIELDS_FORMAT_EDITOR;
    static const std::string FIELD_FIELDS_FORMAT_EDITOR_OPTIONS;
    static const std::string FIELD_SELECTION_VALUES_VALUE;
    static const std::string FIELD_SELECTION_VALUES_DESCRIPTION;
    static const std::string FIELD_BINDINGS_TARGET;
    static const std::string FIELD_BINDINGS_EXPRESSION;

private:
    TableFormatPtr SELECTION_VALUES_FORMAT;
    TableFormatPtr BINDINGS_FORMAT;
    TableFormatPtr FIELDS_FORMAT;
    TableFormatPtr TABLE_FORMAT;

public:
    static DateDataTableBuilding& instance()
    {
        static DateDataTableBuilding dateDataTableBuilding;
        return dateDataTableBuilding;
    }


private:
    DateDataTableBuilding();

/*
//    static TableFormat* createTableFormat(DataTable* formatTable) ;
//    static TableFormat* createTableFormat(DataTable* formatTable, encoding::ClassicEncodingSettings* settings, bool allowNull) ;
//    static TableFormat* createTableFormat(int minRecords, int maxRecords, bool reorderable, DataTable* fields, encoding::ClassicEncodingSettings* settings) ;
//    static DataTable* formatToFieldsTable(TableFormat* tf, bool readOnly);
//    static DataTable* formatToFieldsTable(TableFormat* tf, bool readOnly, encoding::ClassicEncodingSettings* settings);
//    static DataTable* formatToFieldsTable(TableFormat* tf, bool readOnly, encoding::ClassicEncodingSettings* settings, bool ignoreHiddenFields);
//    static DataTable* formatToTable(TableFormat* tf, bool ignoreHiddenFields) ;
//    static DataTable* formatToTable(TableFormat* tf) ;
//    static DataTable* formatToTable(TableFormat* tf, encoding::ClassicEncodingSettings* settings) ;
//    static DataTable* formatToTable(TableFormat* tf, encoding::ClassicEncodingSettings* settings, bool ignoreHiddenFields) ;
//
//    // Generated
//    DataTableBuilding();
//protected:
//    DataTableBuilding(const ::default_init_tag&);
//
//
//public:
//
//    static void
//    static const std::string& FIELD_TABLE_FORMAT_MIN_RECORDS();
//    static const std::string& FIELD_TABLE_FORMAT_MAX_RECORDS();
//    static const std::string& FIELD_TABLE_FORMAT_FIELDS();
//    static const std::string& FIELD_TABLE_FORMAT_REORDERABLE();
//    static const std::string& FIELD_TABLE_FORMAT_UNRESIZABLE();
//    static const std::string& FIELD_TABLE_FORMAT_BINDINGS();
//    static const std::string& FIELD_FIELDS_FORMAT_OLDNAME();
//    static const std::string& FIELD_FIELDS_FORMAT_NAME();
//    static const std::string& FIELD_FIELDS_FORMAT_TYPE();
//    static const std::string& FIELD_FIELDS_FORMAT_DESCRIPTION();
//    static const std::string& FIELD_FIELDS_FORMAT_DEFAULT_VALUE();
//    static const std::string& FIELD_FIELDS_FORMAT_HIDDEN();
//    static const std::string& FIELD_FIELDS_FORMAT_INLINE();
//    static const std::string& FIELD_FIELDS_FORMAT_READONLY();
//    static const std::string& FIELD_FIELDS_FORMAT_NULLABLE();
//    static const std::string& FIELD_FIELDS_FORMAT_KEY();
//    static const std::string& FIELD_FIELDS_FORMAT_SELVALS();
//    static const std::string& FIELD_FIELDS_FORMAT_EXTSELVALS();
//    static const std::string& FIELD_FIELDS_FORMAT_HELP();
//    static const std::string& FIELD_FIELDS_FORMAT_EDITOR();
//    static const std::string& FIELD_FIELDS_FORMAT_EDITOR_OPTIONS();
//    static const std::string& FIELD_SELECTION_VALUES_VALUE();
//    static const std::string& FIELD_SELECTION_VALUES_DESCRIPTION();
//    static const std::string& FIELD_BINDINGS_TARGET();
//    static const std::string& FIELD_BINDINGS_EXPRESSION();
//    static TableFormat*& SELECTION_VALUES_FORMAT();
//    static TableFormat*& BINDINGS_FORMAT();
//    static TableFormat*& FIELDS_FORMAT();
//    static TableFormat*& TABLE_FORMAT();
*/
};
