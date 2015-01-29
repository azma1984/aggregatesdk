// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/expression/function/other/EvaluateFunction.java
#include "expression/function/other/EvaluateFunction.h"

#include "expression/EvaluationException.h"
#include "expression/Evaluator.h"
#include "expression/Expression.h"
#include "expression/function/Functions.h"
#include "util/SyntaxErrorException.h"
//#include <java/lang/NullPointerException.h"
//#include <java/lang/Object.h"
//#include <java/lang/String.h"
//#include <java/lang/Throwable.h"
#include <ObjectArray.h"

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
function::other::EvaluateFunction::EvaluateFunction(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

function::other::EvaluateFunction::EvaluateFunction() 
    : EvaluateFunction(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

void function::other::EvaluateFunction::ctor()
{
    super::ctor(function::Functions::GROUP_OTHER(), u"String expression"_j, u"Object"_j);
}

void* function::other::EvaluateFunction::execute(Evaluator* evaluator, EvaluationEnvironment* environment, voidArray*/*...*/ parameters) /* throws(EvaluationException) */
{
    checkParameters(1, false, parameters);
    auto previousBackup = evaluator)->getPreviousResult();
    {
        auto finally0 = finally([&] {
            evaluator)->setPreviousResult(previousBackup);
        });
        try {
            return evaluator)->evaluate(new Expression((*parameters)[int(0)])->toString()));
        } catch (::com::tibbo::aggregate::common::util::SyntaxErrorException* ex) {
            throw new EvaluationException(static_cast< ::java::lang::Throwable* >(ex));
        }
    }
}



java::lang::Class* function::other::EvaluateFunction::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.expression.function.other.EvaluateFunction", 69);
    return c;
}

java::lang::Class* function::other::EvaluateFunction::getClass0()
{
    return class_();
}

