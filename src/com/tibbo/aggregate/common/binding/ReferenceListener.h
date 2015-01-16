#pragma once

#include "binding/ChangeCache.h"
#include "binding/BindingProcessor.h"
#include "expression/Reference.h"
#include "util/Interface.h"
#include <map>
#include <boost/shared_ptr.hpp>

// TODO: ReferenceListener<T> ?
class ReferenceListener : public Interface
{
public:
    //TODO: void*
    virtual void referenceChanged(boost::shared_ptr<Reference> cause, const std::map<std::string, void*>& environment,
                                  boost::shared_ptr<ChangeCache> cache) = 0 /* throws(BindingException) */;
    //TODO: void*
    virtual void referenceChanged(boost::shared_ptr<Reference> cause, const std::map<std::string, void*>& environment,
                                  boost::shared_ptr<ChangeCache> cache, bool asynchronousProcessing) = 0/* throws(BindingException) */;
    virtual boost::shared_ptr<BindingProcessor> getBindingProcessor() = 0;
    virtual boost::shared_ptr<Binding> getBinding() = 0;
    virtual boost::shared_ptr<EvaluationOptions> getEvaluationOptions() = 0;
    virtual void setContent(void*/*T*/ content) = 0; //TODO: T content
    virtual void*/*T*/ getContent() = 0; // T
};
