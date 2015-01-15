// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ExpressionParser.java
#include <com/tibbo/aggregate/common/expression/parser/ExpressionParser.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTAddNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseAndNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseNotNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseOrNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseXorNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTConditionalNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTDivNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTEQNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTFalseNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTFloatConstNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTFunctionNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTGENode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTGTNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLENode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLTNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLeftShiftNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalAndNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalNotNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalOrNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLongConstNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTModNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTMulNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTNENode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTNullNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTRegexMatchNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTRightShiftNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTStart.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTStringConstNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTSubtractNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTTrueNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTUnaryNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTUnsignedRightShiftNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTValueReferenceNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserTokenManager.h"
#include <com/tibbo/aggregate/common/expression/parser/JJTExpressionParserState.h"
#include <com/tibbo/aggregate/common/expression/parser/Node.h"
#include <com/tibbo/aggregate/common/expression/parser/ParseException.h"
#include <com/tibbo/aggregate/common/expression/parser/SimpleCharStream.h"
#include <com/tibbo/aggregate/common/expression/parser/Token.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, voidArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Cloneable, ObjectArray > CloneableArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< std::string, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

namespace 
{
typedef ::SubArray< ::intArray, ::java::lang::CloneableArray, ::java::io::SerializableArray > intArrayArray;
} // 

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

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
ExpressionParser::ExpressionParser(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

ExpressionParser::ExpressionParser(std::iostream* stream) 
    : ExpressionParser(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

ExpressionParser::ExpressionParser(std::iostream* stream, const std::string & encoding)
    : ExpressionParser(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream,encoding);
}

ExpressionParser::ExpressionParser(std::ifstream* stream) 
    : ExpressionParser(*static_cast< ::default_init_tag* >(0))
{
    ctor(stream);
}

ExpressionParser::ExpressionParser(ExpressionParserTokenManager* tm) 
    : ExpressionParser(*static_cast< ::default_init_tag* >(0))
{
    ctor(tm);
}

void ExpressionParser::init()
{
    jjtree = new JJTExpressionParserState();
    jj_la1 = new ::intArray(int(25));
    jj_expentries = new ::java::util::ArrayList();
    jj_kind = -int(1);
}

std::string ExpressionParser::skip_to_matching_brace()
{
    auto res = u""_j;
    Token* tok;
    auto nesting = int(1);
    while (true) {
        tok = getToken(1);
        if(tok)->kind == EOF_)
            break;

        if(tok)->kind == LBRACE)
            nesting++;

        if(tok)->kind == RBRACE) {
            nesting--;
            if(nesting == 0)
                break;

        }
        if(tok)->kind == STRING_LITERAL) {
            res = std::stringBuilder(res).append(tok)->image)->replace(static_cast< ::java::lang::CharSequence* >(u"\u005c\u005c\u005c\u005c"_j), static_cast< ::java::lang::CharSequence* >(u"\u005c\u005c"_j)))->toString();
        } else {
            res = std::stringBuilder(res).append(tok)->image)->toString();
        }
        tok = getNextToken();
    }
    return res;
}

ASTStart* ExpressionParser::Start()
{
    auto jjtn000 = new ASTStart(JJTSTART);
    auto jjtc000 = true;
    jjtree)->openNodeScope(jjtn000);
    jjtn000)->jjtSetFirstToken(getToken(1));
    {
        auto finally0 = finally([&] {
            if(jjtc000) {
                jjtree)->closeNodeScope(static_cast< Node* >(jjtn000), true);
                jjtn000)->jjtSetLastToken(getToken(0));
            }
        });
        try {
            switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
            case NOT:
            case BITWISE_NOT:
            case TRUE:
            case FALSE:
            case NULL_:
            case INTEGER_LITERAL:
            case FLOATING_POINT_LITERAL:
            case STRING_LITERAL:
            case MINUS:
            case LBRAKET:
            case LBRACE:
            case IDENTIFIER:
                Expression();
                break;
            default:
                (*jj_la1)[int(0)] = jj_gen;
                ;
            }

            jj_consume_token(0);
            jjtree)->closeNodeScope(static_cast< Node* >(jjtn000), true);
            jjtc000 = false;
            jjtn000)->jjtSetLastToken(getToken(0));
{
                if(true)
                    return jjtn000;

            }
        } catch (::java::lang::Throwable* jjte000) {
            if(jjtc000) {
                jjtree)->clearNodeScope(jjtn000);
                jjtc000 = false;
            } else {
                jjtree)->popNode();
            }
            if(dynamic_cast< ::java::lang::RuntimeException* >(jjte000) != 0) {
{
                    if(true)
                        throw java_cast< ::java::lang::RuntimeException* >(jjte000);

                }
            }
            if(dynamic_cast< ParseException* >(jjte000) != 0) {
{
                    if(true)
                        throw java_cast< ParseException* >(jjte000);

                }
            }
{
                if(true)
                    throw java_cast< ::java::lang::Error* >(jjte000);

            }
        }
    }
    throw new ::java::lang::Error(u"Missing return statement in function"_j);
}

void ExpressionParser::Expression()
{
    ConditionalExpression();
}

void ExpressionParser::ConditionalExpression()
{
    LogicalOrExpression();
    {
        ASTConditionalNode* jjtn001;
        bool jjtc001;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case QUESTION:
            jj_consume_token(QUESTION);
            LogicalOrExpression();
            jj_consume_token(COLON);
            jjtn001 = new ASTConditionalNode(JJTCONDITIONALNODE);
            jjtc001 = true;
            jjtree)->openNodeScope(jjtn001);
            jjtn001)->jjtSetFirstToken(getToken(1));
            {
                auto finally1 = finally([&] {
                    if(jjtc001) {
                        jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), int(3));
                        jjtn001)->jjtSetLastToken(getToken(0));
                    }
                });
                try {
                    ConditionalExpression();
                } catch (::java::lang::Throwable* jjte001) {
                    if(jjtc001) {
                        jjtree)->clearNodeScope(jjtn001);
                        jjtc001 = false;
                    } else {
                        jjtree)->popNode();
                    }
                    if(dynamic_cast< ::java::lang::RuntimeException* >(jjte001) != 0) {
{
                            if(true)
                                throw java_cast< ::java::lang::RuntimeException* >(jjte001);

                        }
                    }
                    if(dynamic_cast< ParseException* >(jjte001) != 0) {
{
                            if(true)
                                throw java_cast< ParseException* >(jjte001);

                        }
                    }
{
                        if(true)
                            throw java_cast< ::java::lang::Error* >(jjte001);

                    }
                }
            }
            break;
        default:
            (*jj_la1)[int(1)] = jj_gen;
            ;
        }
    }

}

