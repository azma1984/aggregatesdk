// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/ExpressionUtils.java
//#include <com/tibbo/aggregate/common/expression/ExpressionUtils.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTStart.h"
#include <com/tibbo/aggregate/common/expression/parser/ExpressionParser.h"
#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"
#include <com/tibbo/aggregate/common/expression/util/DumpingVisitor.h"
#include <com/tibbo/aggregate/common/expression/util/ReferencesFinderVisitor.h"
#include <com/tibbo/aggregate/common/util/SyntaxErrorException.h"
/*
//#include <java/io/CharArrayReader.h"
//#include <java/io/Reader.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/IllegalArgumentException.h"
//#include <java/lang/Long.h"
//#include <java/lang/Math.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/Throwable.h"
//#include <java/text/CharacterIterator.h"
//#include <java/text/StringCharacterIterator.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
//#include <java/util/List.h"
//#include <java/util/ResourceBundle.h"
*/
template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::ExpressionUtils::ExpressionUtils(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::ExpressionUtils::ExpressionUtils()
    : ExpressionUtils(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

const char16_t com::tibbo::aggregate::common::expression::ExpressionUtils::PARAM_ESCAPE_SINGLE;

const char16_t com::tibbo::aggregate::common::expression::ExpressionUtils::PARAM_ESCAPE_DOUBLE;

const char16_t com::tibbo::aggregate::common::expression::ExpressionUtils::PARAMS_DELIM;

const char16_t com::tibbo::aggregate::common::expression::ExpressionUtils::PARAMS_ESCAPE;

std::string& com::tibbo::aggregate::common::expression::ExpressionUtils::NULL_PARAM()
{
    
    return NULL_PARAM_;
}
std::string com::tibbo::aggregate::common::expression::ExpressionUtils::NULL_PARAM_;

void com::tibbo::aggregate::common::expression::ExpressionUtils::validateSyntax(Expression* expression, bool showExpressionInErrorText) /* throws(SyntaxErrorException) */
{
    
    ExpressionUtils::parse(expression, showExpressionInErrorText);
}

java::util::List* com::tibbo::aggregate::common::expression::ExpressionUtils::getFunctionParameters(const std::string & paramsString, bool allowExpressions)
{
    
    auto params = new ::java::util::LinkedList();
    auto insideSingleQuotedLiteral = false;
    auto insideDoubleQuotedLiteral = false;
    auto escaped = false;
    auto buf = new std::stringBuilder();
    for (auto i = int(0); i < paramsString)->length(); i++) {
        auto c = paramsString)->charAt(i);
        if(c == PARAMS_ESCAPE) {
            if(escaped) {
                escaped = false;
                buf)->append(c);
                continue;
            } else {
                escaped = true;
                continue;
            }
        } else if(insideSingleQuotedLiteral) {
            if(c == PARAM_ESCAPE_SINGLE) {
                if(!escaped) {
                    insideSingleQuotedLiteral = false;
                    auto param = buf)->toString();
                    if(allowExpressions) {
                        params)->add(new Expression(prepareParameter(param))));
                    } else {
                        params)->add(prepareParameter(param)));
                    }
                    buf;
                }
            }
        } else if(insideDoubleQuotedLiteral) {
            if(c == PARAM_ESCAPE_DOUBLE) {
                if(!escaped) {
                    insideDoubleQuotedLiteral = false;
                    auto param = buf)->toString();
                    params)->add(prepareParameter(param)));
                    buf;
                }
            }
        } else if(c == PARAMS_DELIM) {
            if(!insideSingleQuotedLiteral && !insideDoubleQuotedLiteral) {
                if(buf != 0) {
                    auto param = buf)->toString())->trim();
                    if(param)->length() > 0) {
                        params)->add(new Expression(prepareParameter(param))));
                    }
                }
                buf = new std::stringBuilder();
                continue;
            }
        } else if(c == PARAM_ESCAPE_SINGLE && !insideDoubleQuotedLiteral) {
            insideSingleQuotedLiteral = true;
            buf = new std::stringBuilder();
            continue;
        } else if(c == PARAM_ESCAPE_DOUBLE && !insideSingleQuotedLiteral) {
            insideDoubleQuotedLiteral = true;
            buf = new std::stringBuilder();
            continue;
        }
        if(c != PARAMS_ESCAPE) {
            escaped = false;
        }
        if(buf != 0) {
            buf)->append(c);
        }
    }
    if(buf != 0) {
        auto param = buf)->toString())->trim();
        if(param)->length() > 0) {
            params)->add(new Expression(prepareParameter(param))));
        }
    }
    if(insideSingleQuotedLiteral) {
        std::cout <<"Illegal function parameters: "_j)->append(params))->toString());
    }
    if(insideDoubleQuotedLiteral) {
        std::cout <<"Illegal function parameters: "_j)->append(params))->toString());
    }
    return params;
}

