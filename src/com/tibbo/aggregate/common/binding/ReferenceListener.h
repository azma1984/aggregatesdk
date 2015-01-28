#ifndef ReferenceListenerH
#define ReferenceListenerH

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
    //TODO: AgObjectPtr
    virtual void referenceChanged(boost::ReferencePtr cause, const std::map<std::string, AgObjectPtr>& environment,
								  boost::ChangeCachePtr cache) = 0 ;
    //TODO: AgObjectPtr
    virtual void referenceChanged(boost::ReferencePtr cause, const std::map<std::string, AgObjectPtr>& environment,
								  boost::ChangeCachePtr cache, bool asynchronousProcessing) = 0;
    virtual boost::shared_ptr<BindingProcessor> getBindingProcessor() = 0;
    virtual boost::BindingPtr getBinding() = 0;
    virtual boost::EvaluationOptionsPtr getEvaluationOptions() = 0;
    virtual void setContent(AgObjectPtr/*T*/ content) = 0; //TODO: T content
    virtual AgObjectPtr/*T*/ getContent() = 0; // T
};

#endif