void ExpressionParser::LogicalOrExpression()
{
    LogicalAndExpression();
    while (true) {
        bool label_10_continue = false;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case OR:
            ;
            break;
        default:
            (*jj_la1)[int(2)] = jj_gen;
            goto label_10_break;
        }

        jj_consume_token(OR);
        auto jjtn001 = new ASTLogicalOrNode(JJTLOGICALORNODE);
        auto jjtc001 = true;
        jjtree)->openNodeScope(jjtn001);
        jjtn001)->jjtSetFirstToken(getToken(1));
        {
            auto finally2 = finally([&] {
                if(jjtc001) {
                    jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), int(2));
                    jjtn001)->jjtSetLastToken(getToken(0));
                }
            });
            try {
                LogicalAndExpression();
            } catch (::java::lang::Throwable* jjte001) {
                if(jjtc001) {
                    jjtree)->clearNodeScope(jjtn001);
                    jjtc001 = false;
                } else {
                    jjtree)->popNode();
                }
                if(dynamic_cast< ::java::lang::RuntimeException* >(jjte001) != 0) {
{
                        if(true)
                            throw java_cast< ::java::lang::RuntimeException* >(jjte001);

                    }
                }
                if(dynamic_cast< ParseException* >(jjte001) != 0) {
{
                        if(true)
                            throw java_cast< ParseException* >(jjte001);

                    }
                }
{
                    if(true)
                        throw java_cast< ::java::lang::Error* >(jjte001);

                }
            }
        }

    }

label_10_break:;
}

void ExpressionParser::LogicalAndExpression()
{
    BitwiseOrExpression();
    while (true) {
        bool label_20_continue = false;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case AND:
            ;
            break;
        default:
            (*jj_la1)[int(3)] = jj_gen;
            goto label_20_break;
        }

        jj_consume_token(AND);
        auto jjtn001 = new ASTLogicalAndNode(JJTLOGICALANDNODE);
        auto jjtc001 = true;
        jjtree)->openNodeScope(jjtn001);
        jjtn001)->jjtSetFirstToken(getToken(1));
        {
            auto finally3 = finally([&] {
                if(jjtc001) {
                    jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), int(2));
                    jjtn001)->jjtSetLastToken(getToken(0));
                }
            });
            try {
                BitwiseOrExpression();
            } catch (::java::lang::Throwable* jjte001) {
                if(jjtc001) {
                    jjtree)->clearNodeScope(jjtn001);
                    jjtc001 = false;
                } else {
                    jjtree)->popNode();
                }
                if(dynamic_cast< ::java::lang::RuntimeException* >(jjte001) != 0) {
{
                        if(true)
                            throw java_cast< ::java::lang::RuntimeException* >(jjte001);

                    }
                }
                if(dynamic_cast< ParseException* >(jjte001) != 0) {
{
                        if(true)
                            throw java_cast< ParseException* >(jjte001);

                    }
                }
{
                    if(true)
                        throw java_cast< ::java::lang::Error* >(jjte001);

                }
            }
        }

    }

label_20_break:;
}

void ExpressionParser::BitwiseOrExpression()
{
    BitwiseXorExpression();
    while (true) {
        bool label_30_continue = false;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case BITWISE_OR:
            ;
            break;
        default:
            (*jj_la1)[int(4)] = jj_gen;
            goto label_30_break;
        }

        jj_consume_token(BITWISE_OR);
        auto jjtn001 = new ASTBitwiseOrNode(JJTBITWISEORNODE);
        auto jjtc001 = true;
        jjtree)->openNodeScope(jjtn001);
        jjtn001)->jjtSetFirstToken(getToken(1));
        {
            auto finally4 = finally([&] {
                if(jjtc001) {
                    jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), int(2));
                    jjtn001)->jjtSetLastToken(getToken(0));
                }
            });
            try {
                BitwiseXorExpression();
            } catch (::java::lang::Throwable* jjte001) {
                if(jjtc001) {
                    jjtree)->clearNodeScope(jjtn001);
                    jjtc001 = false;
                } else {
                    jjtree)->popNode();
                }
                if(dynamic_cast< ::java::lang::RuntimeException* >(jjte001) != 0) {
{
                        if(true)
                            throw java_cast< ::java::lang::RuntimeException* >(jjte001);

                    }
                }
                if(dynamic_cast< ParseException* >(jjte001) != 0) {
{
                        if(true)
                            throw java_cast< ParseException* >(jjte001);

                    }
                }
{
                    if(true)
                        throw java_cast< ::java::lang::Error* >(jjte001);

                }
            }
        }

    }

label_30_break:;
}

void ExpressionParser::BitwiseXorExpression()
{
    BitwiseAndExpression();
    while (true) {
        bool label_40_continue = false;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case BITWISE_XOR:
            ;
            break;
        default:
            (*jj_la1)[int(5)] = jj_gen;
            goto label_40_break;
        }

        jj_consume_token(BITWISE_XOR);
        auto jjtn001 = new ASTBitwiseXorNode(JJTBITWISEXORNODE);
        auto jjtc001 = true;
        jjtree)->openNodeScope(jjtn001);
        jjtn001)->jjtSetFirstToken(getToken(1));
        {
            auto finally5 = finally([&] {
                if(jjtc001) {
                    jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), int(2));
                    jjtn001)->jjtSetLastToken(getToken(0));
                }
            });
            try {
                BitwiseAndExpression();
            } catch (::java::lang::Throwable* jjte001) {
                if(jjtc001) {
                    jjtree)->clearNodeScope(jjtn001);
                    jjtc001 = false;
                } else {
                    jjtree)->popNode();
                }
                if(dynamic_cast< ::java::lang::RuntimeException* >(jjte001) != 0) {
{
                        if(true)
                            throw java_cast< ::java::lang::RuntimeException* >(jjte001);

                    }
                }
                if(dynamic_cast< ParseException* >(jjte001) != 0) {
{
                        if(true)
                            throw java_cast< ParseException* >(jjte001);

                    }
                }
{
                    if(true)
                        throw java_cast< ::java::lang::Error* >(jjte001);

                }
            }
        }

    }

label_40_break:;
}

