// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/AbstractReferenceResolver.java
#include <com/tibbo/aggregate/common/expression/AbstractReferenceResolver.h"

#include <com/tibbo/aggregate/common/context/CallerController.h"
#include <com/tibbo/aggregate/common/context/Context.h"
#include <com/tibbo/aggregate/common/context/ContextManager.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/expression/Evaluator.h"
//#include <java/lang/Integer.h"

com::tibbo::aggregate::common::expression::AbstractReferenceResolver::AbstractReferenceResolver(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::AbstractReferenceResolver::AbstractReferenceResolver()
    : AbstractReferenceResolver(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::context::CallerController* com::tibbo::aggregate::common::expression::AbstractReferenceResolver::getCallerController()
{
    return callerController;
}

com::tibbo::aggregate::common::context::Context* com::tibbo::aggregate::common::expression::AbstractReferenceResolver::getDefaultContext()
{
    return defaultContext;
}

com::tibbo::aggregate::common::context::ContextManager* com::tibbo::aggregate::common::expression::AbstractReferenceResolver::getContextManager()
{
    return contextManager;
}

java::lang::Integer* com::tibbo::aggregate::common::expression::AbstractReferenceResolver::getDefaultRow()
{
    return defaultRow;
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::expression::AbstractReferenceResolver::getDefaultTable()
{
    return defaultTable;
}

com::tibbo::aggregate::common::expression::Evaluator* com::tibbo::aggregate::common::expression::AbstractReferenceResolver::getEvaluator()
{
    return evaluator;
}

void com::tibbo::aggregate::common::expression::AbstractReferenceResolver::addContextManager(const std::string & schema, ::com::tibbo::aggregate::common::context::ContextManager* cm)
{
}

void com::tibbo::aggregate::common::expression::AbstractReferenceResolver::setCallerController(::com::tibbo::aggregate::common::context::CallerController* callerController)
{
    this->callerController = callerController;
}

void com::tibbo::aggregate::common::expression::AbstractReferenceResolver::setDefaultContext(::com::tibbo::aggregate::common::context::Context* defaultContext)
{
    this->defaultContext = defaultContext;
}

void com::tibbo::aggregate::common::expression::AbstractReferenceResolver::setContextManager(::com::tibbo::aggregate::common::context::ContextManager* contextManager)
{
    this->contextManager = contextManager;
}

void com::tibbo::aggregate::common::expression::AbstractReferenceResolver::setDefaultRow(int  defaultRow)
{
    this->defaultRow = defaultRow;
}

void com::tibbo::aggregate::common::expression::AbstractReferenceResolver::setDefaultTable(DataTable* defaultTable)
{
    this->defaultTable = defaultTable;
}

void com::tibbo::aggregate::common::expression::AbstractReferenceResolver::setEvaluator(Evaluator* evaluator)
{
    this->evaluator = evaluator;
}



java::lang::Class* com::tibbo::aggregate::common::expression::AbstractReferenceResolver::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.AbstractReferenceResolver", 63);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::expression::AbstractReferenceResolver::getClass0()
{
    return class_();
}

