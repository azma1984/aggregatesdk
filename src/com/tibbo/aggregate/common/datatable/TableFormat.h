#pragma once

#include <string>
#include <list>
#include "util/Cloneable.h"
#include "util/Pointers.h"


class TableFormat : public Cloneable
{ 

public:
    static const int DEFAULT_MIN_RECORDS = 0;
    static const int DEFAULT_MAX_RECORDS = INT_MAX;

private:
    std::list<FieldFormatPtr> fields;
public:   
    bool immutable;
    
    boost::shared_ptr<TableFormat> addField(const std::string& encodedFormat);
    boost::shared_ptr<TableFormat> addField(boost::shared_ptr<FieldFormat> ff, int index);
    boost::shared_ptr<TableFormat> addField(boost::shared_ptr<FieldFormat> ff);


    virtual TableFormat *clone() const;

    TableFormat* setNamingExpression(const std::string &namingExpression);
    void makeImmutable(DataTablePtr immutabilizer);

    /**
       * Returns list of fields in table format.
       */
    std::list<FieldFormatPtr> getFields();

public:
    TableFormat();
    TableFormat(bool reorderable);
    TableFormat(int minRecords, int maxRecords);
    TableFormat(int minRecords, int maxRecords, const std::string& fieldFormat);
};
