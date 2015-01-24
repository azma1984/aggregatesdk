#include "expression/util/DumpingVisitor.h"

//#include <com/tibbo/aggregate/common/expression/parser/ASTAddNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseAndNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseNotNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseOrNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseXorNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTConditionalNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTDivNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTEQNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTFalseNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTFloatConstNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTFunctionNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTGENode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTGTNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTLENode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTLTNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTLeftShiftNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalAndNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalNotNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalOrNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTLongConstNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTModNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTMulNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTNENode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTNullNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTRegexMatchNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTRightShiftNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTStart.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTStringConstNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTSubtractNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTTrueNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTUnaryNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTUnsignedRightShiftNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTValueReferenceNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/SimpleNode.h"
//#include <com/tibbo/aggregate/common/expression/parser/Token.h"


DumpingVisitor::DumpingVisitor()
{
    this->indent = 0;
}


std::string DumpingVisitor::indentString()
{
    std::stringstream ss;
    for (int i = 0; i < indent; ++i) {
        ss << " ";
    }

    return ss.str();
}

//void* util::DumpingVisitor::visit(::SimpleNode* node, void* data)
//{
//    Log::CORE())->warn(std::stringBuilder().append(indentString())->append(node))
//        ->append(u": acceptor not unimplemented in subclass?"_j)->toString());
//    ++indent;
//    data = node)->childrenAccept(this, data);
//    --indent;
//    return data;
//}

//void* util::DumpingVisitor::dumpNode(::SimpleNode* node, void* data)
//{
//    Log::CORE())->warn(std::stringBuilder().append(indentString())->append(node)->jjtGetFirstToken())->image)
//        ->append(node))
//        ->append(node)->jjtGetLastToken())->image)->toString());
//    ++indent;
//    data = node)->childrenAccept(this, data);
//    --indent;
//    return data;
//}

//void* util::DumpingVisitor::visit(::ASTStart* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTConditionalNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTLogicalOrNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTLogicalAndNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTBitwiseOrNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTBitwiseXorNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTBitwiseAndNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTEQNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTNENode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTRegexMatchNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTLTNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTGTNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTLENode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTGENode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTAddNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTSubtractNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTMulNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTDivNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTModNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTUnaryNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTLogicalNotNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTBitwiseNotNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTFunctionNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTValueReferenceNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTLongConstNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTFloatConstNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTStringConstNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTTrueNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTFalseNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTNullNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTRightShiftNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTUnsignedRightShiftNode* node, void* data)
//{
//    return dumpNode(node, data);
//}

//void* util::DumpingVisitor::visit(::ASTLeftShiftNode* node, void* data)
//{
//    return dumpNode(node, data);
//}
