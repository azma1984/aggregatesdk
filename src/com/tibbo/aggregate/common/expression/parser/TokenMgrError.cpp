// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/TokenMgrError.java
#include <com/tibbo/aggregate/common/expression/parser/TokenMgrError.h"

//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuffer.h"
//#include <java/lang/StringBuilder.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

TokenMgrError::TokenMgrError(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

TokenMgrError::TokenMgrError() 
    : TokenMgrError(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

TokenMgrError::TokenMgrError(const std::string & message, int reason) 
    : TokenMgrError(*static_cast< ::default_init_tag* >(0))
{
    ctor(message,reason);
}

TokenMgrError::TokenMgrError(bool EOFSeen, int lexState, int errorLine, int errorColumn, const std::string & errorAfter, char16_t curChar, int reason) 
    : TokenMgrError(*static_cast< ::default_init_tag* >(0))
{
    ctor(EOFSeen,lexState,errorLine,errorColumn,errorAfter,curChar,reason);
}

const long TokenMgrError::serialVersionUID;

const int TokenMgrError::LEXICAL_ERROR;

const int TokenMgrError::STATIC_LEXER_ERROR;

const int TokenMgrError::INVALID_LEXICAL_STATE;

const int TokenMgrError::LOOP_DETECTED;

std::string TokenMgrError::addEscapes(const std::string & str)
{
    
    auto retval = new std::stringBuffer();
    char16_t ch;
    for (auto i = int(0); i < str)->length(); i++) {
        switch (str)->charAt(i)) {
        case int(0):
            continue;
        case u'\u0008':
            retval)->append(u"\\b"_j);
            continue;
        case u'\u0009':
            retval)->append(u"\\t"_j);
            continue;
        case u'\u000a':
            retval)->append(u"\\n"_j);
            continue;
        case u'\u000c':
            retval)->append(u"\\f"_j);
            continue;
        case u'\u000d':
            retval)->append(u"\\r"_j);
            continue;
        case u'"':
            retval)->append(u"\\\""_j);
            continue;
        case u'\'':
            retval)->append(u"\\\'"_j);
            continue;
        case u'\\':
            retval)->append(u"\\\\"_j);
            continue;
        default:
            if((ch = str)->charAt(i)) < 32 || ch > 126) {
                auto s = std::stringBuilder().append(u"0000"_j)->append(::java::lang::Integer::toString(ch, 16))->toString();
                retval)->append(std::stringBuilder().append(u"\\u"_j)->append(s)->substring(s)->length() - int(4), s)->length()))->toString());
            } else {
                retval)->append(ch);
            }
            continue;
        }

    }
    return retval)->toString();
}

std::string TokenMgrError::LexicalError(bool EOFSeen, int lexState, int errorLine, int errorColumn, const std::string & errorAfter, char16_t curChar)
{
    
    return (std::stringBuilder().append(u"Lexical error at line "_j)->append(errorLine)
        ->append(u", column "_j)
        ->append(errorColumn)
        ->append(u".  Encountered: "_j)
        ->append((EOFSeen ? u"<EOF> "_j : std::stringBuilder().append((std::stringBuilder().append(u"\""_j)->append(addEscapes(std::string::valueOf(curChar)))
            ->append(u"\""_j)->toString()))->append(u" ("_j)
            ->append(static_cast< int >(curChar))
            ->append(u"), "_j)->toString()))
        ->append(u"after : \""_j)
        ->append(addEscapes(errorAfter))
        ->append(u"\""_j)->toString());
}

std::string TokenMgrError::getMessage()
{
    return super::getMessage();
}

void TokenMgrError::ctor()
{
    super::ctor();
}

void TokenMgrError::ctor(const std::string & message, int reason)
{
    super::ctor(message);
    errorCode = reason;
}

void TokenMgrError::ctor(bool EOFSeen, int lexState, int errorLine, int errorColumn, const std::string & errorAfter, char16_t curChar, int reason)
{
    ctor(LexicalError(EOFSeen, lexState, errorLine, errorColumn, errorAfter, curChar), reason);
}



java::lang::Class* TokenMgrError::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.parser.TokenMgrError", 58);
    return c;
}

java::lang::Class* TokenMgrError::getClass0()
{
    return class_();
}

