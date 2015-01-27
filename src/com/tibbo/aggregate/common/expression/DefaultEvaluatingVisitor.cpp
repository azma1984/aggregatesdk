#include "expression/DefaultEvaluatingVisitor.h"


DefaultEvaluatingVisitor::DefaultEvaluatingVisitor(Evaluator* evaluator) 
    : AbstractEvaluatingVisitor(evaluator)
{

}

void* DefaultEvaluatingVisitor::visit(ASTValueReferenceNode* node, void* data)
{
    if (node->reference == 0) {
        node->reference = new Reference(node->uriImage);
    }

    Reference* ref = node->reference;
    try {
        EvaluationEnvironment* environment = dynamic_cast<EvaluationEnvironment*>(data);
        ReferenceResolver* resolver = getEvaluator()->getResolver(ref->getSchema());
        if (resolver == 0) {
            //TODO: exception
            //throw new IllegalStateException(std::stringBuilder().append(Cres::get())->getString(u"exprNoResolverForSchema"_j))->append(ref)->getSchema())->toString());
        }
        set(1, resolver->resolveReference(ref, environment));
    } catch (Exception* ex) {
        //TODO: exception
        //throw  ::java::lang::IllegalStateException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"exprErrResolvingReference"_j), new voidArray({ref)})))->append(ex)->getMessage())->toString(), ex);
    }

    return 0;
}
