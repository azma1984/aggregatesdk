#ifndef DataTableH
#define DataTableH

#include <list>
//#include "Cloneable.h"
//#include "DataRecord.h"
/*
 #include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/Log.h"

#include <com/tibbo/aggregate/common/datatable/DataTable_sort_1.h"
#include <com/tibbo/aggregate/common/datatable/DataTable_DataTableReferenceResolver.h"
#include <com/tibbo/aggregate/common/datatable/DataTable_Iter.h"
#include <com/tibbo/aggregate/common/datatable/DataTableQuery.h"
#include <com/tibbo/aggregate/common/datatable/DataTableSorter.h"
#include <com/tibbo/aggregate/common/datatable/FieldFormat.h"
#include <com/tibbo/aggregate/common/datatable/QueryCondition.h"
#include <com/tibbo/aggregate/common/datatable/SortOrder.h"
#include <com/tibbo/aggregate/common/datatable/TableFormat.h"
#include <com/tibbo/aggregate/common/datatable/ValidationException.h"
#include <com/tibbo/aggregate/common/datatable/encoding/ClassicEncodingSettings.h"
#include <com/tibbo/aggregate/common/datatable/encoding/FormatCache.h"
#include <com/tibbo/aggregate/common/datatable/encoding/KnownFormatCollector.h"
#include <com/tibbo/aggregate/common/datatable/validator/RecordValidator.h"
#include <com/tibbo/aggregate/common/datatable/validator/TableValidator.h"
#include <com/tibbo/aggregate/common/expression/DefaultReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
#include <com/tibbo/aggregate/common/util/CloneUtils.h"
#include <com/tibbo/aggregate/common/util/Element.h"
#include <com/tibbo/aggregate/common/util/ElementList.h"
#include <com/tibbo/aggregate/common/util/StringUtils.h"
#include <com/tibbo/aggregate/common/util/Util.h"
  */

class DataRecord;
class DataTable//: public Cloneable
{

private:
	//Evaluator * namingEvaluator;
	std::list<DataRecord> records;
	/*
		static TableFormat* DEFAULT_FORMAT;
	long  id;
	TableFormat* format;
	const std::string & invalidationMessage;
	static const std::string ELEMENT_FORMAT_;
	static const std::string ELEMENT_FORMAT_ID_;
	static const std::string ELEMENT_RECORD_;
	static const std::string ELEMENT_INVALIDATOR_;
	static const std::string ELEMENT_FIELD_NAME_;

protected:
    void ctor();
    void ctor(TableFormat* format);
    void ctor(TableFormat* format, int emptyRecords);
    void ctor(TableFormat* format, bool createEmptyRecords);
    void ctor(DataRecord* record);
	void ctor(TableFormat* format, const std::string & dataString, encoding::ClassicEncodingSettings* settings);
	void ctor(TableFormat* format, voidArray* firstRowData);
	void ctor(const std::string & data) ;
	void ctor(const std::string & data, bool validate) ;
	void ctor(const std::string & data, encoding::ClassicEncodingSettings* settings, bool validate);

public:
    int getRecordCount();
    int getFieldCount();
    TableFormat* getFormat();
    FieldFormat* getFormat(int field);
    FieldFormat* getFormat(const std::string & name);
    long  getId();
    DataTable* setFormat(TableFormat* format);
    void setId(long  id);
    bool hasField(const std::string & field);
    void setInvalidationMessage(const std::string & invalidationMessage);

public:
    void checkOrSetFormat(DataRecord* record);

public:
    DataTable* addRecord(DataRecord* record);
	DataRecord* addRecord(voidArray* fieldValues);
    DataTable* addRecord(int index, DataRecord* record);
    DataRecord* addRecord();

private:
    void addRecordImpl(int  index, DataRecord* record);

public:
	void validate();
	void validateRecord(DataRecord* record);
    DataTable* setRecord(int index, DataRecord* record);
    void swapRecords(int index1, int index2);
    std::list  getRecords();
    bool isInvalid();
    const std::string & getInvalidationMessage();
    DataRecord* getRecord(int number);
    DataRecord* getRecordById(const std::string & id);

private:
    DataRecord* removeRecordImpl(int index);

public:
    DataRecord* removeRecord(int index);
    void removeRecords(DataRecord* rec);
    void reorderRecord(DataRecord* record, int index);
    bool equals(void* obj);
    const std::string & getEncodedData(encoding::ClassicEncodingSettings* settings);
    const std::string & encode();
    const std::string & encode(bool useVisibleSeparators);
    const std::string & encode(encoding::ClassicEncodingSettings* settings);
    const std::string & toString();
    const std::string & getDescription();

private:
    const std::string & toDefaultString();
    Expression* getNamingExpression();
    Evaluator* ensureEvaluator();

public:
    void fixRecords();
    const std::string & dataAsString();
    const std::string & dataAsString(bool showFieldNames, bool showHiddenFields);
    bool isOneCellTable();
    bool conform(TableFormat* rf);
    const std::string & conformMessage(TableFormat* rf);
    std::list  selectAll(DataTableQuery* query);
    int  findIndex(DataTableQuery* query);
    DataRecord* select(DataTableQuery* query);
    DataRecord* select(const std::string & field, void* value);
    int  findIndex(const std::string & field, void* value);
    void sort(const std::string & field, bool ascending);
    void sort(DataTableSorter* sorter);
    void sort(::java::util::Comparator* comparator);
    DataRecord* rec();
    void* get();
    void splitFormat();
    void joinFormats();
    ::java::util::Iterator* iterator();

    int compareTo(DataTable* other);
    void append(DataTable* src);


    DataTable(TableFormat* format);
    DataTable(TableFormat* format, int emptyRecords);
    DataTable(TableFormat* format, bool createEmptyRecords);
    DataTable(DataRecord* record);
    DataTable(TableFormat* format, const std::string & dataString, encoding::ClassicEncodingSettings* settings);
    DataTable(TableFormat* format, voidArray* firstRowData);
    DataTable(const std::string & data);
    DataTable(const std::string & data, bool validate);
    DataTable(const std::string & data, encoding::ClassicEncodingSettings* settings, bool validate);
protected:
    DataTable(const ::default_init_tag&);





public:
	int compareTo(void* arg0);
	static TableFormat*& DEFAULT_FORMAT();

private:
	static const std::string& ELEMENT_FORMAT();
	static const std::string& ELEMENT_FORMAT_ID();
	static const std::string& ELEMENT_RECORD();
	static const std::string& ELEMENT_INVALIDATOR();
	static const std::string& ELEMENT_FIELD_NAME();
	::java::lang::Class* getClass0();
	friend class DataTable_sort_1;
	friend class DataTable_Iter;
	friend class DataTable_DataTableReferenceResolver;
	*/
public:
	DataTable* clone();
	DataTable(DataTable &table); //конструктор копии
	void init();

	DataTable();

};

#endif
