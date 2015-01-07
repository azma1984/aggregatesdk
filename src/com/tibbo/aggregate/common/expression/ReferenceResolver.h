// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/ReferenceResolver.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"

struct com::tibbo::aggregate::common::expression::ReferenceResolver
    
{
    void* resolveReference(Reference* ref, EvaluationEnvironment* environment) /* throws(SyntaxErrorException, EvaluationException, ContextException) */;
    void setContextManager(::com::tibbo::aggregate::common::context::ContextManager* cm);
    ::com::tibbo::aggregate::common::context::ContextManager* getContextManager();
    void setDefaultTable(::com::tibbo::aggregate::common::datatable::DataTable* defaultTable);
    ::com::tibbo::aggregate::common::datatable::DataTable* getDefaultTable();
    void setDefaultContext(::com::tibbo::aggregate::common::context::Context* defaultContext);
    ::com::tibbo::aggregate::common::context::Context* getDefaultContext();
    void setCallerController(::com::tibbo::aggregate::common::context::CallerController* callerController);
    ::com::tibbo::aggregate::common::context::CallerController* getCallerController();
    void setEvaluator(Evaluator* evaluator);
    Evaluator* getEvaluator();
    void setDefaultRow(::java::lang::Integer* defaultRow);
    ::java::lang::Integer* getDefaultRow();

    // Generated
    
};
