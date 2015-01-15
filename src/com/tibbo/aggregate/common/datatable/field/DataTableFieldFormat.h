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
    : public FieldFormat
{

public:
    typedef FieldFormat super;
protected:
    void ctor(const std::string & name);

public:
    char16_t getType();
    ::java::lang::Class* getFieldClass();
    ::java::lang::Class* getFieldWrappedClass();
    DataTable* getNotNullDefault();
    DataTable* valueFromString(const std::string & value, encoding::ClassicEncodingSettings* settings, bool validate);
    const std::string & valueToString(DataTable* value, encoding::ClassicEncodingSettings* settings);
    static const std::string encodeEditorOptions(bool showTableData);

    // Generated
    DataTableFieldFormat(const std::string & name);
protected:
    DataTableFieldFormat(const ::default_init_tag&);


public:
    
    const std::string & valueToString(void* value, encoding::ClassicEncodingSettings* settings);
    void* valueFromString(const std::string & value);
    const std::string & valueToString(void* value);

private:
    ::java::lang::Class* getClass0();
    friend class DataTableFieldFormat_DataTableFieldFormat_1;
};
