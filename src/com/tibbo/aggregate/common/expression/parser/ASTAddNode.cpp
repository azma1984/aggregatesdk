// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ASTAddNode.java
#include <com/tibbo/aggregate/common/expression/parser/ASTAddNode.h"

#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"


void* ASTAddNode::jjtAccept(ExpressionParserVisitor* visitor, void* data)
{
    return visitor->visit(this, data);
}

