// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/TokenMgrError.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/parser/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Error.h"



class TokenMgrError
    : public ::java::lang::Error
{

public:
    typedef ::java::lang::Error super;

private:
    static const long serialVersionUID { long(1LL) };

public: /* package */
    static const int LEXICAL_ERROR) };
    static const int STATIC_LEXER_ERROR = 1) };
    static const int INVALID_LEXICAL_STATE = 2) };
    static const int LOOP_DETECTED = 3) };
    int errorCode;

public: /* protected */
    static const std::string addEscapes(std::string* str);
    static const std::string LexicalError(bool EOFSeen, int lexState, int errorLine, int errorColumn, std::string* errorAfter, char16_t curChar);

public:
    std::string* getMessage();
protected:
    void ctor();
    void ctor(std::string* message, int reason);
    void ctor(bool EOFSeen, int lexState, int errorLine, int errorColumn, std::string* errorAfter, char16_t curChar, int reason);

    // Generated

public:
    TokenMgrError();
    TokenMgrError(std::string* message, int reason);
    TokenMgrError(bool EOFSeen, int lexState, int errorLine, int errorColumn, std::string* errorAfter, char16_t curChar, int reason);
protected:
    TokenMgrError(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
