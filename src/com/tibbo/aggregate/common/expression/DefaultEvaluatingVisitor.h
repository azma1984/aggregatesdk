#pragma once

#include "expression/AbstractEvaluatingVisitor.h"

class DefaultEvaluatingVisitor : public AbstractEvaluatingVisitor
{
public:
    void* visit(ASTValueReferenceNode* node, void* data);

    DefaultEvaluatingVisitor(EvaluatorPtr evaluator);
};
