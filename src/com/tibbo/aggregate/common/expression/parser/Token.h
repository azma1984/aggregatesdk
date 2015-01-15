// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/Token.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/parser/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/io/Serializable.h"



class Token
    
    , public ::java::io::Serializable
{

public:
    typedef void super;

private:
    static const long serialVersionUID { long(1LL) };

public:
    int kind;
    int beginLine;
    int beginColumn;
    int endLine;
    int endColumn;
    const std::string & image;
    Token* next;
    Token* specialToken;
    void* getValue();
protected:
    void ctor();
    void ctor(int kind);
    void ctor(int kind, const std::string & image);

public:
    const std::string & toString();
    static Token* newToken(int ofKind, const std::string & image);
    static Token* newToken(int ofKind);

    // Generated
    Token();
    Token(int kind);
    Token(int kind, const std::string & image);
protected:
    Token(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
