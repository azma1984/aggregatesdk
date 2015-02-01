#include "expression/AbstractReferenceResolver.h"


AbstractReferenceResolver::AbstractReferenceResolver()
{

}

boost::shared_ptr<CallerController> AbstractReferenceResolver::getCallerController()
{
    return callerController;
}

boost::shared_ptr<Context> AbstractReferenceResolver::getDefaultContext()
{
    return defaultContext;
}

boost::shared_ptr<ContextManager> AbstractReferenceResolver::getContextManager()
{
    return contextManager;
}

int AbstractReferenceResolver::getDefaultRow()
{
    return defaultRow;
}

boost::shared_ptr<DataTable> AbstractReferenceResolver::getDefaultTable()
{
    return defaultTable;
}

boost::shared_ptr<Evaluator> AbstractReferenceResolver::getEvaluator()
{
    return evaluator;
}

void AbstractReferenceResolver::addContextManager(const std::string& schema, boost::shared_ptr<ContextManager> cm)
{
}

void AbstractReferenceResolver::setCallerController(boost::shared_ptr<CallerController> callerController)
{
    this->callerController = callerController;
}

void AbstractReferenceResolver::setDefaultContext(boost::shared_ptr<Context> defaultContext)
{
    this->defaultContext = defaultContext;
}

void AbstractReferenceResolver::setContextManager(boost::shared_ptr<ContextManager> contextManager)
{
    this->contextManager = contextManager;
}

void AbstractReferenceResolver::setDefaultRow(int  defaultRow)
{
    this->defaultRow = defaultRow;
}

void AbstractReferenceResolver::setDefaultTable(boost::shared_ptr<DataTable> defaultTable)
{
    this->defaultTable = defaultTable;
}

void AbstractReferenceResolver::setEvaluator(boost::shared_ptr<Evaluator> evaluator)
{
    this->evaluator = evaluator;
}
