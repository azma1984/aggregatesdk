// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/Token.java
#include <com/tibbo/aggregate/common/expression/parser/Token.h"

//#include <java/lang/String.h"

Token::Token(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Token::Token() 
    : Token(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

Token::Token(int kind) 
    : Token(*static_cast< ::default_init_tag* >(0))
{
    ctor(kind);
}

Token::Token(int kind, const std::string & image) 
    : Token(*static_cast< ::default_init_tag* >(0))
{
    ctor(kind,image);
}

const long Token::serialVersionUID;

void* Token::getValue()
{
    return 0;
}

void Token::ctor()
{
    super::ctor();
}

void Token::ctor(int kind)
{
    ctor(kind, 0);
}

void Token::ctor(int kind, const std::string & image)
{
    super::ctor();
    this->kind = kind;
    this->image = image;
}

std::string Token::toString()
{
    return image;
}

Token* Token::newToken(int ofKind, const std::string & image)
{
    
    switch (ofKind) {
    default:
        return new Token(ofKind, image);
    }

}

Token* Token::newToken(int ofKind)
{
    
    return newToken(ofKind, 0);
}



java::lang::Class* Token::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.parser.Token", 50);
    return c;
}

java::lang::Class* Token::getClass0()
{
    return class_();
}