void ExpressionParser::BitwiseAndExpression()
{
    EqualityExpression();
    while (true) {
        bool label_50_continue = false;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case BITWISE_AND:
            ;
            break;
        default:
            (*jj_la1)[int(6)] = jj_gen;
            goto label_50_break;
        }

        jj_consume_token(BITWISE_AND);
        auto jjtn001 = new ASTBitwiseAndNode(JJTBITWISEANDNODE);
        auto jjtc001 = true;
        jjtree)->openNodeScope(jjtn001);
        jjtn001)->jjtSetFirstToken(getToken(1));
        {
            auto finally6 = finally([&] {
                if(jjtc001) {
                    jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), int(2));
                    jjtn001)->jjtSetLastToken(getToken(0));
                }
            });
            try {
                EqualityExpression();
            } catch (::java::lang::Throwable* jjte001) {
                if(jjtc001) {
                    jjtree)->clearNodeScope(jjtn001);
                    jjtc001 = false;
                } else {
                    jjtree)->popNode();
                }
                if(dynamic_cast< ::java::lang::RuntimeException* >(jjte001) != 0) {
{
                        if(true)
                            throw java_cast< ::java::lang::RuntimeException* >(jjte001);

                    }
                }
                if(dynamic_cast< ParseException* >(jjte001) != 0) {
{
                        if(true)
                            throw java_cast< ParseException* >(jjte001);

                    }
                }
{
                    if(true)
                        throw java_cast< ::java::lang::Error* >(jjte001);

                }
            }
        }

    }

label_50_break:;
}

void ExpressionParser::EqualityExpression()
{
    RelationalExpression();
    while (true) {
        bool label_60_continue = false;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case EQ:
        case NE:
        case MATCH:
            ;
            break;
        default:
            (*jj_la1)[int(7)] = jj_gen;
            goto label_60_break;
        }

        {
            ASTEQNode* jjtn001;
            bool jjtc001;
            ASTNENode* jjtn002;
            bool jjtc002;
            ASTRegexMatchNode* jjtn003;
            bool jjtc003;
            switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
            case EQ:
                jj_consume_token(EQ);
                jjtn001 = new ASTEQNode(JJTEQNODE);
                jjtc001 = true;
                jjtree)->openNodeScope(jjtn001);
                jjtn001)->jjtSetFirstToken(getToken(1));
                {
                    auto finally7 = finally([&] {
                        if(jjtc001) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), int(2));
                            jjtn001)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        RelationalExpression();
                    } catch (::java::lang::Throwable* jjte001) {
                        if(jjtc001) {
                            jjtree)->clearNodeScope(jjtn001);
                            jjtc001 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte001) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte001);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte001) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte001);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte001);

                        }
                    }
                }
                break;
            case NE:
                jj_consume_token(NE);
                jjtn002 = new ASTNENode(JJTNENODE);
                jjtc002 = true;
                jjtree)->openNodeScope(jjtn002);
                jjtn002)->jjtSetFirstToken(getToken(1));
                {
                    auto finally8 = finally([&] {
                        if(jjtc002) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn002), int(2));
                            jjtn002)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        RelationalExpression();
                    } catch (::java::lang::Throwable* jjte002) {
                        if(jjtc002) {
                            jjtree)->clearNodeScope(jjtn002);
                            jjtc002 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte002) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte002);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte002) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte002);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte002);

                        }
                    }
                }
                break;
            case MATCH:
                jj_consume_token(MATCH);
                jjtn003 = new ASTRegexMatchNode(JJTREGEXMATCHNODE);
                jjtc003 = true;
                jjtree)->openNodeScope(jjtn003);
                jjtn003)->jjtSetFirstToken(getToken(1));
                {
                    auto finally9 = finally([&] {
                        if(jjtc003) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn003), int(2));
                            jjtn003)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        RelationalExpression();
                    } catch (::java::lang::Throwable* jjte003) {
                        if(jjtc003) {
                            jjtree)->clearNodeScope(jjtn003);
                            jjtc003 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte003) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte003);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte003) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte003);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte003);

                        }
                    }
                }
                break;
            default:
                (*jj_la1)[int(8)] = jj_gen;
                jj_consume_token(-int(1));
                throw new ParseException();
            }
        }


    }

label_60_break:;
}

void ExpressionParser::RelationalExpression()
{
    ShiftExpression();
    while (true) {
        bool label_70_continue = false;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case LT:
        case GT:
        case LTE:
        case GTE:
            ;
            break;
        default:
            (*jj_la1)[int(9)] = jj_gen;
            goto label_70_break;
        }

        {
            ASTLTNode* jjtn001;
            bool jjtc001;
            ASTGTNode* jjtn002;
            bool jjtc002;
            ASTLENode* jjtn003;
            bool jjtc003;
            ASTGENode* jjtn004;
            bool jjtc004;
            switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
            case LT:
                jj_consume_token(LT);
                jjtn001 = new ASTLTNode(JJTLTNODE);
                jjtc001 = true;
                jjtree)->openNodeScope(jjtn001);
                jjtn001)->jjtSetFirstToken(getToken(1));
                {
                    auto finally10 = finally([&] {
                        if(jjtc001) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), int(2));
                            jjtn001)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        ShiftExpression();
                    } catch (::java::lang::Throwable* jjte001) {
                        if(jjtc001) {
                            jjtree)->clearNodeScope(jjtn001);
                            jjtc001 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte001) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte001);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte001) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte001);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte001);

                        }
                    }
                }
                break;
            case GT:
                jj_consume_token(GT);
                jjtn002 = new ASTGTNode(JJTGTNODE);
                jjtc002 = true;
                jjtree)->openNodeScope(jjtn002);
                jjtn002)->jjtSetFirstToken(getToken(1));
                {
                    auto finally11 = finally([&] {
                        if(jjtc002) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn002), int(2));
                            jjtn002)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        ShiftExpression();
                    } catch (::java::lang::Throwable* jjte002) {
                        if(jjtc002) {
                            jjtree)->clearNodeScope(jjtn002);
                            jjtc002 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte002) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte002);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte002) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte002);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte002);

                        }
                    }
                }
                break;
            case LTE:
                jj_consume_token(LTE);
                jjtn003 = new ASTLENode(JJTLENODE);
                jjtc003 = true;
                jjtree)->openNodeScope(jjtn003);
                jjtn003)->jjtSetFirstToken(getToken(1));
                {
                    auto finally12 = finally([&] {
                        if(jjtc003) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn003), int(2));
                            jjtn003)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        ShiftExpression();
                    } catch (::java::lang::Throwable* jjte003) {
                        if(jjtc003) {
                            jjtree)->clearNodeScope(jjtn003);
                            jjtc003 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte003) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte003);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte003) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte003);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte003);

                        }
                    }
                }
                break;
            case GTE:
                jj_consume_token(GTE);
                jjtn004 = new ASTGENode(JJTGENODE);
                jjtc004 = true;
                jjtree)->openNodeScope(jjtn004);
                jjtn004)->jjtSetFirstToken(getToken(1));
                {
                    auto finally13 = finally([&] {
                        if(jjtc004) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn004), int(2));
                            jjtn004)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        ShiftExpression();
                    } catch (::java::lang::Throwable* jjte004) {
                        if(jjtc004) {
                            jjtree)->clearNodeScope(jjtn004);
                            jjtc004 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte004) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte004);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte004) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte004);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte004);

                        }
                    }
                }
                break;
            default:
                (*jj_la1)[int(10)] = jj_gen;
                jj_consume_token(-int(1));
                throw new ParseException();
            }
        }


    }

