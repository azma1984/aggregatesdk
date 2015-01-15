// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ASTRightShiftNode.java
#include <com/tibbo/aggregate/common/expression/parser/ASTRightShiftNode.h"

#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"

void* ASTRightShiftNode::jjtAccept(ExpressionParserVisitor* visitor, void* data)
{
    return visitor->visit(this, data);
}

