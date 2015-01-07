// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/Evaluator.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/context/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/datatable/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/expression/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/awt/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/util/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"



class com::tibbo::aggregate::common::expression::Evaluator
    
{

public:
    typedef void super;

private:
    static const std::string ENVIRONMENT_PREVIOUS_;
    static const std::string ENVIRONMENT_COUNT_;
    EnvironmentReferenceResolver* environmentResolver;
    std::map resolvers;
    std::map customFunctions;
    ::com::tibbo::aggregate::common::expression::util::Tracer* tracer;
    long count;
    void* previousResult;
protected:
    void ctor(::com::tibbo::aggregate::common::context::ContextManager* cm, ::com::tibbo::aggregate::common::context::CallerController* caller);
    void ctor(::com::tibbo::aggregate::common::datatable::DataTable* defaultTable);
    void ctor(::com::tibbo::aggregate::common::context::ContextManager* cm, ::com::tibbo::aggregate::common::context::Context* defaultContext, ::com::tibbo::aggregate::common::datatable::DataTable* defaultTable, ::com::tibbo::aggregate::common::context::CallerController* caller);
    void ctor(ReferenceResolver* resolver);

private:
    void init_(ReferenceResolver* defaultResolver);

public:
    void* evaluate(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */;
    void* evaluate(Expression* expression, EvaluationEnvironment* environment) /* throws(SyntaxErrorException, EvaluationException) */;
    std::string* evaluateToString(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */;
    std::string* evaluateToStringOrNull(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */;
    bool evaluateToBoolean(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */;
    ::java::lang::Boolean* evaluateToBooleanOrNull(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */;
    ::java::lang::Number* evaluateToNumber(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */;
    ::java::lang::Number* evaluateToNumber(Expression* expression, bool validate, bool allowNull) /* throws(SyntaxErrorException, EvaluationException) */;
    ::java::lang::Comparable* evaluateToComparable(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */;
    ::com::tibbo::aggregate::common::datatable::DataTable* evaluateToDataTable(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */;
    ::java::util::Date* evaluateToDate(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */;
    ::java::awt::Color* evaluateToColor(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */;
    ReferenceResolver* getResolver(std::string* schema);
    ReferenceResolver* getDefaultResolver();
    void setResolver(std::string* schema, ReferenceResolver* resolver);
    std::map getResolvers();
    void* getPreviousResult();
    void setPreviousResult(void* previousResult);
    void registerCustomFunction(std::string* name, Function* impl);
    std::map getAllFunctions();
    Function* getCustomFunction(std::string* name);
    EnvironmentReferenceResolver* getEnvironmentResolver();
    ::com::tibbo::aggregate::common::expression::util::Tracer* getTracer();
    void setTracer(::com::tibbo::aggregate::common::expression::util::Tracer* tracer);

    // Generated
    Evaluator(::com::tibbo::aggregate::common::context::ContextManager* cm, ::com::tibbo::aggregate::common::context::CallerController* caller);
    Evaluator(::com::tibbo::aggregate::common::datatable::DataTable* defaultTable);
    Evaluator(::com::tibbo::aggregate::common::context::ContextManager* cm, ::com::tibbo::aggregate::common::context::Context* defaultContext, ::com::tibbo::aggregate::common::datatable::DataTable* defaultTable, ::com::tibbo::aggregate::common::context::CallerController* caller);
    Evaluator(ReferenceResolver* resolver);
protected:
    Evaluator(const ::default_init_tag&);


public:
    
    static void 

private:
    void init();
    static const std::string& ENVIRONMENT_PREVIOUS();
    static const std::string& ENVIRONMENT_COUNT();
    ::java::lang::Class* getClass0();
    friend class Evaluator_LocalEnvironmentResolver;
};