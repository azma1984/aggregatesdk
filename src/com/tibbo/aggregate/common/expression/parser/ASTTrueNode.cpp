// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ASTTrueNode.java
#include <com/tibbo/aggregate/common/expression/parser/ASTTrueNode.h"

#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"


void* ASTTrueNode::jjtAccept(ExpressionParserVisitor* visitor, void* data)
{
    return visitor->visit(this, data);
}


