#pragma once

#include "expression/Evaluator.h"
#include "expression/parser/ExpressionParserVisitor.h"
#include <boost/shared_ptr.hpp>


class AbstractEvaluatingVisitor : public ExpressionParserVisitor
{
private:
    static const std::string TEMP_FORMAT_NAME_;
    static std::map<std::string, boost::shared_ptr<Function>> DEFAULT_FUNCTIONS_;
    boost::shared_ptr<Evaluator> evaluator;
//    std::list<std::string, boost::shared_ptr<Function>>  stack;

protected:
    int top;    

private:
    static void registerDefaultFunction(const std::string & name, boost::shared_ptr<Function> impl);
    static bool isFloatingPoint(void* number);

protected:
    boost::shared_ptr<Evaluator> getEvaluator();
    void set(int delta, void* value);
    void* get(int delta);

    void* getResult();    
    void* visit(SimpleNode* node, void* data);
    void* visit(ASTStart* node, void* data);
    void* visit(ASTConditionalNode* node, void* data);
    void* visit(ASTLogicalOrNode* node, void* data);
    void* visit(ASTLogicalAndNode* node, void* data);
    void* visit(ASTBitwiseAndNode* node, void* data);
    void* visit(ASTBitwiseOrNode* node, void* data);
    void* visit(ASTBitwiseXorNode* node, void* data);
    static bool equal(void* v1, void* v2);
    static int compare(void* v1, void* v2);
    void* visit(ASTEQNode* node, void* data);
    void* visit(ASTNENode* node, void* data);
    void* visit(ASTRegexMatchNode* node, void* data);
    void* visit(ASTLTNode* node, void* data);
    void* visit(ASTGTNode* node, void* data);
    void* visit(ASTLENode* node, void* data);
    void* visit(ASTGENode* node, void* data);
    void* visit(ASTAddNode* node, void* data);
    void* visit(ASTSubtractNode* node, void* data);
    void* visit(ASTMulNode* node, void* data);
    void* visit(ASTDivNode* node, void* data);
    void* visit(ASTModNode* node, void* data);
    void* visit(ASTUnaryNode* node, void* data);
    void* visit(ASTLogicalNotNode* node, void* data);
    void* visit(ASTBitwiseNotNode* node, void* data);
    void* visit(ASTFunctionNode* node, void* data);
    void* visit(ASTLongConstNode* node, void* data);
    void* visit(ASTFloatConstNode* node, void* data);
    void* visit(ASTStringConstNode* node, void* data);
    void* visit(ASTTrueNode* node, void* data);
    void* visit(ASTFalseNode* node, void* data);
    void* visit(ASTNullNode* node, void* data);
    void* visit(ASTRightShiftNode* node, void* data);
    void* visit(ASTUnsignedRightShiftNode* node, void* data);
    void* visit(ASTLeftShiftNode* node, void* data);
    static std::map<std::string, boost::shared_ptr<Function>>& DEFAULT_FUNCTIONS();

    AbstractEvaluatingVisitor(boost::shared_ptr<Evaluator> evaluator);
};
