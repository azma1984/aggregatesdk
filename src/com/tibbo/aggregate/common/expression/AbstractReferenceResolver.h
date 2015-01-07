// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/AbstractReferenceResolver.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"



class com::tibbo::aggregate::common::expression::AbstractReferenceResolver
    
    , public ReferenceResolver
{

public:
    typedef void super;

private:
    Evaluator* evaluator;
    ::com::tibbo::aggregate::common::context::ContextManager* contextManager;
    ::com::tibbo::aggregate::common::context::Context* defaultContext;
    ::com::tibbo::aggregate::common::datatable::DataTable* defaultTable;
    ::java::lang::Integer* defaultRow;
    ::com::tibbo::aggregate::common::context::CallerController* callerController;

public:
    ::com::tibbo::aggregate::common::context::CallerController* getCallerController();
    ::com::tibbo::aggregate::common::context::Context* getDefaultContext();
    ::com::tibbo::aggregate::common::context::ContextManager* getContextManager();
    ::java::lang::Integer* getDefaultRow();
    ::com::tibbo::aggregate::common::datatable::DataTable* getDefaultTable();
    Evaluator* getEvaluator();
    void addContextManager(std::string* schema, ::com::tibbo::aggregate::common::context::ContextManager* cm);
    void setCallerController(::com::tibbo::aggregate::common::context::CallerController* callerController);
    void setDefaultContext(::com::tibbo::aggregate::common::context::Context* defaultContext);
    void setContextManager(::com::tibbo::aggregate::common::context::ContextManager* contextManager);
    void setDefaultRow(::java::lang::Integer* defaultRow);
    void setDefaultTable(::com::tibbo::aggregate::common::datatable::DataTable* defaultTable);
    void setEvaluator(Evaluator* evaluator);

    // Generated
    AbstractReferenceResolver();
protected:
    AbstractReferenceResolver(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
