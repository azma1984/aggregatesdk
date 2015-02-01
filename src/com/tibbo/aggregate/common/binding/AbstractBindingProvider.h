#pragma once
#include "binding/BindingProvider.h"
#include "util/Pointers.h"

class AbstractBindingProvider : public BindingProvider
{
private:
    ErrorCollectorPtr errorCollector;

public:
    virtual void processExecution(int event, BindingPtr binding, EvaluationOptionsPtr options,
                                  ReferencePtr cause, AgObjectPtr result);
    virtual void processError(BindingPtr binding, int method, ReferencePtr cause, ExceptionPtr error);

	AbstractBindingProvider();
    AbstractBindingProvider(ErrorCollectorPtr errorCollector);
};
