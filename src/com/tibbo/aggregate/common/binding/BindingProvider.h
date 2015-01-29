#ifndef BindingProviderH
#define BindingProviderH

#include "binding/Binding.h"
#include "binding/EvaluationOptions.h"
//#include "binding/ReferenceListener.h"
#include <map>
#include <boost/shared_ptr.hpp>

class BindingProvider
{
 public:
    virtual std::map<BindingPtr, EvaluationOptionsPtr> createBindings() = 0;
    virtual void start() = 0;
    virtual void stop() = 0;

    virtual void writeReference(int method, ReferencePtr destination, ReferencePtr cause,
								AgObjectPtr value, ChangeCachePtr cache) = 0;
	virtual void addReferenceListener(ReferencePtr ref, ReferenceListenerPtr listener) = 0;
    virtual void removeReferenceListener(ReferenceListenerPtr listener) = 0;

    virtual void processExecution(int event, BindingPtr binding, EvaluationOptionsPtr options,
                                  ReferencePtr cause, AgObjectPtr result) = 0;
    virtual void processError(BindingPtr binding, int method, ReferencePtr cause, ExceptionPtr error) = 0;
};

#endif
