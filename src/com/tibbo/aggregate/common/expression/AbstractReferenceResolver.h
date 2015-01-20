// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/AbstractReferenceResolver.java

#pragma once

//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"



class AbstractReferenceResolver
    
    , public ReferenceResolver
{

public:
    typedef void super;

private:
    Evaluator* evaluator;
    ContextManager* contextManager;
    Context* defaultContext;
    DataTable* defaultTable;
    int  defaultRow;
    CallerController* callerController;

public:
    CallerController* getCallerController();
    Context* getDefaultContext();
    ContextManager* getContextManager();
    int  getDefaultRow();
    DataTable* getDefaultTable();
    Evaluator* getEvaluator();
    void addContextManager(const std::string & schema, ContextManager* cm);
    void setCallerController(CallerController* callerController);
    void setDefaultContext(Context* defaultContext);
    void setContextManager(ContextManager* contextManager);
    void setDefaultRow(int  defaultRow);
    void setDefaultTable(DataTable* defaultTable);
    void setEvaluator(Evaluator* evaluator);

    // Generated
    AbstractReferenceResolver();
protected:
    AbstractReferenceResolver(const ::default_init_tag&);


public:
    

private:
    ::java::lang::Class* getClass0();
};
