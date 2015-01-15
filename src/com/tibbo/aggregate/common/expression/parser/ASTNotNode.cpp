// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ASTNotNode.java
#include <com/tibbo/aggregate/common/expression/parser/ASTNotNode.h"

#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"
#include <com/tibbo/aggregate/common/expression/parser/SimpleNode.h"


void* ASTNotNode::jjtAccept(ExpressionParserVisitor* visitor, void* data)
{
    return visitor->visit(static_cast< SimpleNode* >(this), data);
}



