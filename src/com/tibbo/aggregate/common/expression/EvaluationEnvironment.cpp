#include "expression/EvaluationEnvironment.h"


EvaluationEnvironment::EvaluationEnvironment()     
{

}

EvaluationEnvironment::EvaluationEnvironment(boost::shared_ptr<Reference> cause)
{
    this->cause = cause;
}

EvaluationEnvironment::EvaluationEnvironment(
    boost::shared_ptr<Reference> cause,
    std::map<std::string, boost::shared_ptr<void*>> environment)
{
    this->cause = cause;
    this->environment = environment;
}

EvaluationEnvironment::EvaluationEnvironment(std::map<std::string, boost::shared_ptr<void*>> environment)
{
    this->environment = environment;
}

boost::shared_ptr<Reference> EvaluationEnvironment::getCause()
{
    return cause;
}

void EvaluationEnvironment::setCause(boost::shared_ptr<Reference> cause)
{
    this->cause = cause;
}

std::map<std::string, boost::shared_ptr<void *>> EvaluationEnvironment::getEnvironment()
{
    return environment;
}

void EvaluationEnvironment::setEnvironment(std::map<std::string, boost::shared_ptr<void *> > environment)
{
    this->environment = environment;
}
