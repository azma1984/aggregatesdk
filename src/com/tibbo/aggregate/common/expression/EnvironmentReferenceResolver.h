#ifndef EnvironmentReferenceResolverH
#define EnvironmentReferenceResolverH

#include "expression/AbstractReferenceResolver.h"
#include <map>
#include <boost/shared_ptr.hpp>
											  //todo
class EnvironmentReferenceResolver //: public AbstractReferenceResolver
{
private:
	std::map< std::string, boost::shared_ptr<void*> > environment;

public:
    void* resolveReference(boost::shared_ptr<Reference> ref, boost::shared_ptr<EvaluationEnvironment> resolvingEnvironment) /* throws(SyntaxErrorException, ContextException, EvaluationException) */;
    void set(const std::string & variable, boost::shared_ptr<void*> value);
    boost::shared_ptr<void*> get(const std::string& variable);
	void setEnvironment(std::map< std::string, boost::shared_ptr<void*> > environment);
    std::map< std::string, boost::shared_ptr<void*> > getEnvironment();

	EnvironmentReferenceResolver();
};

#endif
