#pragma once

#include "expression/Reference.h"
#include "expression/parser/ExpressionParserVisitor.h"
#include <list>
#include <boost/shared_ptr.hpp>

class ReferencesFinderVisitor : public ExpressionParserVisitor
{
private:
    std::list<boost::shared_ptr<Reference>>  references;

public:
    void visit(const SimpleNode* node, void* data);
    void visit(const ASTStart* node, void* data);
    void visit(const ASTConditionalNode* node, void* data);
    void visit(const ASTLogicalOrNode* node, void* data);
    void visit(const ASTLogicalAndNode* node, void* data);
    void visit(const ASTBitwiseOrNode* node, void* data);
    void visit(const ASTBitwiseXorNode* node, void* data);
    void visit(const ASTBitwiseAndNode *node, void* data);
    void visit(const ASTEQNode* node, void* data);
    void visit(const ASTNENode* node, void* data);
    void visit(const ASTRegexMatchNode* node, void* data);
    void visit(const ASTLTNode* node, void* data);
    void visit(const ASTGTNode* node, void* data);
    void visit(const ASTLENode* node, void* data);
    void visit(const ASTGENode* node, void* data);
    void visit(const ASTAddNode* node, void* data);
    void visit(const ASTSubtractNode* node, void* data);
    void visit(const ASTMulNode* node, void* data);
    void visit(const ASTDivNode* node, void* data);
    void visit(const ASTModNode* node, void* data);
    void visit(const ASTUnaryNode* node, void* data);
    void visit(const ASTLogicalNotNode* node, void* data);
    void visit(const ASTBitwiseNotNode* node, void* data);
    void visit(const ASTFunctionNode* node, void* data);
    void visit(const ASTValueReferenceNode* node, void* data);
    void visit(const ASTLongConstNode* node, void* data);
    void visit(const ASTFloatConstNode* node, void* data);
    void visit(const ASTStringConstNode* node, void* data);
    void visit(const ASTTrueNode* node, void* data);
    void visit(const ASTFalseNode* node, void* data);
    void visit(const ASTNullNode* node, void* data);
    void visit(const ASTRightShiftNode* node, void* data);
    void visit(const ASTUnsignedRightShiftNode* node, void* data);
    void visit(const ASTLeftShiftNode* node, void* data);
    std::list<boost::shared_ptr<Reference>>  getIdentifiers();

    // Generated
    ReferencesFinderVisitor();
};