label_70_break:;
}

void ExpressionParser::ShiftExpression()
{
    AdditiveExpression();
    while (true) {
        bool label_80_continue = false;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case RIGHT_SHIFT:
        case URIGHT_SHIFT:
        case LEFT_SHIFT:
            ;
            break;
        default:
            (*jj_la1)[int(11)] = jj_gen;
            goto label_80_break;
        }

        {
            ASTRightShiftNode* jjtn001;
            bool jjtc001;
            ASTUnsignedRightShiftNode* jjtn002;
            bool jjtc002;
            ASTLeftShiftNode* jjtn003;
            bool jjtc003;
            switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
            case RIGHT_SHIFT:
                jj_consume_token(RIGHT_SHIFT);
                jjtn001 = new ASTRightShiftNode(JJTRIGHTSHIFTNODE);
                jjtc001 = true;
                jjtree)->openNodeScope(jjtn001);
                jjtn001)->jjtSetFirstToken(getToken(1));
                {
                    auto finally14 = finally([&] {
                        if(jjtc001) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), int(2));
                            jjtn001)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        AdditiveExpression();
                    } catch (::java::lang::Throwable* jjte001) {
                        if(jjtc001) {
                            jjtree)->clearNodeScope(jjtn001);
                            jjtc001 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte001) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte001);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte001) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte001);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte001);

                        }
                    }
                }
                break;
            case URIGHT_SHIFT:
                jj_consume_token(URIGHT_SHIFT);
                jjtn002 = new ASTUnsignedRightShiftNode(JJTUNSIGNEDRIGHTSHIFTNODE);
                jjtc002 = true;
                jjtree)->openNodeScope(jjtn002);
                jjtn002)->jjtSetFirstToken(getToken(1));
                {
                    auto finally15 = finally([&] {
                        if(jjtc002) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn002), int(2));
                            jjtn002)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        AdditiveExpression();
                    } catch (::java::lang::Throwable* jjte002) {
                        if(jjtc002) {
                            jjtree)->clearNodeScope(jjtn002);
                            jjtc002 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte002) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte002);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte002) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte002);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte002);

                        }
                    }
                }
                break;
            case LEFT_SHIFT:
                jj_consume_token(LEFT_SHIFT);
                jjtn003 = new ASTLeftShiftNode(JJTLEFTSHIFTNODE);
                jjtc003 = true;
                jjtree)->openNodeScope(jjtn003);
                jjtn003)->jjtSetFirstToken(getToken(1));
                {
                    auto finally16 = finally([&] {
                        if(jjtc003) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn003), int(2));
                            jjtn003)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        AdditiveExpression();
                    } catch (::java::lang::Throwable* jjte003) {
                        if(jjtc003) {
                            jjtree)->clearNodeScope(jjtn003);
                            jjtc003 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte003) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte003);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte003) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte003);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte003);

                        }
                    }
                }
                break;
            default:
                (*jj_la1)[int(12)] = jj_gen;
                jj_consume_token(-int(1));
                throw new ParseException();
            }
        }


    }

label_80_break:;
}

void ExpressionParser::AdditiveExpression()
{
    MultiplicativeExpression();
    while (true) {
        bool label_90_continue = false;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case PLUS:
        case MINUS:
            ;
            break;
        default:
            (*jj_la1)[int(13)] = jj_gen;
            goto label_90_break;
        }

        {
            ASTAddNode* jjtn001;
            bool jjtc001;
            ASTSubtractNode* jjtn002;
            bool jjtc002;
            switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
            case PLUS:
                jj_consume_token(PLUS);
                jjtn001 = new ASTAddNode(JJTADDNODE);
                jjtc001 = true;
                jjtree)->openNodeScope(jjtn001);
                jjtn001)->jjtSetFirstToken(getToken(1));
                {
                    auto finally17 = finally([&] {
                        if(jjtc001) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), int(2));
                            jjtn001)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        MultiplicativeExpression();
                    } catch (::java::lang::Throwable* jjte001) {
                        if(jjtc001) {
                            jjtree)->clearNodeScope(jjtn001);
                            jjtc001 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte001) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte001);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte001) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte001);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte001);

                        }
                    }
                }
                break;
            case MINUS:
                jj_consume_token(MINUS);
                jjtn002 = new ASTSubtractNode(JJTSUBTRACTNODE);
                jjtc002 = true;
                jjtree)->openNodeScope(jjtn002);
                jjtn002)->jjtSetFirstToken(getToken(1));
                {
                    auto finally18 = finally([&] {
                        if(jjtc002) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn002), int(2));
                            jjtn002)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        MultiplicativeExpression();
                    } catch (::java::lang::Throwable* jjte002) {
                        if(jjtc002) {
                            jjtree)->clearNodeScope(jjtn002);
                            jjtc002 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte002) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte002);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte002) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte002);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte002);

                        }
                    }
                }
                break;
            default:
                (*jj_la1)[int(14)] = jj_gen;
                jj_consume_token(-int(1));
                throw new ParseException();
            }
        }


    }

label_90_break:;
}

