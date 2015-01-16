#pragma once

#include "binding/Binding.h"
#include "binding/EvaluationOptions.h"
#include "binding/ReferenceListener.h"
#include <map>
#include <boost/shared_ptr.hpp>

class BindingProvider
{
    using namespace boost;

public:
    virtual std::map<shared_ptr<Binding>, shared_ptr<EvaluationOptions>> createBindings() = 0;
    virtual void start() = 0;
    virtual void stop() = 0;
    //TODO: void*
    virtual void writeReference(int method, shared_ptr<Reference> destination, shared_ptr<Reference> cause,
                                void* value, shared_ptr<ChangeCache> cache) = 0/* throws(BindingException) */ ;
    virtual void addReferenceListener(shared_ptr<Reference> ref, shared_ptr<ReferenceListener> listener) = 0/* throws(BindingException) */;
    virtual void removeReferenceListener(shared_ptr<ReferenceListener> listener) = 0;
    //TODO:
    virtual void processExecution(int event, shared_ptr<Binding> binding, shared_ptr<EvaluationOptions> options,
                                  shared_ptr<Reference> cause, void* result) = 0;
    virtual void processError(shared_ptr<Binding> binding, int method, shared_ptr<Reference> cause, shared_ptr<Exception> error) = 0;
};
