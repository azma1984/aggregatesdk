// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/LdFunction.java
#include "expression/function/other/LdFunction.h"

#include "Cres.h"
#include "expression/EvaluationEnvironment.h"
#include "expression/EvaluationException.h"
#include "expression/function/Functions.h"
//#include <java/lang/ClassCastException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/StringBuilder.h"
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

function::other::LdFunction::LdFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::other::LdFunction::LdFunction() 
    : LdFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::other::LdFunction::ctor()
{
    super::ctor(function::Functions::GROUP_OTHER(), u"String variable"_j, u"Object"_j);
}

void* function::other::LdFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, false, parameters);
    auto variable = (*parameters)[int(0)])->toString();
    if(environment != 0 && environment)->getEnvironment() != 0 && environment)->getEnvironment())->containsKey(variable)) {
        return java_cast< void* >(environment)->getEnvironment())->get(variable));
    }
    throw new EvaluationException(std::stringBuilder().append(Cres::get())->getString(u"exprEnvVarNotFound"_j))->append(variable)->toString());
}



java::lang::Class* function::other::LdFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.other.LdFunction", 63);
    return c;
}

java::lang::Class* function::other::LdFunction::getClass0()
{
    return class_();
}

