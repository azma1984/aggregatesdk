#include "binding/EvaluationOptions.h"

const int EvaluationOptions::STARTUP = 1;
const int EvaluationOptions::EVENT = 2;
const int EvaluationOptions::PERIODIC = 4;


//EvaluationOptions::EvaluationOptions()
//{
//    ctor();
//}
//
//EvaluationOptions::EvaluationOptions(bool startup, bool event)
//{
//    ctor(startup, event, 0);
//}
//
//EvaluationOptions::EvaluationOptions(bool startup, bool event, long period)
//{
//    ctor(startup, event, period);
//}
//
//EvaluationOptions::EvaluationOptions(int pattern)
//{
//    ctor();
//    this->pattern = pattern;
//}
//
//EvaluationOptions::EvaluationOptions(bool startup, const std::string & activator, const std::string & condition)
//{
//    ctor(startup, activator);
//    this->condition = new Expression(condition);
//}
//
//EvaluationOptions::EvaluationOptions(bool startup, const std::string & activator)
//{
//    ctor(startup, activator);
//}
//
//void EvaluationOptions::ctor()
//{
//    this->pattern = STARTUP;
//    this->period = 0;
//}
//
//void EvaluationOptions::ctor(bool startup, bool event, long period)
//{
//    this->pattern = 0;
//    this->period = 0;
//
//    if (startup) {
//        pattern |= STARTUP;
//    }
//    if (event) {
//        pattern |= EVENT;
//    }
//
//    if (period > 0){
//        pattern |= PERIODIC;
//        this->period = period;
//    }
//}
//
//void EvaluationOptions::ctor(bool startup, const std::string & activator)
//{
//    ctor();
//    if (startup) {
//        this->pattern |= STARTUP;
//    }
//    this->pattern |= EVENT;
//
//    setActivator(new Reference(activator));
//}
//
//
//int EvaluationOptions::getPattern()
//{
//    return pattern;
//}
//
//long EvaluationOptions::getPeriod()
//{
//    return period;
//}
//
//boost::ReferencePtr EvaluationOptions::getActivator()
//{
//    return activator;
//}
//
//ExpressionPtr EvaluationOptions::getCondition()
//{
//    return condition;
//}
//
//void EvaluationOptions::setPattern(int pattern)
//{
//    this->pattern = pattern;
//}
//
//void EvaluationOptions::setPeriod(long period)
//{
//    this->period = period;
//}
//
//void EvaluationOptions::setActivator(boost::ReferencePtr activator)
//{
//    this->activator = activator;
//}
//
//void EvaluationOptions::setCondition(ExpressionPtr condition)
//{
//    this->condition = condition;
//}
//
//bool EvaluationOptions::isProcessOnStartup()
//{
//    return (pattern & STARTUP) > 0;
//}
//
//bool EvaluationOptions::isProcessOnEvent()
//{
//    return (pattern & EVENT) > 0;
//}
//
//bool EvaluationOptions::isProcessPeriodically()
//{
//    return (pattern & PERIODIC) > 0;
//}
//
//void EvaluationOptions::setProcessOnStartup(bool processOnStartup)
//{
//    this->pattern |= STARTUP;
//}
//
//void EvaluationOptions::setProcessOnEvent(bool processOnEvent)
//{
//    this->pattern |= EVENT;
//}
//
//void EvaluationOptions::setProcessPeriodically(bool processPeriodically)
//{
//    this->pattern |= PERIODIC;
//}
//
//EvaluationOptionsPtr EvaluationOptions::clone()
//{
////    try {
//        return new EvaluationOptions(this);
////    } catch (::java::lang::CloneNotSupportedException* ex) {
////        throw new ::java::lang::IllegalStateException(ex)->getMessage(), ex);
////    }
//}
//
//std::string EvaluationOptions::toString()
//{
//    std::stringstream ss;
//    ss << (isProcessOnEvent() ? "1" : "0") <<(isProcessPeriodically() ? "1" : "0");
//
//    if (isProcessPeriodically())
//        ss <<", period=" <<period;
//
//    ss<<", activator=" <<activator->toString() <<", condition=" <<condition->toString();
//
//    ss.str();
//}
