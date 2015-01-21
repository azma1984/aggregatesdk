// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/util/ReferencesFinderVisitor.java
#include <com/tibbo/aggregate/common/expression/util/ReferencesFinderVisitor.h"

#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/expression/ExpressionUtils.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTAddNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseAndNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseNotNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseOrNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseXorNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTConditionalNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTDivNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTEQNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTFalseNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTFloatConstNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTFunctionNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTGENode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTGTNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLENode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLTNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLeftShiftNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalAndNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalNotNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalOrNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLongConstNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTModNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTMulNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTNENode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTNullNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTRegexMatchNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTRightShiftNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTStart.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTStringConstNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTSubtractNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTTrueNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTUnaryNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTUnsignedRightShiftNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTValueReferenceNode.h"
#include <com/tibbo/aggregate/common/expression/parser/SimpleNode.h"
#include <com/tibbo/aggregate/common/util/SyntaxErrorException.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/util/Collection.h"
//#include <java/util/Iterator.h"
//#include <java/util/LinkedList.h"
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

util::ReferencesFinderVisitor::ReferencesFinderVisitor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

util::ReferencesFinderVisitor::ReferencesFinderVisitor() 
    : ReferencesFinderVisitor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void util::ReferencesFinderVisitor::init()
{
    references = new ::java::util::LinkedList();
}

void util::ReferencesFinderVisitor::ctor()
{
    super::ctor();
    init();
}

void* util::ReferencesFinderVisitor::visit(::SimpleNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTStart* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTConditionalNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTLogicalOrNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTLogicalAndNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTBitwiseOrNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTBitwiseXorNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTBitwiseAndNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTEQNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTNENode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTRegexMatchNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTLTNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTGTNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTLENode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTGENode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTAddNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTSubtractNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTMulNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTDivNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTModNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTUnaryNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTLogicalNotNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTBitwiseNotNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTFunctionNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTValueReferenceNode* node, void* data)
{
    auto ref = new Reference(node)->uriImage);
    references)->add(ref));
    for (auto _i = ref)->getParameters())->iterator(); _i->hasNext(); ) {
        void* param = java_cast< void* >(_i->next());
        {
            if(dynamic_cast< Expression* >(param) != 0) {
                try {
                    references)->addAll(static_cast< ::java::util::Collection* >(ExpressionUtils::findReferences(java_cast< Expression* >(param))));
                } catch (::com::tibbo::aggregate::common::util::SyntaxErrorException* ex) {
                    throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
                }
            }
        }
    }
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTLongConstNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTFloatConstNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTStringConstNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTTrueNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTFalseNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTNullNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

std::list  util::ReferencesFinderVisitor::getIdentifiers()
{
    return references;
}

void* util::ReferencesFinderVisitor::visit(::ASTRightShiftNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTUnsignedRightShiftNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(::ASTLeftShiftNode* node, void* data)
{
    node)->childrenAccept(this, data);
    return 0;
}



java::lang::Class* util::ReferencesFinderVisitor::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.util.ReferencesFinderVisitor", 66);
    return c;
}

java::lang::Class* util::ReferencesFinderVisitor::getClass0()
{
    return class_();
}

