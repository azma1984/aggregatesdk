// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/EvaluationOptions.java
#include <com/tibbo/aggregate/common/binding/EvaluationOptions.h"

#include <com/tibbo/aggregate/common/expression/Expression.h"
#include <com/tibbo/aggregate/common/expression/Reference.h"
////#include <java/lang/ClassCastException.h"
////#include <java/lang/CloneNotSupportedException.h"
////#include <java/lang/IllegalStateException.h"
////#include <java/lang/NullPointerException.h"
////#include <java/lang/Object.h"
////#include <java/lang/String.h"
////#include <java/lang/StringBuilder.h"

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

com::tibbo::aggregate::common::binding::EvaluationOptions::EvaluationOptions(const ::default_init_tag&)
    : super(*static_cast< ::default_init_tag* >(0))
{
    
}

com::tibbo::aggregate::common::binding::EvaluationOptions::EvaluationOptions() 
    : EvaluationOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor();
}

com::tibbo::aggregate::common::binding::EvaluationOptions::EvaluationOptions(bool startup, bool event) 
    : EvaluationOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor(startup,event);
}

com::tibbo::aggregate::common::binding::EvaluationOptions::EvaluationOptions(bool startup, bool event, long period) 
    : EvaluationOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor(startup,event,period);
}

com::tibbo::aggregate::common::binding::EvaluationOptions::EvaluationOptions(int pattern) 
    : EvaluationOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor(pattern);
}

com::tibbo::aggregate::common::binding::EvaluationOptions::EvaluationOptions(bool startup, const std::string & activator, const std::string & condition) 
    : EvaluationOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor(startup,activator,condition);
}

com::tibbo::aggregate::common::binding::EvaluationOptions::EvaluationOptions(bool startup, const std::string & activator) 
    : EvaluationOptions(*static_cast< ::default_init_tag* >(0))
{
    ctor(startup,activator);
}

void com::tibbo::aggregate::common::binding::EvaluationOptions::init()
{
    period = int(0);
}

const int com::tibbo::aggregate::common::binding::EvaluationOptions::STARTUP;

const int com::tibbo::aggregate::common::binding::EvaluationOptions::EVENT;

const int com::tibbo::aggregate::common::binding::EvaluationOptions::PERIODIC;

void com::tibbo::aggregate::common::binding::EvaluationOptions::ctor()
{
    ctor(STARTUP);
}

void com::tibbo::aggregate::common::binding::EvaluationOptions::ctor(bool startup, bool event)
{
    ctor(startup, event, static_cast< long >(int(0)));
}

void com::tibbo::aggregate::common::binding::EvaluationOptions::ctor(bool startup, bool event, long period)
{
    super::ctor();
    init();
    if(startup) {
        pattern |= STARTUP;
    }
    if(event) {
        pattern |= EVENT;
    }
    if(period > 0) {
        pattern |= PERIODIC;
        this->period = period;
    }
}

void com::tibbo::aggregate::common::binding::EvaluationOptions::ctor(int pattern)
{
    super::ctor();
    init();
    this->pattern = pattern;
}

void com::tibbo::aggregate::common::binding::EvaluationOptions::ctor(bool startup, const std::string & activator, const std::string & condition)
{
    ctor(startup, activator);
    this->condition = new ::com::tibbo::aggregate::common::expression::Expression(condition);
}

void com::tibbo::aggregate::common::binding::EvaluationOptions::ctor(bool startup, const std::string & activator)
{
    super::ctor();
    init();
    if(startup) {
        pattern |= STARTUP;
    }
    pattern |= EVENT;
    setActivator(new ::com::tibbo::aggregate::common::expression::Reference(activator));
}

int com::tibbo::aggregate::common::binding::EvaluationOptions::getPattern()
{
    return pattern;
}

long com::tibbo::aggregate::common::binding::EvaluationOptions::getPeriod()
{
    return period;
}

com::tibbo::aggregate::common::expression::Reference* com::tibbo::aggregate::common::binding::EvaluationOptions::getActivator()
{
    return activator;
}

com::tibbo::aggregate::common::expression::Expression* com::tibbo::aggregate::common::binding::EvaluationOptions::getCondition()
{
    return condition;
}

void com::tibbo::aggregate::common::binding::EvaluationOptions::setPattern(int pattern)
{
    this->pattern = pattern;
}

void com::tibbo::aggregate::common::binding::EvaluationOptions::setPeriod(long period)
{
    this->period = period;
}

void com::tibbo::aggregate::common::binding::EvaluationOptions::setActivator(::com::tibbo::aggregate::common::expression::Reference* activator)
{
    this->activator = activator;
}

void com::tibbo::aggregate::common::binding::EvaluationOptions::setCondition(::com::tibbo::aggregate::common::expression::Expression* condition)
{
    this->condition = condition;
}

bool com::tibbo::aggregate::common::binding::EvaluationOptions::isProcessOnStartup()
{
    return (pattern & STARTUP) > 0;
}

bool com::tibbo::aggregate::common::binding::EvaluationOptions::isProcessOnEvent()
{
    return (pattern & EVENT) > 0;
}

bool com::tibbo::aggregate::common::binding::EvaluationOptions::isProcessPeriodically()
{
    return (pattern & PERIODIC) > 0;
}

void com::tibbo::aggregate::common::binding::EvaluationOptions::setProcessOnStartup(bool processOnStartup)
{
    pattern |= STARTUP;
}

void com::tibbo::aggregate::common::binding::EvaluationOptions::setProcessOnEvent(bool processOnEvent)
{
    pattern |= EVENT;
}

void com::tibbo::aggregate::common::binding::EvaluationOptions::setProcessPeriodically(bool processPeriodically)
{
    pattern |= PERIODIC;
}

com::tibbo::aggregate::common::binding::EvaluationOptions* com::tibbo::aggregate::common::binding::EvaluationOptions::clone()
{
    try {
        return java_cast< EvaluationOptions* >(super::clone());
    } catch (::java::lang::CloneNotSupportedException* ex) {
        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
    }
}

std::string com::tibbo::aggregate::common::binding::EvaluationOptions::toString()
{
    return std::stringBuilder().append((isProcessOnStartup() ? u"1"_j : u"0"_j))->append((isProcessOnEvent() ? u"1"_j : u"0"_j))
        ->append((isProcessPeriodically() ? u"1"_j : u"0"_j))
        ->append((isProcessPeriodically() ? std::stringBuilder().append(u", period="_j)->append(period)->toString() : u""_j))
        ->append(u", activator="_j)
        ->append(activator))
        ->append(u", condition="_j)
        ->append(condition))->toString();
}



java::lang::Class* com::tibbo::aggregate::common::binding::EvaluationOptions::class_()
{
    static ::java::lang::Class* c = ::class_(u"com.tibbo.aggregate.common.binding.EvaluationOptions", 52);
    return c;
}

java::lang::Class* com::tibbo::aggregate::common::binding::EvaluationOptions::getClass0()
{
    return class_();
}

