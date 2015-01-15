// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/JJTExpressionParserState.java
#include <com/tibbo/aggregate/common/expression/parser/JJTExpressionParserState.h"

#include <com/tibbo/aggregate/common/expression/parser/Node.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/util/ArrayList.h"
//#include <java/util/List.h"

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

JJTExpressionParserState::JJTExpressionParserState(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

JJTExpressionParserState::JJTExpressionParserState() 
    : JJTExpressionParserState(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void JJTExpressionParserState::ctor()
{
    super::ctor();
    nodes = new ::java::util::ArrayList();
    marks = new ::java::util::ArrayList();
    sp;
    mk;
}

bool JJTExpressionParserState::nodeCreated()
{
    return node_created;
}

void JJTExpressionParserState::reset()
{
    nodes)->clear();
    marks)->clear();
    sp;
    mk;
}

Node* JJTExpressionParserState::rootNode()
{
    return java_cast< Node* >(nodes)->get(0));
}

void JJTExpressionParserState::pushNode(Node* n)
{
    nodes)->add(n));
    ++sp;
}

Node* JJTExpressionParserState::popNode()
{
    if(--sp < mk) {
        mk = (java_cast< int  >(marks)->remove(marks)->size() - int(1)))))->intValue();
    }
    return java_cast< Node* >(nodes)->remove(nodes)->size() - int(1)));
}

Node* JJTExpressionParserState::peekNode()
{
    return java_cast< Node* >(nodes)->get(nodes)->size() - int(1)));
}

int JJTExpressionParserState::nodeArity()
{
    return sp - mk;
}

void JJTExpressionParserState::clearNodeScope(Node* n)
{
    while (sp > mk) {
        popNode();
    }
    mk = (java_cast< int  >(marks)->remove(marks)->size() - int(1)))))->intValue();
}

void JJTExpressionParserState::openNodeScope(Node* n)
{
    marks)->add(mk));
    mk = sp;
    n)->jjtOpen();
}

void JJTExpressionParserState::closeNodeScope(Node* n, int num)
{
    mk = (java_cast< int  >(marks)->remove(marks)->size() - int(1)))))->intValue();
    while (num-- > 0) {
        auto c = popNode();
        c)->jjtSetParent(n);
        n)->jjtAddChild(c, num);
    }
    n)->jjtClose();
    pushNode(n);
    node_created = true;
}

void JJTExpressionParserState::closeNodeScope(Node* n, bool condition)
{
    if(condition) {
        auto a = nodeArity();
        mk = (java_cast< int  >(marks)->remove(marks)->size() - int(1)))))->intValue();
        while (a-- > 0) {
            auto c = popNode();
            c)->jjtSetParent(n);
            n)->jjtAddChild(c, a);
        }
        n)->jjtClose();
        pushNode(n);
        node_created = true;
    } else {
        mk = (java_cast< int  >(marks)->remove(marks)->size() - int(1)))))->intValue();
        node_created = false;
    }
}



java::lang::Class* JJTExpressionParserState::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.parser.JJTExpressionParserState", 69);
    return c;
}

java::lang::Class* JJTExpressionParserState::getClass0()
{
    return class_();
}

