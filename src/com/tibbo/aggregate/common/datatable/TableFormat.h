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

public:

    static TableFormatPtr getEMPTY_FORMAT();


    boost::shared_ptr<TableFormat> addField(const std::string& encodedFormat);
    boost::shared_ptr<TableFormat> addField(boost::shared_ptr<FieldFormat> ff, int index);
    boost::shared_ptr<TableFormat> addField(boost::shared_ptr<FieldFormat> ff);


    virtual TableFormat *clone() const;

    TableFormat* setNamingExpression(const std::string &namingExpression);
    void makeImmutable(DataTablePtr immutabilizer);

    std::list<FieldFormatPtr> getFields();

public:
    TableFormat();
    TableFormat(bool reorderable);
    TableFormat(int minRecords, int maxRecords);
    TableFormat(int minRecords, int maxRecords, const std::string& fieldFormat);
};
