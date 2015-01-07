#pragma once
#include "PublicCloneable.h"

class TableFormat: public PublicCloneable
{
/*
private:
    static TableFormat* EMPTY_FORMAT;

public:
    static const int DEFAULT_MIN_RECORDS) };
    static const int DEFAULT_MAX_RECORDS = 2147483647) };

private:
    static const std::string ELEMENT_FLAGS_;
    static const std::string ELEMENT_TABLE_VALIDATORS_;
    static const std::string ELEMENT_RECORD_VALIDATORS_;
    static const std::string ELEMENT_BINDINGS_;
    static const std::string ELEMENT_MIN_RECORDS_;
    static const std::string ELEMENT_MAX_RECORDS_;
    static const std::string ELEMENT_NAMING_;

public:
    static const char16_t TABLE_VALIDATOR_KEY_FIELDS { u'K' };
    static const char16_t TABLE_VALIDATOR_EXPRESSION { u'E' };
    static const char16_t RECORD_VALIDATOR_KEY_FIELDS { u'K' };

private:
    static const char16_t REORDERABLE_FLAG { u'R' };
    static const char16_t UNRESIZEBLE_FLAG { u'U' };
    static const char16_t BINDINGS_EDITABLE_FLAG { u'B' };
    std::list  fields;
    std::map fieldLookup;
    int minRecords;
    int maxRecords;
    bool reorderable;
    bool unresizable;
    bool bindingsEditable;
    std::list  recordValidators;
    std::list  tableValidators;
    std::list  bindings;
    ::com::tibbo::aggregate::common::expression::Expression* namingExpression;
    bool immutable;
    DataTable* immutabilizer;
protected:
    void ctor();
    void ctor(bool reorderable);
    void ctor(int minRecords, int maxRecords);
    void ctor(FieldFormat* ff);
    void ctor(std::string* format, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    void ctor(std::string* format, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate);
    void ctor(int minRecords, int maxRecords, std::string* fieldFormat);
    void ctor(int minRecords, int maxRecords, FieldFormat* fieldFormat);

public:
    TableFormat* addFields(FieldFormatArray* fieldFormats);
    TableFormat* addFields(std::list  fieldFormats);
    TableFormat* addField(FieldFormat* ff);
    TableFormat* addField(std::string* encodedFormat);
    void addField(char16_t type, std::string* name);
    TableFormat* addField(char16_t type, std::string* name, std::string* description);
    TableFormat* addField(char16_t type, std::string* name, std::string* description, void* defaultValue);
    TableFormat* addField(char16_t type, std::string* name, std::string* description, void* defaultValue, std::string* group);
    TableFormat* addField(char16_t type, std::string* name, std::string* description, void* defaultValue, bool nullable);
    TableFormat* addField(char16_t type, std::string* name, std::string* description, void* defaultValue, bool nullable, std::string* group);
    TableFormat* addField(FieldFormat* ff, int index);
    TableFormat* addField(char16_t type, std::string* name, int index);
    TableFormat* removeField(std::string* name);
    TableFormat* renameField(std::string* oldName, std::string* newName);
    char16_t getFieldType(int index);
    std::string* getFieldName(int index);
    int getFieldIndex(std::string* name);
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
    void addBinding(::com::tibbo::aggregate::common::binding::Binding* binding);
    void addBinding(::com::tibbo::aggregate::common::expression::Reference* target, ::com::tibbo::aggregate::common::expression::Expression* expression);
    void addBinding(std::string* target, std::string* expression);
    void removeBinding(::com::tibbo::aggregate::common::binding::Binding* binding);
    void setBindings(std::list  in_bindings);
    ::com::tibbo::aggregate::common::expression::Expression* getNamingExpression();
    std::string* encode(bool useVisibleSeparators);
    std::string* encode(::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

private:
    static void encAppend(std::stringBuffer* buffer, std::string* name, std::string* value, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

public:
    std::map getFieldLookup();

private:
    std::string* getEncodedFlags();
    std::string* getEncodedTableValidators(::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    std::string* getEncodedRecordValidators(::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    std::string* getEncodedBindings(::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

public:
    std::string* toString();
    FieldFormat* getField(int index);
    FieldFormat* getField(std::string* fieldName);
    bool hasField(std::string* name);
    bool hasFields(char16_t type);
    bool hasReadOnlyFields();
    std::list  getKeyFields();
    bool extend(TableFormat* other);
    std::string* extendMessage(TableFormat* other);
    void addTableValidator(::com::tibbo::aggregate::common::datatable::validator::TableValidator* tv);
    void addRecordValidator(::com::tibbo::aggregate::common::datatable::validator::RecordValidator* rv);

private:
    void createTableValidators(std::string* source, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    void createRecordValidators(std::string* source, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    void createBindings(std::string* source, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    void createNaming(std::string* source, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);

public:
    ::java::util::Iterator* iterator();
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

public:
    void fixRecords(DataTable* table);

public:
    TableFormat* setReorderable(bool reorderable);
    TableFormat* setNamingExpression(::com::tibbo::aggregate::common::expression::Expression* namingExpression);
    TableFormat* setNamingExpression(std::string* namingExpression);
    int hashCode();
    bool equals(void* obj);
    TableFormat* clone();
    void makeImmutable(DataTable* immutabilizer);

    // Generated
    TableFormat();
    TableFormat(bool reorderable);
    TableFormat(int minRecords, int maxRecords);
    TableFormat(FieldFormat* ff);
    TableFormat(std::string* format, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings);
    TableFormat(std::string* format, ::com::tibbo::aggregate::common::datatable::encoding::ClassicEncodingSettings* settings, bool validate);
    TableFormat(int minRecords, int maxRecords, std::string* fieldFormat);
    TableFormat(int minRecords, int maxRecords, FieldFormat* fieldFormat);
protected:
    TableFormat(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();

public:
    static TableFormat*& EMPTY_FORMAT();

private:
    static const std::string& ELEMENT_FLAGS();
    static const std::string& ELEMENT_TABLE_VALIDATORS();
    static const std::string& ELEMENT_RECORD_VALIDATORS();
    static const std::string& ELEMENT_BINDINGS();
    static const std::string& ELEMENT_MIN_RECORDS();
    static const std::string& ELEMENT_MAX_RECORDS();
    static const std::string& ELEMENT_NAMING();*/
};
