#include "expression/util/ReferencesFinderVisitor.h"



ReferencesFinderVisitor::ReferencesFinderVisitor()
{

}


void ReferencesFinderVisitor::visit(const SimpleNode *node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTStart *node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTConditionalNode *node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTLogicalOrNode *node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTLogicalAndNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTBitwiseOrNode *node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTBitwiseXorNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTBitwiseAndNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTEQNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTNENode* node, void* data)
{
    node->childrenAccept(this, data);
    ///return 0;
}

void ReferencesFinderVisitor::visit(const ASTRegexMatchNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTLTNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTGTNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTLENode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTGENode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTAddNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTSubtractNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTMulNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTDivNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTModNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTUnaryNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTLogicalNotNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTBitwiseNotNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTFunctionNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTValueReferenceNode* node, void* data)
{
    //TODO:
//    Reference* ref = new Reference(node->uriImage);
//    references->add(ref);
//    for (auto _i = ref)->getParameters())->iterator(); _i->hasNext(); ) {
//        void* param = java_cast< void* >(_i->next());
//        {
//            if(dynamic_cast< Expression* >(param) != 0) {
//                try {
//                    references)->addAll(static_cast< ::java::util::Collection* >(ExpressionUtils::findReferences(java_cast< Expression* >(param))));
//                } catch (::com::tibbo::aggregate::common::util::SyntaxErrorException* ex) {
//                    throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
//                }
//            }
//        }
//    }
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTLongConstNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTFloatConstNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTStringConstNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTTrueNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTFalseNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTNullNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

std::list<boost::shared_ptr<Reference>> ReferencesFinderVisitor::getIdentifiers()
{
    return references;
}

void ReferencesFinderVisitor::visit(const ASTRightShiftNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTUnsignedRightShiftNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}

void ReferencesFinderVisitor::visit(const ASTLeftShiftNode* node, void* data)
{
    node->childrenAccept(this, data);
    //return 0;
}
