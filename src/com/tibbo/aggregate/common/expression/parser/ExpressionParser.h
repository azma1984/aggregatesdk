// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ExpressionParser.java

#pragma once


class ExpressionParser
{

public:
	    static const int EOF=0;
	    static const int SINGLE_LINE_COMMENT = 8;
	    static const int MULTI_LINE_COMMENT = 9;
	    static const int OR = 11;
	    static const int AND = 12;
	    static const int NOT = 13;
	    static const int BITWISE_OR = 14;
	    static const int BITWISE_XOR = 15;
	    static const int BITWISE_AND = 16;
	    static const int BITWISE_NOT = 17;
	    static const int TRUE = 18;
	    static const int FALSE = 19;
	    static const int NULL_ = 20;
	    static const int INTEGER_LITERAL = 21;
	    static const int HEX_LITERAL = 22;
	    static const int DECIMAL_LITERAL = 23;
	    static const int OCTAL_LITERAL = 24;
	    static const int BINARY_LITERAL = 25;
	    static const int FLOATING_POINT_LITERAL = 26;
	    static const int EXPONENT = 27;
	    static const int STRING_LITERAL = 28;
	    static const int PLUS = 29;
	    static const int MINUS = 30;
	    static const int MUL = 31;
	    static const int DIV = 32;
	    static const int MOD = 33;
	    static const int QUESTION = 34;
	    static const int COLON = 35;
	    static const int COMMA = 36;
	    static const int EQ = 37;
	    static const int NE = 38;
	    static const int MATCH = 39;
	    static const int LT = 40;
	    static const int GT = 41;
	    static const int LTE = 42;
	    static const int GTE = 43;
	    static const int LBRAKET = 44;
	    static const int RBRAKET = 45;
	    static const int LBRACE = 46;
	    static const int RBRACE = 47;
	    static const int RIGHT_SHIFT = 48;
	    static const int URIGHT_SHIFT = 49;
	    static const int LEFT_SHIFT = 50;
	    static const int IDENTIFIER = 51;
	    static const int URICHAR = 52;
	    static const int LETTER = 53;
	    static const int DIGIT = 54;
	    static const int DEFAULT;
	    static const int IN_SINGLE_LINE_COMMENT = 1;
	    static const int IN_MULTI_LINE_COMMENT = 2;


	    /** Literal token values. */
	     std::string tokenImage = {
	        "<EOF>",
	        "\" \"",
	        "\"\\t\"",
	        "\"\\n\"",
	        "\"\\r\"",
	        "<token of kind 5>",
	        "\"//\"",
	        "\"/*\"",
	        "<SINGLE_LINE_COMMENT>",
	        "\"*/\"",
	        "<token of kind 10>",
	        "\"||\"",
	        "\"&&\"",
	        "\"!\"",
	        "\"|\"",
	        "\"^\"",
	        "\"&\"",
	        "\"~\"",
	        "\"TRUE\"",
	        "\"FALSE\"",
	        "\"NULL\"",
	        "<INTEGER_LITERAL>",
	        "<HEX_LITERAL>",
	        "<DECIMAL_LITERAL>",
	        "<OCTAL_LITERAL>",
	        "<BINARY_LITERAL>",
	        "<FLOATING_POINT_LITERAL>",
	        "<EXPONENT>",
	        "<STRING_LITERAL>",
	        "\"+\"",
	        "\"-\"",
	        "\"*\"",
	        "\"/\"",
	        "\"%\"",
	        "\"?\"",
	        "\":\"",
	        "\",\"",
	        "\"==\"",
	        "\"!=\"",
	        "\"~=\"",
	        "\"<\"",
	        "\">\"",
	        "\"<=\"",
	        "\">=\"",
	        "\"(\"",
	        "\")\"",
	        "\"{\"",
	        "\"}\"",
	        "\">>\"",
	        "\">>>\"",
	        "\"<<\"",
	        "<IDENTIFIER>",
	        "<URICHAR>",
	        "<LETTER>",
	        "<DIGIT>",
	      };

