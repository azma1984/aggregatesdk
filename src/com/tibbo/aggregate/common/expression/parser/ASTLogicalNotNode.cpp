// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ASTLogicalNotNode.java
#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalNotNode.h"

#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"


void* ASTLogicalNotNode::jjtAccept(ExpressionParserVisitor* visitor, void* data)
{
    return visitor->visit(this, data);
}


