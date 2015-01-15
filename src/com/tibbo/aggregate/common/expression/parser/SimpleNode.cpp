// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/SimpleNode.java
#include <com/tibbo/aggregate/common/expression/parser/SimpleNode.h"

#include <com/tibbo/aggregate/common/expression/parser/ExpressionParser.h"
#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserTreeConstants.h"
#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"
#include <com/tibbo/aggregate/common/expression/parser/Node.h"
#include <com/tibbo/aggregate/common/expression/parser/Token.h"
//#include <java/io/PrintStream.h"
//#include <java/io/Serializable.h"
//#include <java/lang/ArrayStoreException.h"
//#include <java/lang/CharSequence.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/lang/System.h"
#include <SubArray.h"
#include <ObjectArray.h"

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

namespace java
{
    namespace io
    {
typedef ::SubArray< ::java::io::Serializable, voidArray > SerializableArray;
    } // io

    namespace lang
    {
typedef ::SubArray< ::java::lang::CharSequence, ObjectArray > CharSequenceArray;
typedef ::SubArray< ::java::lang::Comparable, ObjectArray > ComparableArray;
typedef ::SubArray< std::string, ObjectArray, ::java::io::SerializableArray, ComparableArray, CharSequenceArray > StringArray;
    } // lang
} // java

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

SimpleNode::SimpleNode(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

SimpleNode::SimpleNode(int i) 
    : SimpleNode(*static_cast< ::default_init_tag* >(0))
{
    ctor(i);
}

SimpleNode::SimpleNode(ExpressionParser* p, int i) 
    : SimpleNode(*static_cast< ::default_init_tag* >(0))
{
    ctor(p,i);
}

void SimpleNode::ctor(int i)
{
    super::ctor();
    id = i;
}

void SimpleNode::ctor(ExpressionParser* p, int i)
{
    ctor(i);
    parser = p;
}

void SimpleNode::jjtOpen()
{
}

void SimpleNode::jjtClose()
{
}

void SimpleNode::jjtSetParent(Node* n)
{
    parent = n;
}

Node* SimpleNode::jjtGetParent()
{
    return parent;
}

void SimpleNode::jjtAddChild(Node* n, int i)
{
    if(children == 0) {
        children = new NodeArray(i + int(1));
    } else if(i >= children)->length) {
        auto c = new NodeArray(i + int(1));
        ::java::lang::System::arraycopy(children, 0, c, 0, children)->length);
        children = c;
    }
    children->set(i, n);
}

Node* SimpleNode::jjtGetChild(int i)
{
    return (*children)[i];
}

int SimpleNode::jjtGetNumChildren()
{
    return (children == 0) ? int(0) : children)->length;
}

void SimpleNode::jjtSetValue(void* value)
{
    this->value = value;
}

void* SimpleNode::jjtGetValue()
{
    return value;
}

Token* SimpleNode::jjtGetFirstToken()
{
    return firstToken;
}

void SimpleNode::jjtSetFirstToken(Token* token)
{
    this->firstToken = token;
}

Token* SimpleNode::jjtGetLastToken()
{
    return lastToken;
}

void SimpleNode::jjtSetLastToken(Token* token)
{
    this->lastToken = token;
}

void* SimpleNode::jjtAccept(ExpressionParserVisitor* visitor, void* data)
{
    return visitor->visit(this, data);
}

void* SimpleNode::childrenAccept(ExpressionParserVisitor* visitor, void* data)
{
    if(children != 0) {
        for (auto i = int(0); i < children)->length; ++i) {
            (*children)[i])->jjtAccept(visitor, data);
        }
    }
    return data;
}

std::string SimpleNode::toString()
{
    return (*ExpressionParserTreeConstants::jjtNodeName())[id];
}

std::string SimpleNode::toString(const std::string & prefix)
{
    return std::stringBuilder().append(prefix)->append(toString())->toString();
}

void SimpleNode::dump(const std::string & prefix)
{
    ::java::lang::System::out())->println(toString(prefix));
    if(children != 0) {
        for (auto i = int(0); i < children)->length; ++i) {
            auto n = java_cast< SimpleNode* >((*children)[i]);
            if(n != 0) {
                n)->dump(std::stringBuilder().append(prefix)->append(u" "_j)->toString());
            }
        }
    }
}



java::lang::Class* SimpleNode::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.parser.SimpleNode", 55);
    return c;
}

java::lang::Class* SimpleNode::getClass0()
{
    return class_();
}

