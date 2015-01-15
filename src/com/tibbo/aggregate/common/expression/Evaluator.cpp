// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/Evaluator.java
#include <com/tibbo/aggregate/common/expression/Evaluator.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/datatable/DataTable.h"
#include <com/tibbo/aggregate/common/datatable/DataTableUtils.h"
#include <com/tibbo/aggregate/common/expression/AbstractEvaluatingVisitor.h"
#include <com/tibbo/aggregate/common/expression/DefaultEvaluatingVisitor.h"
#include <com/tibbo/aggregate/common/expression/DefaultReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/EnvironmentReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/EvaluationEnvironment.h"
#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
#include <com/tibbo/aggregate/common/expression/Evaluator_LocalEnvironmentResolver.h"
#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/expression/ExpressionUtils.h"
#include <com/tibbo/aggregate/common/expression/Function.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
#include <com/tibbo/aggregate/common/expression/ReferenceResolver.h"
#include <com/tibbo/aggregate/common/expression/parser/ASTStart.h"
#include <com/tibbo/aggregate/common/expression/parser/ExpressionParserVisitor.h"
#include <com/tibbo/aggregate/common/expression/util/Tracer.h"
#include <com/tibbo/aggregate/common/util/DateUtils.h"
#include <com/tibbo/aggregate/common/util/SyntaxErrorException.h"
#include <com/tibbo/aggregate/common/util/Util.h"
//#include <java/awt/Color.h"
//#include <java/lang/Boolean.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Comparable.h"
//#include <java/lang/Exception.h"
//#include <java/lang/IllegalArgumentException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Number.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/text/MessageFormat.h"
//#include <java/text/ParseException.h"
//#include <java/text/SimpleDateFormat.h"
//#include <java/util/Collections.h"
//#include <java/util/Date.h"
//#include <java/util/HashMap.h"
//#include <java/util/LinkedHashMap.h"
//#include <java/util/Map.h"
//#include <java/util/ResourceBundle.h"
#include <ObjectArray.h"

template<typename T, typename U>
static T java_cast(U* u)
{
    if(!u) return static_cast<T>(0);
    auto t = dynamic_cast<T>(u);
    if(!t) throw new ::java::lang::ClassCastException();
    return t;
}

template<typename T>
static T* T* t)
{
    if(!t) std::exception("Pointer = NULL!");
    return t;
}

namespace
{
    template<typename F>
    struct finally_
    {
        finally_(F f) : f(f), moved(false) { }
        finally_(finally_ &&x) : f(x.f), moved(false) { x.moved = true; }
        ~finally_() { if(!moved) f(); }
    private:
        finally_(const finally_&); finally_& operator=(const finally_&);
        F f;
        bool moved;
    };

    template<typename F> finally_<F> finally(F f) { return finally_<F>(f); }
}
extern void lock(void *);
extern void unlock(void *);

namespace
{
    struct synchronized
    {
        synchronized(void *o) : o(o) { ::lock(o); }
        ~synchronized() { ::unlock(o); }
    private:
        synchronized(const synchronized&); synchronized& operator=(const synchronized&);
        void *o;
    };
}
com::tibbo::aggregate::common::expression::Evaluator::Evaluator(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::expression::Evaluator::Evaluator(::com::tibbo::aggregate::common::context::ContextManager* cm, ::com::tibbo::aggregate::common::context::CallerController* caller) 
    : Evaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(cm,caller);
}

com::tibbo::aggregate::common::expression::Evaluator::Evaluator(DataTable* defaultTable) 
    : Evaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(defaultTable);
}

com::tibbo::aggregate::common::expression::Evaluator::Evaluator(::com::tibbo::aggregate::common::context::ContextManager* cm, ::com::tibbo::aggregate::common::context::Context* defaultContext, DataTable* defaultTable, ::com::tibbo::aggregate::common::context::CallerController* caller) 
    : Evaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(cm,defaultContext,defaultTable,caller);
}

