// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataTableBuilding.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::datatable::DataTableBuilding
    
{

public:
    typedef void super;

private:
    static const std::string FIELD_TABLE_FORMAT_MIN_RECORDS_;
    static const std::string FIELD_TABLE_FORMAT_MAX_RECORDS_;
    static const std::string FIELD_TABLE_FORMAT_FIELDS_;
    static const std::string FIELD_TABLE_FORMAT_REORDERABLE_;
    static const std::string FIELD_TABLE_FORMAT_UNRESIZABLE_;
    static const std::string FIELD_TABLE_FORMAT_BINDINGS_;
    static const std::string FIELD_FIELDS_FORMAT_OLDNAME_;
    static const std::string FIELD_FIELDS_FORMAT_NAME_;
    static const std::string FIELD_FIELDS_FORMAT_TYPE_;
    static const std::string FIELD_FIELDS_FORMAT_DESCRIPTION_;
    static const std::string FIELD_FIELDS_FORMAT_DEFAULT_VALUE_;
    static const std::string FIELD_FIELDS_FORMAT_HIDDEN_;
    static const std::string FIELD_FIELDS_FORMAT_INLINE_;
    static const std::string FIELD_FIELDS_FORMAT_READONLY_;
    static const std::string FIELD_FIELDS_FORMAT_NULLABLE_;
    static const std::string FIELD_FIELDS_FORMAT_KEY_;
    static const std::string FIELD_FIELDS_FORMAT_SELVALS_;
    static const std::string FIELD_FIELDS_FORMAT_EXTSELVALS_;
    static const std::string FIELD_FIELDS_FORMAT_HELP_;
    static const std::string FIELD_FIELDS_FORMAT_EDITOR_;
    static const std::string FIELD_FIELDS_FORMAT_EDITOR_OPTIONS_;
    static const std::string FIELD_SELECTION_VALUES_VALUE_;
    static const std::string FIELD_SELECTION_VALUES_DESCRIPTION_;
    static const std::string FIELD_BINDINGS_TARGET_;
    static const std::string FIELD_BINDINGS_EXPRESSION_;
    static TableFormat* SELECTION_VALUES_FORMAT_;
    static TableFormat* BINDINGS_FORMAT_;
    static TableFormat* FIELDS_FORMAT_;
    static TableFormat* TABLE_FORMAT_;

public:
    static TableFormat* createTableFormat(DataTable* formatTable) /* throws(ContextException) */;
    static TableFormat* createTableFormat(DataTable* formatTable, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool allowNull) /* throws(ContextException) */;
    static TableFormat* createTableFormat(int minRecords, int maxRecords, bool reorderable, DataTable* fields, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings) /* throws(ContextException) */;
    static DataTable* formatToFieldsTable(TableFormat* tf, bool readOnly);
    static DataTable* formatToFieldsTable(TableFormat* tf, bool readOnly, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    static DataTable* formatToFieldsTable(TableFormat* tf, bool readOnly, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool ignoreHiddenFields);
    static DataTable* formatToTable(TableFormat* tf, bool ignoreHiddenFields) /* throws(ContextException) */;
    static DataTable* formatToTable(TableFormat* tf) /* throws(ContextException) */;
    static DataTable* formatToTable(TableFormat* tf, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings) /* throws(ContextException) */;
    static DataTable* formatToTable(TableFormat* tf, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool ignoreHiddenFields) /* throws(ContextException) */;

    // Generated
    DataTableBuilding();
protected:
    DataTableBuilding(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& FIELD_TABLE_FORMAT_MIN_RECORDS();
    static const std::string& FIELD_TABLE_FORMAT_MAX_RECORDS();
    static const std::string& FIELD_TABLE_FORMAT_FIELDS();
    static const std::string& FIELD_TABLE_FORMAT_REORDERABLE();
    static const std::string& FIELD_TABLE_FORMAT_UNRESIZABLE();
    static const std::string& FIELD_TABLE_FORMAT_BINDINGS();
    static const std::string& FIELD_FIELDS_FORMAT_OLDNAME();
    static const std::string& FIELD_FIELDS_FORMAT_NAME();
    static const std::string& FIELD_FIELDS_FORMAT_TYPE();
    static const std::string& FIELD_FIELDS_FORMAT_DESCRIPTION();
    static const std::string& FIELD_FIELDS_FORMAT_DEFAULT_VALUE();
    static const std::string& FIELD_FIELDS_FORMAT_HIDDEN();
    static const std::string& FIELD_FIELDS_FORMAT_INLINE();
    static const std::string& FIELD_FIELDS_FORMAT_READONLY();
    static const std::string& FIELD_FIELDS_FORMAT_NULLABLE();
    static const std::string& FIELD_FIELDS_FORMAT_KEY();
    static const std::string& FIELD_FIELDS_FORMAT_SELVALS();
    static const std::string& FIELD_FIELDS_FORMAT_EXTSELVALS();
    static const std::string& FIELD_FIELDS_FORMAT_HELP();
    static const std::string& FIELD_FIELDS_FORMAT_EDITOR();
    static const std::string& FIELD_FIELDS_FORMAT_EDITOR_OPTIONS();
    static const std::string& FIELD_SELECTION_VALUES_VALUE();
    static const std::string& FIELD_SELECTION_VALUES_DESCRIPTION();
    static const std::string& FIELD_BINDINGS_TARGET();
    static const std::string& FIELD_BINDINGS_EXPRESSION();
    static TableFormat*& SELECTION_VALUES_FORMAT();
    static TableFormat*& BINDINGS_FORMAT();
    static TableFormat*& FIELDS_FORMAT();
    static TableFormat*& TABLE_FORMAT();

private:
    ::java::lang::Class* getClass0();
};