void ExpressionParser::MultiplicativeExpression()
{
    UnaryExpression();
    while (true) {
        bool label_100_continue = false;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case MUL:
        case DIV:
        case MOD:
            ;
            break;
        default:
            (*jj_la1)[int(15)] = jj_gen;
            goto label_100_break;
        }

        {
            ASTMulNode* jjtn001;
            bool jjtc001;
            ASTDivNode* jjtn002;
            bool jjtc002;
            ASTModNode* jjtn003;
            bool jjtc003;
            switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
            case MUL:
                jj_consume_token(MUL);
                jjtn001 = new ASTMulNode(JJTMULNODE);
                jjtc001 = true;
                jjtree)->openNodeScope(jjtn001);
                jjtn001)->jjtSetFirstToken(getToken(1));
                {
                    auto finally19 = finally([&] {
                        if(jjtc001) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), int(2));
                            jjtn001)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        UnaryExpression();
                    } catch (::java::lang::Throwable* jjte001) {
                        if(jjtc001) {
                            jjtree)->clearNodeScope(jjtn001);
                            jjtc001 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte001) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte001);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte001) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte001);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte001);

                        }
                    }
                }
                break;
            case DIV:
                jj_consume_token(DIV);
                jjtn002 = new ASTDivNode(JJTDIVNODE);
                jjtc002 = true;
                jjtree)->openNodeScope(jjtn002);
                jjtn002)->jjtSetFirstToken(getToken(1));
                {
                    auto finally20 = finally([&] {
                        if(jjtc002) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn002), int(2));
                            jjtn002)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        UnaryExpression();
                    } catch (::java::lang::Throwable* jjte002) {
                        if(jjtc002) {
                            jjtree)->clearNodeScope(jjtn002);
                            jjtc002 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte002) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte002);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte002) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte002);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte002);

                        }
                    }
                }
                break;
            case MOD:
                jj_consume_token(MOD);
                jjtn003 = new ASTModNode(JJTMODNODE);
                jjtc003 = true;
                jjtree)->openNodeScope(jjtn003);
                jjtn003)->jjtSetFirstToken(getToken(1));
                {
                    auto finally21 = finally([&] {
                        if(jjtc003) {
                            jjtree)->closeNodeScope(static_cast< Node* >(jjtn003), int(2));
                            jjtn003)->jjtSetLastToken(getToken(0));
                        }
                    });
                    try {
                        UnaryExpression();
                    } catch (::java::lang::Throwable* jjte003) {
                        if(jjtc003) {
                            jjtree)->clearNodeScope(jjtn003);
                            jjtc003 = false;
                        } else {
                            jjtree)->popNode();
                        }
                        if(dynamic_cast< ::java::lang::RuntimeException* >(jjte003) != 0) {
{
                                if(true)
                                    throw java_cast< ::java::lang::RuntimeException* >(jjte003);

                            }
                        }
                        if(dynamic_cast< ParseException* >(jjte003) != 0) {
{
                                if(true)
                                    throw java_cast< ParseException* >(jjte003);

                            }
                        }
{
                            if(true)
                                throw java_cast< ::java::lang::Error* >(jjte003);

                        }
                    }
                }
                break;
            default:
                (*jj_la1)[int(16)] = jj_gen;
                jj_consume_token(-int(1));
                throw new ParseException();
            }
        }


    }

label_100_break:;
}

void ExpressionParser::UnaryExpression()
{
    {
        ASTUnaryNode* jjtn001;
        bool jjtc001;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case MINUS:
            jj_consume_token(MINUS);
            jjtn001 = new ASTUnaryNode(JJTUNARYNODE);
            jjtc001 = true;
            jjtree)->openNodeScope(jjtn001);
            jjtn001)->jjtSetFirstToken(getToken(1));
            {
                auto finally22 = finally([&] {
                    if(jjtc001) {
                        jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), int(1));
                        jjtn001)->jjtSetLastToken(getToken(0));
                    }
                });
                try {
                    LogicalNotExpression();
                } catch (::java::lang::Throwable* jjte001) {
                    if(jjtc001) {
                        jjtree)->clearNodeScope(jjtn001);
                        jjtc001 = false;
                    } else {
                        jjtree)->popNode();
                    }
                    if(dynamic_cast< ::java::lang::RuntimeException* >(jjte001) != 0) {
{
                            if(true)
                                throw java_cast< ::java::lang::RuntimeException* >(jjte001);

                        }
                    }
                    if(dynamic_cast< ParseException* >(jjte001) != 0) {
{
                            if(true)
                                throw java_cast< ParseException* >(jjte001);

                        }
                    }
{
                        if(true)
                            throw java_cast< ::java::lang::Error* >(jjte001);

                    }
                }
            }
            break;
        case NOT:
        case BITWISE_NOT:
        case TRUE:
        case FALSE:
        case NULL_:
        case INTEGER_LITERAL:
        case FLOATING_POINT_LITERAL:
        case STRING_LITERAL:
        case LBRAKET:
        case LBRACE:
        case IDENTIFIER:
            LogicalNotExpression();
            break;
        default:
            (*jj_la1)[int(17)] = jj_gen;
            jj_consume_token(-int(1));
            throw new ParseException();
        }
    }

}

void ExpressionParser::LogicalNotExpression()
{
    {
        ASTLogicalNotNode* jjtn001;
        bool jjtc001;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case NOT:
            jj_consume_token(NOT);
            jjtn001 = new ASTLogicalNotNode(JJTLOGICALNOTNODE);
            jjtc001 = true;
            jjtree)->openNodeScope(jjtn001);
            jjtn001)->jjtSetFirstToken(getToken(1));
            {
                auto finally23 = finally([&] {
                    if(jjtc001) {
                        jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), int(1));
                        jjtn001)->jjtSetLastToken(getToken(0));
                    }
                });
                try {
                    LogicalNotExpression();
                } catch (::java::lang::Throwable* jjte001) {
                    if(jjtc001) {
                        jjtree)->clearNodeScope(jjtn001);
                        jjtc001 = false;
                    } else {
                        jjtree)->popNode();
                    }
                    if(dynamic_cast< ::java::lang::RuntimeException* >(jjte001) != 0) {
{
                            if(true)
                                throw java_cast< ::java::lang::RuntimeException* >(jjte001);

                        }
                    }
                    if(dynamic_cast< ParseException* >(jjte001) != 0) {
{
                            if(true)
                                throw java_cast< ParseException* >(jjte001);

                        }
                    }
{
                        if(true)
                            throw java_cast< ::java::lang::Error* >(jjte001);

                    }
                }
            }
            break;
        case BITWISE_NOT:
        case TRUE:
        case FALSE:
        case NULL_:
        case INTEGER_LITERAL:
        case FLOATING_POINT_LITERAL:
        case STRING_LITERAL:
        case LBRAKET:
        case LBRACE:
        case IDENTIFIER:
            BitwiseNotExpression();
            break;
        default:
            (*jj_la1)[int(18)] = jj_gen;
            jj_consume_token(-int(1));
            throw new ParseException();
        }
    }

}

