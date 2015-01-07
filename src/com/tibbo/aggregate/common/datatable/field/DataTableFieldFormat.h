// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/field/DataTableFieldFormat.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/encoding/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/field/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"



class com::tibbo::aggregate::common::datatable::field::DataTableFieldFormat
    : public ::com::tibbo::aggregate::common::datatable::FieldFormat
{

public:
    typedef ::com::tibbo::aggregate::common::datatable::FieldFormat super;
protected:
    void ctor(std::string* name);

public:
    char16_t getType();
    ::java::lang::Class* getFieldClass();
    ::java::lang::Class* getFieldWrappedClass();
    ::com::tibbo::aggregate::common::datatable::DataTable* getNotNullDefault();
    ::com::tibbo::aggregate::common::datatable::DataTable* valueFromString(std::string* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate);
    std::string* valueToString(::com::tibbo::aggregate::common::datatable::DataTable* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    static const std::string encodeEditorOptions(bool showTableData);

    // Generated
    DataTableFieldFormat(std::string* name);
protected:
    DataTableFieldFormat(const ::default_init_tag&);


public:
    
    std::string* valueToString(void* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    void* valueFromString(std::string* value);
    std::string* valueToString(void* value);

private:
    ::java::lang::Class* getClass0();
    friend class DataTableFieldFormat_DataTableFieldFormat_1;
};
