// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ASTRegexMatchNode.java
#include <com/tibbo/aggregate/common/expression/parser/ASTRegexMatchNode.h"

#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"

void* ASTRegexMatchNode::jjtAccept(ExpressionParserVisitor* visitor, void* data)
{
    return visitor->visit(this, data);
}



