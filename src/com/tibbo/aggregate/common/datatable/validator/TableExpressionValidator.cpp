#include "datatable/validator/TableExpressionValidator.h"
#include "expression/Evaluator.h"
#include "datatable/TableFormat.h"


TableExpressionValidator::TableExpressionValidator(const std::string& expression)
{
}

char TableExpressionValidator::getType()
{
    return TableFormat::TABLE_VALIDATOR_EXPRESSION;
}

std::string TableExpressionValidator::encode()
{
    return "";
}

//TODO:
void TableExpressionValidator::validate(DataTablePtr table)
{
}
