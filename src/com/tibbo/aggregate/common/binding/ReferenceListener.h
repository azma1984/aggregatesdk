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
	virtual void referenceChanged(ReferencePtr cause, const std::map<std::string, AgObjectPtr>& environment,
								  ChangeCachePtr cache) = 0 ;
	//TODO: AgObjectPtr
	virtual void referenceChanged(ReferencePtr cause, const std::map<std::string, AgObjectPtr>& environment,
								  ChangeCachePtr cache, bool asynchronousProcessing) = 0;
	virtual BindingProcessorPtr getBindingProcessor() = 0;
	virtual BindingPtr getBinding() = 0;
	virtual EvaluationOptionsPtr getEvaluationOptions() = 0;
    virtual void setContent(AgObjectPtr/*T*/ content) = 0; //TODO: T content
    virtual AgObjectPtr/*T*/ getContent() = 0; // T
};

#endif
