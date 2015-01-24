#include "expression/ExpressionUtils.h"

#include <math.h>

const char ExpressionUtils::PARAM_ESCAPE_SINGLE = '\'';
const char ExpressionUtils::PARAM_ESCAPE_DOUBLE = '\"';
const char ExpressionUtils::PARAMS_DELIM = ',';
const char ExpressionUtils::PARAMS_ESCAPE = '\\';

const std::string ExpressionUtils::NULL_PARAM = "null";


std::string ExpressionUtils::prepareParameter(const std::string& parameter)
{
    return parameter;
}

void ExpressionUtils::validateSyntax(boost::shared_ptr<Expression> expression, bool showExpressionInErrorText) /* throws(SyntaxErrorException) */
{
    ExpressionUtils::parse(expression, showExpressionInErrorText);
}

std::vector<void*>  ExpressionUtils::getFunctionParameters(const std::string & paramsString, bool allowExpressions)
{
    std::vector<void*> params;
    bool insideSingleQuotedLiteral = false;
    bool insideDoubleQuotedLiteral = false;
    bool escaped = false;
//    std::stringstream ss;
    std::string stringBuf;

    for (int i = 0; i < paramsString.length(); i++) {
        char c = paramsString.at(i);
        if (c == PARAMS_ESCAPE) {
            if (escaped) {
                escaped = false;
                stringBuf.append( c );
                continue;
            }else {
                escaped = true;
                continue;
            }
        }else if (insideSingleQuotedLiteral) {
            if (c == PARAM_ESCAPE_SINGLE) {
                if (!escaped) {
                    insideSingleQuotedLiteral = false;
                    std::string param = stringBuf;//ss.str();
                    if (allowExpressions) {
                        params.push_back(new Expression(prepareParameter(param)));
                    }else {
                        params.push_back(prepareParameter(param));
                    }

                    stringBuf.clear();
                }
            }
        }else if (insideDoubleQuotedLiteral) {
            if (c == PARAM_ESCAPE_DOUBLE) {
                if (!escaped) {
                    insideDoubleQuotedLiteral = false;
                    std::string param = stringBuf;//ss.str();
                    params.push_back(prepareParameter(param));

                    stringBuf.clear();
                }
            }
        }else if (c == PARAMS_DELIM) {
            if (!insideSingleQuotedLiteral && !insideDoubleQuotedLiteral) {
                if (stringBuf.length() > 0 ) {
                    std::string param = buf;//.trim();
                    if (param.length() > 0) {
                        params.add(new Expression(prepareParameter(param)));
                    }
                }

                stringBuf.clear();
                continue;
            }
        }else if (c == PARAM_ESCAPE_SINGLE && !insideDoubleQuotedLiteral) {
            insideSingleQuotedLiteral = true;
            stringBuf.clear();
            continue;
        }else if (c == PARAM_ESCAPE_DOUBLE && !insideSingleQuotedLiteral) {
            insideDoubleQuotedLiteral = true;
            stringBuf.clear();
            continue;
        }

        if (c != PARAMS_ESCAPE) {
            escaped = false;
        }

//        if (buf != null) {
            stringBuf.append(c);
//        }
    }

//    if (buf != null)
//    {
        std::tring param = stringBuf;//buf.toString().trim();
        if (param.length() > 0) {
            params.push_back(new Expression(prepareParameter(param)));
        }
//    }

    if (insideSingleQuotedLiteral) {
        //TODO:
        //throw IllegalArgumentException("Illegal function parameters: " + params);
    }

    if (insideDoubleQuotedLiteral) {
        //TODO:
        //throw IllegalArgumentException("Illegal function parameters: " + params);
    }

    return params;
}

std::string ExpressionUtils::getFunctionParameters(std::vector<void*> params)
{
    std::stringstream ss;

    int i = 0;
    for (int i=0; i <params.size(); i++) {
        if (param[i] == NULL) {
            ss <<NULL_PARAM;
        }else {
            Expression* exp = dynamic_cast<Expression*>(params[i]);
            if (exp != NULL) {
                std::string value = exp->toString();

                if (value.find(PARAMS_DELIM) != std::string::npos) {
                    ss <<PARAM_ESCAPE_SINGLE <<value <<PARAM_ESCAPE_SINGLE;
                }else {
                    ss <<value;
                }
            }else {
                std::string* str = dynamic_cast<std::string*>(params[i]);
                if (str != NULL)
                    ss <<PARAM_ESCAPE_DOUBLE <<param.toString() <<PARAM_ESCAPE_DOUBLE;
            }
        }

        if (i < params.size() - 1) {
            ss <<PARAMS_DELIM;
        }
    }

    return ss.str();
}

void ExpressionUtils::dump(const std::string & expression) /* throws(SyntaxErrorException) */
{
    //TODO: ASTStart
//    ASTStart* rootNode = parse(new Expression(expression), true);
//    ExpressionParserVisitor* visitor = new DumpingVisitor();
//    rootNode->jjtAccept(visitor, null);
}

//ASTStart* ExpressionUtils::parse(boost::shared_ptr<Expression> expression, bool showExpressionInErrorText) /* throws(SyntaxErrorException) */
//{
//    try
//    {
//        ExpressionParser parser = new ExpressionParser(new CharArrayReader(expression.getText().toCharArray()));
//        return parser.Start();
//    }
//    catch (Throwable ex)
//    {
//        throw new SyntaxErrorException(Cres.get().getString("exprParseErr") + (showExpressionInErrorText ? " '" + expression + "': " : ": ") + ex.getMessage(), ex);
//    }
//}

std::list<boost::shared_ptr<Reference>> ExpressionUtils::findReferences(boost::shared_ptr<Expression> expression) /* throws(SyntaxErrorException) */
{
    //TODO: ASTStart
//    ASTStart rootNode = parse(expression, true);
//    ReferencesFinderVisitor visitor = new ReferencesFinderVisitor();
//    rootNode.jjtAccept(visitor, null);
//    return visitor.getIdentifiers();
}

//std::string ExpressionUtils::escapeStringLiteral(const std::string & text);

long ExpressionUtils::generateBindingId()
{
    //TODO:
    long id = 0;//round(random() * Long.MAX_VALUE);
    return id;
}

