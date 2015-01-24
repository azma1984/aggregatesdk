#pragma once

#include <expression/Expression.h>
#include <string>
#include <vector>
#include <list>
#include <boost/shared_ptr.hpp>

class ExpressionUtils   
{
public:
    static const char PARAM_ESCAPE_SINGLE;
    static const char PARAM_ESCAPE_DOUBLE;
    static const std::string NULL_PARAM_;

private:
    static const char PARAMS_DELIM;
    static const char PARAMS_ESCAPE;

private:
    static std::string prepareParameter(const std::string& parameter);

public:
    static void validateSyntax(boost::shared_ptr<Expression> expression, bool showExpressionInErrorText) /* throws(SyntaxErrorException) */;
    static std::vector<void*>  getFunctionParameters(const std::string & paramsString, bool allowExpressions);
    static std::string getFunctionParameters(std::vector<void*> params);
    static void dump(const std::string & expression) /* throws(SyntaxErrorException) */;
    static ASTStart* parse(boost::shared_ptr<Expression> expression, bool showExpressionInErrorText) /* throws(SyntaxErrorException) */;
    static std::list<boost::shared_ptr<Reference>>  findReferences(boost::shared_ptr<Expression> expression) /* throws(SyntaxErrorException) */;
    static std::string escapeStringLiteral(const std::string & text);
    static long generateBindingId();
};
