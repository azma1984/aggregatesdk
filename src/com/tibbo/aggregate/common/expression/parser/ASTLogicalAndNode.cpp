// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ASTLogicalAndNode.java
#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalAndNode.h"

#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"

void* ASTLogicalAndNode::jjtAccept(ExpressionParserVisitor* visitor, void* data)
{
    return visitor->visit(this, data);
}


