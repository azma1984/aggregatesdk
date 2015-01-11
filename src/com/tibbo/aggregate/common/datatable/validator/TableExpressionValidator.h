#ifndef _TableExpressionValidator_H_
#define _TableExpressionValidator_H_

#include "datatable/validator/AbstractTableValidator.h"
#include <boost/shared_ptr.hpp>
#include <string>

class TableExpressionValidator : public AbstractTableValidator
{

private:
    boost::shared_ptr<Expression> expression;

public:
    virtual char getType();
    virtual std::string encode();
    virtual void validate(boost::shared_ptr<DataTable> table) /* throws(ValidationException) */;

    TableExpressionValidator(const std::string& expression);
};
#endif  //_TableExpressionValidator_H_
