#ifndef H
#define H

#include "binding/BindingProvider.h"
#include "util/ErrorCollector.h"

class AbstractBindingProvider : public BindingProvider
{
private:
    //static ::org::apache::log4j::Logger* LOGGER_;
    ErrorCollectorPtr errorCollector;

public:
    virtual void processExecution(int event, BindingPtr binding, EvaluationOptionsPtr options,
                                  ReferencePtr cause, AgObjectPtr result);
    //TODO: exception
    virtual void processError(BindingPtr binding, int method, ReferencePtr cause, ExceptionPtr error);

	AbstractBindingProvider();
    AbstractBindingProvider(ErrorCollectorPtr errorCollector);
};