void ExpressionParser::BitwiseNotExpression()
{
    {
        ASTBitwiseNotNode* jjtn001;
        bool jjtc001;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case BITWISE_NOT:
            jj_consume_token(BITWISE_NOT);
            jjtn001 = new ASTBitwiseNotNode(JJTBITWISENOTNODE);
            jjtc001 = true;
            jjtree)->openNodeScope(jjtn001);
            jjtn001)->jjtSetFirstToken(getToken(1));
            {
                auto finally24 = finally([&] {
                    if(jjtc001) {
                        jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), int(1));
                        jjtn001)->jjtSetLastToken(getToken(0));
                    }
                });
                try {
                    BitwiseNotExpression();
                } catch (::java::lang::Throwable* jjte001) {
                    if(jjtc001) {
                        jjtree)->clearNodeScope(jjtn001);
                        jjtc001 = false;
                    } else {
                        jjtree)->popNode();
                    }
                    if(dynamic_cast< ::java::lang::RuntimeException* >(jjte001) != 0) {
{
                            if(true)
                                throw java_cast< ::java::lang::RuntimeException* >(jjte001);

                        }
                    }
                    if(dynamic_cast< ParseException* >(jjte001) != 0) {
{
                            if(true)
                                throw java_cast< ParseException* >(jjte001);

                        }
                    }
{
                        if(true)
                            throw java_cast< ::java::lang::Error* >(jjte001);

                    }
                }
            }
            break;
        case TRUE:
        case FALSE:
        case NULL_:
        case INTEGER_LITERAL:
        case FLOATING_POINT_LITERAL:
        case STRING_LITERAL:
        case LBRAKET:
        case LBRACE:
        case IDENTIFIER:
            PrimaryExpression();
            break;
        default:
            (*jj_la1)[int(19)] = jj_gen;
            jj_consume_token(-int(1));
            throw new ParseException();
        }
    }

}

void ExpressionParser::PrimaryExpression()
{
    const std::string & name;
    switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
    case LBRACE:
        jj_consume_token(LBRACE);
        ValueReference();
        jj_consume_token(RBRACE);
        break;
    case TRUE:
    case FALSE:
    case NULL_:
    case INTEGER_LITERAL:
    case FLOATING_POINT_LITERAL:
    case STRING_LITERAL:
        Literal();
        break;
    case IDENTIFIER:
        Function();
        break;
    case LBRAKET:
        jj_consume_token(LBRAKET);
        Expression();
        jj_consume_token(RBRAKET);
        break;
    default:
        (*jj_la1)[int(20)] = jj_gen;
        jj_consume_token(-int(1));
        throw new ParseException();
    }

}

void ExpressionParser::Function()
{
    auto jjtn000 = new ASTFunctionNode(JJTFUNCTIONNODE);
    auto jjtc000 = true;
    jjtree)->openNodeScope(jjtn000);
    jjtn000)->jjtSetFirstToken(getToken(1));
    Token* t;
    {
        auto finally25 = finally([&] {
            if(jjtc000) {
                jjtree)->closeNodeScope(static_cast< Node* >(jjtn000), true);
                jjtn000)->jjtSetLastToken(getToken(0));
            }
        });
        try {
            t = jj_consume_token(IDENTIFIER);
            Arguments();
            jjtree)->closeNodeScope(static_cast< Node* >(jjtn000), true);
            jjtc000 = false;
            jjtn000)->jjtSetLastToken(getToken(0));
            jjtn000)->name = t)->image;
        } catch (::java::lang::Throwable* jjte000) {
            if(jjtc000) {
                jjtree)->clearNodeScope(jjtn000);
                jjtc000 = false;
            } else {
                jjtree)->popNode();
            }
            if(dynamic_cast< ::java::lang::RuntimeException* >(jjte000) != 0) {
{
                    if(true)
                        throw java_cast< ::java::lang::RuntimeException* >(jjte000);

                }
            }
            if(dynamic_cast< ParseException* >(jjte000) != 0) {
{
                    if(true)
                        throw java_cast< ParseException* >(jjte000);

                }
            }
{
                if(true)
                    throw java_cast< ::java::lang::Error* >(jjte000);

            }
        }
    }
}

void ExpressionParser::Arguments()
{
    jj_consume_token(LBRAKET);
    switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
    case NOT:
    case BITWISE_NOT:
    case TRUE:
    case FALSE:
    case NULL_:
    case INTEGER_LITERAL:
    case FLOATING_POINT_LITERAL:
    case STRING_LITERAL:
    case MINUS:
    case LBRAKET:
    case LBRACE:
    case IDENTIFIER:
        ArgumentList();
        break;
    default:
        (*jj_la1)[int(21)] = jj_gen;
        ;
    }

    jj_consume_token(RBRAKET);
}

void ExpressionParser::ArgumentList()
{
    Expression();
    while (true) {
        bool label_110_continue = false;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case COMMA:
            ;
            break;
        default:
            (*jj_la1)[int(22)] = jj_gen;
            goto label_110_break;
        }

        jj_consume_token(COMMA);
        Expression();

    }

label_110_break:;
}

void ExpressionParser::ValueReference()
{
    auto jjtn000 = new ASTValueReferenceNode(JJTVALUEREFERENCENODE);
    auto jjtc000 = true;
    jjtree)->openNodeScope(jjtn000);
    jjtn000)->jjtSetFirstToken(getToken(1));
    Token* t;
    {
        auto finally26 = finally([&] {
            if(jjtc000) {
                jjtree)->closeNodeScope(static_cast< Node* >(jjtn000), true);
                jjtn000)->jjtSetLastToken(getToken(0));
            }
        });
        {
            jjtn000)->uriImage = skip_to_matching_brace();
        }
    }

}

