#ifndef DataTableH
#define DataTableH


#include <list>
#include "util/Pointers.h"
#include "util/Cloneable.h"

class DataTable: public Cloneable
{

private:
	//Evaluator * namingEvaluator;
	std::list<DataRecord*> records;

protected:
    static TableFormatPtr DEFAULT_FORMAT;
    long  id;
    TableFormatPtr format;
    std::string invalidationMessage;

    static const std::string ELEMENT_FORMAT;
    static const std::string ELEMENT_FORMAT_ID;
    static const std::string ELEMENT_RECORD;
    static const std::string ELEMENT_INVALIDATOR;
    static const std::string ELEMENT_FIELD_NAME;

    EvaluatorPtr namingEvaluator;

    void addRecordImpl(int index, DataRecordPtr record);
    DataRecordPtr removeRecordImpl(int index);
    const std::string toDefaultString();
    ExpressionPtr getNamingExpression();
    EvaluatorPtr ensureEvaluator();

public:
    TableFormatPtr getDEFAULT_FORMAT();

    DataTable();
    DataTable(TableFormatPtr format);
    DataTable(TableFormatPtr format, int emptyRecords);
    DataTable(TableFormatPtr format, bool createEmptyRecords);
    DataTable(DataRecordPtr record);
    DataTable(TableFormatPtr format, const std::string &dataString, ClassicEncodingSettingsPtr settings);
    DataTable(TableFormatPtr format, std::list<AgObjectPtr> firstRowData);
    DataTable(const std::string & data);
    DataTable(const std::string & data, bool validate);
    DataTable(const std::string & data, ClassicEncodingSettingsPtr settings, bool validate);

    int getRecordCount();
    int getFieldCount();
    TableFormatPtr getFormat();
    FieldFormatPtr getFormat(int field);
    FieldFormatPtr getFormat(const std::string & name);
    long  getId();
    DataTablePtr setFormat(TableFormatPtr format);
    void setId(long id);
    bool hasField(const std::string & field);
    void setInvalidationMessage(const std::string & invalidationMessage);
    void checkOrSetFormat(DataRecordPtr record);

    DataTablePtr addRecord(DataRecordPtr record);
    DataRecordPtr addRecord(std::list<AgObjectPtr> fieldValues);
    DataTablePtr addRecord(int index, DataRecordPtr record);
    DataRecordPtr addRecord();

	void validate();
    void validateRecord(DataRecordPtr record);
    DataTablePtr setRecord(int index, DataRecordPtr record);
    void swapRecords(int index1, int index2);
    std::list<AgObjectPtr>  getRecords();
    bool isInvalid();
    const std::string getInvalidationMessage();
    DataRecordPtr getRecord(int number);
    DataRecordPtr getRecordById(const std::string &id);

    DataRecordPtr removeRecord(int index);
    void removeRecords(DataRecordPtr rec);
    void reorderRecord(DataRecordPtr record, int index);
    bool equals(DataTablePtr obj);
    const std::string getEncodedData(ClassicEncodingSettingsPtr settings);
    const std::string encode();
    const std::string encode(bool useVisibleSeparators);
    const std::string encode(ClassicEncodingSettingsPtr settings);
    const std::string toString();
    const std::string getDescription();

    void fixRecords();
    const std::string dataAsString();
    const std::string dataAsString(bool showFieldNames, bool showHiddenFields);
    bool isOneCellTable();
    bool conform(TableFormatPtr rf);
    const std::string conformMessage(TableFormatPtr rf);
    std::list<DataRecordPtr>  selectAll(DataTableQueryPtr query);
    int  findIndex(DataTableQueryPtr query);

    DataRecordPtr select(DataTableQueryPtr query);
    DataRecordPtr select(const std::string & field, AgObjectPtr value);
    int  findIndex(const std::string & field, AgObjectPtr value);
    void sort(const std::string & field, bool ascending);
    void sort(DataTableSorterPtr sorter);
    //todo
    //void sort(::java::util::Comparator* comparator);

    DataRecordPtr rec();
    AgObjectPtr get();
    void splitFormat();
    void joinFormats();

    //todo
    //::java::util::Iterator* iterator();

    virtual DataTable* clone() const;
    int compareTo(DataTablePtr other);
    void append(DataTablePtr src);
};

#endif
