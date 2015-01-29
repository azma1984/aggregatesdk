#include "expression/Evaluator.h"

//#include <com/tibbo/aggregate/common/Cres.h"
//#include <com/tibbo/aggregate/common/datatable/DataTable.h"
//#include <com/tibbo/aggregate/common/datatable/DataTableUtils.h"
//#include <com/tibbo/aggregate/common/expression/AbstractEvaluatingVisitor.h"
//#include <com/tibbo/aggregate/common/expression/DefaultEvaluatingVisitor.h"
//#include <com/tibbo/aggregate/common/expression/DefaultReferenceResolver.h"
//#include <com/tibbo/aggregate/common/expression/EnvironmentReferenceResolver.h"
//#include <com/tibbo/aggregate/common/expression/EvaluationEnvironment.h"
//#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
//#include <com/tibbo/aggregate/common/expression/Evaluator_LocalEnvironmentResolver.h"
//#include <com/tibbo/aggregate/common/expression/Expression.h"
//#include <com/tibbo/aggregate/common/expression/ExpressionUtils.h"
//#include <com/tibbo/aggregate/common/expression/Function.h"
//#include <com/tibbo/aggregate/common/expression/Reference.h"
//#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
//#include <com/tibbo/aggregate/common/expression/parser/ASTStart.h"
//#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"
//#include <com/tibbo/aggregate/common/expression/util/Tracer.h"
//#include <com/tibbo/aggregate/common/util/DateUtils.h"
//#include <com/tibbo/aggregate/common/util/SyntaxErrorException.h"
//#include <com/tibbo/aggregate/common/util/Util.h"


Evaluator::Evaluator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

Evaluator::Evaluator(ContextManager* cm, CallerController* caller) 
    : Evaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(cm,caller);
}

Evaluator::Evaluator(DataTable* defaultTable) 
    : Evaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(defaultTable);
}

Evaluator::Evaluator(ContextManager* cm, Context* defaultContext, DataTable* defaultTable, CallerController* caller) 
    : Evaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(cm,defaultContext,defaultTable,caller);
}

Evaluator::Evaluator(ReferenceResolver* resolver) 
    : Evaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(resolver);
}

void Evaluator::init()
{
    environmentResolver = new Evaluator_LocalEnvironmentResolver(this);
    resolvers = new ::java::util::HashMap();
    customFunctions = new ::java::util::LinkedHashMap();
    count = int(0);
}

std::string& Evaluator::ENVIRONMENT_PREVIOUS()
{
    
    return ENVIRONMENT_PREVIOUS_;
}
std::string Evaluator::ENVIRONMENT_PREVIOUS_;

std::string& Evaluator::ENVIRONMENT_COUNT()
{
    
    return ENVIRONMENT_COUNT_;
}
std::string Evaluator::ENVIRONMENT_COUNT_;

void Evaluator::ctor(ContextManager* cm, CallerController* caller)
{
    ctor(cm, 0, 0, caller);
}

void Evaluator::ctor(DataTable* defaultTable)
{
    ctor(0, 0, defaultTable, 0);
}

void Evaluator::ctor(ContextManager* cm, Context* defaultContext, DataTable* defaultTable, CallerController* caller)
{
    super::ctor();
    init();
    auto resolver = new DefaultReferenceResolver();
    resolver)->setContextManager(cm);
    resolver)->setCallerController(caller);
    resolver)->setDefaultContext(defaultContext);
    resolver)->setDefaultTable(defaultTable);
    init_(resolver);
}

void Evaluator::ctor(ReferenceResolver* resolver)
{
    super::ctor();
    init();
    init_(resolver);
}

void Evaluator::init_(ReferenceResolver* defaultResolver)
{
    defaultResolver)->setEvaluator(this);
    resolvers)->put(0, defaultResolver);
    setResolver(Reference::SCHEMA_ENVIRONMENT(), environmentResolver);
}

void* Evaluator::evaluate(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    return evaluate(expression, new EvaluationEnvironment());
}

void* Evaluator::evaluate(Expression* expression, EvaluationEnvironment* environment) /* throws(SyntaxErrorException, EvaluationException) */
{
    {
        auto finally0 = finally([&] {
            count++;
        });
        try {
            if((expression == 0) || (expression)->getText())->length() == 0)) {
                return 0;
            }
            ::ASTStart* root;
            {
                synchronized synchronized_0(expression);
                {
                    root = expression)->getRootNode();
                    if(root == 0) {
                        root = ExpressionUtils::parse(expression, true);
                        expression)->setRootNode(root);
                    }
                }
            }
            auto visitor = new DefaultEvaluatingVisitor(this);
            root)->jjtAccept(static_cast< ::ExpressionParserVisitor* >(visitor), environment));
            auto result = visitor->getResult();
            previousResult = result;
            return result;
        } catch (::com::tibbo::aggregate::common::util::SyntaxErrorException* ex) {
            throw ex;
        } catch (::java::lang::Exception* ex) {
            throw new EvaluationException(std::stringBuilder().append(::java::text::MessageFormat::format(Cres::get())->getString(u"exprErrEvaluatingExpr"_j), new voidArray({expression)})))->append(ex)->getMessage())->toString(), ex);
        }
    }
}

