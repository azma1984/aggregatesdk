// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/ExpressionUtils.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/parser/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class ExpressionUtils
    
{

public:
    typedef void super;
    static const char16_t PARAM_ESCAPE_SINGLE { u'\'' };
    static const char16_t PARAM_ESCAPE_DOUBLE { u'"' };

private:
    static const char16_t PARAMS_DELIM { u',' };
    static const char16_t PARAMS_ESCAPE { u'\\' };
    static const std::string NULL_PARAM_;

public:
    static void validateSyntax(Expression* expression, bool showExpressionInErrorText) /* throws(SyntaxErrorException) */;
    static std::list  getFunctionParameters(const std::string & paramsString, bool allowExpressions);

private:
    static const std::string prepareParameter(const std::string & parameter);

public:
    static const std::string getFunctionParameters(std::list  params);
    static void dump(const std::string & expression) /* throws(SyntaxErrorException) */;
    static ::ASTStart* parse(Expression* expression, bool showExpressionInErrorText) /* throws(SyntaxErrorException) */;
    static std::list  findReferences(Expression* expression) /* throws(SyntaxErrorException) */;
    static const std::string escapeStringLiteral(const std::string & text);
    static long generateBindingId();

    // Generated
    ExpressionUtils();
protected:
    ExpressionUtils(const ::default_init_tag&);


public:
    
    static void 
    static const std::string& NULL_PARAM();

private:
    ::java::lang::Class* getClass0();
};
