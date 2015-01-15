// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/DefaultEvaluatingVisitor.java
#include <com/tibbo/aggregate/common/expression/DefaultEvaluatingVisitor.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/expression/EvaluationEnvironment.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTValueReferenceNode.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Exception.h"
//#include <java/lang/IllegalStateException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/text/MessageFormat.h"
//#include <java/util/ResourceBundle.h"
#include <ObjectArray.h"

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::DefaultEvaluatingVisitor(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::DefaultEvaluatingVisitor(Evaluator* evaluator) 
    : DefaultEvaluatingVisitor(*static_cast< ::default_init_tag* >(0))
{
    ctor(evaluator);
}

void com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::ctor(Evaluator* evaluator)
{
    super::ctor(evaluator);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTValueReferenceNode* node, void* data)
{
    if(node)->reference == 0) {
        node)->reference = new Reference(node)->uriImage);
    }
    auto ref = node)->reference;
    try {
        auto environment = java_cast< EvaluationEnvironment* >(data);
        auto resolver = getEvaluator())->getResolver(ref)->getSchema());
        if(resolver == 0) {
            throw new ::java::lang::IllegalStateException(std::stringBuilder().append(Cres::get())->getString(u"exprNoResolverForSchema"_j))->append(ref)->getSchema())->toString());
        }
        set(1, resolver)->resolveReference(ref, environment));
    } catch (::java::lang::Exception* ex) {
        throw new ::java::lang::IllegalStateException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"exprErrResolvingReference"_j), new voidArray({ref)})))->append(ex)->getMessage())->toString(), ex);
    }
    return 0;
}



java::lang::Class* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.DefaultEvaluatingVisitor", 62);
    return c;
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::SimpleNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTStart* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTConditionalNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTLogicalOrNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTLogicalAndNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTBitwiseAndNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTBitwiseOrNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTBitwiseXorNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTEQNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTNENode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTRegexMatchNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTLTNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTGTNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTLENode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTGENode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTAddNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTSubtractNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTMulNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTDivNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTModNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTUnaryNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTLogicalNotNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTBitwiseNotNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTFunctionNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTLongConstNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTFloatConstNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTStringConstNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTTrueNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTFalseNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTNullNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTRightShiftNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTUnsignedRightShiftNode* node, void* data)
{
    return super::visit(node, data);
}

void* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::visit(::ASTLeftShiftNode* node, void* data)
{
    return super::visit(node, data);
}

java::lang::Class* com::tibbo::aggregate::common::expression::DefaultEvaluatingVisitor::getClass0()
{
    return class_();
}

