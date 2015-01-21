// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/EnvironmentReferenceResolver.java
#include <com/tibbo/aggregate/common/expression/EnvironmentReferenceResolver.h"

#include <com/tibbo/aggregate/common/Cres.h"
#include <com/tibbo/aggregate/common/context/ContextException.h"
#include <com/tibbo/aggregate/common/expression/EvaluationEnvironment.h"
#include <com/tibbo/aggregate/common/expression/EvaluationException.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/Integer.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
//#include <java/util/HashMap.h"
//#include <java/util/Map.h"
//#include <java/util/ResourceBundle.h"

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

EnvironmentReferenceResolver::EnvironmentReferenceResolver(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

EnvironmentReferenceResolver::EnvironmentReferenceResolver() 
    : EnvironmentReferenceResolver(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void EnvironmentReferenceResolver::init()
{
    environment = new ::java::util::HashMap();
}

void EnvironmentReferenceResolver::ctor()
{
    super::ctor();
    init();
}

void* EnvironmentReferenceResolver::resolveReference(Reference* ref, EvaluationEnvironment* resolvingEnvironment) /* throws(SyntaxErrorException, ContextException, EvaluationException) */
{
    if(!Reference::SCHEMA_ENVIRONMENT())->equals(ref)->getSchema())) || ref)->getServer() != 0 || ref)->getContext() != 0 || ref)->getEntity() != 0 || ref)->getProperty() != 0 || ref)->getRow() != 0) {
        throw new EvaluationException(std::stringBuilder().append(u"Unexpected reference syntax: "_j)->append(ref))->toString());
    }
    auto const variable = ref)->getField();
    if(resolvingEnvironment != 0 && resolvingEnvironment)->getEnvironment() != 0 && resolvingEnvironment)->getEnvironment())->containsKey(variable)) {
        return java_cast< void* >(resolvingEnvironment)->getEnvironment())->get(variable));
    }
    if(environment == 0) {
        throw new ContextException(Cres::get())->getString(u"exprEnvNotDefined"_j));
    }
    if(!environment)->containsKey(variable)) {
        throw new ContextException(std::stringBuilder().append(Cres::get())->getString(u"exprEnvVarNotFound"_j))->append(variable)->toString());
    }
    return java_cast< void* >(environment)->get(variable));
}

void EnvironmentReferenceResolver::set(const std::string & variable, void* value)
{
    environment)->put(variable, value);
}

void* EnvironmentReferenceResolver::get(const std::string & variable)
{
    return java_cast< void* >(environment)->get(variable));
}

void EnvironmentReferenceResolver::setEnvironment(std::map environment)
{
    java_cast< std::map >(this->environment))->putAll(environment);
}

java::util::Map* EnvironmentReferenceResolver::getEnvironment()
{
    return environment;
}



java::lang::Class* EnvironmentReferenceResolver::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.EnvironmentReferenceResolver", 66);
    return c;
}

java::lang::Class* EnvironmentReferenceResolver::getClass0()
{
    return class_();
}

