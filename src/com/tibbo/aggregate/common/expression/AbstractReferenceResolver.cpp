// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/AbstractReferenceResolver.java
#include <com/tibbo/aggregate/common/expression/AbstractReferenceResolver.h"

#include <com/tibbo/aggregate/common/context/CallerController.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
//#include <java/lang/Integer.h"

AbstractReferenceResolver::AbstractReferenceResolver(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

AbstractReferenceResolver::AbstractReferenceResolver()
    : AbstractReferenceResolver(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

CallerController* AbstractReferenceResolver::getCallerController()
{
    return callerController;
}

Context* AbstractReferenceResolver::getDefaultContext()
{
    return defaultContext;
}

ContextManager* AbstractReferenceResolver::getContextManager()
{
    return contextManager;
}

java::lang::Integer* AbstractReferenceResolver::getDefaultRow()
{
    return defaultRow;
}

DateDataTable* AbstractReferenceResolver::getDefaultTable()
{
    return defaultTable;
}

Evaluator* AbstractReferenceResolver::getEvaluator()
{
    return evaluator;
}

void AbstractReferenceResolver::addContextManager(const std::string & schema, ContextManager* cm)
{
}

void AbstractReferenceResolver::setCallerController(CallerController* callerController)
{
    this->callerController = callerController;
}

void AbstractReferenceResolver::setDefaultContext(Context* defaultContext)
{
    this->defaultContext = defaultContext;
}

void AbstractReferenceResolver::setContextManager(ContextManager* contextManager)
{
    this->contextManager = contextManager;
}

void AbstractReferenceResolver::setDefaultRow(int  defaultRow)
{
    this->defaultRow = defaultRow;
}

void AbstractReferenceResolver::setDefaultTable(DataTable* defaultTable)
{
    this->defaultTable = defaultTable;
}

void AbstractReferenceResolver::setEvaluator(Evaluator* evaluator)
{
    this->evaluator = evaluator;
}



java::lang::Class* AbstractReferenceResolver::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.AbstractReferenceResolver", 63);
    return c;
}

java::lang::Class* AbstractReferenceResolver::getClass0()
{
    return class_();
}

