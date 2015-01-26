#ifndef _TABLE_FORMAT_H_
#define _TABLE_FORMAT_H_

#include <boost/shared_ptr.hpp>
#include "util/Cloneable.h"
#include "datatable/FieldFormat.h"
#include "binding/Binding.h"
//#include "expression/Expression.h"
#include "datatable/validator/TableValidator.h"
#include "datatable/validator/RecordValidator.h"
#include "datatable/encoding/ClassicEncodingSettings.h"
//#include "datatable/DataTable.h"

#include <string>
#include <list>
#include <map>
#include <vector>

class DataTable;

//todo - class stub
class TableFormat//: public Cloneable
{ 
public:   
	

    static /*boost::shared_ptr<TableFormat>*/TableFormat *EMPTY_FORMAT;
	/*
    static const int DEFAULT_MIN_RECORDS;
    static const int DEFAULT_MAX_RECORDS;

private:
    static const std::string ELEMENT_FLAGS;
    static const std::string ELEMENT_TABLE_VALIDATORS;
    static const std::string ELEMENT_RECORD_VALIDATORS;
    static const std::string ELEMENT_BINDINGS;
    static const std::string ELEMENT_MIN_RECORDS;
    static const std::string ELEMENT_MAX_RECORDS;
    static const std::string ELEMENT_NAMING;

public:
    static const char TABLE_VALIDATOR_KEY_FIELDS;
    static const char TABLE_VALIDATOR_EXPRESSION;
    static const char RECORD_VALIDATOR_KEY_FIELDS;

private:
    static const char REORDERABLE_FLAG;
    static const char UNRESIZEBLE_FLAG;
    static const char BINDINGS_EDITABLE_FLAG;
    std::list<boost::shared_ptr<FieldFormat>>  fields;   //TODO: заменить на vector или std::map<int, FieldFormat> , т.к тербуется доступ по индексу в addField(FieldFormat* ff, int index)
    std::map<std::string, int> fieldLookup;
    int minRecords;
    int maxRecords;
    bool reorderable;*/
    bool unresizable;
   /* bool bindingsEditable;
    std::list<boost::shared_ptr<RecordValidator>>  recordValidators;
    std::list<boost::shared_ptr<TableValidator>>  tableValidators;
    std::list<boost::shared_ptr<Binding>>  bindings;
    boost::shared_ptr<Expression> namingExpression;
	*/
    bool immutable;
    
    boost::shared_ptr<DataTable> immutabilizer;
	/*
protected:
    void ctor();
    void ctor(bool reorderable);
    void ctor(int minRecords, int maxRecords);
    void ctor(const std::string& ff);
    void ctor(const std::string& format, ClassicEncodingSettings* settings);
    void ctor(const std::string& format, ClassicEncodingSettings* settings, bool validate);
    void ctor(int minRecords, int maxRecords, const std::string& fieldFormat);
    void ctor(int minRecords, int maxRecords, boost::shared_ptr<FieldFormat> fieldFormat);

private:
    static void encAppend(std::stringBuffer* buffer, const std::string& name, const std::string& value, ClassicEncodingSettings* settings);

private:
    std::string getEncodedFlags();
    std::string getEncodedTableValidators(ClassicEncodingSettings* settings);
    std::string getEncodedRecordValidators(ClassicEncodingSettings* settings);
    std::string getEncodedBindings(ClassicEncodingSettings* settings);


private:
    void createTableValidators(const std::string& source, ClassicEncodingSettings* settings);
    void createRecordValidators(const std::string& source, ClassicEncodingSettings* settings);
    void createBindings(const std::string& source, ClassicEncodingSettings* settings);
    void createNaming(const std::string& source, ClassicEncodingSettings* settings);

public:
    TableFormat* addFields(std::list<FieldFormat>& fieldFormats);
//    TableFormat* addFields(std::list  fieldFormats);*/
    boost::shared_ptr<TableFormat> addField(boost::shared_ptr<FieldFormat> ff);
	