std::string com::tibbo::aggregate::common::expression::ExpressionUtils::prepareParameter(const std::string & parameter)
{
    
    return parameter;
}

std::string com::tibbo::aggregate::common::expression::ExpressionUtils::getFunctionParameters(std::list  params)
{
    
    auto sb = new std::stringBuilder();
    auto i = int(0);
    for (auto _i = params)->iterator(); _i->hasNext(); ) {
        void* param = java_cast< void* >(_i->next());
        {
            if(param == 0) {
                sb)->append(NULL_PARAM_);
            } else {
                if(dynamic_cast< Expression* >(param) != 0) {
                    auto value = param)->toString();
                    if(value)->indexOf(static_cast< int >(PARAMS_DELIM)) != -int(1)) {
                        sb)->append(PARAM_ESCAPE_SINGLE);
                        sb)->append(value);
                        sb)->append(PARAM_ESCAPE_SINGLE);
                    } else {
                        sb)->append(value);
                    }
                } else {
                    sb)->append(PARAM_ESCAPE_DOUBLE);
                    sb)->append(param)->toString());
                    sb)->append(PARAM_ESCAPE_DOUBLE);
                }
            }
            if(i < params)->size() - int(1)) {
                sb)->append(PARAMS_DELIM);
            }
            i++;
        }
    }
    return sb)->toString();
}

void com::tibbo::aggregate::common::expression::ExpressionUtils::dump(const std::string & expression) /* throws(SyntaxErrorException) */
{
    
    auto rootNode = parse(new Expression(expression), true);
    ::ExpressionParserVisitor* visitor = new ::com::tibbo::aggregate::common::expression::util::DumpingVisitor();
    rootNode)->jjtAccept(visitor, 0));
}

ASTStart* com::tibbo::aggregate::common::expression::ExpressionUtils::parse(Expression* expression, bool showExpressionInErrorText) /* throws(SyntaxErrorException) */
{
    
    try {
        auto parser = new ::ExpressionParser(static_cast< std::ifstream* >(new ::java::io::CharArrayReader(expression)->getText())->toCharArray_())));
        return parser)->Start();
    } catch (::java::lang::Throwable* ex) {
        throw new ::com::tibbo::aggregate::common::util::SyntaxErrorException(std::stringBuilder().append(Cres::get())->getString(u"exprParseErr"_j))->append((showExpressionInErrorText ? std::stringBuilder().append(u" '"_j)->append(expression))
            ->append(u"': "_j)->toString() : u": "_j))
            ->append(ex)->getMessage())->toString(), ex);
    }
}

java::util::List* com::tibbo::aggregate::common::expression::ExpressionUtils::findReferences(Expression* expression) /* throws(SyntaxErrorException) */
{
    
    auto rootNode = parse(expression, true);
    auto visitor = new ::com::tibbo::aggregate::common::expression::util::ReferencesFinderVisitor();
    rootNode)->jjtAccept(static_cast< ::ExpressionParserVisitor* >(visitor), 0));
    return visitor->getIdentifiers();
}

std::string com::tibbo::aggregate::common::expression::ExpressionUtils::escapeStringLiteral(const std::string & text)
{
    
    if(text == 0) {
        return 0;
    }
    auto const result = new std::stringBuilder();
    auto const iterator = new ::java::text::StringCharacterIterator(text);
    auto character = iterator)->current();
    while (character != ::java::text::CharacterIterator::DONE) {
        if(character == u'"') {
            result)->append(u"\\\""_j);
        } else if(character == u'\'') {
            result)->append(u"\\\'"_j);
        } else if(character == u'\\') {
            result)->append(u"\\\\"_j);
        } else {
            result)->append(character);
        }
        character = iterator)->next();
    }
    return result)->toString();
}

long com::tibbo::aggregate::common::expression::ExpressionUtils::generateBindingId()
{
    
    auto id = ::java::lang::Math::round(::java::lang::Math::random() * ::java::lang::Long::MAX_VALUE);
    return id;
}



java::lang::Class* com::tibbo::aggregate::common::expression::ExpressionUtils::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.ExpressionUtils", 53);
    return c;
}

void com::tibbo::aggregate::common::expression::ExpressionUtils::clinit()
{
struct string_init_ {
    string_init_() {
    NULL_PARAM_ = u"null"_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

java::lang::Class* com::tibbo::aggregate::common::expression::ExpressionUtils::getClass0()
{
    return class_();
}

