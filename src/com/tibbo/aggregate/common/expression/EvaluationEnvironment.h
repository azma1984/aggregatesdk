#pragma once

#include "expression/Reference.h"
#include <string>
#include <map>
#include <boost/shared_ptr.hpp>

class EvaluationEnvironment
{
private:
    boost::shared_ptr<Reference> cause;
    //TODO: void*
	std::map< std::string, boost::shared_ptr<void*> > environment;

public:
    boost::shared_ptr<Reference> getCause();
    void setCause(boost::shared_ptr<Reference> cause);
	std::map< std::string, boost::shared_ptr<void*> > getEnvironment();
	void setEnvironment(std::map< std::string, boost::shared_ptr<void*> > environment);

    // Generated
    EvaluationEnvironment();
    EvaluationEnvironment(boost::shared_ptr<Reference> cause);
	EvaluationEnvironment(std::map< std::string, boost::shared_ptr<void*> > environment);
    EvaluationEnvironment(boost::shared_ptr< Reference> cause, std::map<std::string, boost::shared_ptr<void*> > environment);
};
