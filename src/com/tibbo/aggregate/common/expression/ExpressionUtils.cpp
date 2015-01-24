#include "expression/ExpressionUtils.h"

//#include "Cres.h"
//#include <com/tibbo/aggregate/common/expression/Expression.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTStart.h"
//#include <com/tibbo/aggregate/common/expression/parser/ExpressionParser.h"
//#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"
//#include <com/tibbo/aggregate/common/expression/util/DumpingVisitor.h"
//#include <com/tibbo/aggregate/common/expression/util/ReferencesFinderVisitor.h"
//#include <com/tibbo/aggregate/common/util/SyntaxErrorException.h"


const char ExpressionUtils::PARAM_ESCAPE_SINGLE = '\'';
const char ExpressionUtils::PARAM_ESCAPE_DOUBLE = '\"';
const char ExpressionUtils::PARAMS_DELIM = ',';
const char ExpressionUtils::PARAMS_ESCAPE = '\\';

const std::string ExpressionUtils::NULL_PARAM = "null";


std::string ExpressionUtils::prepareParameter(const std::string& parameter)
{

}

public:
static void validateSyntax(boost::shared_ptr<Expression> expression, bool showExpressionInErrorText) /* throws(SyntaxErrorException) */;
static std::vector<void*>  getFunctionParameters(const std::string & paramsString, bool allowExpressions);
static std::string getFunctionParameters(std::vector<void*> params);
static void dump(const std::string & expression) /* throws(SyntaxErrorException) */;
static ASTStart* parse(boost::shared_ptr<Expression> expression, bool showExpressionInErrorText) /* throws(SyntaxErrorException) */;
static std::list<boost::shared_ptr<Reference>>  findReferences(boost::shared_ptr<Expression> expression) /* throws(SyntaxErrorException) */;
static std::string escapeStringLiteral(const std::string & text);
static long generateBindingId();

