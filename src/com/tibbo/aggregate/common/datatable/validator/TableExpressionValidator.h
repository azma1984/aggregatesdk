#pragma once
#include "datatable/validator/AbstractTableValidator.h"
#include <boost/shared_ptr.hpp>
#include <string>

class TableExpressionValidator : public AbstractTableValidator
{

private:
    //boost::shared_ptr<Expression> expression;

public:
    virtual char getType();
    virtual std::string encode();
    virtual void validate(DataTablePtr table);

    TableExpressionValidator(const std::string& expression);
};
