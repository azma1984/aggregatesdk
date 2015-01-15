// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/JJTDataTableFilterParserState.java
#include <com/tibbo/aggregate/common/expression/parser/JJTDataTableFilterParserState.h"

#include <com/tibbo/aggregate/common/expression/parser/Node.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/util/Stack.h"

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

JJTDataTableFilterParserState::JJTDataTableFilterParserState(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

JJTDataTableFilterParserState::JJTDataTableFilterParserState() 
    : JJTDataTableFilterParserState(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void JJTDataTableFilterParserState::ctor()
{
    super::ctor();
    nodes = new ::java::util::Stack();
    marks = new ::java::util::Stack();
    sp;
    mk;
}

bool JJTDataTableFilterParserState::nodeCreated()
{
    return node_created;
}

void JJTDataTableFilterParserState::reset()
{
    nodes)->removeAllElements();
    marks)->removeAllElements();
    sp;
    mk;
}

Node* JJTDataTableFilterParserState::rootNode()
{
    return java_cast< Node* >(java_cast< void* >(nodes)->elementAt(0)));
}

void JJTDataTableFilterParserState::pushNode(Node* n)
{
    nodes)->push(n);
    ++sp;
}

Node* JJTDataTableFilterParserState::popNode()
{
    if(--sp < mk) {
        mk = (java_cast< int  >(java_cast< void* >(marks)->pop()))))->intValue();
    }
    return java_cast< Node* >(java_cast< void* >(nodes)->pop()));
}

Node* JJTDataTableFilterParserState::peekNode()
{
    return java_cast< Node* >(java_cast< void* >(nodes)->peek()));
}

int JJTDataTableFilterParserState::nodeArity()
{
    return sp - mk;
}

void JJTDataTableFilterParserState::clearNodeScope(Node* n)
{
    while (sp > mk) {
        popNode();
    }
    mk = (java_cast< int  >(java_cast< void* >(marks)->pop()))))->intValue();
}

void JJTDataTableFilterParserState::openNodeScope(Node* n)
{
    marks)->push(new ::java::lang::Integer(mk));
    mk = sp;
    n)->jjtOpen();
}

void JJTDataTableFilterParserState::closeNodeScope(Node* n, int num)
{
    mk = (java_cast< int  >(java_cast< void* >(marks)->pop()))))->intValue();
    while (num-- > 0) {
        auto c = popNode();
        c)->jjtSetParent(n);
        n)->jjtAddChild(c, num);
    }
    n)->jjtClose();
    pushNode(n);
    node_created = true;
}

void JJTDataTableFilterParserState::closeNodeScope(Node* n, bool condition)
{
    if(condition) {
        auto a = nodeArity();
        mk = (java_cast< int  >(java_cast< void* >(marks)->pop()))))->intValue();
        while (a-- > 0) {
            auto c = popNode();
            c)->jjtSetParent(n);
            n)->jjtAddChild(c, a);
        }
        n)->jjtClose();
        pushNode(n);
        node_created = true;
    } else {
        mk = (java_cast< int  >(java_cast< void* >(marks)->pop()))))->intValue();
        node_created = false;
    }
}



java::lang::Class* JJTDataTableFilterParserState::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.parser.JJTDataTableFilterParserState", 74);
    return c;
}

java::lang::Class* JJTDataTableFilterParserState::getClass0()
{
    return class_();
}

