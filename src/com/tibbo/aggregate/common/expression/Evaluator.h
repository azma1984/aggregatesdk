// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/Evaluator.java

#pragma once

#include "expression/ReferenceResolver.h"
#include "expression/Function.h"
#include "expression/EnvironmentReferenceResolver.h"
#include <string>
#include <map>
#include <boost/shared_ptr.hpp>

class Evaluator
{
private:
    static const std::string ENVIRONMENT_PREVIOUS_;
    static const std::string ENVIRONMENT_COUNT_;
    boost::shared_ptr<EnvironmentReferenceResolver> environmentResolver;
    std::map<std::string, boost::shared_ptr<ReferenceResolver>> resolvers;
    std::map<std::string, boost::shared_ptr<Function>> customFunctions;
//    util::Tracer* tracer;
    boost::shared_ptr<void> previousResult;
    long count;

protected:
    void ctor(ContextManager* cm, CallerController* caller);
    void ctor(DataTable* defaultTable);
    void ctor(ContextManager* cm, Context* defaultContext, DataTable* defaultTable, CallerController* caller);
    void ctor(ReferenceResolver* resolver);

public:
    void* evaluate(boost::shared_ptr<Expression> expression) /* throws(SyntaxErrorException, EvaluationException) */;
    void* evaluate(boost::shared_ptr<Expression> expression, EvaluationEnvironment* environment) /* throws(SyntaxErrorException, EvaluationException) */;
    std::string evaluateToString(boost::shared_ptr<Expression> expression) /* throws(SyntaxErrorException, EvaluationException) */;
    std::string evaluateToStringOrNull(boost::shared_ptr<Expression> expression) /* throws(SyntaxErrorException, EvaluationException) */;
    bool evaluateToBoolean(boost::shared_ptr<Expression> expression) /* throws(SyntaxErrorException, EvaluationException) */;
    bool evaluateToBooleanOrNull(boost::shared_ptr<Expression> expression) /* throws(SyntaxErrorException, EvaluationException) */;
    int evaluateToNumber(boost::shared_ptr<Expression> expression) /* throws(SyntaxErrorException, EvaluationException) */;
    int evaluateToNumber(boost::shared_ptr<Expression> expression, bool validate, bool allowNull) /* throws(SyntaxErrorException, EvaluationException) */;
//    ::java::lang::Comparable* evaluateToComparable(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */;
//    boost::shared_ptr<DataTable> evaluateToDataTable(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */;
//    boost::shared_ptr<Date> evaluateToDate(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */;
//    ::java::awt::Color* evaluateToColor(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */;
    boost::shared_ptr<ReferenceResolver> getResolver(const std::string & schema);
    boost::shared_ptr<ReferenceResolver> getDefaultResolver();
    void setResolver(const std::string & schema, boost::shared_ptr<ReferenceResolver> resolver);
    std::map<std::string, boost::shared_ptr<ReferenceResolver>> getResolvers();
    boost::shared_ptr<void> getPreviousResult();
    void setPreviousResult(boost::shared_ptr<void> previousResult);
    void registerCustomFunction(const std::string& name, boost::shared_ptr<Function> impl);
    std::map<std::string, boost::shared_ptr<Function>> getAllFunctions();
    boost::shared_ptr<Function> getCustomFunction(const std::string& name);
    boost::shared_ptr<EnvironmentReferenceResolver> getEnvironmentResolver();
//    util::Tracer* getTracer();
//    void setTracer(util::Tracer* tracer);

    // Generated
    Evaluator(boost::shared_ptr<ContextManager> cm, boost::shared_ptr<CallerController> caller);
    Evaluator(boost::shared_ptr<DataTable> defaultTable);
    Evaluator(boost::shared_ptr<ContextManager> cm, boost::shared_ptr<Context> defaultContext,
              boost::shared_ptr<DataTable> defaultTable, boost::shared_ptr<CallerController> caller);
    Evaluator(boost::shared_ptr<ReferenceResolver> resolver);
};
