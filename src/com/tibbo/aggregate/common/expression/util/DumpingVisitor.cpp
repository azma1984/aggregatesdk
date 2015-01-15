// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/util/DumpingVisitor.java
#include <com/tibbo/aggregate/common/expression/util/DumpingVisitor.h"

#include <com/tibbo/aggregate/common/Log.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTAddNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseAndNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseNotNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseOrNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTBitwiseXorNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTConditionalNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTDivNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTEQNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTFalseNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTFloatConstNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTFunctionNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTGENode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTGTNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLENode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLTNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLeftShiftNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalAndNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalNotNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLogicalOrNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTLongConstNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTModNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTMulNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTNENode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTNullNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTRegexMatchNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTRightShiftNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTStart.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTStringConstNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTSubtractNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTTrueNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTUnaryNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTUnsignedRightShiftNode.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTValueReferenceNode.h"
#include <com/tibbo/aggregate/common/expression/parser/SimpleNode.h"
#include <com/tibbo/aggregate/common/expression/parser/Token.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuffer.h"
//#include <java/lang/StringBuilder.h"
//#include <org/apache/log4j/Logger.h"

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::util::DumpingVisitor::DumpingVisitor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::util::DumpingVisitor::DumpingVisitor()
    : DumpingVisitor(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void com::tibbo::aggregate::common::expression::util::DumpingVisitor::ctor()
{
    super::ctor();
    init();
}

void com::tibbo::aggregate::common::expression::util::DumpingVisitor::init()
{
    indent = int(0);
}

std::string com::tibbo::aggregate::common::expression::util::DumpingVisitor::indentString()
{
    auto sb = new std::stringBuffer();
    for (auto i = int(0); i < indent; ++i) {
        sb)->append(u" "_j);
    }
    return sb)->toString();
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::SimpleNode* node, void* data)
{
    Log::CORE())->warn(std::stringBuilder().append(indentString())->append(node))
        ->append(u": acceptor not unimplemented in subclass?"_j)->toString());
    ++indent;
    data = node)->childrenAccept(this, data);
    --indent;
    return data;
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::dumpNode(::SimpleNode* node, void* data)
{
    Log::CORE())->warn(std::stringBuilder().append(indentString())->append(node)->jjtGetFirstToken())->image)
        ->append(node))
        ->append(node)->jjtGetLastToken())->image)->toString());
    ++indent;
    data = node)->childrenAccept(this, data);
    --indent;
    return data;
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTStart* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTConditionalNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTLogicalOrNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTLogicalAndNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTBitwiseOrNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTBitwiseXorNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTBitwiseAndNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTEQNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTNENode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTRegexMatchNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTLTNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTGTNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTLENode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTGENode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTAddNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTSubtractNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTMulNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTDivNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTModNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTUnaryNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTLogicalNotNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTBitwiseNotNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTFunctionNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTValueReferenceNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTLongConstNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTFloatConstNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTStringConstNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTTrueNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTFalseNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTNullNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTRightShiftNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTUnsignedRightShiftNode* node, void* data)
{
    return dumpNode(node, data);
}

void* com::tibbo::aggregate::common::expression::util::DumpingVisitor::visit(::ASTLeftShiftNode* node, void* data)
{
    return dumpNode(node, data);
}



java::lang::Class* com::tibbo::aggregate::common::expression::util::DumpingVisitor::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.util.DumpingVisitor", 57);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::util::DumpingVisitor::getClass0()
{
    return class_();
}

