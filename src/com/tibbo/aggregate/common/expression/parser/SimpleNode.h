// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/SimpleNode.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/parser/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/expression/parser/Node.h"

template<typename ComponentType, typename... Bases> struct SubArray;
namespace com
{
    namespace tibbo
    {
        namespace aggregate
        {
            namespace common
            {
                namespace expression
                {
                    namespace parser
                    {
typedef ::SubArray< ::Node, voidArray > NodeArray;
                    } // parser
                } // expression
            } // common
        } // aggregate
    } // tibbo
} // com



class SimpleNode
    
    , public Node
{

public:
    typedef void super;

public: /* protected */
    Node* parent;
    NodeArray* children;
    int id;
    void* value;
    ExpressionParser* parser;
    Token* firstToken;
    Token* lastToken;
protected:
    void ctor(int i);
    void ctor(ExpressionParser* p, int i);

public:
    void jjtOpen();
    void jjtClose();
    void jjtSetParent(Node* n);
    Node* jjtGetParent();
    void jjtAddChild(Node* n, int i);
    Node* jjtGetChild(int i);
    int jjtGetNumChildren();
    void jjtSetValue(void* value);
    void* jjtGetValue();
    Token* jjtGetFirstToken();
    void jjtSetFirstToken(Token* token);
    Token* jjtGetLastToken();
    void jjtSetLastToken(Token* token);
    void* jjtAccept(ExpressionParserVisitor* visitor, void* data);
    void* childrenAccept(ExpressionParserVisitor* visitor, void* data);
    const std::string & toString();
    const std::string & toString(const std::string & prefix);
    void dump(const std::string & prefix);

    // Generated
    SimpleNode(int i);
    SimpleNode(ExpressionParser* p, int i);
protected:
    SimpleNode(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
