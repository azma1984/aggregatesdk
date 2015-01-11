#ifndef _TableKeyFieldsValidator_H_
#define _TableKeyFieldsValidator_H_

#include "datatable/validator/AbstractTableValidator.h"


class TableKeyFieldsValidator : public AbstractTableValidator
{
public:
    virtual std::string encode();
    virtual char getType();
    virtual void validate(boost::shared_ptr<DataTable> table); // throws(ValidationException);
    void validate(boost::shared_ptr<DataTable> table, boost::shared_ptr<DataRecord> record); // throws(ValidationException);

    TableKeyFieldsValidator();
    TableKeyFieldsValidator(const std::string& source);
};

#endif