void ExpressionParser::Literal()
{
    Token* t;
    {
        ASTLongConstNode* jjtn001;
        bool jjtc001;
        ASTFloatConstNode* jjtn002;
        bool jjtc002;
        ASTStringConstNode* jjtn003;
        bool jjtc003;
        ASTNullNode* jjtn004;
        bool jjtc004;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case INTEGER_LITERAL:
            jjtn001 = new ASTLongConstNode(JJTLONGCONSTNODE);
            jjtc001 = true;
            jjtree)->openNodeScope(jjtn001);
            jjtn001)->jjtSetFirstToken(getToken(1));
            {
                auto finally27 = finally([&] {
                    if(jjtc001) {
                        jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), true);
                        jjtn001)->jjtSetLastToken(getToken(0));
                    }
                });
                {
                    t = jj_consume_token(INTEGER_LITERAL);
                    jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), true);
                    jjtc001 = false;
                    jjtn001)->jjtSetLastToken(getToken(0));
                    if(t)->image)->startsWith(u"0x"_j) || t)->image)->startsWith(u"0X"_j)) {
                        jjtn001)->val = ::java::lang::Long::parseLong(t)->image)->substring(2, t)->image)->length()), 16);
                    } else if(t)->image)->startsWith(u"0b"_j) || t)->image)->startsWith(u"0B"_j)) {
                        jjtn001)->val = ::java::lang::Long::parseLong(t)->image)->substring(2, t)->image)->length()), 2);
                    } else if(t)->image)->startsWith(u"0"_j) && t)->image)->length() > 1) {
                        jjtn001)->val = ::java::lang::Long::parseLong(t)->image)->substring(1, t)->image)->length()), 8);
                    } else {
                        jjtn001)->val = ::java::lang::Long::parseLong(t)->image);
                    }
                }
            }

            break;
        case FLOATING_POINT_LITERAL:
            jjtn002 = new ASTFloatConstNode(JJTFLOATCONSTNODE);
            jjtc002 = true;
            jjtree)->openNodeScope(jjtn002);
            jjtn002)->jjtSetFirstToken(getToken(1));
            {
                auto finally28 = finally([&] {
                    if(jjtc002) {
                        jjtree)->closeNodeScope(static_cast< Node* >(jjtn002), true);
                        jjtn002)->jjtSetLastToken(getToken(0));
                    }
                });
                {
                    t = jj_consume_token(FLOATING_POINT_LITERAL);
                    jjtree)->closeNodeScope(static_cast< Node* >(jjtn002), true);
                    jjtc002 = false;
                    jjtn002)->jjtSetLastToken(getToken(0));
                    jjtn002)->val = ::java::lang::Float::parseFloat(t)->image);
                }
            }

            break;
        case STRING_LITERAL:
            jjtn003 = new ASTStringConstNode(JJTSTRINGCONSTNODE);
            jjtc003 = true;
            jjtree)->openNodeScope(jjtn003);
            jjtn003)->jjtSetFirstToken(getToken(1));
            {
                auto finally29 = finally([&] {
                    if(jjtc003) {
                        jjtree)->closeNodeScope(static_cast< Node* >(jjtn003), true);
                        jjtn003)->jjtSetLastToken(getToken(0));
                    }
                });
                {
                    t = jj_consume_token(STRING_LITERAL);
                    jjtree)->closeNodeScope(static_cast< Node* >(jjtn003), true);
                    jjtc003 = false;
                    jjtn003)->jjtSetLastToken(getToken(0));
                    jjtn003)->val = t)->image)->substring(1, t)->image)->length() - int(1));
                    jjtn003)->val = ::org::apache::commons::lang::StringEscapeUtils::unescapeJava(jjtn003)->val);
                }
            }

            break;
        case TRUE:
        case FALSE:
            BooleanLiteral();
            break;
        case NULL_:
            jjtn004 = new ASTNullNode(JJTNULLNODE);
            jjtc004 = true;
            jjtree)->openNodeScope(jjtn004);
            jjtn004)->jjtSetFirstToken(getToken(1));
            {
                auto finally30 = finally([&] {
                    if(jjtc004) {
                        jjtree)->closeNodeScope(static_cast< Node* >(jjtn004), true);
                        jjtn004)->jjtSetLastToken(getToken(0));
                    }
                });
                {
                    jj_consume_token(NULL_);
                }
            }

            break;
        default:
            (*jj_la1)[int(23)] = jj_gen;
            jj_consume_token(-int(1));
            throw new ParseException();
        }
    }

}

void ExpressionParser::BooleanLiteral()
{
    {
        ASTTrueNode* jjtn001;
        bool jjtc001;
        ASTFalseNode* jjtn002;
        bool jjtc002;
        switch ((jj_ntk_ == -int(1)) ? jj_ntk() : jj_ntk_) {
        case TRUE:
            jjtn001 = new ASTTrueNode(JJTTRUENODE);
            jjtc001 = true;
            jjtree)->openNodeScope(jjtn001);
            jjtn001)->jjtSetFirstToken(getToken(1));
            {
                auto finally31 = finally([&] {
                    if(jjtc001) {
                        jjtree)->closeNodeScope(static_cast< Node* >(jjtn001), true);
                        jjtn001)->jjtSetLastToken(getToken(0));
                    }
                });
                {
                    jj_consume_token(TRUE);
                }
            }

            break;
        case FALSE:
            jjtn002 = new ASTFalseNode(JJTFALSENODE);
            jjtc002 = true;
            jjtree)->openNodeScope(jjtn002);
            jjtn002)->jjtSetFirstToken(getToken(1));
            {
                auto finally32 = finally([&] {
                    if(jjtc002) {
                        jjtree)->closeNodeScope(static_cast< Node* >(jjtn002), true);
                        jjtn002)->jjtSetLastToken(getToken(0));
                    }
                });
                {
                    jj_consume_token(FALSE);
                }
            }

            break;
        default:
            (*jj_la1)[int(24)] = jj_gen;
            jj_consume_token(-int(1));
            throw new ParseException();
        }
    }

}

intArray*& ExpressionParser::jj_la1_0()
{
    
    return jj_la1_0_;
}
intArray* ExpressionParser::jj_la1_0_;

intArray*& ExpressionParser::jj_la1_1()
{
    
    return jj_la1_1_;
}
intArray* ExpressionParser::jj_la1_1_;

void ExpressionParser::jj_la1_init_0()
{
    
    jj_la1_0_ = new ::intArray({
        int(1413357568)
        , int(0)
        , int(2048)
        , int(4096)
        , int(16384)
        , int(32768)
        , int(65536)
        , int(0)
        , int(0)
        , int(0)
        , int(0)
        , int(0)
        , int(0)
        , int(1610612736)
        , int(1610612736)
        , int(-0x7fffffff-1)
        , int(-0x7fffffff-1)
        , int(1413357568)
        , int(339615744)
        , int(339607552)
        , int(339476480)
        , int(1413357568)
        , int(0)
        , int(339476480)
        , int(786432)
    });
}

