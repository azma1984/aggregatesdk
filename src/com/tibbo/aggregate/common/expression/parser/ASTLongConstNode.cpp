// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ASTLongConstNode.java
#include <com/tibbo/aggregate/common/expression/parser/ASTLongConstNode.h"

#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"

void* ASTLongConstNode::jjtAccept(ExpressionParserVisitor* visitor, void* data)
{
    return visitor->visit(this, data);
}

