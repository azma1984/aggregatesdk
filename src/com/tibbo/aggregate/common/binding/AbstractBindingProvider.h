#pragma once

#include "binding/BindingProvider.h"
#include "util/ErrorCollector.h"

class AbstractBindingProvider : public BindingProvider
{
private:
    //static ::org::apache::log4j::Logger* LOGGER_;
    shared_ptr<ErrorCollector> errorCollector;

public:
    virtual void processExecution(int event, shared_ptr<Binding> binding, shared_ptr<EvaluationOptions> options,
                                  shared_ptr<Reference> cause, void* result);
    //TODO: exception
    virtual void processError(shared_ptr<Binding> binding, int method, shared_ptr<Reference> cause, shared_ptr<Exception> error);

    // Generated
    AbstractBindingProvider();
    AbstractBindingProvider(shared_ptr<ErrorCollector> errorCollector);
};
