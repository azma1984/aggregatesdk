#include "expression/util/ReferencesFinderVisitor.h"



ReferencesFinderVisitor::ReferencesFinderVisitor()
{

}


void* ReferencesFinderVisitor::visit(SimpleNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTStart* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTConditionalNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTLogicalOrNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTLogicalAndNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTBitwiseOrNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTBitwiseXorNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTBitwiseAndNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTEQNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTNENode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTRegexMatchNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTLTNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTGTNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTLENode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTGENode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTAddNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTSubtractNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* util::ReferencesFinderVisitor::visit(ASTMulNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTDivNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTModNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTUnaryNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTLogicalNotNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTBitwiseNotNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTFunctionNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTValueReferenceNode* node, void* data)
{
    Reference* ref = new Reference(node->uriImage);
    references->add(ref);
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

void* ReferencesFinderVisitor::visit(ASTLongConstNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTFloatConstNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTStringConstNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTTrueNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTFalseNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTNullNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

std::list<boost::shared_ptr<Reference>> ReferencesFinderVisitor::getIdentifiers()
{
    return references;
}

void* ReferencesFinderVisitor::visit(::ASTRightShiftNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTUnsignedRightShiftNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}

void* ReferencesFinderVisitor::visit(ASTLeftShiftNode* node, void* data)
{
    node->childrenAccept(this, data);
    return 0;
}