	        static const int JJTVOID = 0;
	        static const int JJTSTART = 1;
	        static const int JJTCONDITIONALNODE = 2;
	        static const int JJTLOGICALORNODE = 3;
	        static const int JJTLOGICALANDNODE = 4;
	        static const int JJTBITWISEORNODE = 5;
	        static const int JJTBITWISEXORNODE = 6;
	        static const int JJTBITWISEANDNODE = 7;
	        static const int JJTEQNODE = 8;
	        static const int JJTNENODE = 9;
	        static const int JJTREGEXMATCHNODE = 10;
	        static const int JJTLTNODE = 11;
	        static const int JJTGTNODE = 12;
	        static const int JJTLENODE = 13;
	        static const int JJTGENODE = 14;
	        static const int JJTRIGHTSHIFTNODE = 15;
	        static const int JJTUNSIGNEDRIGHTSHIFTNODE = 16;
	        static const int JJTLEFTSHIFTNODE = 17;
	        static const int JJTADDNODE = 18;
	        static const int JJTSUBTRACTNODE = 19;
	        static const int JJTMULNODE = 20;
	        static const int JJTDIVNODE = 21;
	        static const int JJTMODNODE = 22;
	        static const int JJTUNARYNODE = 23;
	        static const int JJTLOGICALNOTNODE = 24;
	        static const int JJTBITWISENOTNODE = 25;
	        static const int JJTFUNCTIONNODE = 26;
	        static const int JJTVALUEREFERENCENODE = 27;
	        static const int JJTLONGCONSTNODE = 28;
	        static const int JJTFLOATCONSTNODE = 29;
	        static const int JJTSTRINGCONSTNODE = 30;
	        static const int JJTNULLNODE = 31;
	        static const int JJTTRUENODE = 32;
	        static const int JJTFALSENODE = 33;

	        std::string jjtNodeName = {
	          "void",
	          "Start",
	          "ConditionalNode",
	          "LogicalOrNode",
	          "LogicalAndNode",
	          "BitwiseOrNode",
	          "BitwiseXorNode",
	          "BitwiseAndNode",
	          "EQNode",
	          "NENode",
	          "RegexMatchNode",
	          "LTNode",
	          "GTNode",
	          "LENode",
	          "GENode",
	          "RightShiftNode",
	          "UnsignedRightShiftNode",
	          "LeftShiftNode",
	          "AddNode",
	          "SubtractNode",
	          "MulNode",
	          "DivNode",
	          "ModNode",
	          "UnaryNode",
	          "LogicalNotNode",
	          "BitwiseNotNode",
	          "FunctionNode",
	          "ValueReferenceNode",
	          "LongConstNode",
	          "FloatConstNode",
	          "StringConstNode",
	          "NullNode",
	          "TrueNode",
	          "FalseNode",
	        };

public: /* package */
    std::string* skip_to_matching_brace();

    ASTStart* Start();
    void Expression();
    void ConditionalExpression();
    void LogicalOrExpression();
    void LogicalAndExpression();
    void BitwiseOrExpression();
    void BitwiseXorExpression();
    void BitwiseAndExpression();
    void EqualityExpression();
    void RelationalExpression();
    void ShiftExpression();
    void AdditiveExpression();
    void MultiplicativeExpression();
    void UnaryExpression();
    void LogicalNotExpression();
    void BitwiseNotExpression();
    void PrimaryExpression();
    void Function();
    void Arguments();
    void ArgumentList();
    void ValueReference();
    void Literal();
    void BooleanLiteral();
    ExpressionParserTokenManager* token_source;

public: /* package */
    SimpleCharStream* jj_input_stream;

public:
    Token* token;
    Token* jj_nt;

private:
    int jj_ntk_;
    int jj_gen;
    ::intArray* jj_la1;
    static ::intArray* jj_la1_0_;
    static ::intArray* jj_la1_1_;
    static void jj_la1_init_0();
    static void jj_la1_init_1();
protected:
    void ctor(std::iostream* stream);
    void ctor(std::iostream* stream, std::string* encoding);

public:
    void ReInit(std::iostream* stream);
    void ReInit(std::iostream* stream, std::string* encoding);
protected:
    void ctor(std::ifstream* stream);

public:
    void ReInit(std::ifstream* stream);
protected:
    void ctor(ExpressionParserTokenManager* tm);

public:
    void ReInit(ExpressionParserTokenManager* tm);

private:
    Token* jj_consume_token(int kind) ;

public:
    Token* getNextToken();
    Token* getToken(int index);

private:
    int jj_ntk();
    std::list  jj_expentries;
    ::intArray* jj_expentry;
    int jj_kind;

public:
    ParseException* generateParseException();
    void enable_tracing();
    void disable_tracing();

    // Generated
    ExpressionParser(std::iostream* stream);
    ExpressionParser(std::iostream* stream, std::string* encoding);
    ExpressionParser(std::ifstream* stream);
    ExpressionParser(ExpressionParserTokenManager* tm);
protected:
    ExpressionParser(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();
    static ::intArray*& jj_la1_0();
    static ::intArray*& jj_la1_1();
    ::java::lang::Class* getClass0();
};
