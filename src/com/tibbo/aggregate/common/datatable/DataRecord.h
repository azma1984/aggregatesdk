#pragma once

#include "data/Data.h"
#include "datatable/DataTable.h"
#include "datatable/TableFormat.h"
#include "datatable/QueryCondition.h"

#include "util/Cloneable.h"
#include "util/Date.h"
#include "util/Pointers.h"
#include "util/Color.h"

#include <string>
#include <map>

class DataRecord : public Cloneable, public AgObject
{   
private:
    static const std::string ELEMENT_ID;
    std::map<std::string, AgObjectPtr> data;
    TableFormatPtr format;
    DataTablePtr table;

    void setData(const std::string &dataString, ClassicEncodingSettingsPtr settings, bool validate, std::list<std::string> fieldNamesInData);
    void checkNumberOfDataFieldsSet(AgObjectPtr value);
    int findIndex(const std::string &name);
    AgObjectPtr getValue(FieldFormatPtr ff);
    DataRecord &setValue(int index, AgObjectPtr value, bool validate);

public:
	
    DataRecord();
    DataRecord(TableFormatPtr tableFormat);
    DataRecord(TableFormatPtr tableFormat, std::list<AgObjectPtr> data);
    DataRecord(TableFormatPtr tableFormat, const std::string& dataString, ClassicEncodingSettingsPtr settings, bool validate, std::list<std::string> fieldNamesInData);
    DataRecord(TableFormatPtr tableFormat, const std::string& dataString);

    int getFieldCount();
    TableFormatPtr getFormat();
    FieldFormatPtr getFormat(int index);
    FieldFormatPtr getFormat(const std::string& name);
    std::string getId();
    DataTablePtr getTable();
    std::string encode(bool useVisibleSeparators);
    std::string encode(ClassicEncodingSettingsPtr settings);

    DataRecord &addInt(int val);
    DataRecord &addString(const std::string& val);
    DataRecord &addBoolean(bool val);
    DataRecord &addLong(long val);
    DataRecord &addFloat(float val);
    DataRecord &addDouble(double val);
    DataRecord &addDate(Date val);
    DataRecord &addDataTable(DataTablePtr val);
    DataRecord &addColor(Color val);
    DataRecord &addData(DataPtr val);
    DataRecord &setValue(int index, AgObjectPtr value);
    DataRecord &setValue(const std::string &name, AgObjectPtr value);
    DataRecord &setValue(const std::string &name, AgObjectPtr value, bool validate);

    DataRecord &setValueSmart(int index, AgObjectPtr value);
    DataRecord &setValueSmart(const std::string& name, AgObjectPtr value);
    DataRecord &addValue(AgObjectPtr value);


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
    DataTablePtr getDataTable(const std::string& name);
    DataTablePtr getDataTable(int index);
    Color getColor(const std::string& name);
    Color getColor(int index);
    DataPtr getData(const std::string& name);
    DataPtr getData(int index);

    AgObjectPtr getValue(int index);
    AgObjectPtr getValue(const std::string& name);
    AgObjectPtr getValueDescription(const std::string& name);
    std::string getValueAsString(const std::string& name);
    std::string getValueAsString(int index);
    DataRecord &setId(const std::string& id);
    void setTable(DataTablePtr table);
    void setFormat(TableFormatPtr format);

    bool hasField(const std::string& name);
    bool meetToCondition(boost::shared_ptr<QueryCondition> cond);

    void cloneFormatFromTable();
    std::string dataAsString(bool showFieldNames, bool showHiddenFields);
    std::string valueAsString(const std::string& name);
    std::string toString();
    boost::shared_ptr<DataTable> wrap();
    //virtual DataRecord* clone() const;  todo

    bool equals(AgObjectPtr obj);
};
