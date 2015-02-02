#pragma once

#include "datatable/validator/AbstractTableValidator.h"
#include <boost/shared_ptr.hpp>
#include <string>

class TableKeyFieldsValidator : public AbstractTableValidator
{
public:
    TableKeyFieldsValidator();
    TableKeyFieldsValidator(const std::string& source);

    virtual std::string encode();
    virtual char getType();
    virtual void validate(DataTablePtr table);
    void validate(DataTablePtr table, DataRecordPtr record);
};

