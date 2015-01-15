// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/parser/ASTIdNode.java
//#include <com/tibbo/aggregate/common/expression/parser/ASTIdNode.h"

#include <com/tibbo/aggregate/common/expression/parser/SimpleNode.h"


void* ASTIdNode::jjtAccept(ExpressionParserVisitor* visitor, void* data)
{
    return visitor->visit(this, data);
}


