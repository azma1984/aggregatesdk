// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ASTConditionalNode.java
#include <com/tibbo/aggregate/common/expression/parser/ASTConditionalNode.h"

#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"

void* ASTConditionalNode::jjtAccept(ExpressionParserVisitor* visitor, void* data)
{
    return visitor->visit(this, data);
}


