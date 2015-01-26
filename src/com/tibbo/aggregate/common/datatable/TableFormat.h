#pragma once

#include <string>
#include <list>
#include "util/Cloneable.h"
#include "datatable/FieldFormat.h"

class DataTable;

class TableFormat : public Cloneable
{ 
private:
    std::list<boost::shared_ptr<FieldFormat>> fields;
public:   
    bool immutable;
    
    boost::shared_ptr<TableFormat> addField(const std::string& encodedFormat);
    boost::shared_ptr<TableFormat> addField(boost::shared_ptr<FieldFormat> ff, int index);
    boost::shared_ptr<TableFormat> addField(boost::shared_ptr<FieldFormat> ff);


    virtual TableFormat *clone() const;

    TableFormat* setNamingExpression(const std::string &namingExpression);
    void makeImmutable(DataTable* immutabilizer);

    /**
       * Returns list of fields in table format.
       */
    std::list<boost::shared_ptr<FieldFormat>> &getFields();

public:
    TableFormat();
    TableFormat(int minRecords, int maxRecords);
    TableFormat(int minRecords, int maxRecords, const std::string& fieldFormat);
};
