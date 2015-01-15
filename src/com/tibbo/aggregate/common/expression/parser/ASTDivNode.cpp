// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ASTDivNode.java
#include <com/tibbo/aggregate/common/expression/parser/ASTDivNode.h"

#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"


void* ASTDivNode::jjtAccept(ExpressionParserVisitor* visitor, void* data)
{
    return visitor->visit(this, data);
}


