// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ParseException.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/parser/fwd-aggregate_sdk_5.11.00.h"
//#include <java/io/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Exception.h"

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



class ParseException
    : public ::java::lang::Exception
{

public:
    typedef ::java::lang::Exception super;

private:
    static const long serialVersionUID { long(1LL) };
protected:
    void ctor(Token* currentTokenVal, ::intArrayArray* expectedTokenSequencesVal, std::stringArray* tokenImageVal);
    void ctor();
    void ctor(const std::string & message);

public:
    Token* currentToken;
    ::intArrayArray* expectedTokenSequences;
    std::stringArray* tokenImage;

private:
    static const std::string initialise(Token* currentToken, ::intArrayArray* expectedTokenSequences, std::stringArray* tokenImage);

public: /* protected */
    const std::string & eol;

public: /* package */
    static const std::string add_escapes(const std::string & str);

    // Generated

public:
    ParseException(Token* currentTokenVal, ::intArrayArray* expectedTokenSequencesVal, std::stringArray* tokenImageVal);
    ParseException();
    ParseException(const std::string & message);
protected:
    ParseException(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