void ExpressionParser::jj_la1_init_1()
{
    
    jj_la1_1_ = new ::intArray({
        int(544768)
        , int(4)
        , int(0)
        , int(0)
        , int(0)
        , int(0)
        , int(0)
        , int(224)
        , int(224)
        , int(3840)
        , int(3840)
        , int(458752)
        , int(458752)
        , int(0)
        , int(0)
        , int(3)
        , int(3)
        , int(544768)
        , int(544768)
        , int(544768)
        , int(544768)
        , int(544768)
        , int(16)
        , int(0)
        , int(0)
    });
}

void ExpressionParser::ctor(std::iostream* stream)
{
    ctor(stream, 0);
}

void ExpressionParser::ctor(std::iostream* stream, const std::string & encoding)
{
    super::ctor();
    init();
    try {
        jj_input_stream = new SimpleCharStream(stream, encoding, int(1), int(1));
    } catch (::java::io::UnsupportedEncodingException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
    token_source = new ExpressionParserTokenManager(jj_input_stream);
    token = new Token();
    jj_ntk_ = -int(1);
    jj_gen;
    for (auto i = int(0); i < 25; i++) 
                (*jj_la1)[i] = -int(1);

}

void ExpressionParser::ReInit(std::iostream* stream)
{
    ReInit(stream, 0);
}

void ExpressionParser::ReInit(std::iostream* stream, const std::string & encoding)
{
    try {
        jj_input_stream)->ReInit(stream, encoding, int(1), int(1));
    } catch (::java::io::UnsupportedEncodingException* e) {
        throw new ::java::lang::RuntimeException(static_cast< ::java::lang::Throwable* >(e));
    }
    token_source)->ReInit(jj_input_stream);
    token = new Token();
    jj_ntk_ = -int(1);
    jjtree)->reset();
    jj_gen;
    for (auto i = int(0); i < 25; i++) 
                (*jj_la1)[i] = -int(1);

}

void ExpressionParser::ctor(std::ifstream* stream)
{
    super::ctor();
    init();
    jj_input_stream = new SimpleCharStream(stream, int(1), int(1));
    token_source = new ExpressionParserTokenManager(jj_input_stream);
    token = new Token();
    jj_ntk_ = -int(1);
    jj_gen;
    for (auto i = int(0); i < 25; i++) 
                (*jj_la1)[i] = -int(1);

}

void ExpressionParser::ReInit(std::ifstream* stream)
{
    jj_input_stream)->ReInit(stream, int(1), int(1));
    token_source)->ReInit(jj_input_stream);
    token = new Token();
    jj_ntk_ = -int(1);
    jjtree)->reset();
    jj_gen;
    for (auto i = int(0); i < 25; i++) 
                (*jj_la1)[i] = -int(1);

}

void ExpressionParser::ctor(ExpressionParserTokenManager* tm)
{
    super::ctor();
    init();
    token_source = tm;
    token = new Token();
    jj_ntk_ = -int(1);
    jj_gen;
    for (auto i = int(0); i < 25; i++) 
                (*jj_la1)[i] = -int(1);

}

void ExpressionParser::ReInit(ExpressionParserTokenManager* tm)
{
    token_source = tm;
    token = new Token();
    jj_ntk_ = -int(1);
    jjtree)->reset();
    jj_gen;
    for (auto i = int(0); i < 25; i++) 
                (*jj_la1)[i] = -int(1);

}

Token* ExpressionParser::jj_consume_token(int kind)
{
    Token* oldToken;
    if((oldToken = token))->next != 0)
        token = token)->next;
    else
        token = token)->next = token_source)->getNextToken();
    jj_ntk_ = -int(1);
    if(token)->kind == kind) {
        jj_gen++;
        return token;
    }
    token = oldToken;
    jj_kind = kind;
    throw generateParseException();
}

Token* ExpressionParser::getNextToken()
{
    if(token)->next != 0)
        token = token)->next;
    else
        token = token)->next = token_source)->getNextToken();
    jj_ntk_ = -int(1);
    jj_gen++;
    return token;
}

Token* ExpressionParser::getToken(int index)
{
    auto t = token;
    for (auto i = int(0); i < index; i++) {
        if(t)->next != 0)
            t = t)->next;
        else
            t = t)->next = token_source)->getNextToken();
    }
    return t;
}

int ExpressionParser::jj_ntk()
{
    if((jj_nt = token)->next) == 0)
        return (jj_ntk_ = (token)->next = token_source)->getNextToken()))->kind);
    else
        return (jj_ntk_ = jj_nt)->kind);
}

ParseException* ExpressionParser::generateParseException()
{
    jj_expentries)->clear();
    auto la1tokens = new ::boolArray(int(55));
    if(jj_kind >= 0) {
        (*la1tokens)[jj_kind] = true;
        jj_kind = -int(1);
    }
    for (auto i = int(0); i < 25; i++) {
        if((*jj_la1)[i] == jj_gen) {
            for (auto j = int(0); j < 32; j++) {
                if(((*jj_la1_0_)[i] & (int(1) << j)) != 0) {
                    (*la1tokens)[j] = true;
                }
                if(((*jj_la1_1_)[i] & (int(1) << j)) != 0) {
                    (*la1tokens)[int(32) + j] = true;
                }
            }
        }
    }
    for (auto i = int(0); i < 55; i++) {
        if((*la1tokens)[i]) {
            jj_expentry = new ::intArray(int(1));
            (*jj_expentry)[int(0)] = i;
            jj_expentries)->add(jj_expentry));
        }
    }
    auto exptokseq = new ::intArrayArray(jj_expentries)->size());
    for (auto i = int(0); i < jj_expentries)->size(); i++) {
        exptokseq->set(i, java_cast< ::intArray* >(jj_expentries)->get(i)));
    }
    return new ParseException(token, exptokseq, tokenImage());
}

void ExpressionParser::enable_tracing()
{
}

void ExpressionParser::disable_tracing()
{
}



java::lang::Class* ExpressionParser::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.parser.ExpressionParser", 61);
    return c;
}

void ExpressionParser::clinit()
{
    super::
    static bool in_cl_init = false;
struct clinit_ {
    clinit_() {
        in_cl_init = true;
        {
            jj_la1_init_0();
            jj_la1_init_1();
        }
    }
};

    if(!in_cl_init) {
        static clinit_ clinit_instance;
    }
}

java::lang::Class* ExpressionParser::getClass0()
{
    return class_();
}

