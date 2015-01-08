#ifndef _TABLE_FORMAT_H_
#define _TABLE_FORMAT_H_

#include <boost/shared_ptr.hpp>
#include "util/Cloneable.h"
#include "datatable/FieldFormat.h"
#include "binding/Binding.h"
#include "expression/Expression.h"
#include "datatable/validator/TableValidator.h"
#include "datatable/validator/RecordValidator.h"

#include <string>
#include <list>
#include <map>
#include <vector>


class TableFormat: public Cloneable
{    
/*
public:
    static boost::shared_ptr<TableFormat> EMPTY_FORMAT;
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
    static const char TABLE_VALIDATOR_KEY_FIELDS{'1'};
    static const char TABLE_VALIDATOR_EXPRESSION;
    static const char RECORD_VALIDATOR_KEY_FIELDS;

private:
    static const char REORDERABLE_FLAG;
    static const char UNRESIZEBLE_FLAG;
    static const char BINDINGS_EDITABLE_FLAG;
<<<<<<< HEAD
   // std::list<FieldFormat>  fields;
=======
    std::list<FieldFormat>  fields;   //TODO: заменить на vector или std::map<int, FieldFormat> , т.к тербуется доступ по индексу в addField(FieldFormat* ff, int index)
>>>>>>> 5d707ae527bcd11441b432f4fb6d3b4bf6646f98
    std::map<std::string, int> fieldLookup;
    int minRecords;
    int maxRecords;
    bool reorderable;
    bool unresizable;
    bool bindingsEditable;
    std::list<RecordValidator>  recordValidators;
    std::list<TableValidator>  tableValidators;
    std::list<Binding>  bindings;
    boost::shared_ptr<Expression> namingExpression;
    bool immutable;
    boost::shared_ptr<DataTable> immutabilizer;

protected:
    void ctor();
    void ctor(bool reorderable);
    void ctor(int minRecords, int maxRecords);
    void ctor(const std::string& ff);
    void ctor(const std::string& format, ClassicEncodingSettings* settings);
    void ctor(const std::string& format, ClassicEncodingSettings* settings, bool validate);
    void ctor(int minRecords, int maxRecords, const std::string& fieldFormat);
    void ctor(int minRecords, int maxRecords, FieldFormat* fieldFormat);    

private:
    static void encAppend(std::stringBuffer* buffer, const std::string& name, const std::string& value, ClassicEncodingSettings* settings);

private:
    std::string getEncodedFlags();
    std::string getEncodedTableValidators(ClassicEncodingSettings* settings);
    std::string getEncodedRecordValidators(ClassicEncodingSettings* settings);
    std::string getEncodedBindings(ClassicEncodingSettings* settings);


private:
    void createTableValidators(std::string* source, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    void createRecordValidators(std::string* source, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    void createBindings(std::string* source, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    void createNaming(std::string* source, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

public:
    TableFormat* addFields(std::list<FieldFormat>& fieldFormats);
//    TableFormat* addFields(std::list  fieldFormats);
    TableFormat* addField(FieldFormat* ff);
    TableFormat* addField(const std::string& encodedFormat);
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
    std::list  getFields();
    std::list  getRecordValidators();
    std::list  getTableValidators();
    int getMaxRecords();
    int getMinRecords();
    bool isReorderable();
    bool isUnresizable();
    void setUnresizable(bool unresizable);
    bool isBindingsEditable();
    void setBindingsEditable(bool bindingsEditable);
    std::list  getBindings();
    void addBinding(Binding* binding);
    void addBinding(Reference* target, Expression* expression);
    void addBinding(const std::string& target, const std::string& expression);
    void removeBinding(Binding* binding);
    void setBindings(std::list<Binding>& in_bindings);
    Expression* getNamingExpression();
    std::string encode(bool useVisibleSeparators);
    std::string encode(ClassicEncodingSettings* settings);
    std::map<std::string, int> getFieldLookup();
    std::string* toString();
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

public:
    TableFormat* setReorderable(bool reorderable);
    TableFormat* setNamingExpression(Expression* namingExpression);
    TableFormat* setNamingExpression(const std::string& namingExpression);
    int hashCode();    
    TableFormat* clone();
    void makeImmutable(DataTable* immutabilizer);

    bool operator==(const TableFormat& tableFormat) const;//equals(void* obj);

    // Generated
    TableFormat();
    TableFormat(bool reorderable);
    TableFormat(int minRecords, int maxRecords);
    TableFormat(FieldFormat* ff);
    TableFormat(const std::string& format, ClassicEncodingSettings* settings);
    TableFormat(const std::string& format, ClassicEncodingSettings* settings, bool validate);
    TableFormat(int minRecords, int maxRecords, const std::string& fieldFormat);
    TableFormat(int minRecords, int maxRecords, FieldFormat* fieldFormat);

private:
    void init();
    */
};

#endif  //_TABLE_FORMAT_H_
