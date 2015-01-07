// Generated from /aggregate_sdk_5.11.00/src/com/tibbo/aggregate/common/binding/EvaluationOptions.java

#pragma once

//#include <fwd-aggregate_sdk_5.11.00.h"
#include <com/tibbo/aggregate/common/binding/fwd-aggregate_sdk_5.11.00.h"
//#include <com/tibbo/aggregate/common/expression/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/fwd-aggregate_sdk_5.11.00.h"
//#include <java/lang/Object.h"
//#include <java/lang/Cloneable.h"
#include <com/tibbo/aggregate/common/util/PublicCloneable.h"



class com::tibbo::aggregate::common::binding::EvaluationOptions
    
    , public ::java::lang::Cloneable
    , public ::com::tibbo::aggregate::common::util::PublicCloneable
{

public:
    typedef void super;
    static const int STARTUP = 1) };
    static const int EVENT = 2) };
    static const int PERIODIC = 4) };

private:
    int pattern;
    long period;
    ::com::tibbo::aggregate::common::expression::Reference* activator;
    ::com::tibbo::aggregate::common::expression::Expression* condition;
protected:
    void ctor();
    void ctor(bool startup, bool event);
    void ctor(bool startup, bool event, long period);
    void ctor(int pattern);
    void ctor(bool startup, std::string* activator, std::string* condition);
    void ctor(bool startup, std::string* activator);

public:
    int getPattern();
    long getPeriod();
    ::com::tibbo::aggregate::common::expression::Reference* getActivator();
    ::com::tibbo::aggregate::common::expression::Expression* getCondition();
    void setPattern(int pattern);
    void setPeriod(long period);
    void setActivator(::com::tibbo::aggregate::common::expression::Reference* activator);
    void setCondition(::com::tibbo::aggregate::common::expression::Expression* condition);
    bool isProcessOnStartup();
    bool isProcessOnEvent();
    bool isProcessPeriodically();
    void setProcessOnStartup(bool processOnStartup);
    void setProcessOnEvent(bool processOnEvent);
    void setProcessPeriodically(bool processPeriodically);
    EvaluationOptions* clone();
    std::string* toString();

    // Generated
    EvaluationOptions();
    EvaluationOptions(bool startup, bool event);
    EvaluationOptions(bool startup, bool event, long period);
    EvaluationOptions(int pattern);
    EvaluationOptions(bool startup, std::string* activator, std::string* condition);
    EvaluationOptions(bool startup, std::string* activator);
protected:
    EvaluationOptions(const ::default_init_tag&);


public:
    

private:
    void init();
    ::java::lang::Class* getClass0();
};
