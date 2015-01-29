#include "expression/util/DumpingVisitor.h"

//#include "expression/parser/ASTAddNode.h"
//#include "expression/parser/ASTBitwiseAndNode.h"
//#include "expression/parser/ASTBitwiseNotNode.h"
//#include "expression/parser/ASTBitwiseOrNode.h"
//#include "expression/parser/ASTBitwiseXorNode.h"
//#include "expression/parser/ASTConditionalNode.h"
//#include "expression/parser/ASTDivNode.h"
//#include "expression/parser/ASTEQNode.h"
//#include "expression/parser/ASTFalseNode.h"
//#include "expression/parser/ASTFloatConstNode.h"
//#include "expression/parser/ASTFunctionNode.h"
//#include "expression/parser/ASTGENode.h"
//#include "expression/parser/ASTGTNode.h"
//#include "expression/parser/ASTLENode.h"
//#include "expression/parser/ASTLTNode.h"
//#include "expression/parser/ASTLeftShiftNode.h"
//#include "expression/parser/ASTLogicalAndNode.h"
//#include "expression/parser/ASTLogicalNotNode.h"
//#include "expression/parser/ASTLogicalOrNode.h"
//#include "expression/parser/ASTLongConstNode.h"
//#include "expression/parser/ASTModNode.h"
//#include "expression/parser/ASTMulNode.h"
//#include "expression/parser/ASTNENode.h"
//#include "expression/parser/ASTNullNode.h"
//#include "expression/parser/ASTRegexMatchNode.h"
//#include "expression/parser/ASTRightShiftNode.h"
//#include "expression/parser/ASTStart.h"
//#include "expression/parser/ASTStringConstNode.h"
//#include "expression/parser/ASTSubtractNode.h"
//#include "expression/parser/ASTTrueNode.h"
//#include "expression/parser/ASTUnaryNode.h"
//#include "expression/parser/ASTUnsignedRightShiftNode.h"
//#include "expression/parser/ASTValueReferenceNode.h"
//#include "expression/parser/SimpleNode.h"
//#include "expression/parser/Token.h"


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
