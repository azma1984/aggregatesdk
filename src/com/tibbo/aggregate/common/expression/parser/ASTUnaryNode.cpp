// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ASTUnaryNode.java
#include <com/tibbo/aggregate/common/expression/parser/ASTUnaryNode.h"

#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"


void* ASTUnaryNode::jjtAccept(ExpressionParserVisitor* visitor, void* data)
{
    return visitor->visit(this, data);
}