com::tibbo::aggregate::common::expression::Evaluator::Evaluator(ReferenceResolver* resolver) 
    : Evaluator(*static_cast< ::default_init_tag* >(0))
{
    ctor(resolver);
}

void com::tibbo::aggregate::common::expression::Evaluator::init()
{
    environmentResolver = new Evaluator_LocalEnvironmentResolver(this);
    resolvers = new ::java::util::HashMap();
    customFunctions = new ::java::util::LinkedHashMap();
    count = int(0);
}

std::string& com::tibbo::aggregate::common::expression::Evaluator::ENVIRONMENT_PREVIOUS()
{
    
    return ENVIRONMENT_PREVIOUS_;
}
std::string com::tibbo::aggregate::common::expression::Evaluator::ENVIRONMENT_PREVIOUS_;

std::string& com::tibbo::aggregate::common::expression::Evaluator::ENVIRONMENT_COUNT()
{
    
    return ENVIRONMENT_COUNT_;
}
std::string com::tibbo::aggregate::common::expression::Evaluator::ENVIRONMENT_COUNT_;

void com::tibbo::aggregate::common::expression::Evaluator::ctor(::com::tibbo::aggregate::common::context::ContextManager* cm, ::com::tibbo::aggregate::common::context::CallerController* caller)
{
    ctor(cm, 0, 0, caller);
}

void com::tibbo::aggregate::common::expression::Evaluator::ctor(DataTable* defaultTable)
{
    ctor(0, 0, defaultTable, 0);
}

void com::tibbo::aggregate::common::expression::Evaluator::ctor(::com::tibbo::aggregate::common::context::ContextManager* cm, ::com::tibbo::aggregate::common::context::Context* defaultContext, DataTable* defaultTable, ::com::tibbo::aggregate::common::context::CallerController* caller)
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

void com::tibbo::aggregate::common::expression::Evaluator::ctor(ReferenceResolver* resolver)
{
    super::ctor();
    init();
    init_(resolver);
}

void com::tibbo::aggregate::common::expression::Evaluator::init_(ReferenceResolver* defaultResolver)
{
    defaultResolver)->setEvaluator(this);
    resolvers)->put(0, defaultResolver);
    setResolver(Reference::SCHEMA_ENVIRONMENT(), environmentResolver);
}

void* com::tibbo::aggregate::common::expression::Evaluator::evaluate(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    return evaluate(expression, new EvaluationEnvironment());
}

void* com::tibbo::aggregate::common::expression::Evaluator::evaluate(Expression* expression, EvaluationEnvironment* environment) /* throws(SyntaxErrorException, EvaluationException) */
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

std::string com::tibbo::aggregate::common::expression::Evaluator::evaluateToString(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    return result != 0 ? result)->toString() : u""_j;
}

std::string com::tibbo::aggregate::common::expression::Evaluator::evaluateToStringOrNull(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    return result != 0 ? result)->toString() : static_cast< const std::string & >(0);
}

bool com::tibbo::aggregate::common::expression::Evaluator::evaluateToBoolean(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    return (util::Util::convertToBoolean(result, true, false)))->booleanValue();
}

java::lang::Boolean* com::tibbo::aggregate::common::expression::Evaluator::evaluateToBooleanOrNull(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    return ::com::tibbo::aggregate::common::util::Util::convertToBoolean(result, true, true);
}

java::lang::Number* com::tibbo::aggregate::common::expression::Evaluator::evaluateToNumber(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    return evaluateToNumber(expression, false, false);
}

java::lang::Number* com::tibbo::aggregate::common::expression::Evaluator::evaluateToNumber(Expression* expression, bool validate, bool allowNull) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    return ::com::tibbo::aggregate::common::util::Util::convertToNumber(result, validate, allowNull);
}

java::lang::Comparable* com::tibbo::aggregate::common::expression::Evaluator::evaluateToComparable(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    return dynamic_cast< ::java::lang::Comparable* >(result) != 0 ? java_cast< ::java::lang::Comparable* >(result) : static_cast< ::java::lang::Comparable* >(result)->toString());
}

