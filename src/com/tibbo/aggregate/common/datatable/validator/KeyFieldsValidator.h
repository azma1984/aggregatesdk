#pragma once

#include "datatable/validator/AbstractRecordValidator.h"
#include "util/Pointers.h"

class KeyFieldsValidator : public AbstractRecordValidator
{
public:
    KeyFieldsValidator();
    KeyFieldsValidator(const std::string& source);
    virtual std::string encode();
    virtual char getType();
    virtual void validate(DataTablePtr table, DataRecordPtr record);
};
