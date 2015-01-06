// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/datatable/DataRecord.java

//#include <com/tibbo/aggregate/common/util/PublicCloneable.h"

#include <Cres.h>
#include <data/Data.h>
#include <datatable/DataTable.h>
#include <datatable/FieldFormat.h>
#include <datatable/QueryCondition.h>
#include <datatable/TableFormat.h>
#include <datatable/ValidationException.h>
#include <datatable/encoding/ClassicEncodingSettings.h>
#include <util/CloneUtils.h>
#include <util/Element.h>
#include <util/ElementList.h>
#include <util/StringUtils.h>
#include <util/Util.h>

class DataRecord
{   
public:
	// Generated
    DataRecord();
    DataRecord(TableFormat* tableFormat);
    DataRecord(TableFormat* tableFormat, voidArray* data);
    DataRecord(TableFormat* tableFormat, std::string* dataString, ClassicEncodingSettings* settings, bool validate, std::list  fieldNamesInData);
    DataRecord(TableFormat* tableFormat, std::string* dataString);

    void cloneFormatFromTable();
    std::string* dataAsString(bool showFieldNames, bool showHiddenFields);
    std::string* valueAsString(std::string* name);
    std::string* toString();
    DataTable* wrap();
    DataRecord* clone();    

	DataRecord* setValue(std::string* name, void* value);
    DataRecord* setValue(std::string* name, void* value, bool validate);
    DataRecord* setValueSmart(int index, void* value);
    DataRecord* setValueSmart(std::string* name, void* value);
    DataRecord* addValue(void* value);
	void* getValueDescription(std::string* name);
    std::string getValueAsString(std::string* name);
    std::string getValueAsString(int index);
    DataRecord* setId(std::string* id);

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

	bool equals(void* obj);
    bool hasField(std::string* name);
	bool meetToCondition(QueryCondition* cond);
    void setTable(DataTable* table);
    void setFormat(TableFormat* format);

	int getFieldCount();
    TableFormat* getFormat();
    FieldFormat* getFormat(int index);
    FieldFormat* getFormat(std::string* name);
    std::string getId();
    DataTable* getTable();
    std::string encode(bool useVisibleSeparators);
    std::string encode(::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

	std::string getString(std::string* name);
    std::string getString(int index);
    Integer getInt(std::string* name);
    Integer getInt(int index);
    Boolean getBoolean(std::string* name);
    Boolean getBoolean(int index);
    Long getLong(std::string* name);
    Long getLong(int index);
    Float getFloat(std::string* name);
    Float getFloat(int index);
    Double getDouble(std::string* name);
    Double getDouble(int index);
    Date getDate(std::string* name);
    Date getDate(int index);
    DataTable getDataTable(std::string* name);
    DataTable getDataTable(int index);
	//TODO: java::awt::Color определитбь свой Color
    Color* getColor(std::string* name);
    Color* getColor(int index);
    Data* getData(std::string* name);
    Data* getData(int index);
	//TODO:
    void*/*Object*/ getValue(int index);
    void*/*Object*/ getValue(std::string* name);

protected:    
    void ctor();
    void ctor(TableFormat* tableFormat);
	void ctor(TableFormat* tableFormat, voidArray* data);
	void ctor(TableFormat* tableFormat, std::string* dataString, ClassicEncodingSettings* settings, bool validate, std::list  fieldNamesInData);
	void ctor(TableFormat* tableFormat, std::string* dataString)
	DataRecord(const ::default_init_tag&);

private:
    static const int INITIAL_DATA_SIZE = 4) };
    static const std::string ELEMENT_ID_;
    std::map data;
    TableFormat* format;
    std::string* id;
    DataTable* table;

	void setData(std::string* dataString, ClassicEncodingSettings* settings, bool validate, std::list  fieldNamesInData);
    void checkNumberOfDataFieldsSet(void* value);
    DataRecord* setValue(int index, void* value, bool validate);   
    int findIndex(std::string* name);
    void* getValue(FieldFormat* ff);

};