com::tibbo::aggregate::common::datatable::DataTable* com::tibbo::aggregate::common::expression::Evaluator::evaluateToDataTable(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    if(dynamic_cast< DataTable* >(result) != 0) {
        return java_cast< DataTable* >(result);
    }
    return DataTableUtils::wrapToTable(::java::util::Collections::singletonList(result));
}

java::util::Date* com::tibbo::aggregate::common::expression::Evaluator::evaluateToDate(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
{
    auto result = evaluate(expression);
    if(result == 0) {
        return 0;
    }
    if(dynamic_cast< ::java::util::Date* >(result) != 0) {
        return java_cast< ::java::util::Date* >(result);
    }
    if(dynamic_cast< ::java::lang::Number* >(result) != 0) {
        return new ::java::util::Date((java_cast< ::java::lang::Number* >(result)))->longValue());
    }
    try {
        return util::DateUtils::createDateFormatter())->parse(result)->toString());
    } catch (::java::text::ParseException* ex) {
        throw new EvaluationException(ex)->getMessage(), ex);
    }
}

java::awt::Color* com::tibbo::aggregate::common::expression::Evaluator::evaluateToColor(Expression* expression) /* throws(SyntaxErrorException, EvaluationException) */
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

com::tibbo::aggregate::common::expression::ReferenceResolver* com::tibbo::aggregate::common::expression::Evaluator::getResolver(const std::string & schema)
{
    return java_cast< ReferenceResolver* >(resolvers)->get(schema));
}

com::tibbo::aggregate::common::expression::ReferenceResolver* com::tibbo::aggregate::common::expression::Evaluator::getDefaultResolver()
{
    return java_cast< ReferenceResolver* >(resolvers)->get(0));
}

void com::tibbo::aggregate::common::expression::Evaluator::setResolver(const std::string & schema, ReferenceResolver* resolver)
{
    resolvers)->put(schema, resolver);
}

java::util::Map* com::tibbo::aggregate::common::expression::Evaluator::getResolvers()
{
    return resolvers;
}

void* com::tibbo::aggregate::common::expression::Evaluator::getPreviousResult()
{
    return previousResult;
}

void com::tibbo::aggregate::common::expression::Evaluator::setPreviousResult(void* previousResult)
{
    this->previousResult = previousResult;
}

void com::tibbo::aggregate::common::expression::Evaluator::registerCustomFunction(const std::string & name, Function* impl)
{
    if(AbstractEvaluatingVisitor::DEFAULT_FUNCTIONS())->containsKey(name) || customFunctions)->containsKey(name)) {
        std::cout <<"Function already registered:"_j)->append(name)->toString());
    }
    customFunctions)->put(name, impl);
}

java::util::Map* com::tibbo::aggregate::common::expression::Evaluator::getAllFunctions()
{
    std::map res = new ::java::util::LinkedHashMap(static_cast< std::map >(AbstractEvaluatingVisitor::DEFAULT_FUNCTIONS()));
    res)->putAll(customFunctions);
    return res;
}

com::tibbo::aggregate::common::expression::Function* com::tibbo::aggregate::common::expression::Evaluator::getCustomFunction(const std::string & name)
{
    return java_cast< Function* >(customFunctions)->get(name));
}

com::tibbo::aggregate::common::expression::EnvironmentReferenceResolver* com::tibbo::aggregate::common::expression::Evaluator::getEnvironmentResolver()
{
    return environmentResolver;
}

com::tibbo::aggregate::common::expression::util::Tracer* com::tibbo::aggregate::common::expression::Evaluator::getTracer()
{
    return tracer;
}

void com::tibbo::aggregate::common::expression::Evaluator::setTracer(::com::tibbo::aggregate::common::expression::util::Tracer* tracer)
{
    this->tracer = tracer;
}



java::lang::Class* com::tibbo::aggregate::common::expression::Evaluator::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.Evaluator", 47);
    return c;
}

void com::tibbo::aggregate::common::expression::Evaluator::clinit()
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

java::lang::Class* com::tibbo::aggregate::common::expression::Evaluator::getClass0()
{
    return class_();
}

