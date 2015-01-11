#include "datatable/validator/TableExpressionValidator.h"
#include "expression/Evaluator.h"


TableExpressionValidator::TableExpressionValidator(const std::string& expression)
{
    this->expression = new Expression(expression);
}

char TableExpressionValidator::getType()
{
    return TableFormat.TABLE_VALIDATOR_EXPRESSION;
}

std::string TableExpressionValidator::encode()
{
    return expression->getText();
}

//TODO:
void TableExpressionValidator::validate(boost::shared_ptr<DataTable> table) /* throws(ValidationException) */
{
    boost::shared_ptr<Evaluator> evaluator = new Evaluator(table);

//    try
//    {
//      Object result = evaluator.evaluate(expression);

//      if (result != null)
//      {
//        throw new ValidationException(result.toString());
//      }
//    }
//    catch (ValidationException ex)
//    {
//      throw ex;
//    }
//    catch (Exception ex)
//    {
//      Log.DATATABLE.warn("Error evaluating data table validator's expression '" + expression + "': " + ex.getMessage(), ex);
//    }
}