    boost::shared_ptr<TableFormat> addField(const std::string& encodedFormat);
	/*
    void addField(char type, const std::string& name);
    TableFormat* addField(char type, const std::string& name, const std::string& description);
    TableFormat* addField(char type, const std::string& name, const std::string& description, void* defaultValue);
    TableFormat* addField(char type, const std::string& name, const std::string& description, void* defaultValue, const std::string& group);
    TableFormat* addField(char type, const std::string& name, const std::string& description, void* defaultValue, bool nullable);
    TableFormat* addField(char type, const std::string& name, const std::string& description, void* defaultValue, bool nullable, const std::string& group);
    TableFormat* addField(FieldFormat* ff, int index);
    TableFormat* addField(char type, const std::string& name, int index);
    TableFormat* removeField(const std::string& name);
    TableFormat* renameField(const std::string& oldName, const std::string& newName);
    char getFieldType(int index);
    std::string getFieldName(int index);
    int getFieldIndex(const std::string& name);
    int getFieldCount();
    std::list<FieldFormat>  getFields();
    std::list<RecordValidator>  getRecordValidators();
    std::list<TableValidator>  getTableValidators();
    int getMaxRecords();
    int getMinRecords();
    bool isReorderable();
    bool isUnresizable();*/
    void setUnresizable(bool unresizable);
   /* bool isBindingsEditable();
    void setBindingsEditable(bool bindingsEditable);
    std::list<Binding>  getBindings();*/
    void addBinding(Binding* binding);
  //  void addBinding(Reference* target, Expression* expression); //todo - required Expression.h
    void addBinding(const std::string& target, const std::string& expression);
  /*  void removeBinding(Binding* binding);
//    void setBindings(std::list<Binding>& in_bindings);
    Expression* getNamingExpression();
    std::string encode(bool useVisibleSeparators);
    std::string encode(ClassicEncodingSettings* settings);
//    std::map<std::string, int> getFieldLookup();
    std::string toString();
    FieldFormat* getField(int index);
    FieldFormat* getField(const std::string& fieldName);
    bool hasField(const std::string& name);
    bool hasFields(char type);
    bool hasReadOnlyFields();
    std::list  getKeyFields();
    bool extend(TableFormat* other);
    std::string extendMessage(TableFormat* other);
    void addTableValidator(TableValidator* tv);
    void addRecordValidator(RecordValidator* rv);
    bool isReplicated();
    bool isReadonly();
    bool isGrouped();
    bool isAdvanced();
    bool isSingleRecord();
    bool isSingleField();
    bool isSingleCell();
    bool isEmpty();
    bool isImmutable();
    TableFormat* resetAllowedRecords();
    TableFormat* setMaxRecords(int maxRecords);
    TableFormat* setMinRecords(int minRecords);
    void fixRecords(DataTable* table);

    TableFormat* setReorderable(bool reorderable);
    TableFormat* setNamingExpression(Expression* namingExpression);
	*/
    TableFormat* setNamingExpression(const std::string &namingExpression);
    /*
	int hashCode();    
    TableFormat* clone();
	*/
    void makeImmutable(DataTable* immutabilizer);

   // bool operator==(const TableFormat& tableFormat) const;//equals(void* obj);
	

    TableFormat();
   // TableFormat(bool reorderable);
    TableFormat(int minRecords, int maxRecords);
   // TableFormat(FieldFormat* ff);
   // TableFormat(const std::string& format, ClassicEncodingSettings* settings);
  //  TableFormat(const std::string& format, ClassicEncodingSettings* settings, bool validate);
    TableFormat(int minRecords, int maxRecords, const std::string& fieldFormat);
    TableFormat(int minRecords, int maxRecords, boost::shared_ptr<FieldFormat> fieldFormat);
	


};

#endif  //_TABLE_FORMAT_H_
