// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ASTEQNode.java
#include <com/tibbo/aggregate/common/expression/parser/ASTEQNode.h"

#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"


void* ASTEQNode::jjtAccept(ExpressionParserVisitor* visitor, void* data)
{
    return visitor->visit(this, data);
}


