#ifndef DataTableH
#define DataTableH

#include <list>
#include "Cloneable.h"
#include "DataRecord.h"
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

class DataTable: public Cloneable
{

private:
	//Evaluator * namingEvaluator;
	std::list<DataRecord> records;
	/*
		static TableFormat* DEFAULT_FORMAT;
	::java::lang::Long* id;
	TableFormat* format;
	std::string* invalidationMessage;
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
	void ctor(TableFormat* format, std::string* dataString, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
	void ctor(TableFormat* format, voidArray* firstRowData);
	void ctor(std::string* data) ;
	void ctor(std::string* data, bool validate) ;
	void ctor(std::string* data, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate);

public:
    int getRecordCount();
    int getFieldCount();
    TableFormat* getFormat();
    FieldFormat* getFormat(int field);
    FieldFormat* getFormat(std::string* name);
    ::java::lang::Long* getId();
    DataTable* setFormat(TableFormat* format);
    void setId(::java::lang::Long* id);
    bool hasField(std::string* field);
    void setInvalidationMessage(std::string* invalidationMessage);

public:
    void checkOrSetFormat(DataRecord* record);

public:
    DataTable* addRecord(DataRecord* record);
	DataRecord* addRecord(voidArray* fieldValues);
    DataTable* addRecord(int index, DataRecord* record);
    DataRecord* addRecord();

private:
    void addRecordImpl(::java::lang::Integer* index, DataRecord* record);

public:
	void validate();
	void validateRecord(DataRecord* record);
    DataTable* setRecord(int index, DataRecord* record);
    void swapRecords(int index1, int index2);
    std::list  getRecords();
    bool isInvalid();
    std::string* getInvalidationMessage();
    DataRecord* getRecord(int number);
    DataRecord* getRecordById(std::string* id);

private:
    DataRecord* removeRecordImpl(int index);

public:
    DataRecord* removeRecord(int index);
    void removeRecords(DataRecord* rec);
    void reorderRecord(DataRecord* record, int index);
    bool equals(void* obj);
    std::string* getEncodedData(::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    std::string* encode();
    std::string* encode(bool useVisibleSeparators);
    std::string* encode(::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    std::string* toString();
    std::string* getDescription();

private:
    std::string* toDefaultString();
    ::com::tibbo::aggregate::common::expression::Expression* getNamingExpression();
    ::com::tibbo::aggregate::common::expression::Evaluator* ensureEvaluator();

public:
    void fixRecords();
    std::string* dataAsString();
    std::string* dataAsString(bool showFieldNames, bool showHiddenFields);
    bool isOneCellTable();
    bool conform(TableFormat* rf);
    std::string* conformMessage(TableFormat* rf);
    std::list  selectAll(DataTableQuery* query);
    ::java::lang::Integer* findIndex(DataTableQuery* query);
    DataRecord* select(DataTableQuery* query);
    DataRecord* select(std::string* field, void* value);
    ::java::lang::Integer* findIndex(std::string* field, void* value);
    void sort(std::string* field, bool ascending);
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
    DataTable(TableFormat* format, std::string* dataString, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    DataTable(TableFormat* format, voidArray* firstRowData);
    DataTable(std::string* data);
    DataTable(std::string* data, bool validate);
    DataTable(std::string* data, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate);
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
	DataTable(DataTable&); //конструктор копии
	void init();

	DataTable();

};

#endif
