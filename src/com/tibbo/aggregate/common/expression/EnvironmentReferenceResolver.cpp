#include "expression/EnvironmentReferenceResolver.h"
#include "expression/EvaluationException.h"
#include "context/ContextException.h"

EnvironmentReferenceResolver::EnvironmentReferenceResolver()    
{

}


void* EnvironmentReferenceResolver::resolveReference(
    boost::shared_ptr<Reference> ref,
    boost::shared_ptr<EvaluationEnvironment> resolvingEnvironment) /* throws(SyntaxErrorException, ContextException, EvaluationException) */
{
    if (!Reference::SCHEMA_ENVIRONMENT.equals(ref->getSchema()) || ref->getServer() != NULL
            || ref->getContext() != NULL || ref->getEntity() != NULL || ref->getProperty() != NULL|| ref->getRow() != NULL) {
        throw new EvaluationException( std::string("Unexpected reference syntax: ").append(ref->toString()));
    }

    std::string variable = ref->getField();

    if (resolvingEnvironment != NULL && resolvingEnvironment->getEnvironment() != NULL
            && (resolvingEnvironment->getEnvironment().find(variable) != resolvingEnvironment->getEnvironment().end()) ) {
        return resolvingEnvironment->getEnvironment[variable];
    }

    //TODO:
//    if (environment == NULL)
//    {
//      throw new ContextException(Cres.get().getString("exprEnvNotDefined"));
//    }

    if (environment.find(variable) == environment.end()) {
        throw new ContextException(Cres::get()->getString("exprEnvVarNotFound") + variable);
    }

    return environment.get(variable);
}

void EnvironmentReferenceResolver::set(const std::string& variable, boost::shared_ptr<void> value)
{
    environment.insert(std::pair<std::string, boost::shared_ptr<void*>>(variable, value));
}

void* EnvironmentReferenceResolver::get(const std::string & variable)
{
    return environment[variable];
}

void EnvironmentReferenceResolver::setEnvironment(std::map<std::string, boost::shared_ptr<void*>> environment)
{
    this->environmen = environment;
}

std::map<std::string, boost::shared_ptr<void*>> EnvironmentReferenceResolver::getEnvironment()
{
    return environment;
}
