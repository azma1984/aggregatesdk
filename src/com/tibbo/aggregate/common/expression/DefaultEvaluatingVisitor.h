// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/DefaultEvaluatingVisitor.java

#pragma once

//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/parser/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/AbstractEvaluatingVisitor.h"



class com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor
    : public AbstractEvaluatingVisitor
{

public:
    typedef AbstractEvaluatingVisitor super;
protected:
    void ctor(Evaluator* evaluator);

public:
    void* visit(::ASTValueReferenceNode* node, void* data);

    // Generated
    DefaultEvaluatingVisitor(Evaluator* evaluator);
protected:
    DefaultEvaluatingVisitor(const ::default_init_tag&);


public:
    
    void* visit(::SimpleNode* node, void* data);
    void* visit(::ASTStart* node, void* data);
    void* visit(::ASTConditionalNode* node, void* data);
    void* visit(::ASTLogicalOrNode* node, void* data);
    void* visit(::ASTLogicalAndNode* node, void* data);
    void* visit(::ASTBitwiseAndNode* node, void* data);
    void* visit(::ASTBitwiseOrNode* node, void* data);
    void* visit(::ASTBitwiseXorNode* node, void* data);
    void* visit(::ASTEQNode* node, void* data);
    void* visit(::ASTNENode* node, void* data);
    void* visit(::ASTRegexMatchNode* node, void* data);
    void* visit(::ASTLTNode* node, void* data);
    void* visit(::ASTGTNode* node, void* data);
    void* visit(::ASTLENode* node, void* data);
    void* visit(::ASTGENode* node, void* data);
    void* visit(::ASTAddNode* node, void* data);
    void* visit(::ASTSubtractNode* node, void* data);
    void* visit(::ASTMulNode* node, void* data);
    void* visit(::ASTDivNode* node, void* data);
    void* visit(::ASTModNode* node, void* data);
    void* visit(::ASTUnaryNode* node, void* data);
    void* visit(::ASTLogicalNotNode* node, void* data);
    void* visit(::ASTBitwiseNotNode* node, void* data);
    void* visit(::ASTFunctionNode* node, void* data);
    void* visit(::ASTLongConstNode* node, void* data);
    void* visit(::ASTFloatConstNode* node, void* data);
    void* visit(::ASTStringConstNode* node, void* data);
    void* visit(::ASTTrueNode* node, void* data);
    void* visit(::ASTFalseNode* node, void* data);
    void* visit(::ASTNullNode* node, void* data);
    void* visit(::ASTRightShiftNode* node, void* data);
    void* visit(::ASTUnsignedRightShiftNode* node, void* data);
    void* visit(::ASTLeftShiftNode* node, void* data);

private:
    ::java::lang::Class* getClass0();
};
