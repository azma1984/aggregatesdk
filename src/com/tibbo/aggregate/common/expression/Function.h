#pragma once

#include "expression/Evaluator.h"
#include "expression/EvaluationEnvironment.h"
#include "util/Interface.h"
#include <string>
#include <vector>
#include <boost/shared_ptr.hpp>

class Function : public Interface
{
public:
    virtual std::string getCategory() = 0;
    virtual std::string getReturnValue() = 0;
    virtual std::string getParametersFootprint() = 0;
    //TODO: Object
    virtual void*/*Object*/ execute(boost::shared_ptr<Evaluator> evaluator, boost::shared_ptr<EvaluationEnvironment> environment,
                            std::vector<void*> parameters) = 0/* throws(EvaluationException) */;
};
