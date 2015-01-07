// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataRecord.java

//#include <com/tibbo/aggregate/common/util/PublicCloneable.h"
/*
#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/data/Data.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/QueryCondition.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/ValidationException.h"
#include <com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.h"
#include <com/tibbo/aggregate/common/util/CloneUtils.h"
#include <com/tibbo/aggregate/common/util/Element.h"
#include <com/tibbo/aggregate/common/util/ElementList.h"
#include <com/tibbo/aggregate/common/util/StringUtils.h"
#include <com/tibbo/aggregate/common/util/Util.h"    */

class DataRecord
{   /*
private:
    static const int INITIAL_DATA_SIZE = 4) };
    static const std::string ELEMENT_ID_;
    std::map data;
    TableFormat* format;
    std::string* id;
    DataTable* table;
protected:
    void ctor();
    void ctor(TableFormat* tableFormat);
	void ctor(TableFormat* tableFormat, voidArray* data);
	void ctor(TableFormat* tableFormat, std::string* dataString, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate, std::list  fieldNamesInData);
	void ctor(TableFormat* tableFormat, std::string* dataString)

private:
	void setData(std::string* dataString, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate, std::list  fieldNamesInData);

public:
    int getFieldCount();
    TableFormat* getFormat();
    FieldFormat* getFormat(int index);
    FieldFormat* getFormat(std::string* name);
    std::string* getId();
    DataTable* getTable();
    std::string* encode(bool useVisibleSeparators);
    std::string* encode(::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

private:
    void checkNumberOfDataFieldsSet(void* value);

public:
    DataRecord* addInt(::java::lang::Integer* val);
    DataRecord* addString(std::string* val);
    DataRecord* addBoolean(::java::lang::Boolean* val);
    DataRecord* addLong(::java::lang::Long* val);
    DataRecord* addFloat(::java::lang::Float* val);
    DataRecord* addDouble(::java::lang::Double* val);
    DataRecord* addDate(::java::util::Date* val);
    DataRecord* addDataTable(DataTable* val);
    DataRecord* addColor(::java::awt::Color* val);
    DataRecord* addData(::com::tibbo::aggregate::common::data::Data* val);
    DataRecord* setValue(int index, void* value);

private:
    DataRecord* setValue(int index, void* value, bool validate);

public:
    DataRecord* setValue(std::string* name, void* value);
    DataRecord* setValue(std::string* name, void* value, bool validate);
    DataRecord* setValueSmart(int index, void* value);
    DataRecord* setValueSmart(std::string* name, void* value);
    DataRecord* addValue(void* value);

private:
    int findIndex(std::string* name);

public:
    std::string* getString(std::string* name);
    std::string* getString(int index);
    ::java::lang::Integer* getInt(std::string* name);
    ::java::lang::Integer* getInt(int index);
    ::java::lang::Boolean* getBoolean(std::string* name);
    ::java::lang::Boolean* getBoolean(int index);
    ::java::lang::Long* getLong(std::string* name);
    ::java::lang::Long* getLong(int index);
    ::java::lang::Float* getFloat(std::string* name);
    ::java::lang::Float* getFloat(int index);
    ::java::lang::Double* getDouble(std::string* name);
    ::java::lang::Double* getDouble(int index);
    ::java::util::Date* getDate(std::string* name);
    ::java::util::Date* getDate(int index);
    DataTable* getDataTable(std::string* name);
    DataTable* getDataTable(int index);
    ::java::awt::Color* getColor(std::string* name);
    ::java::awt::Color* getColor(int index);
    ::com::tibbo::aggregate::common::data::Data* getData(std::string* name);
    ::com::tibbo::aggregate::common::data::Data* getData(int index);
    void* getValue(int index);
    void* getValue(std::string* name);

private:
    void* getValue(FieldFormat* ff);

public:
    void* getValueDescription(std::string* name);
    std::string* getValueAsString(std::string* name);
    std::string* getValueAsString(int index);
    DataRecord* setId(std::string* id);

public:
    void setTable(DataTable* table);

public:
    void setFormat(TableFormat* format);

public:
    bool equals(void* obj);
    bool hasField(std::string* name);

public:
    bool meetToCondition(QueryCondition* cond);

public:
    void cloneFormatFromTable();
    std::string* dataAsString(bool showFieldNames, bool showHiddenFields);
    std::string* valueAsString(std::string* name);
    std::string* toString();
    DataTable* wrap();
    DataRecord* clone();

    // Generated
    DataRecord();
    DataRecord(TableFormat* tableFormat);
    DataRecord(TableFormat* tableFormat, voidArray* data);
    DataRecord(TableFormat* tableFormat, std::string* dataString, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate, std::list  fieldNamesInData);
    DataRecord(TableFormat* tableFormat, std::string* dataString);
protected:
    DataRecord(const ::default_init_tag&);

*/
};