std::string Evaluator::evaluateToString(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    return result != 0 ? result)->toString() : u""_j;
}

std::string Evaluator::evaluateToStringOrNull(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    return result != 0 ? result)->toString() : static_cast< const std::string & >(0);
}

bool Evaluator::evaluateToBoolean(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    return (util::Util::convertToBoolean(result, true, false)))->booleanValue();
}

java::lang::Boolean* Evaluator::evaluateToBooleanOrNull(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    return ::com::tibbo::aggregate::common::util::Util::convertToBoolean(result, true, true);
}

java::lang::Number* Evaluator::evaluateToNumber(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    return evaluateToNumber(expression, false, false);
}

java::lang::Number* Evaluator::evaluateToNumber(Expression* expression, bool validate, bool allowNull) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    return ::com::tibbo::aggregate::common::util::Util::convertToNumber(result, validate, allowNull);
}

java::lang::Comparable* Evaluator::evaluateToComparable(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    return dynamic_cast< ::java::lang::Comparable* >(result) != 0 ? java_cast< ::java::lang::Comparable* >(result) : static_cast< ::java::lang::Comparable* >(result)->toString());
}

DateDataTable* Evaluator::evaluateToDataTable(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    if(dynamic_cast< DataTable* >(result) != 0) {
        return java_cast< DataTable* >(result);
    }
    return DataTableUtils::wrapToTable(::java::util::Collections::singletonList(result));
}

Date* Evaluator::evaluateToDate(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    if(result == 0) {
        return 0;
    }
    if(dynamic_cast< Date* >(result) != 0) {
        return java_cast< Date* >(result);
    }
    if(dynamic_cast< ::java::lang::Number* >(result) != 0) {
        return new Date((java_cast< ::java::lang::Number* >(result)))->longValue());
    }
    try {
        return util::DateUtils::createDateFormatter())->parse(result)->toString());
    } catch (::java::text::ParseException* ex) {
        throw new EvaluationException(ex)->getMessage(), ex);
    }
}

java::awt::Color* Evaluator::evaluateToColor(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    if(result == 0) {
        return 0;
    }
    if(dynamic_cast< ::java::awt::Color* >(result) != 0) {
        return java_cast< ::java::awt::Color* >(result);
    }
    return new ::java::awt::Color(util::Util::convertToNumber(result, false, false))->intValue());
}

ReferenceResolver* Evaluator::getResolver(const std::string & schema)
{
    return java_cast< ReferenceResolver* >(resolvers)->get(schema));
}

ReferenceResolver* Evaluator::getDefaultResolver()
{
    return java_cast< ReferenceResolver* >(resolvers)->get(0));
}

void Evaluator::setResolver(const std::string & schema, ReferenceResolver* resolver)
{
    resolvers)->put(schema, resolver);
}

java::util::Map* Evaluator::getResolvers()
{
    return resolvers;
}

void* Evaluator::getPreviousResult()
{
    return previousResult;
}

void Evaluator::setPreviousResult(void* previousResult)
{
    this->previousResult = previousResult;
}

void Evaluator::registerCustomFunction(const std::string & name, Function* impl)
{
    if(AbstractEvaluatingVisitor::DEFAULT_FUNCTIONS())->containsKey(name) || customFunctions)->containsKey(name)) {
        std::cout <<"Function already registered:"_j)->append(name)->toString());
    }
    customFunctions)->put(name, impl);
}

java::util::Map* Evaluator::getAllFunctions()
{
    std::map res = new ::java::util::LinkedHashMap(static_cast< std::map >(AbstractEvaluatingVisitor::DEFAULT_FUNCTIONS()));
    res)->putAll(customFunctions);
    return res;
}

Function* Evaluator::getCustomFunction(const std::string & name)
{
    return java_cast< Function* >(customFunctions)->get(name));
}

EnvironmentReferenceResolver* Evaluator::getEnvironmentResolver()
{
    return environmentResolver;
}

util::Tracer* Evaluator::getTracer()
{
    return tracer;
}

void Evaluator::setTracer(util::Tracer* tracer)
{
    this->tracer = tracer;
}



java::lang::Class* Evaluator::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.Evaluator", 47);
    return c;
}

void Evaluator::clinit()
{
struct string_init_ {
    string_init_() {
    ENVIRONMENT_PREVIOUS_ = u"previous"_j;
    ENVIRONMENT_COUNT_ = u"count"_j;
    }
};

    static string_init_ string_init_instance;

    super::
}

java::lang::Class* Evaluator::getClass0()
{
    return class_();
}

