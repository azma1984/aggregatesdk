#ifndef _DATARECORD_H_
#define _DATARECORD_H_

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
#include <util/Cloneable.h>

#include <string>
#include <map>

class DataRecord //:Cloneable//, PublicCloneable
{   
  /*
public:
	// Generated
    DataRecord();
    DataRecord(TableFormat* tableFormat);
    DataRecord(TableFormat* tableFormat, voidArray* data);
    DataRecord(TableFormat* tableFormat, const std::string& dataString, ClassicEncodingSettings* settings, bool validate, std::list<std::string>&  fieldNamesInData);
    DataRecord(TableFormat* tableFormat, const std::string& dataString);
	
	DataRecord(DataRecord&);

    void cloneFormatFromTable();
    std::string dataAsString(bool showFieldNames, bool showHiddenFields);
    std::string valueAsString(const std::string& name);
    std::string toString();
    DataTable* wrap();
    virtual DataRecord* clone() const;    
	//TODO:
	DataRecord* setValue(const std::string& name, void* value);
    DataRecord* setValue(const std::string&name, void* value, bool validate);
    DataRecord* setValueSmart(int index, void* value);
    DataRecord* setValueSmart(const std::string& name, void* value);
    DataRecord* addValue(void* value);
	//TODO:
	void* getValueDescription(const std::string& name);
    std::string getValueAsString(const std::string& name);
    std::string getValueAsString(int index);
    DataRecord* setId(const std::string& id);

	DataRecord* addInt(int val);
    DataRecord* addString(const std::string& val);
    DataRecord* addBoolean(bool val);
    DataRecord* addLong(long val);
    DataRecord* addFloat(float val);
    DataRecord* addDouble(double val);
    DataRecord* addDate(Date* val);
    DataRecord* addDataTable(DataTable* val);
    DataRecord* addColor(::java::awt::Color* val);
    DataRecord* addData(Data* val);
    DataRecord* setValue(int index, void* value);

    bool hasField(const std::string& name);
	bool meetToCondition(QueryCondition* cond);
    void setTable(DataTable* table);
    void setFormat(TableFormat* format);

	int getFieldCount();
    TableFormat* getFormat();
    FieldFormat* getFormat(int index);
    FieldFormat* getFormat(const std::string& name);
    std::string getId();
    DataTable* getTable();
    std::string encode(bool useVisibleSeparators);
    std::string encode(ClassicEncodingSettings* settings);

	std::string getString(const std::string& name);
    std::string getString(int index);
    int getInt(const std::string& name);
    int getInt(int index);
    bool getBoolean(const std::string& name);
    bool getBoolean(int index);
    long getLong(const std::string& name);
    long getLong(int index);
    float getFloat(const std::string& name);
    float getFloat(int index);
    double getDouble(const std::string& name);
    double getDouble(int index);
    Date getDate(const std::string& name);
    Date getDate(int index);
    DataTable getDataTable(const std::string& name);
    DataTable getDataTable(int index);
	//TODO: java::awt::Color определитбь свой Color
    Color getColor(const std::string& name);
    Color getColor(int index);
    Data getData(const std::string& name);
    Data getData(int index);
	//TODO:
    void* getValue(int index);
    void* getValue(const std::string& name);

	//	bool equals(void* obj);
	bool operator==(const DataRecord& dataRecord) const;

protected:    
    void ctor();
    void ctor(TableFormat* tableFormat);
	void ctor(TableFormat* tableFormat, voidArray* data);
	void ctor(TableFormat* tableFormat, const std::string& dataString, ClassicEncodingSettings* settings, bool validate, std::list<std::string>&  fieldNamesInData);
	void ctor(TableFormat* tableFormat, std::string* dataString);

private:
    static int INITIAL_DATA_SIZE;
    static std::string ELEMENT_ID_;
    std::map<std::string, void*> data;
    TableFormat* format;
    std::string id;
    DataTable* table;

	void setData(std::string* dataString, ClassicEncodingSettings* settings, bool validate, std::list<std::string>&  fieldNamesInData);
    void checkNumberOfDataFieldsSet(void* value);
    DataRecord* setValue(int index, void* value, bool validate);   
    int findIndex(std::string* name);
    void* getValue(FieldFormat* ff);*/

};

#endif //_DATARECORD_H_
