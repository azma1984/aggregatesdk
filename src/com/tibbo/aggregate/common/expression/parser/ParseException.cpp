// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ParseException.java
#include <com/tibbo/aggregate/common/expression/parser/ParseException.h"

#include <com/tibbo/aggregate/common/expression/parser/Token.h"
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/CharSequence.h"
//#include <java/lang/Cloneable.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuffer.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/System.h"
#include <Array.h"
#include <SubArray.h"
#include <ObjectArray.h"

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

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

ParseException::ParseException(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

ParseException::ParseException(Token* currentTokenVal, ::intArrayArray* expectedTokenSequencesVal, std::stringArray* tokenImageVal) 
    : ParseException(*static_cast< ::default_init_tag* >(0))
{
    ctor(currentTokenVal,expectedTokenSequencesVal,tokenImageVal);
}

ParseException::ParseException() 
    : ParseException(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

ParseException::ParseException(const std::string & message) 
    : ParseException(*static_cast< ::default_init_tag* >(0))
{
    ctor(message);
}

void ParseException::init()
{
    eol = ::java::lang::System::getProperty(u"line.separator"_j, u"\n"_j);
}

const long ParseException::serialVersionUID;

void ParseException::ctor(Token* currentTokenVal, ::intArrayArray* expectedTokenSequencesVal, std::stringArray* tokenImageVal)
{
    super::ctor(initialise(currentTokenVal, expectedTokenSequencesVal, tokenImageVal));
    init();
    currentToken = currentTokenVal;
    expectedTokenSequences = expectedTokenSequencesVal;
    tokenImage = tokenImageVal;
}

void ParseException::ctor()
{
    super::ctor();
    init();
}

void ParseException::ctor(const std::string & message)
{
    super::ctor(message);
    init();
}

std::string ParseException::initialise(Token* currentToken, ::intArrayArray* expectedTokenSequences, std::stringArray* tokenImage)
{
    
    auto eol = ::java::lang::System::getProperty(u"line.separator"_j, u"\n"_j);
    auto expected = new std::stringBuffer();
    auto maxSize = int(0);
    for (auto i = int(0); i < expectedTokenSequences)->length; i++) {
        if(maxSize < (*expectedTokenSequences)[i])->length) {
            maxSize = (*expectedTokenSequences)[i])->length;
        }
        for (auto j = int(0); j < (*expectedTokenSequences)[i])->length; j++) {
            expected)->append((*tokenImage)[(*(*expectedTokenSequences)[i])[j]]))->append(u' ');
        }
        if((*(*expectedTokenSequences)[i])[(*expectedTokenSequences)[i])->length - int(1)] != 0) {
            expected)->append(u"..."_j);
        }
        expected)->append(eol))->append(u"    "_j);
    }
    auto retval = u"Encountered \""_j;
    auto tok = currentToken)->next;
    for (auto i = int(0); i < maxSize; i++) {
        if(i != 0)
            retval = std::stringBuilder(retval).append(u" "_j)->toString();

        if(tok)->kind == 0) {
            retval = std::stringBuilder(retval).append((*tokenImage)[int(0)])->toString();
            break;
        }
        retval = std::stringBuilder(retval).append(std::stringBuilder().append(u" "_j)->append((*tokenImage)[tok)->kind])->toString())->toString();
        retval = std::stringBuilder(retval).append(u" \""_j)->toString();
        retval = std::stringBuilder(retval).append(add_escapes(tok)->image))->toString();
        retval = std::stringBuilder(retval).append(u" \""_j)->toString();
        tok = tok)->next;
    }
    retval = std::stringBuilder(retval).append(std::stringBuilder().append(u"\" at line "_j)->append(currentToken)->next)->beginLine)
        ->append(u", column "_j)
        ->append(currentToken)->next)->beginColumn)->toString())->toString();
    retval = std::stringBuilder(retval).append(std::stringBuilder().append(u"."_j)->append(eol)->toString())->toString();
    if(expectedTokenSequences)->length == 1) {
        retval = std::stringBuilder(retval).append(std::stringBuilder().append(u"Was expecting:"_j)->append(eol)
            ->append(u"    "_j)->toString())->toString();
    } else {
        retval = std::stringBuilder(retval).append(std::stringBuilder().append(u"Was expecting one of:"_j)->append(eol)
            ->append(u"    "_j)->toString())->toString();
    }
    retval = std::stringBuilder(retval).append(expected)->toString())->toString();
    return retval;
}

std::string ParseException::add_escapes(const std::string & str)
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



java::lang::Class* ParseException::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.parser.ParseException", 59);
    return c;
}

java::lang::Class* ParseException::getClass0()
{
    return class_();
}

