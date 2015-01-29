#ifndef EvaluationOptionsH
#define EvaluationOptionsH

#include "expression/Expression.h"
#include "expression/Reference.h"
#include "util/Cloneable.h"
#include <string>
#include <boost/shared_ptr.hpp>
#include "util/Pointers.h"

class EvaluationOptions : public Cloneable
{

public:
    static const int STARTUP;
    static const int EVENT;
    static const int PERIODIC;

private:
    int pattern;
    long period;
	ReferencePtr activator;
    ExpressionPtr condition;

protected:
    void ctor();
    void ctor(bool startup, bool event, long period);
    void ctor(bool startup, const std::string & activator);

public:
    int getPattern();
    long getPeriod();
	ReferencePtr getActivator();
    ExpressionPtr getCondition();
    void setPattern(int pattern);
    void setPeriod(long period);
	void setActivator(ReferencePtr activator);
    void setCondition(ExpressionPtr condition);
    bool isProcessOnStartup();
    bool isProcessOnEvent();
    bool isProcessPeriodically();
    void setProcessOnStartup(bool processOnStartup);
    void setProcessOnEvent(bool processOnEvent);
    void setProcessPeriodically(bool processPeriodically);
	//EvaluationOptionsPtr clone(); todo
    const std::string toString();

    EvaluationOptions();
    EvaluationOptions(bool startup, bool event);
    EvaluationOptions(bool startup, bool event, long period);
    EvaluationOptions(int pattern);
    EvaluationOptions(bool startup, const std::string & activator, const std::string & condition);
    EvaluationOptions(bool startup, const std::string & activator);
};

#endif
