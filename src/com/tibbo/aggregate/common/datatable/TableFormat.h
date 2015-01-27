#pragma once

#include <string>
#include <list>
#include <map>
#include "util/Cloneable.h"
#include "util/Pointers.h"


class TableFormat : public Cloneable
{ 

public:
    static const int DEFAULT_MIN_RECORDS = 0;
    static const int DEFAULT_MAX_RECORDS = INT_MAX;

private:
    static const std::string ELEMENT_FLAGS;
    static const std::string ELEMENT_TABLE_VALIDATORS;
    static const std::string ELEMENT_RECORD_VALIDATORS;
    static const std::string ELEMENT_BINDINGS;
    static const std::string ELEMENT_MIN_RECORDS;
    static const std::string ELEMENT_MAX_RECORDS;
    static const std::string ELEMENT_NAMING;

    static const char TABLE_VALIDATOR_KEY_FIELDS = 'K';
    static const char TABLE_VALIDATOR_EXPRESSION = 'E';

    static const char RECORD_VALIDATOR_KEY_FIELDS = 'K';

    static const char REORDERABLE_FLAG = 'R';
    static const char UNRESIZEBLE_FLAG = 'U';
    static const char BINDINGS_EDITABLE_FLAG = 'B';

    static TableFormatPtr EMPTY_FORMAT;

    std::list<FieldFormatPtr> fields;
    std::map<std::string, int> fieldLookup;

    int minRecords;
    int maxRecords;

    bool reorderable;
    bool unresizable;
    bool bindingsEditable;

    std::list<RecordValidatorPtr> recordValidators;
    std::list<TableValidatorPtr> tableValidators;
    std::list<BindingPtr> bindings;
    ExpressionPtr namingExpression;

    bool immutable;
    DataTablePtr immutabilizer;

    //todo
    //static void encAppend(StringBuffer buffer, String name, String value, ClassicEncodingSettings settings);
    void createTableValidators(const std::string& source, ClassicEncodingSettingsPtr settings);
    void createRecordValidators(const std::string& source, ClassicEncodingSettingsPtr settings);
    void createBindings(const std::string& source, ClassicEncodingSettingsPtr settings);
    void createNaming(const std::string& source, ClassicEncodingSettingsPtr settings);
    void fixRecords(DataTablePtr table);

public:

    static TableFormatPtr getEMPTY_FORMAT();

    TableFormatPtr addFields(std::list<FieldFormatPtr> fieldFormats);
    TableFormatPtr addField(boost::shared_ptr<FieldFormat> ff);
    TableFormatPtr addField(const std::string& encodedFormat);
    TableFormatPtr addField(char type, const std::string& name);
    TableFormatPtr addField(char type, const std::string& name, const std::string& description);
    TableFormatPtr addField(char type, const std::string& name, const std::string& description, AgObjectPtr defaultValue);
    TableFormatPtr addField(char type, const std::string& name, const std::string& description, AgObjectPtr defaultValue, const std::string &group);
    TableFormatPtr addField(char type, const std::string& name, const std::string& description, AgObjectPtr defaultValue, bool nullable);
    TableFormatPtr addField(char type, const std::string& name, const std::string& description, AgObjectPtr defaultValue, bool nullable, const std::string &group);

    TableFormatPtr addField(FieldFormatPtr ff, int index);
    TableFormatPtr addField(char type, const std::string& name, int index);

    TableFormatPtr removeField(const std::string& name);
    TableFormatPtr renameField(const std::string& oldName, const std::string& newName);
    char getFieldType(int index);
    std::string getFieldName(int index);
    int getFieldIndex(const std::string& name);
    int getFieldCount();
    std::list<FieldFormatPtr> getFields();
    std::list<RecordValidatorPtr> getRecordValidators();
    std::list<TableValidatorPtr> getTableValidators();
    int getMaxRecords();
    int getMinRecords();
    bool isReorderable();
    bool isUnresizable();
    void setUnresizable(bool unresizable);
    bool isBindingsEditable();
    void setBindingsEditable(bool bindingsEditable);
    std::list<BindingPtr> getBindings();
    void addBinding(BindingPtr binding);
    void addBinding(ReferencePtr target, ExpressionPtr expression);
    void addBinding(const std::string& target, const std::string& expression);
    void removeBinding(BindingPtr binding);
    void setBindings(std::list<BindingPtr> in_bindings);
    ExpressionPtr getNamingExpression();
    std::string encode(bool useVisibleSeparators);
    std::string encode(ClassicEncodingSettingsPtr settings);

    std::map<std::string, int> getFieldLookup();
    std::string getEncodedFlags();
    std::string getEncodedTableValidators(ClassicEncodingSettingsPtr settings);
    std::string getEncodedRecordValidators(ClassicEncodingSettingsPtr settings);
    std::string getEncodedBindings(ClassicEncodingSettingsPtr settings);

    std::string toString();

    FieldFormatPtr getField(int index);
    FieldFormatPtr getField(const std::string& fieldName);
    bool hasField(const std::string& name);
    bool hasFields(char type);
    bool hasReadOnlyFields();

    std::list<std::string> getKeyFields();
    bool extend(TableFormatPtr other);
    std::string extendMessage(TableFormatPtr other);
    void addTableValidator(TableValidatorPtr tv);
    void addRecordValidator(RecordValidatorPtr rv);

    bool isReplicated();
    bool isReadonly();
    bool isGrouped();
    bool isAdvanced();
    bool isSingleRecord();
    bool isSingleField();
    bool isSingleCell();
    bool isEmpty();
    bool isImmutable();

    TableFormatPtr resetAllowedRecords();
    TableFormatPtr setMaxRecords(int maxRecords);
    TableFormatPtr setMinRecords(int minRecords);
    TableFormatPtr setReorderable(bool reorderable);
    TableFormatPtr setNamingExpression(ExpressionPtr namingExpression);
    TableFormatPtr setNamingExpression(const std::string &namingExpression);

    int hashCode();
    bool equals(TableFormatPtr obj);
    void makeImmutable(DataTablePtr immutabilizer);

    virtual TableFormat *clone() const;



public:
    TableFormat();
    TableFormat(bool reorderable);
    TableFormat(int minRecords, int maxRecords);
    TableFormat(FieldFormatPtr ff);
    TableFormat(const std::string &format, ClassicEncodingSettingsPtr settings, bool validate = true);
    TableFormat(int minRecords, int maxRecords, const std::string& fieldFormat);
    TableFormat(int minRecords, int maxRecords, FieldFormatPtr fieldFormat);


};
